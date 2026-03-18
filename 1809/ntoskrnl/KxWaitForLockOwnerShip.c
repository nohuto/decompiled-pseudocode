/*
 * XREFs of KxWaitForLockOwnerShip @ 0x14007DF20
 * Callers:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     MiInsertProtectedStandbyPage @ 0x140028F30 (MiInsertProtectedStandbyPage.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140039AD0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiAddWorkingSetEntries @ 0x140048CE0 (MiAddWorkingSetEntries.c)
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     MiUnlinkNodeLargePage @ 0x140064290 (MiUnlinkNodeLargePage.c)
 *     MiLockPageTableInternal @ 0x14006CA20 (MiLockPageTableInternal.c)
 *     MiProcessWorkingSets @ 0x14006CED0 (MiProcessWorkingSets.c)
 *     CcUninitializeCacheMap @ 0x14007C530 (CcUninitializeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14007EE60 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiLargePageFreeToZero @ 0x14009B4E0 (MiLargePageFreeToZero.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BAC0 (MiInsertLargePageInNodeListHelper.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC990 (KxAcquireQueuedSpinLock.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B8820 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x1400B8970 (IopDecrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1400B8C00 (IopDecrementDeviceObjectRef.c)
 *     IopCheckVpbMounted @ 0x1400B9010 (IopCheckVpbMounted.c)
 *     IopCheckDeviceAndDriver @ 0x1400B98F0 (IopCheckDeviceAndDriver.c)
 *     IopfCompleteRequest @ 0x1400C10D0 (IopfCompleteRequest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400CDD90 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400CE200 (ExpWorkerFactoryCheckCreate.c)
 *     IopGetMountFlag @ 0x1400DD870 (IopGetMountFlag.c)
 *     MiEmptyDecayClusterTimers @ 0x1400F07D0 (MiEmptyDecayClusterTimers.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140104290 (ExpInsertPoolTrackerExpansion.c)
 *     CcCanIWrite @ 0x140104D00 (CcCanIWrite.c)
 *     NtSetInformationWorkerFactory @ 0x1401060E0 (NtSetInformationWorkerFactory.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140107660 (ExpRemovePoolTrackerExpansion.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14010A680 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14010A840 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x14010C290 (IopDereferenceVpbAndFree.c)
 *     IoAcquireCancelSpinLock @ 0x140111D50 (IoAcquireCancelSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290900 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402712D0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298230 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KxWaitForLockOwnerShip(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v4; // ebx

  *(_QWORD *)(a1 + 8) |= 1uLL;
  v4 = 0;
  *a2 = a1;
  do
  {
    if ( (++v4 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
    {
      HvlNotifyLongSpinWait(v4);
    }
    else
    {
      _mm_pause();
    }
  }
  while ( (*(_QWORD *)(a1 + 8) & 1) != 0 );
  return v4;
}
