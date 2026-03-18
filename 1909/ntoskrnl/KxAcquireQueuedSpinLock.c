/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x14000D050
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D930 (CcInitializeCacheMapEx.c)
 *     IoGetAttachedDeviceReference @ 0x14000E480 (IoGetAttachedDeviceReference.c)
 *     CcUninitializeCacheMap @ 0x14000E560 (CcUninitializeCacheMap.c)
 *     MiEmptyDecayClusterTimers @ 0x14000E9B0 (MiEmptyDecayClusterTimers.c)
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     KeStartThread @ 0x14001C080 (KeStartThread.c)
 *     MiRemoveWsleList @ 0x140023B20 (MiRemoveWsleList.c)
 *     MiInsertProtectedStandbyPage @ 0x140024500 (MiInsertProtectedStandbyPage.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140026300 (MiInsertAndUnlockStandbyPages.c)
 *     MiInsertPageInList @ 0x140026690 (MiInsertPageInList.c)
 *     MiDeleteBatch @ 0x1400290C0 (MiDeleteBatch.c)
 *     MiUnlinkNodeLargePage @ 0x14002A7D0 (MiUnlinkNodeLargePage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x14002F640 (MiIncreaseAvailablePages.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
 *     MiRemoveWsle @ 0x14004C5E0 (MiRemoveWsle.c)
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140060C30 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     CcMapAndCopyInToCache @ 0x14006DAE0 (CcMapAndCopyInToCache.c)
 *     MiObtainSystemCacheView @ 0x140076770 (MiObtainSystemCacheView.c)
 *     CcFlushCachePriv @ 0x1400773D0 (CcFlushCachePriv.c)
 *     CcUnpinFileDataEx @ 0x140079100 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x140079B20 (CcSetDirtyPinnedData.c)
 *     MiWaitForFreePagesToZero @ 0x14007C490 (MiWaitForFreePagesToZero.c)
 *     KeTerminateThread @ 0x1400810BC (KeTerminateThread.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MiDeleteProcessShadow @ 0x14008EB30 (MiDeleteProcessShadow.c)
 *     MiAllocateWsle @ 0x1400AE730 (MiAllocateWsle.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MiRestoreTransitionPte @ 0x1400BB530 (MiRestoreTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiGetPerfectColorHeadPage @ 0x1400C21CC (MiGetPerfectColorHeadPage.c)
 *     MiReplaceTransitionPage @ 0x1400C2CE8 (MiReplaceTransitionPage.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400D9D04 (MmQuerySystemWorkingSetInformation.c)
 *     MiSignalLargePageRebuild @ 0x1400DA540 (MiSignalLargePageRebuild.c)
 *     MiDeletePagablePteRange @ 0x1400E8030 (MiDeletePagablePteRange.c)
 *     MmEnforceWorkingSetLimit @ 0x1400EAB6C (MmEnforceWorkingSetLimit.c)
 *     IoBoostThreadIoPriority @ 0x1400EB18C (IoBoostThreadIoPriority.c)
 *     MiTryUnlinkNodeLargePage @ 0x1400F7688 (MiTryUnlinkNodeLargePage.c)
 *     MiCoalesceFreeLargePages @ 0x1400F7B70 (MiCoalesceFreeLargePages.c)
 *     CcIsThereDirtyLoggedPages @ 0x14011F820 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x14012387C (CcWaitForUninitializeCacheMap.c)
 *     CcSetLogHandleForFileEx @ 0x140125EA0 (CcSetLogHandleForFileEx.c)
 *     MiPreUnlockWorkingSetShared @ 0x14012A498 (MiPreUnlockWorkingSetShared.c)
 *     MiVolunteerForTrimFirst @ 0x14012DCC8 (MiVolunteerForTrimFirst.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012DF0C (MmAdjustWorkingSetSizeEx.c)
 *     CcUpdateTimeOnLogHandles @ 0x14012E330 (CcUpdateTimeOnLogHandles.c)
 *     MiDrainSystemAccessLog @ 0x14012FE58 (MiDrainSystemAccessLog.c)
 *     MiUpdatePageAttributeStamp @ 0x14013305C (MiUpdatePageAttributeStamp.c)
 *     WmipNotificationIrpCancel @ 0x14013C690 (WmipNotificationIrpCancel.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14014280C (MiUpdateWorkingSetPrivateSize.c)
 *     MiPurgeLargeZeroNodePages @ 0x140160D28 (MiPurgeLargeZeroNodePages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161160 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiLockMemoryLists @ 0x140165AF0 (MiLockMemoryLists.c)
 *     MiRebuildLargePages @ 0x140169760 (MiRebuildLargePages.c)
 *     MiMirrorNodeLargePages @ 0x14016A1A8 (MiMirrorNodeLargePages.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14016B290 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14016B590 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x14016B8B0 (ExDisownFastResource.c)
 *     ExAcquireFastResourceShared @ 0x14016BE30 (ExAcquireFastResourceShared.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14016C2C4 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14016C4AC (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14016C8D0 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x14016CCDC (ExpReleaseFastResourceExclusive.c)
 *     CcNotifyExternalCaches @ 0x14016F70C (CcNotifyExternalCaches.c)
 *     CcSetLoggedDataThreshold @ 0x140177540 (CcSetLoggedDataThreshold.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14017EBB0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     CcIncrementWriteBehindPriority @ 0x14027CA5C (CcIncrementWriteBehindPriority.c)
 *     CcIsThereDirtyDataEx @ 0x14027D820 (CcIsThereDirtyDataEx.c)
 *     CcReferenceSharedCacheMapByVacb @ 0x14027E030 (CcReferenceSharedCacheMapByVacb.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1402A6F00 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x1402A6F70 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x1402A73F0 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     MiSetHugeRangePartitionId @ 0x1402C2708 (MiSetHugeRangePartitionId.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402CC5E4 (MiPurgeBadFileOnlyPages.c)
 *     MiQueueExtentPfnDeletion @ 0x1402CCB70 (MiQueueExtentPfnDeletion.c)
 *     MiFreeModifiedReservations @ 0x1402CE220 (MiFreeModifiedReservations.c)
 *     MiGetEnclavePage @ 0x1402D443C (MiGetEnclavePage.c)
 *     MiFreeListPageContentsChanged @ 0x1402D8FB0 (MiFreeListPageContentsChanged.c)
 *     MiUnlinkPageFromBadList @ 0x1402D9488 (MiUnlinkPageFromBadList.c)
 *     MiNoPagesLastChance @ 0x1402D9BCC (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA6D0 (MiSwapNumaStandbyPage.c)
 *     MiGetSlabStandbyPage @ 0x1402DC440 (MiGetSlabStandbyPage.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x140339D40 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14033A0A8 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxAcquireQueuedSpinLock(__int64 a1, volatile __int64 *a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 result; // rax
  int v7; // eax
  bool v8; // zf

  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v7 = SchedulerAssist[5];
      v8 = v7 == -1;
      result = (unsigned int)(v7 + 1);
      SchedulerAssist[5] = result;
      if ( v8 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb, SchedulerAssist);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiAcquireQueuedSpinLockInstrumented(a1, a2);
  if ( _InterlockedExchange64(a2, a1) )
    return KxWaitForLockOwnerShip(a1);
  return result;
}
