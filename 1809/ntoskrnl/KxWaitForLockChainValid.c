/*
 * XREFs of KxWaitForLockChainValid @ 0x140022C50
 * Callers:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     IoReleaseCancelSpinLock @ 0x140017DC0 (IoReleaseCancelSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140021AC0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
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
 *     MiLockLowestValidPageTable @ 0x14006C5A0 (MiLockLowestValidPageTable.c)
 *     MiProcessWorkingSets @ 0x14006CED0 (MiProcessWorkingSets.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE80 (MiWalkPageTablesRecursively.c)
 *     MiLargePageFreeToZero @ 0x14009B4E0 (MiLargePageFreeToZero.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BAC0 (MiInsertLargePageInNodeListHelper.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B8820 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1400B8C00 (IopDecrementDeviceObjectRef.c)
 *     IopCheckVpbMounted @ 0x1400B9010 (IopCheckVpbMounted.c)
 *     IopCheckDeviceAndDriver @ 0x1400B98F0 (IopCheckDeviceAndDriver.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     IopfCompleteRequest @ 0x1400C10D0 (IopfCompleteRequest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400CDD90 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400CE200 (ExpWorkerFactoryCheckCreate.c)
 *     IopGetMountFlag @ 0x1400DD870 (IopGetMountFlag.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140104290 (ExpInsertPoolTrackerExpansion.c)
 *     MiUnlockPageTableInternal @ 0x140104A70 (MiUnlockPageTableInternal.c)
 *     CcCanIWrite @ 0x140104D00 (CcCanIWrite.c)
 *     NtSetInformationWorkerFactory @ 0x1401060E0 (NtSetInformationWorkerFactory.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140107660 (ExpRemovePoolTrackerExpansion.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14010A680 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14010A840 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x14010C290 (IopDereferenceVpbAndFree.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402909B8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402712D0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298230 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KxWaitForLockChainValid(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  do
  {
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v2);
    }
    else
    {
      _mm_pause();
    }
    result = *a1;
  }
  while ( !*a1 );
  return result;
}
