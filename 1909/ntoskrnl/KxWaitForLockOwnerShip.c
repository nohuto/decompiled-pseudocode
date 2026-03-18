/*
 * XREFs of KxWaitForLockOwnerShip @ 0x1400464C0
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
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KxWaitForLockOwnerShip(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 8) |= 1uLL;
  *a2 = a1;
  v4 = 0;
  do
    KeYieldProcessorEx(&v4);
  while ( (*(_QWORD *)(a1 + 8) & 1) != 0 );
  return v4;
}
