/*
 * XREFs of ExAcquireSpinLockExclusive @ 0x140060B40
 * Callers:
 *     PsIoRateControlOverQuotaNotify @ 0x1400019D8 (PsIoRateControlOverQuotaNotify.c)
 *     RtlpHpAcquireLockExclusive @ 0x14001F7B0 (RtlpHpAcquireLockExclusive.c)
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiWalkPageTablesRecursively @ 0x140049540 (MiWalkPageTablesRecursively.c)
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MiFreePhysicalView @ 0x1400576D0 (MiFreePhysicalView.c)
 *     MiRemoveMappedPtes @ 0x14005E8F0 (MiRemoveMappedPtes.c)
 *     MiReferenceControlArea @ 0x14005F46C (MiReferenceControlArea.c)
 *     MiReleaseControlAreaCharges @ 0x14007105C (MiReleaseControlAreaCharges.c)
 *     MiDereferenceControlAreaBySection @ 0x140071174 (MiDereferenceControlAreaBySection.c)
 *     MiCheckControlArea @ 0x1400711B0 (MiCheckControlArea.c)
 *     MiInsertPrivateVad @ 0x140071540 (MiInsertPrivateVad.c)
 *     MiFlushRelease @ 0x1400717B4 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x140071DF0 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x140072590 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140072850 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertVadEvent @ 0x140072A6C (MiInsertVadEvent.c)
 *     MiGetWsAndInsertVad @ 0x140072C30 (MiGetWsAndInsertVad.c)
 *     MiRemoveSecureEntry @ 0x140073C60 (MiRemoveSecureEntry.c)
 *     MiUnlockFlushMdl @ 0x140074CF8 (MiUnlockFlushMdl.c)
 *     MiSynchronizeSystemVa @ 0x140075BC0 (MiSynchronizeSystemVa.c)
 *     MiGatherMappedPages @ 0x14007B5D8 (MiGatherMappedPages.c)
 *     MiWaitForFreePagesToZero @ 0x14007C490 (MiWaitForFreePagesToZero.c)
 *     PspJobIoRateQueryHistory @ 0x140083CE8 (PspJobIoRateQueryHistory.c)
 *     SepInitSingletonEntry @ 0x140085AD4 (SepInitSingletonEntry.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140086058 (SepCleanupMarkedForDeletionEntries.c)
 *     MiFlushAcquire @ 0x140088B00 (MiFlushAcquire.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140088E10 (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x140088EC8 (MiLockControlAreaSectionExtend.c)
 *     MiAppendSubsectionChain @ 0x140089058 (MiAppendSubsectionChain.c)
 *     MiUpdateLastSubsectionSize @ 0x1400891DC (MiUpdateLastSubsectionSize.c)
 *     MiSetSubsectionBase @ 0x140089334 (MiSetSubsectionBase.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14008C92C (MmQueryProcessWorkingSetSwapPages.c)
 *     MiOutlawInswaps @ 0x14008CC90 (MiOutlawInswaps.c)
 *     MiBeginProcessClean @ 0x14008CD24 (MiBeginProcessClean.c)
 *     MiContractPagingFiles @ 0x14008E768 (MiContractPagingFiles.c)
 *     MiDeleteProcessShadow @ 0x14008EB30 (MiDeleteProcessShadow.c)
 *     MiCopyHeaderIfResident @ 0x14008FF40 (MiCopyHeaderIfResident.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140090884 (MiCheckAndUpdateIoAttribution.c)
 *     MiReferenceControlAreaPfn @ 0x140093E40 (MiReferenceControlAreaPfn.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140094B04 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiInsertInSystemSpace @ 0x140095820 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x140097494 (MiRemoveFromSystemSpace.c)
 *     MiDeleteSubsectionPages @ 0x1400BC810 (MiDeleteSubsectionPages.c)
 *     MmPurgeSection @ 0x1400BCD50 (MmPurgeSection.c)
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiDeleteSegmentPages @ 0x1400BF0E4 (MiDeleteSegmentPages.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400BF254 (MiCanFileBeTruncatedInternal.c)
 *     MiPrepareSegmentForDeletion @ 0x1400BF684 (MiPrepareSegmentForDeletion.c)
 *     MiDrainControlAreaWrites @ 0x1400BF730 (MiDrainControlAreaWrites.c)
 *     MiDeleteControlArea @ 0x1400BF77C (MiDeleteControlArea.c)
 *     MiDecrementModifiedWriteCount @ 0x1400BF958 (MiDecrementModifiedWriteCount.c)
 *     MiCreatePrototypePtes @ 0x1400BFB60 (MiCreatePrototypePtes.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400BFFF0 (MiUpdateSystemProtoPtesTree.c)
 *     MiUpdateControlAreaCommitCount @ 0x1400C01D8 (MiUpdateControlAreaCommitCount.c)
 *     MiSectionCreated @ 0x1400C0450 (MiSectionCreated.c)
 *     MiInsertSubsectionNode @ 0x1400C07CC (MiInsertSubsectionNode.c)
 *     MiTrimSection @ 0x1400C0BB0 (MiTrimSection.c)
 *     MiDeleteEmptySubsections @ 0x1400C1F40 (MiDeleteEmptySubsections.c)
 *     MiLockStealUserVm @ 0x1400C2478 (MiLockStealUserVm.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x1400C4F60 (MiQueueLargeFreeZeroRebuild.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1400C84AC (IoSetDiskIoAttributionOnProcess.c)
 *     MiRelockFaultState @ 0x1400CBD60 (MiRelockFaultState.c)
 *     PfSnGetFileInformation @ 0x1400D20B0 (PfSnGetFileInformation.c)
 *     PfSnNameRemove @ 0x1400D406C (PfSnNameRemove.c)
 *     MmInSwapWorkingSet @ 0x1400D8F10 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400D91C0 (MmOutSwapWorkingSet.c)
 *     MiOutSwapWorkingSet @ 0x1400D987C (MiOutSwapWorkingSet.c)
 *     MiDeleteStaleCacheMaps @ 0x1400DA4D0 (MiDeleteStaleCacheMaps.c)
 *     PopFxArmResidentTimer @ 0x1400DFEFC (PopFxArmResidentTimer.c)
 *     PopPepTryPowerDownDevice @ 0x1400E18B8 (PopPepTryPowerDownDevice.c)
 *     PopPepLockActivityLink @ 0x1400E2458 (PopPepLockActivityLink.c)
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 *     MiDeletePagablePteRange @ 0x1400E8030 (MiDeletePagablePteRange.c)
 *     MmEnforceWorkingSetLimit @ 0x1400EAB6C (MmEnforceWorkingSetLimit.c)
 *     PspJobIoRateVolumeEntryRemoveAll @ 0x1400EBA88 (PspJobIoRateVolumeEntryRemoveAll.c)
 *     IoStartDiskIoAttributionForContext @ 0x1400EBD88 (IoStartDiskIoAttributionForContext.c)
 *     IoStopDiskIoAttributionForContext @ 0x1400EC72C (IoStopDiskIoAttributionForContext.c)
 *     MiDereferenceIoPages @ 0x1400F55EC (MiDereferenceIoPages.c)
 *     MiRotateComplete @ 0x1400F6FAC (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x1400F74E8 (MiDeleteRotateAndStopFaults.c)
 *     MiRebuildLargeZeroPage @ 0x1400F7840 (MiRebuildLargeZeroPage.c)
 *     MiProcessLargeCoalesceList @ 0x1400F7A0C (MiProcessLargeCoalesceList.c)
 *     MiDereferenceControlArea @ 0x1400F87E4 (MiDereferenceControlArea.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A020 (MiDereferenceControlAreaPfnList.c)
 *     RtlpCSparseBitmapLock @ 0x14010F534 (RtlpCSparseBitmapLock.c)
 *     FlushLookUpTableBucket @ 0x140112EBC (FlushLookUpTableBucket.c)
 *     PfSnNameQueryWorker @ 0x14011FB30 (PfSnNameQueryWorker.c)
 *     MiSetTrimWhileAgingState @ 0x140123428 (MiSetTrimWhileAgingState.c)
 *     MmGetControlAreaPartition @ 0x140124950 (MmGetControlAreaPartition.c)
 *     MmFlushImageSection @ 0x1401255B0 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x14012570C (MiForceSectionClosed.c)
 *     MiImageUnused @ 0x14012974C (MiImageUnused.c)
 *     MiDereferencePageRunsEx @ 0x14012C280 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14012CD00 (MiReferencePageRuns.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012DF0C (MmAdjustWorkingSetSizeEx.c)
 *     MiDecrementSubsection @ 0x14012F3F4 (MiDecrementSubsection.c)
 *     MiCleanWorkingSet @ 0x14012FDD4 (MiCleanWorkingSet.c)
 *     MmChangeSectionBackingFile @ 0x140130320 (MmChangeSectionBackingFile.c)
 *     MiReleaseImageSection @ 0x1401318B0 (MiReleaseImageSection.c)
 *     MiReleaseFaultCharges @ 0x140133C7C (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x14013426C (MiRetainSubsection.c)
 *     MiDeleteCloneZombies @ 0x140134D94 (MiDeleteCloneZombies.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x1401374F0 (RtlpHpAcquireReleaseLockExclusive.c)
 *     MiUpdatePerSessionProto @ 0x140138DD8 (MiUpdatePerSessionProto.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14013AE3C (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiWaitForRotateToComplete @ 0x14013B138 (MiWaitForRotateToComplete.c)
 *     MiZeroSectionObjectPointer @ 0x14013D4B4 (MiZeroSectionObjectPointer.c)
 *     MiFreeCombineBlock @ 0x140141AF4 (MiFreeCombineBlock.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140143618 (MmStoreFlushOutstandingEvictions.c)
 *     MiCombiningInProgress @ 0x140144254 (MiCombiningInProgress.c)
 *     PoFxIdleDevice @ 0x140145E7C (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x140145FF4 (PopFxActivateDevice.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140149CA0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140149F5C (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     MiGatherPagefilePages @ 0x14014B04C (MiGatherPagefilePages.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014BB94 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014C274 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     MiMakeSecureExclusive @ 0x140159818 (MiMakeSecureExclusive.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x14015A5B4 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     MiInsertVad @ 0x14015AE70 (MiInsertVad.c)
 *     MiSetControlAreaSystemVa @ 0x14015BDD4 (MiSetControlAreaSystemVa.c)
 *     SepExpandSingletonArrays @ 0x14015D174 (SepExpandSingletonArrays.c)
 *     MiProcessDereferenceList @ 0x140164A94 (MiProcessDereferenceList.c)
 *     PopFxIncrementDeviceSleepCount @ 0x1401656FC (PopFxIncrementDeviceSleepCount.c)
 *     MiDeleteSessionAddressSpace @ 0x140165F60 (MiDeleteSessionAddressSpace.c)
 *     MiSessionRemoveImage @ 0x140168214 (MiSessionRemoveImage.c)
 *     PopPepSurprisePowerOn @ 0x140168498 (PopPepSurprisePowerOn.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x14016925C (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     MiCleanSection @ 0x14017085C (MiCleanSection.c)
 *     ExDeleteFastResource @ 0x140170970 (ExDeleteFastResource.c)
 *     PopFxAllocatePowerIrp @ 0x140174190 (PopFxAllocatePowerIrp.c)
 *     MiInsertMappingNode @ 0x140175830 (MiInsertMappingNode.c)
 *     MiRemoveMappingNode @ 0x140175C5C (MiRemoveMappingNode.c)
 *     ExpAddResourceToSystemResourceList @ 0x140176DF8 (ExpAddResourceToSystemResourceList.c)
 *     MmManageFaultRange @ 0x14017A414 (MmManageFaultRange.c)
 *     MiCountSystemImageCommitment @ 0x14017ACE4 (MiCountSystemImageCommitment.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14017AF34 (MiFreePrivateFixupEntryForSystemImage.c)
 *     PoFxReportDevicePoweredOn @ 0x14017B3D0 (PoFxReportDevicePoweredOn.c)
 *     PopPepUpdateConstraints @ 0x14017BCAC (PopPepUpdateConstraints.c)
 *     PopFxReleasePowerIrp @ 0x14017F5B0 (PopFxReleasePowerIrp.c)
 *     MiSessionInsertImage @ 0x14017FD04 (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140180C9C (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x140185FB0 (MiFreeUnusedPfnPagesDpc.c)
 *     MiInitializeNumaRanges @ 0x1401894BC (MiInitializeNumaRanges.c)
 *     ExCompareExchangeCallBack @ 0x14018A28C (ExCompareExchangeCallBack.c)
 *     MiDeleteBootRange @ 0x14018B138 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x14018D3E0 (MiMapWithLargePages.c)
 *     MmStealTopLevelPage @ 0x14018F434 (MmStealTopLevelPage.c)
 *     PopPepWaitForDeviceRelease @ 0x140191AC8 (PopPepWaitForDeviceRelease.c)
 *     PopFxAssignDeviceToDevNode @ 0x140191D54 (PopFxAssignDeviceToDevNode.c)
 *     MiUpdatePageFileList @ 0x140193584 (MiUpdatePageFileList.c)
 *     MiCheckPageFileMapping @ 0x14019386C (MiCheckPageFileMapping.c)
 *     MiStoreEvictThread @ 0x140193D70 (MiStoreEvictThread.c)
 *     PoFxStartDevicePowerManagement @ 0x140195D20 (PoFxStartDevicePowerManagement.c)
 *     PopPepDeviceStarted @ 0x140195E80 (PopPepDeviceStarted.c)
 *     MiInsertViewOfPhysicalSection @ 0x14019773C (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x140198F04 (MiMapMdlCommon.c)
 *     SmFpPreAllocate @ 0x140199274 (SmFpPreAllocate.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140199500 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PspAddPartitionToGlobalList @ 0x14019ABF4 (PspAddPartitionToGlobalList.c)
 *     PoFxRegisterDripsWatchdogCallback @ 0x14019B260 (PoFxRegisterDripsWatchdogCallback.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14019B4EC (MiInitializeWorkingSetManagerParameters.c)
 *     MiAcquireSpinLockExclusive @ 0x1402B89D8 (MiAcquireSpinLockExclusive.c)
 *     MiDeleteCachedSegment @ 0x1402B89EC (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402B8BA0 (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x1402B935C (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x1402B9410 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1402B98D0 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1402B9A90 (MiProcessDeleteOnClose.c)
 *     MiProcessingPageExtendComplete @ 0x1402B9CC8 (MiProcessingPageExtendComplete.c)
 *     MiPurgeSubsection @ 0x1402B9D38 (MiPurgeSubsection.c)
 *     MiQueueControlAreaDelete @ 0x1402BA078 (MiQueueControlAreaDelete.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402BA344 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x1402BA41C (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x1402BA560 (MiUpControlAreaRefs.c)
 *     MiClearCommitReleaseState @ 0x1402BAE94 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402BBCC4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402BBEB4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402BC064 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x1402BC5F0 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402BC654 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1402BC874 (MmSetCommitReleaseEligibility.c)
 *     MiInitializeDynamicPfns @ 0x1402BDC3C (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x1402BE034 (MiPerformMemoryChange.c)
 *     MiUnmapMdlCommon @ 0x1402C09C4 (MiUnmapMdlCommon.c)
 *     MiCreateKernelStackNode @ 0x1402C3F5C (MiCreateKernelStackNode.c)
 *     MiDeleteKernelStackNode @ 0x1402C406C (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1402C49B4 (MiMakeIoRangePermanent.c)
 *     MiRemoveSystemCacheReferences @ 0x1402C507C (MiRemoveSystemCacheReferences.c)
 *     MiRemoveVadEvent @ 0x1402C7A10 (MiRemoveVadEvent.c)
 *     MiSubsectionNeedsExtents @ 0x1402C9AE0 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x1402C9B68 (MiUpdateActiveSubsection.c)
 *     MiChangingSubsectionProtos @ 0x1402CA7FC (MiChangingSubsectionProtos.c)
 *     MiDecrementLargeSubsections @ 0x1402CB278 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1402CC148 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402CC5E4 (MiPurgeBadFileOnlyPages.c)
 *     MiRefillPurgedExtents @ 0x1402CCC34 (MiRefillPurgedExtents.c)
 *     MiSubsectionProtosCreated @ 0x1402CD058 (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1402CD18C (MiUnlinkSubsectionWaitBlock.c)
 *     MiAttemptPageFileReduction @ 0x1402CD468 (MiAttemptPageFileReduction.c)
 *     MiIssuePageExtendRequest @ 0x1402CE42C (MiIssuePageExtendRequest.c)
 *     MiQueuePageFileExtension @ 0x1402CE8E4 (MiQueuePageFileExtension.c)
 *     MiBeginHoldingDirtyFaults @ 0x1402CF3EC (MiBeginHoldingDirtyFaults.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1402CF498 (MiCheckHoldFaultForHotPatch.c)
 *     MiFinishHoldingDirtyFaults @ 0x1402CF828 (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x1402CFE8C (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1402D8B78 (MiLockWorkingSetForLargeMapping.c)
 *     MiApplyCommitDelay @ 0x1402D96DC (MiApplyCommitDelay.c)
 *     MiFreeSlabEntries @ 0x1402DB930 (MiFreeSlabEntries.c)
 *     MiInsertSlabEntry @ 0x1402DC654 (MiInsertSlabEntry.c)
 *     MiImageCantMove @ 0x1402DE520 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x1402DE5A4 (MiStrongCodeImage.c)
 *     MiRemovePlaceholderVad @ 0x1402DEB4C (MiRemovePlaceholderVad.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1402E1794 (MiReplaceSystemProtoPtesNode.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1402E2C0C (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1402E33A4 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1402E3608 (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402E3994 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x1402E3A90 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x1402E4A0C (MiLockDownWorkingSet.c)
 *     MiClearPartitionPageBitMap @ 0x1402E97F8 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x1402E9CB8 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x1402EA1F8 (MiDrainCrossPartitionUsage.c)
 *     MiGetCrossPartitionCharges @ 0x1402EA570 (MiGetCrossPartitionCharges.c)
 *     MiInsertPartitionPages @ 0x1402EA698 (MiInsertPartitionPages.c)
 *     MiReturnCrossPartitionCharges @ 0x1402EB01C (MiReturnCrossPartitionCharges.c)
 *     MiReturnPartitionPagesToParent @ 0x1402EB134 (MiReturnPartitionPagesToParent.c)
 *     MiTransferPartitionPageRun @ 0x1402EB260 (MiTransferPartitionPageRun.c)
 *     MiUpdatePartitionMemory @ 0x1402EB738 (MiUpdatePartitionMemory.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1402F34B8 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopPepArmIdleTimer @ 0x1402F8A88 (PopPepArmIdleTimer.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402F92F0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepInitializeVetoMasks @ 0x1402F9654 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1402FA948 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1403078F4 (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x140307B14 (PspJobIoRateVolumeEntryRemove.c)
 *     PspIumFreePartitionPages @ 0x140308D74 (PspIumFreePartitionPages.c)
 *     PspRemovePartitionFromGlobalList @ 0x140309428 (PspRemovePartitionFromGlobalList.c)
 *     SepSetSingletonEntry @ 0x14031E2E4 (SepSetSingletonEntry.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x14031F6A4 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     SmpFpAllocateResource @ 0x14032563C (SmpFpAllocateResource.c)
 *     SmpFpReleaseResource @ 0x1403256E8 (SmpFpReleaseResource.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x140328D24 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ExGetBigPoolInfo @ 0x140338D60 (ExGetBigPoolInfo.c)
 *     PopSystemIrpCompletion @ 0x14059BCE0 (PopSystemIrpCompletion.c)
 *     MiCreateInitialSystemWsles @ 0x1409EF438 (MiCreateInitialSystemWsles.c)
 *     MmUpdateSlabRangeProtection @ 0x140A3CE28 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400F3400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140284ED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AEF40 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
