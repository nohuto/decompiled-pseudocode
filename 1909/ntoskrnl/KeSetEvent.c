/*
 * XREFs of KeSetEvent @ 0x140067990
 * Callers:
 *     EtwpSwitchBuffer @ 0x140003560 (EtwpSwitchBuffer.c)
 *     MiIssueHardFaultIo @ 0x140006B24 (MiIssueHardFaultIo.c)
 *     AlpcpSignalAndWait @ 0x14000CDC0 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x14000D690 (AlpcpSignal.c)
 *     CcInitializeCacheMapEx @ 0x14000D930 (CcInitializeCacheMapEx.c)
 *     CcUninitializeCacheMap @ 0x14000E560 (CcUninitializeCacheMap.c)
 *     MiEmptyPageAccessLog @ 0x14001CD20 (MiEmptyPageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x14001D290 (ExReferenceCallBackBlock.c)
 *     MiInsertProtectedStandbyPage @ 0x140024500 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInList @ 0x140026690 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002C210 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x14002F640 (MiIncreaseAvailablePages.c)
 *     KiDetachProcess @ 0x140043810 (KiDetachProcess.c)
 *     ExpWorkerFactoryStartDeferredWork @ 0x140045890 (ExpWorkerFactoryStartDeferredWork.c)
 *     MiProcessWorkingSets @ 0x140047C50 (MiProcessWorkingSets.c)
 *     MiFinishVadDeletion @ 0x140056BF0 (MiFinishVadDeletion.c)
 *     ExpWorkerThread @ 0x140059CD0 (ExpWorkerThread.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     KiReadyThread @ 0x140068140 (KiReadyThread.c)
 *     CcMapAndCopyInToCache @ 0x14006DAE0 (CcMapAndCopyInToCache.c)
 *     MiInsertUnusedSubsection @ 0x14006FF30 (MiInsertUnusedSubsection.c)
 *     MiCheckControlArea @ 0x1400711B0 (MiCheckControlArea.c)
 *     CcFlushCachePriv @ 0x1400773D0 (CcFlushCachePriv.c)
 *     CcUnpinFileDataEx @ 0x140079100 (CcUnpinFileDataEx.c)
 *     CcWorkerThread @ 0x14007DD40 (CcWorkerThread.c)
 *     CcDereferencePartition @ 0x14007E4D4 (CcDereferencePartition.c)
 *     CcWriteBehindInternal @ 0x14007E5E0 (CcWriteBehindInternal.c)
 *     CcDeleteSharedCacheMap @ 0x14007FC90 (CcDeleteSharedCacheMap.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x14008099C (ExpPartitionCreateThreadIfNecessary.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1400843F0 (LZNT1DecompressChunkWorkItem.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     CcPostWorkQueueAsyncRead @ 0x140090B98 (CcPostWorkQueueAsyncRead.c)
 *     MiCopyDataPageToImagePage @ 0x14009423C (MiCopyDataPageToImagePage.c)
 *     PopQueueTargetDpc @ 0x14009A8B8 (PopQueueTargetDpc.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400B2260 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x1400B2FD0 (MiHandleTransitionFault.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     CcPinFileData @ 0x1400B4650 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x1400B5AD0 (CcFreeVirtualAddress.c)
 *     MiDecreaseAvailablePages @ 0x1400BB338 (MiDecreaseAvailablePages.c)
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiDecrementControlAreaCount @ 0x1400BF8A4 (MiDecrementControlAreaCount.c)
 *     ExpWakePushLock @ 0x1400C63C0 (ExpWakePushLock.c)
 *     KiDecrementProcessStackCount @ 0x1400CE120 (KiDecrementProcessStackCount.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     PfFileInfoNotify @ 0x1400D10B0 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x1400D1DC0 (PfSnReferenceProcessTrace.c)
 *     PfpReturnAccessBuffer @ 0x1400D4A10 (PfpReturnAccessBuffer.c)
 *     PfSnRemoveProcessTrace @ 0x1400D4D54 (PfSnRemoveProcessTrace.c)
 *     MiWorkingSetManager @ 0x1400DA208 (MiWorkingSetManager.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400DB7A8 (MiStoreUpdateMemoryConditions.c)
 *     IoAcquireRemoveLockEx @ 0x1400E0C90 (IoAcquireRemoveLockEx.c)
 *     PopFxProcessWork @ 0x1400E0D10 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1400E15C0 (PopFxCompleteComponentActivation.c)
 *     WmipUnreferenceRegEntry @ 0x1400EDD84 (WmipUnreferenceRegEntry.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1400F0028 (PopUpdateWatchdogNoWorkersEvent.c)
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F2760 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExNotifyWithProcessing @ 0x1400F2CF8 (ExNotifyWithProcessing.c)
 *     CcCanIWrite @ 0x1400F2E80 (CcCanIWrite.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400F8050 (MiUnlinkNodeLargePageHelper.c)
 *     ExpUnblockPushLock @ 0x1400F8AC4 (ExpUnblockPushLock.c)
 *     CmpLazyFlushDpcRoutine @ 0x1401014E0 (CmpLazyFlushDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1401019D0 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140105E50 (ExReleaseRundownProtectionCacheAware.c)
 *     ExfReleaseRundownProtection @ 0x1401064A0 (ExfReleaseRundownProtection.c)
 *     KiRequestProcessInSwap @ 0x140109310 (KiRequestProcessInSwap.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011B014 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x14011B268 (SmKmStoreHelperSendCommand.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011B570 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011C180 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     IoReleaseRemoveLockEx @ 0x14011FFE0 (IoReleaseRemoveLockEx.c)
 *     CcNotifyWriteBehindInternal @ 0x1401201EC (CcNotifyWriteBehindInternal.c)
 *     PfpEventHandleFullBuffer @ 0x1401243C0 (PfpEventHandleFullBuffer.c)
 *     CcPurgeAndClearCacheSection @ 0x1401263F4 (CcPurgeAndClearCacheSection.c)
 *     MiPrivateFixup @ 0x140126D84 (MiPrivateFixup.c)
 *     SmKmGenericCompletion @ 0x14012E5F0 (SmKmGenericCompletion.c)
 *     SepRmCallLsa @ 0x140133120 (SepRmCallLsa.c)
 *     SmKmStoreHelperWorker @ 0x140136040 (SmKmStoreHelperWorker.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1401365F0 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     CcPrepareMdlWrite @ 0x140136D70 (CcPrepareMdlWrite.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x140138D60 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     ExpEnumerateCallback @ 0x140139610 (ExpEnumerateCallback.c)
 *     MiReclaimSystemVa @ 0x140139F14 (MiReclaimSystemVa.c)
 *     MiQueuePageAccessLog @ 0x14013AEF4 (MiQueuePageAccessLog.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x14013CF50 (ExpWorkQueueManagerReaperTimer.c)
 *     PopFxComponentWork @ 0x14013D190 (PopFxComponentWork.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140143618 (MmStoreFlushOutstandingEvictions.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140144AA0 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     MiFlushAllHintedStorePages @ 0x140144AC8 (MiFlushAllHintedStorePages.c)
 *     PopFxActivateDevice @ 0x140145FF4 (PopFxActivateDevice.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1401496F4 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140149CA0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmIoRequestComplete @ 0x14014A464 (SmIoRequestComplete.c)
 *     SmFpFree @ 0x14014A504 (SmFpFree.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014BB94 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14014CFBC (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiStoreSetEvictPageFile @ 0x140158EA8 (MiStoreSetEvictPageFile.c)
 *     PoFxPrepareDevice @ 0x140159050 (PoFxPrepareDevice.c)
 *     PnpUnlockDeviceActionQueue @ 0x1401595B8 (PnpUnlockDeviceActionQueue.c)
 *     MiWakeModifiedPageWriter @ 0x14015C9B4 (MiWakeModifiedPageWriter.c)
 *     EtwpLoggerDpc @ 0x14015D4D0 (EtwpLoggerDpc.c)
 *     PnpDeviceActionWorker @ 0x14015DBE0 (PnpDeviceActionWorker.c)
 *     MiFinishResume @ 0x140160B40 (MiFinishResume.c)
 *     MiProcessDereferenceList @ 0x140164A94 (MiProcessDereferenceList.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140165460 (PopCompleteNotifyTransitionCommon.c)
 *     PoFxNotifySurprisePowerOn @ 0x140168410 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x1401691C0 (PoFxPowerControl.c)
 *     PopTimestampTargetProcessor @ 0x140169A00 (PopTimestampTargetProcessor.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140169B64 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140169C04 (PfpScenCtxWaiterTimedOut.c)
 *     MiFlushAllPagesWorker @ 0x14016A7C8 (MiFlushAllPagesWorker.c)
 *     CcDeleteBcbs @ 0x14016A918 (CcDeleteBcbs.c)
 *     PnpUnlockMountableDevice @ 0x140171178 (PnpUnlockMountableDevice.c)
 *     PopRequestPowerIrp @ 0x1401735E0 (PopRequestPowerIrp.c)
 *     PopFxAllocatePowerIrp @ 0x140174190 (PopFxAllocatePowerIrp.c)
 *     PnpRemoveDeviceActionRequests @ 0x140177968 (PnpRemoveDeviceActionRequests.c)
 *     PopIrpWorker @ 0x14017B5B0 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x14017BCAC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14017BE60 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14017EBB0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     VfPoolDelayFreeIfPossible @ 0x14017EEB0 (VfPoolDelayFreeIfPossible.c)
 *     PopFxReleasePowerIrp @ 0x14017F5B0 (PopFxReleasePowerIrp.c)
 *     MiQueueWorkingSetRequest @ 0x14017F8E0 (MiQueueWorkingSetRequest.c)
 *     PopUnregisterPowerSettingCallback @ 0x140180F9C (PopUnregisterPowerSettingCallback.c)
 *     PopUserPresentSet @ 0x1401819F8 (PopUserPresentSet.c)
 *     PopBatteryWakeDpc @ 0x140182660 (PopBatteryWakeDpc.c)
 *     MiZeroNodePages @ 0x1401886D0 (MiZeroNodePages.c)
 *     MiUpdateAvailableEvents @ 0x140188AB4 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140188BD0 (MiSignalNonPagedPoolWatchers.c)
 *     ExCompareExchangeCallBack @ 0x14018A28C (ExCompareExchangeCallBack.c)
 *     WheapAddErrorSource @ 0x14018B8B8 (WheapAddErrorSource.c)
 *     KeBalanceSetManager @ 0x14018DE80 (KeBalanceSetManager.c)
 *     MiZeroLargePages @ 0x14018FC0C (MiZeroLargePages.c)
 *     MiReassessZeroThreads @ 0x14018FE24 (MiReassessZeroThreads.c)
 *     MiModifiedPageWriter @ 0x140192C90 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x140193404 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x140193D70 (MiStoreEvictThread.c)
 *     PnpCompleteSystemStartProcess @ 0x140194FD4 (PnpCompleteSystemStartProcess.c)
 *     WheaLogInternalEvent @ 0x140199CC0 (WheaLogInternalEvent.c)
 *     PopPropogateCoolingChange @ 0x140199FE8 (PopPropogateCoolingChange.c)
 *     PopFxDestroyDeviceDpm @ 0x14019CF54 (PopFxDestroyDeviceDpm.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x14019EB00 (PopPepStartDeviceUnregisterActivity.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x14027BB1C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x14027D150 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x14027E980 (CcDeletePartition.c)
 *     FsFilterFreeCompletionStack @ 0x140283F98 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x140284480 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x14029353C (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x1402935AC (IopFreeReserveIrp.c)
 *     PnpProcessWatchdogWorkItem @ 0x14029FA78 (PnpProcessWatchdogWorkItem.c)
 *     PnprQuiesce @ 0x1402A0658 (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1402A12B0 (PnpDiagnosticCompletionRoutine.c)
 *     KeRetryOutswapProcess @ 0x1402A4E68 (KeRetryOutswapProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x1402A9B94 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1402A9D24 (KiDisconnectSecondaryInterrupt.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x1402B07A0 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402B0D30 (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x1402B1030 (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x1402B1068 (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x1402B1140 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1402B1170 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x1402B5C5C (KiBlockAndActivateUmsThread.c)
 *     MiFreeExcessSegments @ 0x1402B972C (MiFreeExcessSegments.c)
 *     MiProcessingPageExtendComplete @ 0x1402B9CC8 (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x1402BA078 (MiQueueControlAreaDelete.c)
 *     MiDecrementVadsBeingDeleted @ 0x1402BB020 (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB4A8 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402BBCC4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402BBEB4 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x1402BD050 (MiZeroPageFile.c)
 *     MiFlushAllFilesystemPages @ 0x1402C3960 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x1402C693C (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1402C6B54 (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x1402C6FD8 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x1402C8454 (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x1402C9DA0 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x1402C9EB4 (MiFreeOverlappedFlushEntry.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CABE0 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x1402CAF9C (MiCopyImageExtentContents.c)
 *     MiAttemptPageFileReductionApc @ 0x1402CD610 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402CE0FC (MiFinishPageFileExtension.c)
 *     MiIrpCompletionApcRoutine @ 0x1402CE410 (MiIrpCompletionApcRoutine.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1402CEA70 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiFinishHoldingDirtyFaults @ 0x1402CF828 (MiFinishHoldingDirtyFaults.c)
 *     MiPageNotZero @ 0x1402D91A8 (MiPageNotZero.c)
 *     MiDecrementCloneHeaderCount @ 0x1402E381C (MiDecrementCloneHeaderCount.c)
 *     MiDeleteCloneDescriptor @ 0x1402E3850 (MiDeleteCloneDescriptor.c)
 *     MiDeletePartitionResources @ 0x1402E9CB8 (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x1402EB01C (MiReturnCrossPartitionCharges.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402ED0D0 (NtSignalAndWaitForSingleObject.c)
 *     PopQueueDirectedDripsWork @ 0x1402F15A0 (PopQueueDirectedDripsWork.c)
 *     PopDeviceIdleCompletion @ 0x1402F1970 (PopDeviceIdleCompletion.c)
 *     PopFxCompleteComponentPerfState @ 0x1402F2968 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1402F2A6C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x1402F2C30 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1402F2D40 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x1402F2DC0 (PopFxDeviceWork.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x1402F2E80 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxPlatformIdleVeto @ 0x1402F3E30 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x1402F41D0 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1402F45F8 (PopFxReleaseAcpiRefDevice.c)
 *     PopFxReleaseDevice @ 0x1402F4628 (PopFxReleaseDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x1402F5800 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x1402F5910 (PopFxUpdateProcessorIdleState.c)
 *     PopUpdateWakeSourceWorker @ 0x1402F73F0 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x1402F88F0 (PopBatteryIrpComplete.c)
 *     PopFxAcpiForwardNotification @ 0x1403043F4 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x140304498 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140304540 (PopFxAcpiForwardPepWorkRequest.c)
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x14031F6A4 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140326340 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140326420 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x14032BCD0 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x140331C60 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x140334B08 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1403351DC (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140335250 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x1403352B0 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x140338720 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x140338770 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x14033A9B0 (ExReleaseRundownProtectionEx.c)
 *     ExpWorkQueueManagerSignal @ 0x14033BFA8 (ExpWorkQueueManagerSignal.c)
 *     WheapProcessWorkQueueItem @ 0x1403401A0 (WheapProcessWorkQueueItem.c)
 *     EmpReleasePagingReference @ 0x140595708 (EmpReleasePagingReference.c)
 *     PopHandleWakeSources @ 0x140596234 (PopHandleWakeSources.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopEndMirroring @ 0x140599120 (PopEndMirroring.c)
 *     ExpSetSwappingKernelApc @ 0x14059C950 (ExpSetSwappingKernelApc.c)
 *     PopFlushVolumeWorker @ 0x14059CC40 (PopFlushVolumeWorker.c)
 *     PfpScenCtxPrefetchStateSet @ 0x14059CEC0 (PfpScenCtxPrefetchStateSet.c)
 *     PopTransitionToSleep @ 0x14059D270 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14059D3EC (MmDuplicateMemory.c)
 *     PfpScenCtxScenarioSet @ 0x14059E460 (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x1405A9630 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1405AAA10 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x1405ABB00 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x1405ABCB4 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1405AC850 (PopGracefulShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1405AD890 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x1405AD930 (PopBuildDeviceNotifyListWatchdog.c)
 *     NtLockFile @ 0x1405D4D30 (NtLockFile.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2BE0 (AlpcpCompleteDispatchMessage.c)
 *     NtReadFile @ 0x1405EFC20 (NtReadFile.c)
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     CmpSignalDeferredPosts @ 0x140603EF0 (CmpSignalDeferredPosts.c)
 *     CmNotifyRunDown @ 0x14060F400 (CmNotifyRunDown.c)
 *     NtWriteFile @ 0x14062CFB0 (NtWriteFile.c)
 *     CmpPostNotify @ 0x140631680 (CmpPostNotify.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140633654 (EtwpRealtimeInjectEtwBuffer.c)
 *     CmLoadAppKey @ 0x14063A4D4 (CmLoadAppKey.c)
 *     MiPfExecuteReadList @ 0x140647D64 (MiPfExecuteReadList.c)
 *     sub_1406494FC @ 0x1406494FC (sub_1406494FC.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140654CC4 (ExpWnfNotifyNameSubscribers.c)
 *     PfGetCompletedTrace @ 0x14066AF34 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14066B1C0 (PfTTraceListAdd.c)
 *     PfTReplaceCurrentBuffer @ 0x14066E61C (PfTReplaceCurrentBuffer.c)
 *     PfSnEndTrace @ 0x14066F1D4 (PfSnEndTrace.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x14068736C (PspEvaluateAndNotifyEmptyJob.c)
 *     EtwpQueueNotification @ 0x140693858 (EtwpQueueNotification.c)
 *     PiUEventDereferenceEventEntry @ 0x1406975B0 (PiUEventDereferenceEventEntry.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1406983F0 (RtlDecompressFragmentLZNT1.c)
 *     RtlDecompressBufferLZNT1 @ 0x140698660 (RtlDecompressBufferLZNT1.c)
 *     PnpDeviceEventWorker @ 0x140699360 (PnpDeviceEventWorker.c)
 *     PnpCompleteDeviceEvent @ 0x1406997C8 (PnpCompleteDeviceEvent.c)
 *     IopMountVolume @ 0x1406A0254 (IopMountVolume.c)
 *     NtNotifyChangeSession @ 0x1406A3AF0 (NtNotifyChangeSession.c)
 *     EtwpShutdownConsumers @ 0x1406ACB20 (EtwpShutdownConsumers.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406ACB80 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpStopLoggerInstance @ 0x1406ACBBC (EtwpStopLoggerInstance.c)
 *     EtwpLogger @ 0x1406ACDA0 (EtwpLogger.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1406AD314 (EtwpRealtimeUpdateConsumers.c)
 *     IopTrackLink @ 0x1406B19B0 (IopTrackLink.c)
 *     NtSetEvent @ 0x1406B5B00 (NtSetEvent.c)
 *     CmpCompleteUnloadKey @ 0x1406B9974 (CmpCompleteUnloadKey.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1406BCBC0 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     EtwpSynchronizeWithLogger @ 0x1406CB384 (EtwpSynchronizeWithLogger.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1406CFF50 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     CmpPostApc @ 0x1406D0FA0 (CmpPostApc.c)
 *     ExpWnfNotifySubscription @ 0x1406D97B8 (ExpWnfNotifySubscription.c)
 *     AlpcpTrackPortReferences @ 0x1406E5294 (AlpcpTrackPortReferences.c)
 *     CmpWakeWriteQueueWaiters @ 0x1406EA8A4 (CmpWakeWriteQueueWaiters.c)
 *     RtlRunOnceComplete @ 0x1406EB0A0 (RtlRunOnceComplete.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x1406EB970 (CmpGetVolumeClusterSizeCompletion.c)
 *     EtwpDisassociateConsumer @ 0x1406EF2A0 (EtwpDisassociateConsumer.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406F1CC0 (PfSnTracingStateExWorkerRoutine.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1406F1F00 (PiDrvDbLoadNodeWorkerCallback.c)
 *     MiInSwapStoreWorker @ 0x1406F4D30 (MiInSwapStoreWorker.c)
 *     IopLoadUnloadDriver @ 0x14070A590 (IopLoadUnloadDriver.c)
 *     WmipQueueNotification @ 0x14071C518 (WmipQueueNotification.c)
 *     PopCompleteAction @ 0x140726430 (PopCompleteAction.c)
 *     MiDereferenceSessionFinal @ 0x140728ECC (MiDereferenceSessionFinal.c)
 *     PopFinalizeWakeInfo @ 0x140729B14 (PopFinalizeWakeInfo.c)
 *     DbgkRegisterErrorPort @ 0x140729B54 (DbgkRegisterErrorPort.c)
 *     IopInvalidateVolumesForDevice @ 0x14072DF28 (IopInvalidateVolumesForDevice.c)
 *     PiUEventHandleVetoEvent @ 0x14072E5D0 (PiUEventHandleVetoEvent.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140732EB8 (PopFxUnregisterDeviceOrWait.c)
 *     WmipAddDataSource @ 0x140734788 (WmipAddDataSource.c)
 *     WmipReleaseCollectionEnabled @ 0x14073CFBC (WmipReleaseCollectionEnabled.c)
 *     IopDestroyActiveConnectBlock @ 0x1407437B0 (IopDestroyActiveConnectBlock.c)
 *     PfGenerateTrace @ 0x140746628 (PfGenerateTrace.c)
 *     MmSetSessionObjectIoEvent @ 0x1407485D0 (MmSetSessionObjectIoEvent.c)
 *     PopReleaseTransitionLock @ 0x14074923C (PopReleaseTransitionLock.c)
 *     PopUserPresentSetWorker @ 0x140749E10 (PopUserPresentSetWorker.c)
 *     CmpInitializeSystemHivesLoad @ 0x1407586EC (CmpInitializeSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     PfTLoggingWorker @ 0x14075FE90 (PfTLoggingWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 *     ArbBuildAssignmentOrdering @ 0x140767418 (ArbBuildAssignmentOrdering.c)
 *     MUIRegistrySystemRoutine @ 0x14076A290 (MUIRegistrySystemRoutine.c)
 *     EtwInitialize @ 0x14076DFD8 (EtwInitialize.c)
 *     PopFxUnregisterDevice @ 0x14077189C (PopFxUnregisterDevice.c)
 *     MmStoreRegister @ 0x140773968 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x14077459C (MiInsertPageFileInList.c)
 *     PopFanWorker @ 0x14077BEF0 (PopFanWorker.c)
 *     PopThermalWorker @ 0x14077BFF0 (PopThermalWorker.c)
 *     ArbArbiterHandler @ 0x14077D980 (ArbArbiterHandler.c)
 *     CmpWaitForHiveMount @ 0x14077E0E8 (CmpWaitForHiveMount.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x14077E5C8 (IopAcquireReleaseConnectLockInternal.c)
 *     WheapEtwEnableCallback @ 0x14078BA40 (WheapEtwEnableCallback.c)
 *     CmThawRegistry @ 0x14082E6E4 (CmThawRegistry.c)
 *     CmpPostApcRunDown @ 0x140839BB0 (CmpPostApcRunDown.c)
 *     DbgkpCloseObject @ 0x140847740 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x1408483C8 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x1408486C0 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x1408489C4 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x140848E40 (NtDebugContinue.c)
 *     DbgkpLkmdSnapThreadApc @ 0x14084B0F0 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x14084E760 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopConnectLinkTrackingPort @ 0x140853340 (IopConnectLinkTrackingPort.c)
 *     IopSendMessageToTrackService @ 0x140853FB4 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x140856330 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x14085CB4C (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140860F9C (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x14086D7C0 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x140877740 (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x140880294 (KeUpdateUmsThreadState.c)
 *     PfTCleanup @ 0x1408A0F20 (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x1408A1770 (PfpParametersWatcher.c)
 *     PopBatteryReadTag @ 0x1408A9808 (PopBatteryReadTag.c)
 *     PopPowerAggregatorWorker @ 0x1408B26C0 (PopPowerAggregatorWorker.c)
 *     TtmiCloseEventQueue @ 0x1408BF868 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408BFC14 (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x1408C4D40 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x1408C4DFC (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1408C8900 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PsIsVsmEnclaveTerminated @ 0x1408CC314 (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x1408CC43C (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x1408CC6B8 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x1408D7D68 (RtlpCtSelfSubscribe.c)
 *     SmcCacheAdd @ 0x1408EB19C (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x1408EB330 (SmcCacheDelete.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x140900890 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1409010A0 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140903570 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExpPartitionDestroy @ 0x140913684 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x140916210 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x140919AF0 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     SbpVmbusNotificationHandler @ 0x140943D70 (SbpVmbusNotificationHandler.c)
 *     KdpTimeSlipWork @ 0x140956660 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x14096F1B0 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1409733F4 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140982FE0 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x14098F480 (AnFwpFadeAnimationTimer.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 *     MiInitializePagedPoolEvents @ 0x1409F1AE0 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D290 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E290 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A320 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x1402A469C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032D4A8 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  int v6; // ebp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r13
  LONG SignalState; // r12d
  struct _LIST_ENTRY *Flink; // r14
  LIST_ENTRY *p_WaitListHead; // r15
  struct _LIST_ENTRY *v13; // rax
  __int64 v14; // rbp
  struct _LIST_ENTRY *v15; // rcx
  char v16; // al
  bool v17; // zf
  __int64 v18; // rbp
  char v19; // al
  __int64 v20; // r8
  unsigned __int8 v21; // cl
  _QWORD *v22; // r9
  __int64 v23; // rcx
  char v24; // al
  int v25; // r8d
  __int64 *v26; // rdx
  unsigned __int8 IsThreadRunning; // al
  __int64 v28; // r9
  unsigned __int8 v29; // cl
  _QWORD *v30; // r8
  __int64 v31; // rcx
  char v32; // al
  int v33; // r9d
  __int64 *v34; // rdx
  unsigned __int8 v35; // al
  __int64 v36; // r9
  struct _KPRCB *v37; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v38; // [rsp+30h] [rbp-58h]
  _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  _KTHREAD *v40; // [rsp+38h] [rbp-50h]
  char v41; // [rsp+40h] [rbp-48h]
  __int64 v42; // [rsp+90h] [rbp+8h]
  __int64 v43; // [rsp+90h] [rbp+8h]

  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  if ( Event->Header.SignalState != 1 || Wait )
  {
    v6 = 1;
LABEL_3:
    CurrentIrql = KeGetCurrentIrql();
    v41 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(Event);
    SignalState = Event->Header.SignalState;
    Event->Header.SignalState = 1;
    if ( SignalState )
      goto LABEL_7;
    Flink = Event->Header.WaitListHead.Flink;
    p_WaitListHead = &Event->Header.WaitListHead;
    if ( !v6 )
    {
      if ( Flink == p_WaitListHead )
      {
LABEL_7:
        _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
        KiExitDispatcher((_DWORD)CurrentPrcb, Wait != 0 ? 3 : 0, 1, Increment, v41);
        return SignalState;
      }
      while ( 1 )
      {
        v13 = Flink->Flink;
        v14 = (__int64)Flink;
        Flink = v13;
        v15 = *(struct _LIST_ENTRY **)(v14 + 8);
        if ( v13->Blink != (struct _LIST_ENTRY *)v14 || v15->Flink != (struct _LIST_ENTRY *)v14 )
          goto LABEL_11;
        v15->Flink = v13;
        v13->Blink = v15;
        v16 = *(_BYTE *)(v14 + 16);
        if ( v16 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
          {
            v17 = Event->Header.SignalState-- == 1;
            if ( v17 )
              goto LABEL_7;
          }
        }
        else
        {
          if ( v16 == 2 )
          {
            *(_BYTE *)(v14 + 17) = 5;
            v42 = *(_QWORD *)(v14 + 24);
            *(_QWORD *)v14 = 0LL;
            v21 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v21 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v37 = KeGetCurrentPrcb();
            CurrentThread = v37->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v37->CurrentThread);
              EtwTraceEnqueueWork(v28, v14, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v42);
            v22 = (_QWORD *)(v42 + 8);
            v23 = v42;
            if ( (_QWORD *)*v22 == v22
              || *(_DWORD *)(v42 + 40) >= *(_DWORD *)(v42 + 44)
              || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v42 && CurrentThread->WaitReason == 15 )
            {
LABEL_38:
              v25 = *(_DWORD *)(v23 + 4);
              *(_DWORD *)(v23 + 4) = v25 + 1;
              v26 = *(__int64 **)(v23 + 32);
              if ( *v26 != v23 + 24 )
                goto LABEL_11;
              *(_QWORD *)v14 = v23 + 24;
              *(_QWORD *)(v14 + 8) = v26;
              *v26 = v14;
              *(_QWORD *)(v23 + 32) = v14;
              if ( !v25 && (_QWORD *)*v22 != v22 )
              {
                KiWakeOtherQueueWaiters((__int64)v37, v23);
                v23 = v42;
              }
            }
            else
            {
              v24 = KiWakeQueueWaiter((__int64)v37, (_QWORD *)v42, v14);
              v23 = v42;
              if ( !v24 )
              {
                v22 = (_QWORD *)(v42 + 8);
                goto LABEL_38;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
            v17 = Event->Header.SignalState-- == 1;
            if ( v17 )
              goto LABEL_7;
            goto LABEL_63;
          }
          KiTryUnwaitThread(CurrentPrcb, v14, 256LL, 0LL);
        }
LABEL_63:
        if ( Flink == p_WaitListHead )
          goto LABEL_7;
      }
    }
    if ( Flink == p_WaitListHead )
    {
LABEL_13:
      Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
      p_WaitListHead->Flink = p_WaitListHead;
      goto LABEL_7;
    }
    while ( 1 )
    {
      v18 = (__int64)Flink;
      Flink = Flink->Flink;
      v19 = *(_BYTE *)(v18 + 16);
      if ( v19 == 1 )
      {
        v20 = *(unsigned __int16 *)(v18 + 18);
      }
      else
      {
        if ( v19 == 2 )
        {
          *(_BYTE *)(v18 + 17) = 5;
          v43 = *(_QWORD *)(v18 + 24);
          *(_QWORD *)v18 = 0LL;
          v29 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v29 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v38 = KeGetCurrentPrcb();
          v40 = v38->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v35 = KeIsThreadRunning(v38->CurrentThread);
            EtwTraceEnqueueWork(v36, v18, v35);
          }
          KiAcquireKobjectLockSafe(v43);
          v30 = (_QWORD *)(v43 + 8);
          v31 = v43;
          if ( (_QWORD *)*v30 == v30
            || *(_DWORD *)(v43 + 40) >= *(_DWORD *)(v43 + 44)
            || v40->Queue == (_DISPATCHER_HEADER *volatile)v43 && v40->WaitReason == 15 )
          {
LABEL_55:
            v33 = *(_DWORD *)(v31 + 4);
            *(_DWORD *)(v31 + 4) = v33 + 1;
            v34 = *(__int64 **)(v31 + 32);
            if ( *v34 != v31 + 24 )
LABEL_11:
              __fastfail(3u);
            *(_QWORD *)v18 = v31 + 24;
            *(_QWORD *)(v18 + 8) = v34;
            *v34 = v18;
            *(_QWORD *)(v31 + 32) = v18;
            if ( !v33 && (_QWORD *)*v30 != v30 )
            {
              KiWakeOtherQueueWaiters((__int64)v38, v31);
              v31 = v43;
            }
          }
          else
          {
            v32 = KiWakeQueueWaiter((__int64)v38, (_QWORD *)v43, v18);
            v31 = v43;
            if ( !v32 )
            {
              v30 = (_QWORD *)(v43 + 8);
              goto LABEL_55;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v31, 0xFFFFFF7F);
          goto LABEL_24;
        }
        v20 = 256LL;
      }
      KiTryUnwaitThread(CurrentPrcb, v18, v20, 0LL);
LABEL_24:
      if ( Flink == p_WaitListHead )
        goto LABEL_13;
    }
  }
  return 1;
}
