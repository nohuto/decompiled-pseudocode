/*
 * XREFs of ExAcquireSpinLockExclusive @ 0x140060AA0
 * Callers:
 *     PsIoRateControlOverQuotaNotify @ 0x1400019D8 (PsIoRateControlOverQuotaNotify.c)
 *     RtlpHpAcquireLockExclusive @ 0x14001F3C0 (RtlpHpAcquireLockExclusive.c)
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiWalkPageTablesRecursively @ 0x1400494A0 (MiWalkPageTablesRecursively.c)
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MiFreePhysicalView @ 0x140057630 (MiFreePhysicalView.c)
 *     MiRemoveMappedPtes @ 0x14005E850 (MiRemoveMappedPtes.c)
 *     MiReferenceControlArea @ 0x14005F3CC (MiReferenceControlArea.c)
 *     MiReleaseControlAreaCharges @ 0x140070DEC (MiReleaseControlAreaCharges.c)
 *     MiDereferenceControlAreaBySection @ 0x140070F04 (MiDereferenceControlAreaBySection.c)
 *     MiCheckControlArea @ 0x140070F40 (MiCheckControlArea.c)
 *     MiInsertPrivateVad @ 0x1400712D0 (MiInsertPrivateVad.c)
 *     MiFlushRelease @ 0x140071544 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x140071B80 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x140072320 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400725E0 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertVadEvent @ 0x1400727FC (MiInsertVadEvent.c)
 *     MiGetWsAndInsertVad @ 0x1400729C0 (MiGetWsAndInsertVad.c)
 *     MiRemoveSecureEntry @ 0x1400739F0 (MiRemoveSecureEntry.c)
 *     MiUnlockFlushMdl @ 0x140074A88 (MiUnlockFlushMdl.c)
 *     MiSynchronizeSystemVa @ 0x140075950 (MiSynchronizeSystemVa.c)
 *     MiGatherMappedPages @ 0x14007B1D8 (MiGatherMappedPages.c)
 *     MiWaitForFreePagesToZero @ 0x14007C090 (MiWaitForFreePagesToZero.c)
 *     PspJobIoRateQueryHistory @ 0x1400838E8 (PspJobIoRateQueryHistory.c)
 *     SepInitSingletonEntry @ 0x1400856D4 (SepInitSingletonEntry.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140085C40 (SepCleanupMarkedForDeletionEntries.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14008B62C (MmQueryProcessWorkingSetSwapPages.c)
 *     MiOutlawInswaps @ 0x14008B990 (MiOutlawInswaps.c)
 *     MiBeginProcessClean @ 0x14008BA24 (MiBeginProcessClean.c)
 *     PfSnGetFileInformation @ 0x140094D90 (PfSnGetFileInformation.c)
 *     PfSnNameRemove @ 0x140096D4C (PfSnNameRemove.c)
 *     MiRebuildLargeZeroPage @ 0x14009B500 (MiRebuildLargeZeroPage.c)
 *     MiProcessLargeCoalesceList @ 0x14009B9C8 (MiProcessLargeCoalesceList.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009FE80 (MiQueueLargeFreeZeroRebuild.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiReferenceControlAreaPfn @ 0x1400A6610 (MiReferenceControlAreaPfn.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400A72D4 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiInsertInSystemSpace @ 0x1400A82A0 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400A8C3C (MiRemoveFromSystemSpace.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1400A957C (MiCheckAndUpdateIoAttribution.c)
 *     MiDeletePartialVad @ 0x1400ABFA8 (MiDeletePartialVad.c)
 *     MiDeletePagablePteRange @ 0x1400ACB20 (MiDeletePagablePteRange.c)
 *     MiDeleteProcessShadow @ 0x1400AD220 (MiDeleteProcessShadow.c)
 *     MiContractPagingFiles @ 0x1400AD73C (MiContractPagingFiles.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1400ADA4C (IoSetDiskIoAttributionOnProcess.c)
 *     PopFxArmResidentTimer @ 0x1400AFE0C (PopFxArmResidentTimer.c)
 *     PopPepTryPowerDownDevice @ 0x1400B17D0 (PopPepTryPowerDownDevice.c)
 *     PopPepLockActivityLink @ 0x1400B2370 (PopPepLockActivityLink.c)
 *     MiDeleteSubsectionPages @ 0x1400DC990 (MiDeleteSubsectionPages.c)
 *     MmPurgeSection @ 0x1400DCED0 (MmPurgeSection.c)
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiDeleteSegmentPages @ 0x1400DF264 (MiDeleteSegmentPages.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400DF3D4 (MiCanFileBeTruncatedInternal.c)
 *     MiPrepareSegmentForDeletion @ 0x1400DF804 (MiPrepareSegmentForDeletion.c)
 *     MiDrainControlAreaWrites @ 0x1400DF8B0 (MiDrainControlAreaWrites.c)
 *     MiDeleteControlArea @ 0x1400DF8FC (MiDeleteControlArea.c)
 *     MiDecrementModifiedWriteCount @ 0x1400DFAD8 (MiDecrementModifiedWriteCount.c)
 *     MiCreatePrototypePtes @ 0x1400DFCE0 (MiCreatePrototypePtes.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400E0170 (MiUpdateSystemProtoPtesTree.c)
 *     MiUpdateControlAreaCommitCount @ 0x1400E0358 (MiUpdateControlAreaCommitCount.c)
 *     MiSectionCreated @ 0x1400E05D0 (MiSectionCreated.c)
 *     MiInsertSubsectionNode @ 0x1400E094C (MiInsertSubsectionNode.c)
 *     MiTrimSection @ 0x1400E0D30 (MiTrimSection.c)
 *     MiDeleteEmptySubsections @ 0x1400E20C0 (MiDeleteEmptySubsections.c)
 *     MiLockStealUserVm @ 0x1400E22B4 (MiLockStealUserVm.c)
 *     MiCopyHeaderIfResident @ 0x1400E2B4C (MiCopyHeaderIfResident.c)
 *     MmEnforceWorkingSetLimit @ 0x1400E5BCC (MmEnforceWorkingSetLimit.c)
 *     PspJobIoRateVolumeEntryRemoveAll @ 0x1400E6AE8 (PspJobIoRateVolumeEntryRemoveAll.c)
 *     IoStartDiskIoAttributionForContext @ 0x1400E6DE8 (IoStartDiskIoAttributionForContext.c)
 *     IoStopDiskIoAttributionForContext @ 0x1400E778C (IoStopDiskIoAttributionForContext.c)
 *     MiUnlockControlAreaSectionExtend @ 0x1400EACB0 (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x1400EAD68 (MiLockControlAreaSectionExtend.c)
 *     MiAppendSubsectionChain @ 0x1400EAEF8 (MiAppendSubsectionChain.c)
 *     MiUpdateLastSubsectionSize @ 0x1400EB07C (MiUpdateLastSubsectionSize.c)
 *     MiSetSubsectionBase @ 0x1400EB1D4 (MiSetSubsectionBase.c)
 *     MiFlushAcquire @ 0x1400EC0A0 (MiFlushAcquire.c)
 *     MiDeleteStaleCacheMaps @ 0x1400F1F90 (MiDeleteStaleCacheMaps.c)
 *     MmInSwapWorkingSet @ 0x1400F3B7C (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400F3E2C (MmOutSwapWorkingSet.c)
 *     MiOutSwapWorkingSet @ 0x1400F44E8 (MiOutSwapWorkingSet.c)
 *     MiSetTrimWhileAgingState @ 0x1400F9F54 (MiSetTrimWhileAgingState.c)
 *     MiRelockFaultState @ 0x1401023B0 (MiRelockFaultState.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A450 (MiDereferenceControlAreaPfnList.c)
 *     RtlpCSparseBitmapLock @ 0x14010FE44 (RtlpCSparseBitmapLock.c)
 *     FlushLookUpTableBucket @ 0x14011362C (FlushLookUpTableBucket.c)
 *     MiDereferenceIoPages @ 0x1401174CC (MiDereferenceIoPages.c)
 *     MiRotateComplete @ 0x140118E8C (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x1401193C8 (MiDeleteRotateAndStopFaults.c)
 *     PfSnNameQueryWorker @ 0x14011ED80 (PfSnNameQueryWorker.c)
 *     MmGetControlAreaPartition @ 0x140123CD0 (MmGetControlAreaPartition.c)
 *     MmFlushImageSection @ 0x140124F40 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x14012509C (MiForceSectionClosed.c)
 *     MiImageUnused @ 0x140128D2C (MiImageUnused.c)
 *     MiDereferencePageRunsEx @ 0x14012B7B0 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14012C230 (MiReferencePageRuns.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012D4BC (MmAdjustWorkingSetSizeEx.c)
 *     MiDecrementSubsection @ 0x14012EAA4 (MiDecrementSubsection.c)
 *     MiCleanWorkingSet @ 0x14012F3E4 (MiCleanWorkingSet.c)
 *     MmChangeSectionBackingFile @ 0x14012F890 (MmChangeSectionBackingFile.c)
 *     MiReleaseImageSection @ 0x140130D20 (MiReleaseImageSection.c)
 *     MiReleaseFaultCharges @ 0x14013318C (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140133854 (MiRetainSubsection.c)
 *     MiDeleteCloneZombies @ 0x140134494 (MiDeleteCloneZombies.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x140136B70 (RtlpHpAcquireReleaseLockExclusive.c)
 *     MiUpdatePerSessionProto @ 0x14013873C (MiUpdatePerSessionProto.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14013A9DC (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiWaitForRotateToComplete @ 0x14013ACE8 (MiWaitForRotateToComplete.c)
 *     MiZeroSectionObjectPointer @ 0x14013CF74 (MiZeroSectionObjectPointer.c)
 *     MiDereferenceControlArea @ 0x14013D0CC (MiDereferenceControlArea.c)
 *     MiFreeCombineBlock @ 0x1401415B4 (MiFreeCombineBlock.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1401430D8 (MmStoreFlushOutstandingEvictions.c)
 *     MiCombiningInProgress @ 0x140143D14 (MiCombiningInProgress.c)
 *     PoFxIdleDevice @ 0x1401457DC (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x140145954 (PopFxActivateDevice.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140149600 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1401498BC (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     MiGatherPagefilePages @ 0x14014A9AC (MiGatherPagefilePages.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014B4F4 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014BBD4 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     MiMakeSecureExclusive @ 0x140159178 (MiMakeSecureExclusive.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140159F14 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     MiInsertVad @ 0x14015A7D0 (MiInsertVad.c)
 *     MiSetControlAreaSystemVa @ 0x14015B734 (MiSetControlAreaSystemVa.c)
 *     SepExpandSingletonArrays @ 0x14015CAD4 (SepExpandSingletonArrays.c)
 *     MiProcessDereferenceList @ 0x140165044 (MiProcessDereferenceList.c)
 *     PopFxIncrementDeviceSleepCount @ 0x140165CAC (PopFxIncrementDeviceSleepCount.c)
 *     MiDeleteSessionAddressSpace @ 0x140166510 (MiDeleteSessionAddressSpace.c)
 *     MiSessionRemoveImage @ 0x1401687C4 (MiSessionRemoveImage.c)
 *     PopPepSurprisePowerOn @ 0x140168A48 (PopPepSurprisePowerOn.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x14016980C (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     MiCleanSection @ 0x14017016C (MiCleanSection.c)
 *     ExDeleteFastResource @ 0x140170280 (ExDeleteFastResource.c)
 *     PopFxAllocatePowerIrp @ 0x140173A60 (PopFxAllocatePowerIrp.c)
 *     MiInsertMappingNode @ 0x140175100 (MiInsertMappingNode.c)
 *     MiRemoveMappingNode @ 0x14017552C (MiRemoveMappingNode.c)
 *     ExpAddResourceToSystemResourceList @ 0x1401766C8 (ExpAddResourceToSystemResourceList.c)
 *     MmManageFaultRange @ 0x140179D24 (MmManageFaultRange.c)
 *     MiCountSystemImageCommitment @ 0x14017A5F4 (MiCountSystemImageCommitment.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14017A844 (MiFreePrivateFixupEntryForSystemImage.c)
 *     PoFxReportDevicePoweredOn @ 0x14017ACE0 (PoFxReportDevicePoweredOn.c)
 *     PopPepUpdateConstraints @ 0x14017B5BC (PopPepUpdateConstraints.c)
 *     PopFxReleasePowerIrp @ 0x14017EEC0 (PopFxReleasePowerIrp.c)
 *     MiSessionInsertImage @ 0x14017F614 (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1401805AC (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x140185A00 (MiFreeUnusedPfnPagesDpc.c)
 *     MiInitializeNumaRanges @ 0x140188F0C (MiInitializeNumaRanges.c)
 *     MiDeleteBootRange @ 0x14018A7A8 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x14018CB60 (MiMapWithLargePages.c)
 *     MmStealTopLevelPage @ 0x14018EB24 (MmStealTopLevelPage.c)
 *     ExCompareExchangeCallBack @ 0x14018F34C (ExCompareExchangeCallBack.c)
 *     PopPepWaitForDeviceRelease @ 0x140191458 (PopPepWaitForDeviceRelease.c)
 *     PopFxAssignDeviceToDevNode @ 0x1401916E4 (PopFxAssignDeviceToDevNode.c)
 *     MiUpdatePageFileList @ 0x140192DA4 (MiUpdatePageFileList.c)
 *     MiCheckPageFileMapping @ 0x14019308C (MiCheckPageFileMapping.c)
 *     MiStoreEvictThread @ 0x140193590 (MiStoreEvictThread.c)
 *     PoFxStartDevicePowerManagement @ 0x140195540 (PoFxStartDevicePowerManagement.c)
 *     PopPepDeviceStarted @ 0x1401956A0 (PopPepDeviceStarted.c)
 *     MiInsertViewOfPhysicalSection @ 0x140196F5C (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1401988A4 (MiMapMdlCommon.c)
 *     SmFpPreAllocate @ 0x140198C14 (SmFpPreAllocate.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140198EA0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PspAddPartitionToGlobalList @ 0x14019A594 (PspAddPartitionToGlobalList.c)
 *     PoFxRegisterDripsWatchdogCallback @ 0x14019AC00 (PoFxRegisterDripsWatchdogCallback.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14019AE8C (MiInitializeWorkingSetManagerParameters.c)
 *     MiAcquireSpinLockExclusive @ 0x1402B8C78 (MiAcquireSpinLockExclusive.c)
 *     MiDeleteCachedSegment @ 0x1402B8C8C (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402B8E40 (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x1402B95FC (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x1402B96B0 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1402B9B70 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1402B9D30 (MiProcessDeleteOnClose.c)
 *     MiProcessingPageExtendComplete @ 0x1402B9F68 (MiProcessingPageExtendComplete.c)
 *     MiPurgeSubsection @ 0x1402B9FD8 (MiPurgeSubsection.c)
 *     MiQueueControlAreaDelete @ 0x1402BA318 (MiQueueControlAreaDelete.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402BA5E4 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x1402BA6BC (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x1402BA800 (MiUpControlAreaRefs.c)
 *     MiClearCommitReleaseState @ 0x1402BB134 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402BBF64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402BC154 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402BC304 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x1402BC890 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402BC8F4 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1402BCB14 (MmSetCommitReleaseEligibility.c)
 *     MiInitializeDynamicPfns @ 0x1402BDEDC (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x1402BE2D4 (MiPerformMemoryChange.c)
 *     MiUnmapMdlCommon @ 0x1402C0C64 (MiUnmapMdlCommon.c)
 *     MiCreateKernelStackNode @ 0x1402C41FC (MiCreateKernelStackNode.c)
 *     MiDeleteKernelStackNode @ 0x1402C430C (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1402C4C54 (MiMakeIoRangePermanent.c)
 *     MiRemoveSystemCacheReferences @ 0x1402C531C (MiRemoveSystemCacheReferences.c)
 *     MiRemoveVadEvent @ 0x1402C7CB0 (MiRemoveVadEvent.c)
 *     MiSubsectionNeedsExtents @ 0x1402C9D80 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x1402C9E08 (MiUpdateActiveSubsection.c)
 *     MiChangingSubsectionProtos @ 0x1402CAA9C (MiChangingSubsectionProtos.c)
 *     MiDecrementLargeSubsections @ 0x1402CB518 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1402CC3E8 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402CC884 (MiPurgeBadFileOnlyPages.c)
 *     MiRefillPurgedExtents @ 0x1402CCED4 (MiRefillPurgedExtents.c)
 *     MiSubsectionProtosCreated @ 0x1402CD2F8 (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1402CD42C (MiUnlinkSubsectionWaitBlock.c)
 *     MiAttemptPageFileReduction @ 0x1402CD708 (MiAttemptPageFileReduction.c)
 *     MiIssuePageExtendRequest @ 0x1402CE6CC (MiIssuePageExtendRequest.c)
 *     MiQueuePageFileExtension @ 0x1402CEB84 (MiQueuePageFileExtension.c)
 *     MiBeginHoldingDirtyFaults @ 0x1402CF68C (MiBeginHoldingDirtyFaults.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1402CF738 (MiCheckHoldFaultForHotPatch.c)
 *     MiFinishHoldingDirtyFaults @ 0x1402CFAC8 (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x1402D012C (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1402D8E18 (MiLockWorkingSetForLargeMapping.c)
 *     MiApplyCommitDelay @ 0x1402D997C (MiApplyCommitDelay.c)
 *     MiFreeSlabEntries @ 0x1402DBBD0 (MiFreeSlabEntries.c)
 *     MiInsertSlabEntry @ 0x1402DC8F4 (MiInsertSlabEntry.c)
 *     MiImageCantMove @ 0x1402DE7C0 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x1402DE844 (MiStrongCodeImage.c)
 *     MiRemovePlaceholderVad @ 0x1402DEDEC (MiRemovePlaceholderVad.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1402E1A34 (MiReplaceSystemProtoPtesNode.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1402E2EAC (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1402E3644 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1402E38A8 (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402E3C34 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x1402E3D30 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1402E4458 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x1402E4CAC (MiLockDownWorkingSet.c)
 *     MiClearPartitionPageBitMap @ 0x1402E9A98 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x1402E9F58 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x1402EA498 (MiDrainCrossPartitionUsage.c)
 *     MiGetCrossPartitionCharges @ 0x1402EA810 (MiGetCrossPartitionCharges.c)
 *     MiInsertPartitionPages @ 0x1402EA938 (MiInsertPartitionPages.c)
 *     MiReturnCrossPartitionCharges @ 0x1402EB2BC (MiReturnCrossPartitionCharges.c)
 *     MiReturnPartitionPagesToParent @ 0x1402EB3D4 (MiReturnPartitionPagesToParent.c)
 *     MiTransferPartitionPageRun @ 0x1402EB500 (MiTransferPartitionPageRun.c)
 *     MiUpdatePartitionMemory @ 0x1402EB9D8 (MiUpdatePartitionMemory.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1402F3758 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopPepArmIdleTimer @ 0x1402F8FD8 (PopPepArmIdleTimer.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402F9840 (PopPepIdleTimeoutRoutine.c)
 *     PopPepInitializeVetoMasks @ 0x1402F9BA4 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1402FAE98 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x140307E44 (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x140308064 (PspJobIoRateVolumeEntryRemove.c)
 *     PspIumFreePartitionPages @ 0x1403092C4 (PspIumFreePartitionPages.c)
 *     PspRemovePartitionFromGlobalList @ 0x140309978 (PspRemovePartitionFromGlobalList.c)
 *     SepSetSingletonEntry @ 0x14031E894 (SepSetSingletonEntry.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x14031FC54 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     SmpFpAllocateResource @ 0x140325BEC (SmpFpAllocateResource.c)
 *     SmpFpReleaseResource @ 0x140325C98 (SmpFpReleaseResource.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1403292D4 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ExGetBigPoolInfo @ 0x140339300 (ExGetBigPoolInfo.c)
 *     PopSystemIrpCompletion @ 0x14059C460 (PopSystemIrpCompletion.c)
 *     MiCreateInitialSystemWsles @ 0x1409EF520 (MiCreateInitialSystemWsles.c)
 *     MmUpdateSlabRangeProtection @ 0x140A3D058 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B5550 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // bp
  unsigned int v3; // ebx
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  volatile unsigned int v6; // eax
  __int64 v7; // rcx
  volatile unsigned int v9; // ett
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, CurrentIrql);
  }
  else
  {
    v3 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = SchedulerAssist[5];
        SchedulerAssist[5] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    {
      v10 = CurrentPrcb->SchedulerAssist;
      if ( v10 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = v10[5] - 1;
          v10[5] = v12;
          if ( !v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v3 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock, CurrentIrql);
    }
    v6 = *SpinLock;
    v7 = *(unsigned int *)SpinLock;
    LODWORD(v7) = v7 & 0xBFFFFFFF;
    if ( (_DWORD)v7 != 0x80000000 )
    {
      do
      {
        if ( (v6 & 0x40000000) != 0
          || (v7 = v6,
              LODWORD(v7) = v6 | 0x40000000,
              v9 = v6,
              v6 = _InterlockedCompareExchange(SpinLock, v6 | 0x40000000, v6),
              v9 == v6) )
        {
          if ( (++v3 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7) )
          {
            HvlNotifyLongSpinWait(v3);
          }
          else
          {
            _mm_pause();
          }
          v6 = *SpinLock;
        }
        v7 = v6;
        LODWORD(v7) = v6 & 0xBFFFFFFF;
      }
      while ( (v6 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  return CurrentIrql;
}
