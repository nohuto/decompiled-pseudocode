/*
 * XREFs of KxWaitForLockOwnerShip @ 0x140046420
 * Callers:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     MiRemoveWsleList @ 0x140023730 (MiRemoveWsleList.c)
 *     MiInsertProtectedStandbyPage @ 0x140024110 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiUnlinkNodeLargePage @ 0x14002A3E0 (MiUnlinkNodeLargePage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002BE20 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     IopDecrementDeviceObjectRef @ 0x140036EA0 (IopDecrementDeviceObjectRef.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14003C830 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14003D1A0 (ExpAcquireResourceExclusiveLite.c)
 *     IopCheckDeviceAndDriver @ 0x140043CA0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1400440F0 (IopCheckVpbMounted.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400480E0 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x1400489B0 (MiAgeWorkingSet.c)
 *     MiRemoveWsle @ 0x14004C540 (MiRemoveWsle.c)
 *     MiAgePte @ 0x14004CAB0 (MiAgePte.c)
 *     MiLogPageAccess @ 0x14004DA40 (MiLogPageAccess.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14005B670 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14005B9E0 (ExpWorkerFactoryCheckCreate.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     CcSetDirtyInMask @ 0x14006EF20 (CcSetDirtyInMask.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     IopGetMountFlag @ 0x140088260 (IopGetMountFlag.c)
 *     MiLargePageFreeToZero @ 0x14009FA50 (MiLargePageFreeToZero.c)
 *     CcCanIWrite @ 0x1400B4600 (CcCanIWrite.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400B4B80 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x1400B4D40 (IopDereferenceVpbAndFree.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1400B4EB0 (ExpSetResourceOwnerPointerEx.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B5370 (IopIncrementDeviceObjectRefCount.c)
 *     IoAcquireCancelSpinLock @ 0x1400B74A0 (IoAcquireCancelSpinLock.c)
 *     MiSetVaAgeList @ 0x1400C5760 (MiSetVaAgeList.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiAddWorkingSetEntries @ 0x1400CED80 (MiAddWorkingSetEntries.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1400D7ED0 (ExpAcquireSharedStarveExclusive.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400FA8B0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     ExReleaseResourceForThreadLite @ 0x140100560 (ExReleaseResourceForThreadLite.c)
 *     IopDecrementVpbRefCount @ 0x140102B20 (IopDecrementVpbRefCount.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14016A810 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
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
