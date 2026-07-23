/*
 * XREFs of KeAbPreAcquire @ 0x14003E350
 * Callers:
 *     FsRtlAcquireHeaderMutex @ 0x14003F260 (FsRtlAcquireHeaderMutex.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     MiReferenceControlArea @ 0x14005F46C (MiReferenceControlArea.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     MiLockControlAreaSectionExtend @ 0x140088EC8 (MiLockControlAreaSectionExtend.c)
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     KeAcquireGuardedMutex @ 0x1400EF450 (KeAcquireGuardedMutex.c)
 *     ExAcquireCacheAwarePushLockExclusive @ 0x1400EF540 (ExAcquireCacheAwarePushLockExclusive.c)
 *     ExpAcquireFastMutexContended @ 0x1400EF620 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400EF6F0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140108CE8 (ExfAcquireReleasePushLockExclusive.c)
 *     MiWaitForCollidedFaultComplete @ 0x140109964 (MiWaitForCollidedFaultComplete.c)
 *     ExTryToAcquireFastMutex @ 0x140109C50 (ExTryToAcquireFastMutex.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1401175E0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     KiWaitForAllObjects @ 0x140118F10 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyAny @ 0x1401192C0 (KiWaitSatisfyAny.c)
 *     CmpAcquireWriteQueue @ 0x140136BB8 (CmpAcquireWriteQueue.c)
 *     MiRebuildLargePages @ 0x140169760 (MiRebuildLargePages.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14016B290 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14016B590 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14016BE30 (ExAcquireFastResourceShared.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14016D2F0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140171770 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x1401C0730 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 *     KiSatisfyThreadWait @ 0x1402B1C2C (KiSatisfyThreadWait.c)
 *     MiChangingSubsectionProtos @ 0x1402CA7FC (MiChangingSubsectionProtos.c)
 *     MiDeleteExtentPfns @ 0x1402CB520 (MiDeleteExtentPfns.c)
 *     MiWaitForExtentDeletions @ 0x1402CD278 (MiWaitForExtentDeletions.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x140339530 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140339600 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     WheaConfigureErrorSource @ 0x1405A2F30 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1405AEF60 (WheaUnconfigureErrorSource.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1405B3808 (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1405B39C8 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405B3A98 (WbReEncryptEncryptionSegment.c)
 *     sub_1405B3B68 @ 0x1405B3B68 (sub_1405B3B68.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405B3CE8 (WbGetWarbirdEncryptionSegment.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x1405CA3AC (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetHeapExecutedBlock @ 0x1405CA8C8 (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdThread @ 0x1405CAB98 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1405CAF80 (WbGetWarbirdProcess.c)
 *     NtLockFile @ 0x1405D4D30 (NtLockFile.c)
 *     IopCloseFile @ 0x1405D8DF0 (IopCloseFile.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1405E0EA0 (AlpcpTryLockForCachedReferenceBlob.c)
 *     NtReadFile @ 0x1405EFC20 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1405F0890 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F8430 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 *     IopGetSetSecurityObject @ 0x140623F40 (IopGetSetSecurityObject.c)
 *     PfpPrefetchSharedStart @ 0x14062A0E8 (PfpPrefetchSharedStart.c)
 *     NtWriteFile @ 0x14062CFB0 (NtWriteFile.c)
 *     IopQueryXxxInformation @ 0x14062EE34 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x14062F040 (NtQueryVolumeInformationFile.c)
 *     ExpWnfDeleteProcessContext @ 0x140652140 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140652374 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteScopeById @ 0x1406528F8 (ExpWnfDeleteScopeById.c)
 *     WbRemoveWarbirdProcess @ 0x140652B2C (WbRemoveWarbirdProcess.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140652E84 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteNameInstance @ 0x140652F64 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x14065330C (ExpWnfDeleteStateData.c)
 *     ExpWnfCreateNameInstance @ 0x140653EBC (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140654378 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140654664 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfWriteStateData @ 0x14065491C (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140654CC4 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140654E44 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfLookupNameInstance @ 0x140655D08 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140655E08 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x14065641C (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140656614 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140656A40 (ExpWnfUpdateSubscription.c)
 *     CmpTryToLockKcbExclusive @ 0x140669A7C (CmpTryToLockKcbExclusive.c)
 *     NtReadFileScatter @ 0x140674200 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140674810 (NtWriteFileGather.c)
 *     BuildQueryDirectoryIrp @ 0x14067EAF0 (BuildQueryDirectoryIrp.c)
 *     ExUuidCreate @ 0x140689DE0 (ExUuidCreate.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 *     WbAllocateUserMemory @ 0x1406B0B28 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1406B0E0C (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406B1090 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1406B11A0 (WbAddHeapExecutedBlockToLRU.c)
 *     NtWaitForKeyedEvent @ 0x1406B5CD0 (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x1406B5F40 (NtReleaseKeyedEvent.c)
 *     NtUnlockFile @ 0x1406C02D0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406CB490 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406CEC10 (NtQueryEaFile.c)
 *     sub_1406D4D08 @ 0x1406D4D08 (sub_1406D4D08.c)
 *     WbFreeMemoryBlockRegion @ 0x1406D4E10 (WbFreeMemoryBlockRegion.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406D5414 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406D5528 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406D563C (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     ExpWnfCreateProcessContext @ 0x1406D5C88 (ExpWnfCreateProcessContext.c)
 *     ExpWnfNotifySubscription @ 0x1406D97B8 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406D9954 (ExpWnfDispatchKernelSubscription.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DC110 (NtNotifyChangeDirectoryFileEx.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406E6E08 (CmpTryToLockHashEntryExclusive.c)
 *     NtAllocateUuids @ 0x1406E6EF0 (NtAllocateUuids.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1406EA024 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406ED220 (ExpWnfEnumerateScopeInstances.c)
 *     IoSetInformation @ 0x1406EDE60 (IoSetInformation.c)
 *     NtSetVolumeInformationFile @ 0x14072D700 (NtSetVolumeInformationFile.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14072FD60 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     TlgRegisterAggregateProviderEx @ 0x14074F5A0 (TlgRegisterAggregateProviderEx.c)
 *     ExRegisterExtension @ 0x14075CE90 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x14075D0B4 (ExRegisterHost.c)
 *     NtSetUuidSeed @ 0x140780C20 (NtSetUuidSeed.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14082E9E4 (CmpWaitOnHiveWriteQueue.c)
 *     TryLockShutdownShared @ 0x140832134 (TryLockShutdownShared.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x140846298 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140846E48 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140854290 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140857820 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140857ED0 (NtQueryQuotaInformationFile.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408A06D0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x1408A0740 (PfpPrefetchSharedConflictNotifyStart.c)
 *     PdcAcquireRwLockExclusive @ 0x1408D925C (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x140913B90 (ExUnregisterExtension.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140918AB0 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfDeleteScopeInstances @ 0x140918E1C (ExpWnfDeleteScopeInstances.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140919700 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140919880 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x140919B34 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x14091AA04 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x14091AB7C (WheapPredictiveFailureAnalysis.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
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
        && byte_140467140[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
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
  if ( v9 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return p_TreeNode;
}
