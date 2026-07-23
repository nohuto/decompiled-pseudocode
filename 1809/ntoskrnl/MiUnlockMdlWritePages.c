/*
 * XREFs of MiUnlockMdlWritePages @ 0x14001E4F0
 * Callers:
 *     MiUnlockFlushMdl @ 0x14001E3D8 (MiUnlockFlushMdl.c)
 *     MiFlushComplete @ 0x1402B4B40 (MiFlushComplete.c)
 * Callees:
 *     MiWriteCompletePfn @ 0x14001E770 (MiWriteCompletePfn.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiSyncCommitSignals @ 0x14018812C (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockMdlWritePages(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *i; // rsi
  ULONG_PTR v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rdi
  signed __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 CachedCommit; // r9
  __int64 v10; // rcx
  struct _KPRCB *v11; // r8
  unsigned __int64 v12; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v14; // zf
  signed __int32 v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  signed __int64 v20; // rtt
  struct _KPRCB *v21; // rcx
  int v22; // [rsp+60h] [rbp+8h] BYREF

  if ( (unsigned __int64)a1 < a2 )
  {
    for ( i = a1; (unsigned __int64)i < a2; ++i )
    {
      v4 = 48LL * *i - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v22);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      v6 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v4 + 40) >> 40) & 0x3FFLL));
      v7 = *(_QWORD *)(v6 + 6464);
      if ( v7 )
      {
        while ( 1 )
        {
          v20 = v7;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 6464), v7 - 1, v7);
          if ( v20 == v7 )
            break;
          if ( !v7 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        if ( (ULONG_PTR *)v6 == &MiSystemPartition
          && (CurrentPrcb = KeGetCurrentPrcb(),
              _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
              CachedCommit = CurrentPrcb->CachedCommit,
              (unsigned __int64)(CachedCommit + 1) <= 0x100) )
        {
          while ( 1 )
          {
            v10 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                    CachedCommit + 1,
                    CachedCommit);
            if ( v10 == CachedCommit )
              break;
            CachedCommit = v10;
            if ( (unsigned __int64)(v10 + 1) > 0x100 )
              goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 7656), 0xFFFFFFFFFFFFFFFFuLL);
          v18 = *(_QWORD *)(v6 + 6432);
          if ( v17 >= v18 && v17 - 1 < v18 || (v19 = *(_QWORD *)(v6 + 6424), v17 >= v19) && v17 - 1 < v19 )
            MiSyncCommitSignals(v6, 0LL);
        }
      }
      if ( (ULONG_PTR *)v6 == &MiSystemPartition )
      {
        v11 = KeGetCurrentPrcb();
        v12 = 1LL;
        CachedResidentAvailable = (int)v11->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            do
            {
              v15 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v11->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v14 = (_DWORD)CachedResidentAvailable == v15;
              LODWORD(CachedResidentAvailable) = v15;
              if ( v14 )
                goto LABEL_13;
            }
            while ( v15 != -1 && (unsigned __int64)(v15 + 1LL) <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v11->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v12 = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
        _InterlockedExchangeAdd64(&qword_14043F6C0, v12);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 7360), 1uLL);
      }
LABEL_13:
      MiWriteCompletePfn(v4);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v21 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v21, v16);
      }
      __writecr8(CurrentIrql);
    }
  }
}
