/*
 * XREFs of MiUnlockCodePage @ 0x1400B9BA0
 * Callers:
 *     MiUnlockImageSection @ 0x1400BBFFC (MiUnlockImageSection.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiHandleDriverNonPagedSections @ 0x140710564 (MiHandleDriverNonPagedSections.c)
 *     MmUnlockPreChargedPagedPool @ 0x14072BA30 (MmUnlockPreChargedPagedPool.c)
 *     MiUnlockDriverCode @ 0x140747138 (MiUnlockDriverCode.c)
 *     MiUnlockDriverPages @ 0x1408876B0 (MiUnlockDriverPages.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400265C0 (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiIsPfnCommitNotCharged @ 0x140054D80 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnFileOnly @ 0x1400B9E30 (MiIsPfnFileOnly.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockCodePage(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 i; // rsi
  __int64 v4; // rcx
  ULONG_PTR v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  ULONG_PTR v9; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 v11; // rdx
  bool v12; // zf
  __int16 v13; // dx
  __int64 v14; // r11
  __int64 v15; // rax
  int v16; // ebp
  unsigned __int64 v17; // rcx
  char v18; // al
  unsigned __int64 v19; // r14
  int v20; // r11d
  __int64 v21; // r14
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  int v27; // [rsp+70h] [rbp+8h] BYREF
  __int64 v28; // [rsp+78h] [rbp+10h] BYREF

  if ( a1 <= a2 )
  {
    for ( i = a1; i <= a2; i += 8LL )
    {
      v4 = *(_QWORD *)i;
      if ( i >= 0xFFFFF6FB7DBED000uLL
        && i <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v4 & 1) != 0
        && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v23 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((i >> 3) & 0x1FF));
          v24 = v4 | 0x20;
          if ( (v23 & 0x20) == 0 )
            v24 = *(_QWORD *)i;
          v4 = v24;
          if ( (v23 & 0x42) != 0 )
            v4 = v24 | 0x42;
        }
      }
      v28 = v4;
      v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFLL;
      v9 = v8 + 48 * v5;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v27 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v27);
          while ( *(__int64 *)(v9 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
        v7 = 0xFFFFLL;
      }
      v11 = *(unsigned __int16 *)(v9 + 32);
      if ( !(_WORD)v11 )
        KeBugCheckEx(0x4Eu, 0x9AuLL, v5, *(_BYTE *)(v9 + 34) & 7, 0LL);
      v12 = (_WORD)v7 + (_WORD)v11 == 0;
      LOWORD(v11) = v7 + v11;
      *(_WORD *)(v9 + 32) = v11;
      if ( !v12 || !(unsigned int)MiIsPfnFileOnly(v9, v11, v6, v7) )
      {
        if ( (unsigned int)MiIsPfnFileOnly(v9, v11, v6, v7) )
          goto LABEL_18;
        v15 = v14 & *(_QWORD *)(v9 + 24);
        if ( v13 )
        {
          if ( v13 == 1 )
          {
            if ( !v15 && (*(_BYTE *)(v9 + 34) & 8) == 0 )
              goto LABEL_18;
          }
          else if ( v13 != 2 || !v15 || (*(_BYTE *)(v9 + 34) & 8) == 0 )
          {
            goto LABEL_18;
          }
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
        v17 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
        if ( (v17 > 0xFFFFF6BFFFFFFF78uLL || v17 < 0xFFFFF68000000000uLL)
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
          else if ( v16 == 1 && (v25 & 0x4000000000000000LL) != 0 )
          {
            v20 = 1;
          }
          v21 = *(_QWORD *)(qword_140465E88 + 8 * ((v19 >> 40) & 0x3FF));
          if ( v20 == 1 )
            MiReturnCommit(v21, 1uLL);
          if ( (ULONG_PTR *)v21 == &MiSystemPartition )
            MiReturnResidentAvailable(1LL);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 8128), 1uLL);
        }
        if ( !v16 )
          goto LABEL_18;
      }
      MiPfnReferenceCountIsZero(v9, v5);
LABEL_18:
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(CurrentIrql);
    }
  }
}
