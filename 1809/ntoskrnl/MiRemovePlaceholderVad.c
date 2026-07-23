/*
 * XREFs of MiRemovePlaceholderVad @ 0x1402C50AC
 * Callers:
 *     MiCoalescePlaceholderAllocations @ 0x140852C58 (MiCoalescePlaceholderAllocations.c)
 *     MiPreparePlaceholderVadReplacement @ 0x14085DA90 (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiRemoveVad @ 0x1402C5310 (MiRemoveVad.c)
 */

__int64 __fastcall MiRemovePlaceholderVad(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rsi
  ULONG_PTR v4; // r15
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  unsigned __int8 v7; // di
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *v10; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v12; // si
  unsigned int v13; // r8d
  int v14; // eax
  __int64 v15; // rcx
  _KLOCK_ENTRY *v16; // rdi
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v22; // [rsp+68h] [rbp+10h] BYREF
  int v23; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v4 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = v6;
  MiRemoveVad(a1, Process);
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v7, v8, v9);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Affinity.Bitmap[8]);
  v22 = 0;
  v10 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&Process[1].Affinity.Bitmap[8]) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v10->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v10->SpecialApcDisable;
  v12 = ++v10->AbAllocationRegionCount;
  v13 = ((char)v10->AbEntrySummary | (char)v10->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v17 = !_BitScanReverse((unsigned int *)&v18, v13);
    v23 = v18;
    if ( v17 )
      goto LABEL_13;
    v14 = 1 << v18;
    v15 = v18;
    v16 = &v10->LockEntries[v15];
    v13 &= ~v14;
    if ( (v16->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v16->LockState.0 & 1) == 0
      && (*(_QWORD *)&v16->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && v16->LockState.SessionId == (_DWORD)SessionId )
    {
      v16->AcquiredByte &= ~1u;
      if ( v16->LockState.0 )
        break;
    }
  }
  if ( !v16 )
  {
LABEL_13:
    if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v10, v4, (unsigned int)SessionId, 0LL);
    goto LABEL_20;
  }
  v16->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v16->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v10->LockEntries[v15].TreeNode, SessionId);
  v22 = 0;
  v22 = v16->BoostBitmap.AllFields & 0x1FFFF;
  v16->BoostBitmap.AllFields &= 0xFFFE0000;
  v16->ThreadLocalFlags &= ~1u;
  v16->LockState.0 = 0LL;
  v19 = ((char *)v16 - (char *)v10 - 800) / 96;
  if ( v12 == 1 )
    v10->AbEntrySummary |= 1 << v19;
  else
    _InterlockedOr8((volatile signed __int8 *)&v10->AbOrphanedEntrySummary, 1 << v19);
LABEL_20:
  --v10->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v10, v4, (__int64)&v22);
  v17 = v10->SpecialApcDisable++ == -1;
  if ( v17 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery(v20);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
