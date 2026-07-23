/*
 * XREFs of KeAbPreAcquire @ 0x14004E270
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     ExTryToAcquireFastMutex @ 0x140004150 (ExTryToAcquireFastMutex.c)
 *     KeAcquireGuardedMutex @ 0x140005320 (KeAcquireGuardedMutex.c)
 *     ExAcquireCacheAwarePushLockExclusive @ 0x1400053A0 (ExAcquireCacheAwarePushLockExclusive.c)
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     InsertEventEntryInLookUpTable @ 0x140012AF4 (InsertEventEntryInLookUpTable.c)
 *     MiReferenceControlArea @ 0x14001C358 (MiReferenceControlArea.c)
 *     NtCancelTimer @ 0x14001CF40 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     MiLockAddressSpaceToo @ 0x140025794 (MiLockAddressSpaceToo.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140036320 (MiInsertLargePageInFreeOrZeroList.c)
 *     FsRtlAcquireHeaderMutex @ 0x14004E0B0 (FsRtlAcquireHeaderMutex.c)
 *     MiLockControlAreaSectionExtend @ 0x140092C20 (MiLockControlAreaSectionExtend.c)
 *     PfLockSharedTryAcquire @ 0x1400E2138 (PfLockSharedTryAcquire.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140119050 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExpDeleteTimer @ 0x140127A20 (ExpDeleteTimer.c)
 *     FlushLookUpTableBucket @ 0x140127C48 (FlushLookUpTableBucket.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14012F3D0 (ExfAcquireReleasePushLockExclusive.c)
 *     MiDeprioritizeVad @ 0x140136EBC (MiDeprioritizeVad.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14014EA54 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExAcquireFastResourceExclusive @ 0x1401653D0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140165A30 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140165C60 (ExAcquireFastResourceShared.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140166880 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpSaAllocatorFree @ 0x1401672E8 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x1401673B4 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaAllocatorAllocate @ 0x140167908 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140167C28 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167EA0 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140169E10 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x140285B04 (IopProcessIoTracking.c)
 *     MiChangingSubsectionProtos @ 0x1402B5620 (MiChangingSubsectionProtos.c)
 *     MiRebuildLargePages @ 0x1402CE840 (MiRebuildLargePages.c)
 *     MiProcessTransitionHeatBatch @ 0x1402CF164 (MiProcessTransitionHeatBatch.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x14031AEA0 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x14031AFF0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14031B0C0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExGetWakeTimerList @ 0x14031C820 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14031D550 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x14031DB30 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14031DC70 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x14031E3E0 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14031F7AC (ExpSaPageGroupDescriptorFree.c)
 *     WheaConfigureErrorSource @ 0x140574910 (WheaConfigureErrorSource.c)
 *     WbAddWarbirdEncryptionSegment @ 0x140584C40 (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x140584E04 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x140584EC8 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x140584F8C (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14058510C (WbGetWarbirdEncryptionSegment.c)
 *     CmpTryToLockKcbExclusive @ 0x1405D9B30 (CmpTryToLockKcbExclusive.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E6320 (CmpPerformCompleteKcbCacheLookup.c)
 *     ExUuidCreate @ 0x1406072C0 (ExUuidCreate.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140607C70 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteProcessContext @ 0x140608AA4 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140608CA4 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteScopeById @ 0x140609860 (ExpWnfDeleteScopeById.c)
 *     WbRemoveWarbirdProcess @ 0x140609988 (WbRemoveWarbirdProcess.c)
 *     ExpWnfCreateNameInstance @ 0x14060F058 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14060F5F4 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14060F8D0 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfLookupNameInstance @ 0x1406108E0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x140610FDC (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x14061134C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140611794 (ExpWnfUpdateSubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406119F8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140611B7C (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfWriteStateData @ 0x140611CD0 (ExpWnfWriteStateData.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x1406256D0 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetHeapExecutedBlock @ 0x14062592C (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdThread @ 0x14062604C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1406265A4 (WbGetWarbirdProcess.c)
 *     AlpcpReceiveMessagePort @ 0x1406339A0 (AlpcpReceiveMessagePort.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     PfpPrefetchSharedStart @ 0x14065DF78 (PfpPrefetchSharedStart.c)
 *     WbAllocateUserMemory @ 0x140691D38 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x140691FFC (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14069272C (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14069283C (WbAddHeapExecutedBlockToLRU.c)
 *     ExpWnfDeleteNameInstance @ 0x1406AC968 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x1406ACCA8 (ExpWnfDeleteStateData.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406ACD38 (ExpWnfEnumerateScopeInstances.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406B1D48 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406B1E5C (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406B1F60 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbFreeUserMemory @ 0x1406B2E3C (WbFreeUserMemory.c)
 *     WbFreeMemoryBlockRegion @ 0x1406B2F28 (WbFreeMemoryBlockRegion.c)
 *     ExpWnfCreateProcessContext @ 0x1406B4388 (ExpWnfCreateProcessContext.c)
 *     ExpWnfNotifySubscription @ 0x1406B8AA8 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406B8C54 (ExpWnfDispatchKernelSubscription.c)
 *     NtWaitForKeyedEvent @ 0x1406C4A50 (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x1406C4D90 (NtReleaseKeyedEvent.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406C5CEC (CmpTryToLockHashEntryExclusive.c)
 *     NtAllocateUuids @ 0x1406C7160 (NtAllocateUuids.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1406C82CC (AlpcpTryLockForCachedReferenceBlob.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1406C95C4 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1406D1F50 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ExRegisterExtension @ 0x140728660 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x14072885C (ExRegisterHost.c)
 *     TlgRegisterAggregateProviderEx @ 0x1407441C4 (TlgRegisterAggregateProviderEx.c)
 *     NtSetUuidSeed @ 0x140759890 (NtSetUuidSeed.c)
 *     TryLockShutdownShared @ 0x1407FA7F0 (TryLockShutdownShared.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x14080E50C (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14080F0C8 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140865870 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x1408658E0 (PfpPrefetchSharedConflictNotifyStart.c)
 *     PdcAcquireRwLockExclusive @ 0x14089C12C (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x1408D8160 (ExUnregisterExtension.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1408DC560 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfDeleteScopeInstances @ 0x1408DC8C0 (ExpWnfDeleteScopeInstances.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x1408DCD90 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x1408DCF10 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x1408DD168 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x1408DE008 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x1408DE204 (WheapPredictiveFailureAnalysis.c)
 *     WheaInitialize @ 0x1409B0D68 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x1409D5C50 (ExpWorkerInitialization.c)
 *     KiForceSymbolReferences @ 0x1409F7470 (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FC24 (EtwTraceAutoBoostEntryExhaustion.c)
 */

PRTL_BALANCED_NODE __fastcall KeAbPreAcquire(ULONG_PTR BugCheckParameter2, PRTL_BALANCED_NODE Node, char a3)
{
  PRTL_BALANCED_NODE p_TreeNode; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  char v7; // cl
  int SessionId; // eax
  __int64 v9; // rcx
  bool v10; // zf
  int v12; // eax
  unsigned int v13; // ecx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v15; // [rsp+68h] [rbp+20h] BYREF

  p_TreeNode = Node;
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount == 1 )
  {
    if ( Node )
    {
      LOBYTE(Node[1].Right) |= 2u;
      if ( (__int64)Node[1].Children[1] < 0 )
        KiAbEntryRemoveFromTree(Node, (__int64)Node);
      v12 = *(_DWORD *)&p_TreeNode[3].0 & 0x1FFFF;
      v13 = *(_DWORD *)&p_TreeNode[3].0 & 0xFFFE0000;
      BYTE1(p_TreeNode[1].Children[0]) &= ~1u;
      v15 = v12;
      *(_DWORD *)&p_TreeNode[3].0 = v13;
      p_TreeNode[1].Children[1] = 0LL;
LABEL_6:
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_14043CA10[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
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
      CurrentThread->AbEntrySummary = v6;
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
  KiAbThreadRemoveBoosts(CurrentThread, BugCheckParameter2, &v15);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v9);
  return p_TreeNode;
}
