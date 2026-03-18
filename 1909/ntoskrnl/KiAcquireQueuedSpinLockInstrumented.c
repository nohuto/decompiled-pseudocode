/*
 * XREFs of KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170
 * Callers:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     MiRemoveWsleList @ 0x140023B20 (MiRemoveWsleList.c)
 *     MiInsertProtectedStandbyPage @ 0x140024500 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInList @ 0x140026690 (MiInsertPageInList.c)
 *     MiUnlinkNodeLargePage @ 0x14002A7D0 (MiUnlinkNodeLargePage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002C210 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     IopDecrementDeviceObjectRef @ 0x140037290 (IopDecrementDeviceObjectRef.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14003C570 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14003CEE0 (ExpAcquireResourceExclusiveLite.c)
 *     IopCheckDeviceAndDriver @ 0x140043D40 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x140044190 (IopCheckVpbMounted.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiTrimOrAgeWorkingSet @ 0x140048180 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x140048A50 (MiAgeWorkingSet.c)
 *     MiRemoveWsle @ 0x14004C5E0 (MiRemoveWsle.c)
 *     MiAgePte @ 0x14004CB50 (MiAgePte.c)
 *     MiLogPageAccess @ 0x14004DAE0 (MiLogPageAccess.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14005B710 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14005BA80 (ExpWorkerFactoryCheckCreate.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     CcSetDirtyInMask @ 0x14006F190 (CcSetDirtyInMask.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     IopGetMountFlag @ 0x140089560 (IopGetMountFlag.c)
 *     MiSetVaAgeList @ 0x1400A55E0 (MiSetVaAgeList.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiAddWorkingSetEntries @ 0x1400AEC00 (MiAddWorkingSetEntries.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1400B7D50 (ExpAcquireSharedStarveExclusive.c)
 *     MiLargePageFreeToZero @ 0x1400C4B30 (MiLargePageFreeToZero.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400F14B0 (IopIncrementDeviceObjectRefCount.c)
 *     CcCanIWrite @ 0x1400F2E80 (CcCanIWrite.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400F3590 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140100A20 (ExpSetResourceOwnerPointerEx.c)
 *     IoAcquireCancelSpinLock @ 0x140103F80 (IoAcquireCancelSpinLock.c)
 *     ExReleaseResourceForThreadLite @ 0x140105AF0 (ExReleaseResourceForThreadLite.c)
 *     IopDecrementVpbRefCount @ 0x1401063C0 (IopDecrementVpbRefCount.c)
 *     IopDereferenceVpbAndFree @ 0x140107E00 (IopDereferenceVpbAndFree.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140108A80 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14016AF00 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x1402A73B0 (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x1403317E0 (PerfLogSpinLockAcquire.c)
 */

void __fastcall KiAcquireQueuedSpinLockInstrumented(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // r9d
  int v5; // esi
  char v6; // di
  unsigned int InterruptCount; // r14d
  unsigned int v8; // ebp
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned int v12; // [rsp+60h] [rbp+18h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v5 = (int)a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v6 = 1;
    InterruptCount = CurrentPrcb->InterruptCount;
    v8 = __rdtsc();
  }
  else
  {
    v8 = v12;
    v6 = 0;
    InterruptCount = v12;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v9 = _InterlockedExchange64(a2, a1);
  if ( v9 )
  {
    v10 = KxWaitForLockOwnerShipWithIrql(a1, v9, a3, 0LL);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v4 = v10;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v10;
  }
  if ( v6 )
  {
    v11 = __rdtsc();
    PerfLogSpinLockAcquire(v5, v11, v11 - v8, v4, InterruptCount, 1);
  }
}
