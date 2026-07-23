/*
 * XREFs of MiUnlockCodePage @ 0x14009C6B0
 * Callers:
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiUnlockImageSection @ 0x140097E58 (MiUnlockImageSection.c)
 *     MiHandleDriverNonPagedSections @ 0x14065694C (MiHandleDriverNonPagedSections.c)
 *     MmUnlockPreChargedPagedPool @ 0x1406E1460 (MmUnlockPreChargedPagedPool.c)
 *     MiUnlockDriverCode @ 0x14070EE00 (MiUnlockDriverCode.c)
 *     MiUnlockHotPatchPages @ 0x1408595FC (MiUnlockHotPatchPages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiIsPfnCommitNotCharged @ 0x140030DB0 (MiIsPfnCommitNotCharged.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockCodePage(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // r8
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int16 v11; // dx
  __int16 v12; // dx
  __int64 v13; // r9
  unsigned __int64 v14; // r11
  __int64 v15; // rax
  int v16; // ebp
  unsigned __int64 v17; // rcx
  char v18; // al
  unsigned __int64 v19; // r14
  int v20; // r11d
  __int64 v21; // r14
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  int v28; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp+10h] BYREF

  if ( a1 <= a2 )
  {
    v3 = a1;
    v4 = 0xFFFFLL;
    v5 = 0xFFFFFA8000000000uLL;
    do
    {
      v6 = *(_QWORD *)v3;
      v7 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v3 >= 0xFFFFF6FB7DBED000uLL
        && v3 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v6 & 1) != 0
        && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
      {
        v22 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 8 * ((v3 >> 3) & 0x1FF));
          v24 = v6 | 0x20;
          if ( (v23 & 0x20) == 0 )
            v24 = *(_QWORD *)v3;
          v6 = v24;
          if ( (v23 & 0x42) != 0 )
            v6 = v24 | 0x42;
        }
        v7 = 0xFFFFF6FB7DBED7F8uLL;
      }
      v29 = v6;
      if ( (unsigned __int64)&v29 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v29 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v6 & 1) != 0
        && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
      {
        v7 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v7 )
        {
          v25 = *(_QWORD *)(v7 + 8 * (((unsigned __int64)&v29 >> 3) & 0x1FF));
          v7 = v6 | 0x20;
          if ( (v25 & 0x20) == 0 )
            v7 = v6;
          v6 = v7;
          if ( (v25 & 0x42) != 0 )
            v6 = v7 | 0x42;
        }
      }
      v8 = (v6 >> 12) & 0xFFFFFFFFFLL;
      v9 = v5 + 48 * v8;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v28 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v28, v7, v4);
          while ( *(__int64 *)(v9 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
        LOWORD(v4) = -1;
      }
      v11 = *(_WORD *)(v9 + 32);
      if ( !v11 )
        KeBugCheckEx(0x4Eu, 0x9AuLL, v8, *(_BYTE *)(v9 + 34) & 7, 0LL);
      *(_WORD *)(v9 + 32) = v4 + v11;
      if ( !((_WORD)v4 + v11) && (unsigned int)MiIsPfnFileOnly(v9) )
        goto LABEL_66;
      if ( (unsigned int)MiIsPfnFileOnly(v9) )
        goto LABEL_21;
      v15 = v13 & *(_QWORD *)(v9 + 24);
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          if ( !v15 && (*(_BYTE *)(v9 + 34) & 8) == 0 )
            goto LABEL_20;
        }
        else if ( v12 != 2 || !v15 || (*(_BYTE *)(v9 + 34) & 8) == 0 )
        {
          goto LABEL_20;
        }
        v16 = 0;
      }
      else
      {
        v16 = 1;
      }
      if ( ((v17 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL, v17 > v14 + 0x3FFFFFFF78LL) || v17 < v14)
        && (v18 = *(_BYTE *)(v9 + 35), (v18 & 0x20) != 0) )
      {
        *(_BYTE *)(v9 + 35) = v18 & 0xDF;
      }
      else
      {
        v19 = *(_QWORD *)(v9 + 40);
        if ( (v19 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v9 + 16) & 0x400LL) != 0 )
        {
          v20 = 1;
        }
        else if ( (unsigned int)MiIsPfnCommitNotCharged(v9) )
        {
          v20 = 1;
        }
        else if ( v16 == 1 && (v26 & 0x4000000000000000LL) != 0 )
        {
          v20 = 1;
        }
        v21 = *(_QWORD *)(qword_14043B808 + 8 * ((v19 >> 40) & 0x3FF));
        if ( v20 == 1 )
          MiReturnCommit(v21, 1uLL);
        if ( (ULONG_PTR *)v21 == &MiSystemPartition )
          MiReturnResidentAvailable(1uLL);
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 7360), 1uLL);
      }
      if ( v16 )
LABEL_66:
        MiPfnReferenceCountIsZero(v9, v8);
      v4 = 0xFFFFLL;
LABEL_20:
      v5 = 0xFFFFFA8000000000uLL;
LABEL_21:
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v4 = 0xFFFFLL;
        v5 = 0xFFFFFA8000000000uLL;
      }
      __writecr8(CurrentIrql);
      v3 += 8LL;
    }
    while ( v3 <= a2 );
  }
}
