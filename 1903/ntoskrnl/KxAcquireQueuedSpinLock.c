/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x14000CE20
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D700 (CcInitializeCacheMapEx.c)
 *     IoGetAttachedDeviceReference @ 0x14000E250 (IoGetAttachedDeviceReference.c)
 *     CcUninitializeCacheMap @ 0x14000E330 (CcUninitializeCacheMap.c)
 *     MiEmptyDecayClusterTimers @ 0x14000E780 (MiEmptyDecayClusterTimers.c)
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     KeStartThread @ 0x14001BC90 (KeStartThread.c)
 *     MiRemoveWsleList @ 0x140023730 (MiRemoveWsleList.c)
 *     MiInsertProtectedStandbyPage @ 0x140024110 (MiInsertProtectedStandbyPage.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140025F10 (MiInsertAndUnlockStandbyPages.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiDeleteBatch @ 0x140028CD0 (MiDeleteBatch.c)
 *     MiUnlinkNodeLargePage @ 0x14002A3E0 (MiUnlinkNodeLargePage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x14002F250 (MiIncreaseAvailablePages.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F5C0 (ExIsResourceAcquiredSharedLite.c)
 *     MiRemoveWsle @ 0x14004C540 (MiRemoveWsle.c)
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140060B90 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 *     MiObtainSystemCacheView @ 0x140076500 (MiObtainSystemCacheView.c)
 *     CcFlushCachePriv @ 0x140077160 (CcFlushCachePriv.c)
 *     CcUnpinFileDataEx @ 0x140078D40 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x140079760 (CcSetDirtyPinnedData.c)
 *     MiWaitForFreePagesToZero @ 0x14007C090 (MiWaitForFreePagesToZero.c)
 *     KeTerminateThread @ 0x140080CBC (KeTerminateThread.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiCoalesceFreeLargePages @ 0x14009BB30 (MiCoalesceFreeLargePages.c)
 *     MiReplaceTransitionPage @ 0x14009CF60 (MiReplaceTransitionPage.c)
 *     MiDeletePagablePteRange @ 0x1400ACB20 (MiDeletePagablePteRange.c)
 *     MiDeleteProcessShadow @ 0x1400AD220 (MiDeleteProcessShadow.c)
 *     MiAllocateWsle @ 0x1400CE8B0 (MiAllocateWsle.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MiRestoreTransitionPte @ 0x1400DB6B0 (MiRestoreTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400DC230 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiGetPerfectColorHeadPage @ 0x1400E27F8 (MiGetPerfectColorHeadPage.c)
 *     MmEnforceWorkingSetLimit @ 0x1400E5BCC (MmEnforceWorkingSetLimit.c)
 *     IoBoostThreadIoPriority @ 0x1400E61EC (IoBoostThreadIoPriority.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400F17D0 (MmQuerySystemWorkingSetInformation.c)
 *     MiSignalLargePageRebuild @ 0x1400F2000 (MiSignalLargePageRebuild.c)
 *     CcIsThereDirtyLoggedPages @ 0x14011EA70 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x14012276C (CcWaitForUninitializeCacheMap.c)
 *     CcSetLogHandleForFileEx @ 0x140125830 (CcSetLogHandleForFileEx.c)
 *     MiPreUnlockWorkingSetShared @ 0x140129A78 (MiPreUnlockWorkingSetShared.c)
 *     MiVolunteerForTrimFirst @ 0x14012D278 (MiVolunteerForTrimFirst.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012D4BC (MmAdjustWorkingSetSizeEx.c)
 *     CcUpdateTimeOnLogHandles @ 0x14012DA40 (CcUpdateTimeOnLogHandles.c)
 *     MiDrainSystemAccessLog @ 0x14012F468 (MiDrainSystemAccessLog.c)
 *     MiTryUnlinkNodeLargePage @ 0x140131048 (MiTryUnlinkNodeLargePage.c)
 *     MiUpdatePageAttributeStamp @ 0x14013256C (MiUpdatePageAttributeStamp.c)
 *     WmipNotificationIrpCancel @ 0x14013C070 (WmipNotificationIrpCancel.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1401422CC (MiUpdateWorkingSetPrivateSize.c)
 *     MiMirrorNodeLargePages @ 0x1401605D4 (MiMirrorNodeLargePages.c)
 *     MiPurgeLargeZeroNodePages @ 0x1401612D8 (MiPurgeLargeZeroNodePages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161710 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiLockMemoryLists @ 0x1401660A0 (MiLockMemoryLists.c)
 *     MiRebuildLargePages @ 0x140169CC0 (MiRebuildLargePages.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14016ABA0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14016AEA0 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x14016B1C0 (ExDisownFastResource.c)
 *     ExAcquireFastResourceShared @ 0x14016B740 (ExAcquireFastResourceShared.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14016BBD4 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14016BDBC (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14016C1E0 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x14016C5EC (ExpReleaseFastResourceExclusive.c)
 *     CcNotifyExternalCaches @ 0x14016F01C (CcNotifyExternalCaches.c)
 *     CcSetLoggedDataThreshold @ 0x140176E50 (CcSetLoggedDataThreshold.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14017E4C0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     CcIncrementWriteBehindPriority @ 0x14027CCFC (CcIncrementWriteBehindPriority.c)
 *     CcIsThereDirtyDataEx @ 0x14027DAC0 (CcIsThereDirtyDataEx.c)
 *     CcReferenceSharedCacheMapByVacb @ 0x14027E2D0 (CcReferenceSharedCacheMapByVacb.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1402A71A0 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x1402A7210 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x1402A7690 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     MiSetHugeRangePartitionId @ 0x1402C29A8 (MiSetHugeRangePartitionId.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402CC884 (MiPurgeBadFileOnlyPages.c)
 *     MiQueueExtentPfnDeletion @ 0x1402CCE10 (MiQueueExtentPfnDeletion.c)
 *     MiFreeModifiedReservations @ 0x1402CE4C0 (MiFreeModifiedReservations.c)
 *     MiGetEnclavePage @ 0x1402D46DC (MiGetEnclavePage.c)
 *     MiFreeListPageContentsChanged @ 0x1402D9250 (MiFreeListPageContentsChanged.c)
 *     MiUnlinkPageFromBadList @ 0x1402D9728 (MiUnlinkPageFromBadList.c)
 *     MiNoPagesLastChance @ 0x1402D9E6C (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA970 (MiSwapNumaStandbyPage.c)
 *     MiGetSlabStandbyPage @ 0x1402DC6E0 (MiGetSlabStandbyPage.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x14033A2E0 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14033A648 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
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
