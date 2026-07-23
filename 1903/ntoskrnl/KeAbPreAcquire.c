/*
 * XREFs of KeAbPreAcquire @ 0x14003E610
 * Callers:
 *     FsRtlAcquireHeaderMutex @ 0x14003F520 (FsRtlAcquireHeaderMutex.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     MiReferenceControlArea @ 0x14005F3CC (MiReferenceControlArea.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     ExTryToAcquireFastMutex @ 0x14009A0B0 (ExTryToAcquireFastMutex.c)
 *     KeAcquireGuardedMutex @ 0x14009C4C0 (KeAcquireGuardedMutex.c)
 *     ExAcquireCacheAwarePushLockExclusive @ 0x14009C5B0 (ExAcquireCacheAwarePushLockExclusive.c)
 *     ExpAcquireFastMutexContended @ 0x14009C690 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x14009C760 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     MiLockControlAreaSectionExtend @ 0x1400EAD68 (MiLockControlAreaSectionExtend.c)
 *     MiWaitForCollidedFaultComplete @ 0x140100F44 (MiWaitForCollidedFaultComplete.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140109B58 (ExfAcquireReleasePushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140115F50 (ExAcquireAutoExpandPushLockExclusive.c)
 *     KiWaitForAllObjects @ 0x14011AAE0 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyAny @ 0x14011AE90 (KiWaitSatisfyAny.c)
 *     CmpAcquireWriteQueue @ 0x140136218 (CmpAcquireWriteQueue.c)
 *     MiRebuildLargePages @ 0x140169CC0 (MiRebuildLargePages.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14016ABA0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14016AEA0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14016B740 (ExAcquireFastResourceShared.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14016CC00 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140171080 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x1401BFBB0 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 *     KiSatisfyThreadWait @ 0x1402B1ECC (KiSatisfyThreadWait.c)
 *     MiChangingSubsectionProtos @ 0x1402CAA9C (MiChangingSubsectionProtos.c)
 *     MiDeleteExtentPfns @ 0x1402CB7C0 (MiDeleteExtentPfns.c)
 *     MiWaitForExtentDeletions @ 0x1402CD518 (MiWaitForExtentDeletions.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x140339AD0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140339BA0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     WheaConfigureErrorSource @ 0x1405A2F50 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1405AEF80 (WheaUnconfigureErrorSource.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1405B342C (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1405B35EC (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405B36BC (WbReEncryptEncryptionSegment.c)
 *     sub_1405B378C @ 0x1405B378C (sub_1405B378C.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405B390C (WbGetWarbirdEncryptionSegment.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x1405C9EAC (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetHeapExecutedBlock @ 0x1405CA3C8 (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdThread @ 0x1405CA698 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1405CAA80 (WbGetWarbirdProcess.c)
 *     NtLockFile @ 0x1405D4830 (NtLockFile.c)
 *     IopCloseFile @ 0x1405D8630 (IopCloseFile.c)
 *     AlpcpReceiveMessagePort @ 0x1405DFFD0 (AlpcpReceiveMessagePort.c)
 *     NtReadFile @ 0x1405EF450 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F73E0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140602480 (CmpDereferenceKeyControlBlock.c)
 *     PfpPrefetchSharedStart @ 0x140626238 (PfpPrefetchSharedStart.c)
 *     NtWriteFile @ 0x140629160 (NtWriteFile.c)
 *     IopQueryXxxInformation @ 0x14062AFE4 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x14062B1F0 (NtQueryVolumeInformationFile.c)
 *     ExpWnfNotifySubscription @ 0x14063EFD4 (ExpWnfNotifySubscription.c)
 *     ExpWnfCreateProcessContext @ 0x14063F0CC (ExpWnfCreateProcessContext.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14063F334 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteNameInstance @ 0x14063F414 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x14063F7BC (ExpWnfDeleteStateData.c)
 *     ExpWnfCreateNameInstance @ 0x14064036C (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140640828 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140640B14 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfWriteStateData @ 0x140640DCC (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140641174 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1406412F4 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfLookupNameInstance @ 0x1406421B8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406422B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x1406428CC (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140642AC4 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140642EF0 (ExpWnfUpdateSubscription.c)
 *     CmpTryToLockKcbExclusive @ 0x140656A68 (CmpTryToLockKcbExclusive.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14066C654 (IopWaitAndAcquireFileObjectLock.c)
 *     ExpWnfDeleteProcessContext @ 0x140671310 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140671544 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteScopeById @ 0x140671AC8 (ExpWnfDeleteScopeById.c)
 *     WbRemoveWarbirdProcess @ 0x140671CFC (WbRemoveWarbirdProcess.c)
 *     BuildQueryDirectoryIrp @ 0x140679180 (BuildQueryDirectoryIrp.c)
 *     ExUuidCreate @ 0x140696870 (ExUuidCreate.c)
 *     IopGetSetSecurityObject @ 0x14069E430 (IopGetSetSecurityObject.c)
 *     NtWriteFileGather @ 0x1406A3D30 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406A4400 (NtReadFileScatter.c)
 *     WbAllocateUserMemory @ 0x1406AEBF8 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1406AEEDC (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406AF160 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1406AF270 (WbAddHeapExecutedBlockToLRU.c)
 *     NtWaitForKeyedEvent @ 0x1406BA540 (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x1406BA7B0 (NtReleaseKeyedEvent.c)
 *     NtUnlockFile @ 0x1406C1390 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406CC660 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406CF9A0 (NtQueryEaFile.c)
 *     sub_1406D5628 @ 0x1406D5628 (sub_1406D5628.c)
 *     WbFreeMemoryBlockRegion @ 0x1406D5730 (WbFreeMemoryBlockRegion.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406D5BE0 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406D5CF4 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406D5E08 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DB3A0 (NtNotifyChangeDirectoryFileEx.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406E4624 (ExpWnfDispatchKernelSubscription.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406E5F84 (CmpTryToLockHashEntryExclusive.c)
 *     NtAllocateUuids @ 0x1406E60F0 (NtAllocateUuids.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1406E8148 (AlpcpTryLockForCachedReferenceBlob.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1406E8DE4 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406EBF60 (ExpWnfEnumerateScopeInstances.c)
 *     IoSetInformation @ 0x1406ECC40 (IoSetInformation.c)
 *     NtSetVolumeInformationFile @ 0x14072B860 (NtSetVolumeInformationFile.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14072DE90 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     TlgRegisterAggregateProviderEx @ 0x14074EB10 (TlgRegisterAggregateProviderEx.c)
 *     ExRegisterExtension @ 0x140758600 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140758824 (ExRegisterHost.c)
 *     NtSetUuidSeed @ 0x14077E200 (NtSetUuidSeed.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14082EB74 (CmpWaitOnHiveWriteQueue.c)
 *     TryLockShutdownShared @ 0x140832AD4 (TryLockShutdownShared.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x140846C24 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140847740 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140854B90 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140858120 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1408587D0 (NtQueryQuotaInformationFile.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408A0E90 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x1408A0F00 (PfpPrefetchSharedConflictNotifyStart.c)
 *     PdcAcquireRwLockExclusive @ 0x1408D995C (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x140914130 (ExUnregisterExtension.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140919050 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfDeleteScopeInstances @ 0x1409193BC (ExpWnfDeleteScopeInstances.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140919CA0 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140919E20 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x14091A0D4 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x14091AFA4 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x14091B11C (WheapPredictiveFailureAnalysis.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

PRTL_BALANCED_NODE __fastcall KeAbPreAcquire(ULONG_PTR BugCheckParameter2, PRTL_BALANCED_NODE Node, char a3)
{
  PRTL_BALANCED_NODE p_TreeNode; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  char v7; // cl
  int SessionId; // eax
  bool v9; // zf
  int v11; // eax
  unsigned int v12; // ecx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v14; // [rsp+68h] [rbp+20h] BYREF

  p_TreeNode = Node;
  v14 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount == 1 )
  {
    if ( Node )
    {
      LOBYTE(Node[1].Right) |= 2u;
      if ( (__int64)Node[1].Children[1] < 0 )
        KiAbEntryRemoveFromTree(Node);
      v11 = *(_DWORD *)&p_TreeNode[3].0 & 0x1FFFF;
      v12 = *(_DWORD *)&p_TreeNode[3].0 & 0xFFFE0000;
      BYTE1(p_TreeNode[1].Children[0]) &= ~1u;
      v14 = v11;
      *(_DWORD *)&p_TreeNode[3].0 = v12;
      p_TreeNode[1].Children[1] = 0LL;
LABEL_6:
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_140467440[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      {
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)&p_TreeNode[1].0 = SessionId;
      p_TreeNode[1].Children[1] = (_RTL_BALANCED_NODE *)(BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL);
      goto LABEL_10;
    }
    LOBYTE(v6) = CurrentThread->AbEntrySummary;
    if ( !(_BYTE)v6 )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        p_TreeNode = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
LABEL_5:
        if ( !p_TreeNode )
        {
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
          goto LABEL_10;
        }
        goto LABEL_6;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      LOBYTE(v6) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
    }
    v7 = v6;
    _BitScanForward((unsigned int *)&v6, (unsigned __int8)v6);
    CurrentThread->AbEntrySummary = v7 & ~(1 << v6);
    p_TreeNode = &CurrentThread->LockEntries[v6].TreeNode;
    goto LABEL_5;
  }
  if ( (a3 & 1) == 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  p_TreeNode = 0LL;
LABEL_10:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, BugCheckParameter2, &v14);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return p_TreeNode;
}
