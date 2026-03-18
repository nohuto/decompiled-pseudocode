/*
 * XREFs of MiUnlockMdlWritePages @ 0x140024D30
 * Callers:
 *     MiUnlockFlushMdl @ 0x140074CF8 (MiUnlockFlushMdl.c)
 *     MiFlushComplete @ 0x1402C9DA0 (MiFlushComplete.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400265C0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiIsPfnCommitNotCharged @ 0x140054D80 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14005B160 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiRestoreTransitionPte @ 0x1400BB530 (MiRestoreTransitionPte.c)
 *     MiCapturePageFileInfoInline @ 0x140119998 (MiCapturePageFileInfoInline.c)
 *     MiSyncCommitSignals @ 0x140193404 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockMdlWritePages(_QWORD *a1, unsigned __int64 a2, _DWORD *a3, __int64 a4)
{
  _QWORD *v4; // rsi
  __int64 v6; // r11
  unsigned int v7; // ebp
  __int64 v8; // r15
  ULONG_PTR v9; // rbx
  unsigned __int8 CurrentIrql; // r12
  __int64 v11; // r8
  __int64 v12; // rdi
  signed __int64 v13; // rax
  unsigned __int64 CurrentPrcb; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  signed __int32 v17; // eax
  unsigned __int64 v18; // rax
  ULONG_PTR v19; // rdi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  signed __int64 v22; // rtt
  __int64 v23; // r10
  struct _KPRCB *v24; // rcx
  int v25; // [rsp+60h] [rbp+8h] BYREF

  if ( (unsigned __int64)a1 < a2 )
  {
    v4 = a1;
    v6 = 0x2AAAAAAAAAAAAAABLL;
    v7 = *a3 >> 31;
    do
    {
      v8 = 48LL * *v4;
      v9 = v8 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v25 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v25);
          while ( *(__int64 *)(v9 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
        v6 = 0x2AAAAAAAAAAAAAABLL;
      }
      v11 = 1LL;
      v12 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL));
      v13 = *(_QWORD *)(v12 + 7232);
      if ( v13 )
      {
        while ( 1 )
        {
          CurrentPrcb = 1LL;
          v22 = v13;
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 7232), v13 - 1, v13);
          if ( v22 == v13 )
            break;
          if ( !v13 )
            goto LABEL_6;
        }
        v11 = 0LL;
      }
      else
      {
LABEL_6:
        if ( (ULONG_PTR *)v12 == &MiSystemPartition
          && (CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb(),
              _m_prefetchw((const void *)(CurrentPrcb + 24600)),
              a4 = *(unsigned int *)(CurrentPrcb + 24600),
              (unsigned __int64)(a4 + 1) <= 0x100) )
        {
          while ( 1 )
          {
            v15 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24600), a4 + 1, a4);
            if ( v15 == a4 )
              break;
            a4 = v15;
            if ( (unsigned __int64)(v15 + 1) > 0x100 )
              goto LABEL_23;
          }
        }
        else
        {
LABEL_23:
          v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 8424), 0xFFFFFFFFFFFFFFFFuLL);
          v21 = *(_QWORD *)(v12 + 7200);
          if ( v20 >= v21 && v20 - 1 < v21
            || (CurrentPrcb = *(_QWORD *)(v12 + 7192), v20 >= CurrentPrcb) && v20 - 1 < CurrentPrcb )
          {
            MiSyncCommitSignals(v12, 0LL);
            v6 = 0x2AAAAAAAAAAAAAABLL;
          }
        }
      }
      if ( (ULONG_PTR *)v12 == &MiSystemPartition )
      {
        v11 = (__int64)KeGetCurrentPrcb();
        a4 = 1LL;
        CurrentPrcb = *(int *)(v11 + 24604);
        if ( (_DWORD)CurrentPrcb != -1 )
        {
          if ( CurrentPrcb + 1 <= 0x100 )
          {
            do
            {
              v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 24604), CurrentPrcb + 1, CurrentPrcb);
              v16 = (_DWORD)CurrentPrcb == v17;
              CurrentPrcb = v17;
              if ( v16 )
                goto LABEL_13;
            }
            while ( v17 != -1 && (unsigned __int64)(v17 + 1LL) <= 0x100 );
          }
          if ( (int)CurrentPrcb > 192
            && (_DWORD)CurrentPrcb == _InterlockedCompareExchange(
                                        (volatile signed __int32 *)(v11 + 24604),
                                        192,
                                        CurrentPrcb) )
          {
            a4 = (int)CurrentPrcb - 192 + 1LL;
          }
        }
        a4 = _InterlockedExchangeAdd64(&qword_14046A180, a4);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 8128), 1uLL);
      }
LABEL_13:
      if ( v7 )
      {
        if ( (*(_DWORD *)(v9 + 16) & 0x400LL) == 0 )
        {
          MiCapturePageFileInfoInline(v9 + 16, 1LL);
          v6 = 0x2AAAAAAAAAAAAAABLL;
        }
        *(_BYTE *)(v9 + 34) |= 0x10u;
      }
      *(_BYTE *)(v9 + 34) &= ~8u;
      v16 = (*(_WORD *)(v9 + 32))-- == 1;
      if ( v16 )
      {
        if ( (*(_DWORD *)(v9 + 16) & 0x400LL) == 0
          && (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0
          && !(unsigned int)MiIsPfnCommitNotCharged(v9, CurrentPrcb, v11, a4) )
        {
          MiReturnCommit(*(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL)), v23);
          v6 = 0x2AAAAAAAAAAAAAABLL;
        }
        if ( v7 >= 8 )
          *(_BYTE *)(v9 + 35) &= 0xF8u;
        v18 = (unsigned __int64)((unsigned __int128)(v8 * (__int128)v6) >> 64) >> 63;
        v19 = v18 + ((__int64)((unsigned __int128)(v8 * (__int128)v6) >> 64) >> 3);
        if ( v7 >= 4 )
        {
          MiRestoreTransitionPte(v9);
          MiInsertPageInFreeOrZeroedList(v19);
        }
        else
        {
          MiPfnReferenceCountIsZero(v9, v18 + ((__int64)((unsigned __int128)(v8 * (__int128)v6) >> 64) >> 3));
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v24 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v24);
      }
      __writecr8(CurrentIrql);
      ++v4;
      v6 = 0x2AAAAAAAAAAAAAABLL;
    }
    while ( (unsigned __int64)v4 < a2 );
  }
}
