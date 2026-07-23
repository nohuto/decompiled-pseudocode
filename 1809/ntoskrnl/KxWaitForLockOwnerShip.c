/*
 * XREFs of KxWaitForLockOwnerShip @ 0x14007DF10
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
 *     MiUnlinkNodeLargePage @ 0x140064280 (MiUnlinkNodeLargePage.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiProcessWorkingSets @ 0x14006CEC0 (MiProcessWorkingSets.c)
 *     CcUninitializeCacheMap @ 0x14007C520 (CcUninitializeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14007EE50 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiLargePageFreeToZero @ 0x14009B420 (MiLargePageFreeToZero.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B8780 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x1400B88D0 (IopDecrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1400B8B60 (IopDecrementDeviceObjectRef.c)
 *     IopCheckVpbMounted @ 0x1400B8F70 (IopCheckVpbMounted.c)
 *     IopCheckDeviceAndDriver @ 0x1400B9850 (IopCheckDeviceAndDriver.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400CDE30 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400CE2A0 (ExpWorkerFactoryCheckCreate.c)
 *     IopGetMountFlag @ 0x1400DD910 (IopGetMountFlag.c)
 *     MiEmptyDecayClusterTimers @ 0x1400F0870 (MiEmptyDecayClusterTimers.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140104330 (ExpInsertPoolTrackerExpansion.c)
 *     CcCanIWrite @ 0x140104DA0 (CcCanIWrite.c)
 *     NtSetInformationWorkerFactory @ 0x140106180 (NtSetInformationWorkerFactory.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140107700 (ExpRemovePoolTrackerExpansion.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14010A720 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14010A8E0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x14010C330 (IopDereferenceVpbAndFree.c)
 *     IoAcquireCancelSpinLock @ 0x140111DE0 (IoAcquireCancelSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
