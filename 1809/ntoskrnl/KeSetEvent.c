/*
 * XREFs of KeSetEvent @ 0x1400C2B00
 * Callers:
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14000630C (PopUpdateWatchdogNoWorkersEvent.c)
 *     EtwpSwitchBuffer @ 0x140014FB8 (EtwpSwitchBuffer.c)
 *     KiDecrementProcessStackCount @ 0x1400174F0 (KiDecrementProcessStackCount.c)
 *     MiIssueHardFaultIo @ 0x14001B5C8 (MiIssueHardFaultIo.c)
 *     CcFlushCachePriv @ 0x14001EA90 (CcFlushCachePriv.c)
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiInsertProtectedStandbyPage @ 0x140028F30 (MiInsertProtectedStandbyPage.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140039AD0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x14003B680 (MiHandleTransitionFault.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140064700 (MiUnlinkNodeLargePageHelper.c)
 *     MiFinishVadDeletion @ 0x140067770 (MiFinishVadDeletion.c)
 *     MiProcessWorkingSets @ 0x14006CED0 (MiProcessWorkingSets.c)
 *     MiCheckControlArea @ 0x1400764A0 (MiCheckControlArea.c)
 *     MiInsertUnusedSubsection @ 0x14007B7DC (MiInsertUnusedSubsection.c)
 *     CcDeleteSharedCacheMap @ 0x14007C270 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14007C530 (CcUninitializeCacheMap.c)
 *     CcDereferencePartition @ 0x14007C998 (CcDereferencePartition.c)
 *     CcWriteBehindInternal @ 0x14007D2F0 (CcWriteBehindInternal.c)
 *     CcWorkerThread @ 0x14007F2E0 (CcWorkerThread.c)
 *     MiQueuePageAccessLog @ 0x140088980 (MiQueuePageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x140088AF0 (ExReferenceCallBackBlock.c)
 *     WmipUnreferenceRegEntry @ 0x14008DB30 (WmipUnreferenceRegEntry.c)
 *     ExNotifyWithProcessing @ 0x14008E578 (ExNotifyWithProcessing.c)
 *     ExpWakePushLock @ 0x1400915F0 (ExpWakePushLock.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1400920D0 (LZNT1DecompressChunkWorkItem.c)
 *     MiDecrementControlAreaCount @ 0x140094E14 (MiDecrementControlAreaCount.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BAC0 (MiInsertLargePageInNodeListHelper.c)
 *     MiIncreaseAvailablePages @ 0x14009CEE0 (MiIncreaseAvailablePages.c)
 *     PopQueueTargetDpc @ 0x1400A5FC0 (PopQueueTargetDpc.c)
 *     AlpcpSignalAndWait @ 0x1400ABCD0 (AlpcpSignalAndWait.c)
 *     CcInitializeCacheMapEx @ 0x1400AC050 (CcInitializeCacheMapEx.c)
 *     CcPinFileData @ 0x1400AE2D0 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x1400AF6D0 (CcFreeVirtualAddress.c)
 *     ExpWorkerThread @ 0x1400B5C70 (ExpWorkerThread.c)
 *     ExpQueueWorkItem @ 0x1400B7320 (ExpQueueWorkItem.c)
 *     KiDetachProcess @ 0x1400B9CA0 (KiDetachProcess.c)
 *     IopCompleteRequest @ 0x1400BFD10 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400C2F70 (KiExitDispatcher.c)
 *     KiReadyThread @ 0x1400C5100 (KiReadyThread.c)
 *     AlpcpSignal @ 0x1400D37F0 (AlpcpSignal.c)
 *     PfFileInfoNotify @ 0x1400D3DE0 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x1400D4AB0 (PfSnReferenceProcessTrace.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400E00D8 (CcPostWorkQueueAsyncRead.c)
 *     CcPrepareMdlWrite @ 0x1400E1A40 (CcPrepareMdlWrite.c)
 *     PfSnRemoveProcessTrace @ 0x1400E257C (PfSnRemoveProcessTrace.c)
 *     PfpReturnAccessBuffer @ 0x1400E279C (PfpReturnAccessBuffer.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E78F8 (CcPurgeAndClearCacheSection.c)
 *     MiDecreaseAvailablePages @ 0x1400EE84C (MiDecreaseAvailablePages.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400EEDCC (MiStoreUpdateMemoryConditions.c)
 *     MiWorkingSetManager @ 0x1400EF5B4 (MiWorkingSetManager.c)
 *     MiReclaimSystemVa @ 0x1400F7278 (MiReclaimSystemVa.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9810 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     IoAcquireRemoveLockEx @ 0x1400FE310 (IoAcquireRemoveLockEx.c)
 *     PopFxProcessWork @ 0x1400FE390 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1400FEC4C (PopFxCompleteComponentActivation.c)
 *     NtSetInformationFile @ 0x140100E90 (NtSetInformationFile.c)
 *     CcCanIWrite @ 0x140104D20 (CcCanIWrite.c)
 *     ExfReleaseRundownProtection @ 0x14010B250 (ExfReleaseRundownProtection.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x14010C910 (ExReleaseRundownProtectionCacheAware.c)
 *     KiRequestProcessInSwap @ 0x14010CA80 (KiRequestProcessInSwap.c)
 *     ExpUnblockPushLock @ 0x140111B80 (ExpUnblockPushLock.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D1A4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x14011D604 (SmKmStoreHelperSendCommand.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011D700 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E2E0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     IoReleaseRemoveLockEx @ 0x14011EE10 (IoReleaseRemoveLockEx.c)
 *     PfpEventHandleFullBuffer @ 0x1401228E0 (PfpEventHandleFullBuffer.c)
 *     MiPrivateFixup @ 0x140125E40 (MiPrivateFixup.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140129840 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x14012AF20 (ExpPartitionCreateThreadIfNecessary.c)
 *     CcNotifyWriteBehindInternal @ 0x14012BF3C (CcNotifyWriteBehindInternal.c)
 *     SmKmGenericCompletion @ 0x14012DBC0 (SmKmGenericCompletion.c)
 *     SepRmCallLsa @ 0x14012FB40 (SepRmCallLsa.c)
 *     CmpLazyFlushDpcRoutine @ 0x1401351C0 (CmpLazyFlushDpcRoutine.c)
 *     PnpUnlockDeviceActionQueue @ 0x140135390 (PnpUnlockDeviceActionQueue.c)
 *     SmKmStoreHelperWorker @ 0x140135AD0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x1401374C0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     ExpEnumerateCallback @ 0x1401385D0 (ExpEnumerateCallback.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140139230 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x14013AA80 (ExpWorkQueueManagerReaperTimer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14013B2B0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PopUnregisterPowerSettingCallback @ 0x140141E50 (PopUnregisterPowerSettingCallback.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14014BF8C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmIoRequestComplete @ 0x14014C99C (SmIoRequestComplete.c)
 *     SmFpFree @ 0x14014CA3C (SmFpFree.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014DA74 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14014ED10 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiFinishResume @ 0x140151910 (MiFinishResume.c)
 *     MiFlushAllPagesWorker @ 0x1401531B8 (MiFlushAllPagesWorker.c)
 *     MiWakeModifiedPageWriter @ 0x1401532D8 (MiWakeModifiedPageWriter.c)
 *     MiProcessDereferenceList @ 0x140154050 (MiProcessDereferenceList.c)
 *     MiStoreSetEvictPageFile @ 0x1401560DC (MiStoreSetEvictPageFile.c)
 *     PoFxNotifySurprisePowerOn @ 0x1401586D0 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x140159180 (PoFxPowerControl.c)
 *     PopTimestampTargetProcessor @ 0x140159800 (PopTimestampTargetProcessor.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1401599A4 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140159A10 (PfpScenCtxWaiterTimedOut.c)
 *     PopFxActivateDevice @ 0x14015A0A8 (PopFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x14015A55C (PoFxPrepareDevice.c)
 *     PnpRemoveDeviceActionRequests @ 0x14015EE64 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x14015F300 (PnpDeviceActionWorker.c)
 *     CcDeleteBcbs @ 0x14016049C (CcDeleteBcbs.c)
 *     MiFreePagedPoolPages @ 0x140161A50 (MiFreePagedPoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x140162C70 (MiAllocatePagedPoolPages.c)
 *     MiFreeExcessSegments @ 0x1401643D4 (MiFreeExcessSegments.c)
 *     PnpUnlockMountableDevice @ 0x140169AE8 (PnpUnlockMountableDevice.c)
 *     VfPoolDelayFreeIfPossible @ 0x14016C330 (VfPoolDelayFreeIfPossible.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401709E0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopRequestCompletion @ 0x140170E50 (PopRequestCompletion.c)
 *     PopFxReleasePowerIrp @ 0x1401715E8 (PopFxReleasePowerIrp.c)
 *     PopIrpWorker @ 0x140171740 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x1401721B4 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140172360 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopRequestPowerIrp @ 0x140172560 (PopRequestPowerIrp.c)
 *     PopFxAllocatePowerIrp @ 0x14017303C (PopFxAllocatePowerIrp.c)
 *     MiQueueWorkingSetRequest @ 0x140175CFC (MiQueueWorkingSetRequest.c)
 *     PopBatteryWakeDpc @ 0x140176250 (PopBatteryWakeDpc.c)
 *     PopFxComponentWork @ 0x140177230 (PopFxComponentWork.c)
 *     PopUserPresentSet @ 0x1401777F8 (PopUserPresentSet.c)
 *     WheapAddErrorSource @ 0x14017D1DC (WheapAddErrorSource.c)
 *     MiZeroNodePages @ 0x14017F400 (MiZeroNodePages.c)
 *     MiUpdateAvailableEvents @ 0x14017F824 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14017F920 (MiSignalNonPagedPoolWatchers.c)
 *     KeBalanceSetManager @ 0x140183AD0 (KeBalanceSetManager.c)
 *     MiZeroLargePages @ 0x14018512C (MiZeroLargePages.c)
 *     MiReassessZeroThreads @ 0x140185718 (MiReassessZeroThreads.c)
 *     ExCompareExchangeCallBack @ 0x14018667C (ExCompareExchangeCallBack.c)
 *     MiSyncCommitSignals @ 0x140187FEC (MiSyncCommitSignals.c)
 *     MiModifiedPageWriter @ 0x140188740 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x14018A3C0 (MiStoreEvictThread.c)
 *     PnpCompleteSystemStartProcess @ 0x14018B1D4 (PnpCompleteSystemStartProcess.c)
 *     PopPropogateCoolingChange @ 0x14018DAA4 (PopPropogateCoolingChange.c)
 *     EtwpLoggerDpc @ 0x140192D40 (EtwpLoggerDpc.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x140268DFC (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x1402699B0 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x14026B1A0 (CcDeletePartition.c)
 *     FsFilterFreeCompletionStack @ 0x140270558 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x140270A20 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x14027EE14 (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x14027EE84 (IopFreeReserveIrp.c)
 *     PnpProcessWatchdogWorkItem @ 0x140289B8C (PnpProcessWatchdogWorkItem.c)
 *     PnprQuiesce @ 0x14028A56C (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14028B2E0 (PnpDiagnosticCompletionRoutine.c)
 *     KeRetryOutswapProcess @ 0x14028E644 (KeRetryOutswapProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x140293454 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1402935E4 (KiDisconnectSecondaryInterrupt.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140299D04 (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x140299FD0 (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x14029A008 (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x14029A0E0 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14029A110 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x14029D490 (KiBlockAndActivateUmsThread.c)
 *     MiProcessingPageExtendComplete @ 0x1402A2BB8 (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x1402A2F68 (MiQueueControlAreaDelete.c)
 *     MiDecrementVadsBeingDeleted @ 0x1402A3F00 (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4368 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4BD4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402A4DC4 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x1402A5F60 (MiZeroPageFile.c)
 *     MiFlushAllFilesystemPages @ 0x1402AAFF0 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x1402AED8C (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1402AEFA4 (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x1402AF414 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x1402B3294 (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x1402B4950 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x1402B4A64 (MiFreeOverlappedFlushEntry.c)
 *     MiDeleteExtentPfns @ 0x1402B5AC0 (MiDeleteExtentPfns.c)
 *     MiAttemptPageFileReductionApc @ 0x1402B7460 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402B7F20 (MiFinishPageFileExtension.c)
 *     MiFlushAllHintedStorePages @ 0x1402B8034 (MiFlushAllHintedStorePages.c)
 *     MiIrpCompletionApcRoutine @ 0x1402B8350 (MiIrpCompletionApcRoutine.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1402B8970 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiFinishHoldingDirtyFaults @ 0x1402B95EC (MiFinishHoldingDirtyFaults.c)
 *     MiPageNotZero @ 0x1402BFB48 (MiPageNotZero.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1402C4364 (MmStoreFlushOutstandingEvictions.c)
 *     MiDecrementCloneHeaderCount @ 0x1402C9768 (MiDecrementCloneHeaderCount.c)
 *     MiDeleteCloneDescriptor @ 0x1402C979C (MiDeleteCloneDescriptor.c)
 *     MiDeletePartitionResources @ 0x1402D0FAC (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x1402D24BC (MiReturnCrossPartitionCharges.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402D2CF0 (NtSignalAndWaitForSingleObject.c)
 *     PopQueueDirectedDripsWork @ 0x1402D6B68 (PopQueueDirectedDripsWork.c)
 *     PopDeviceIdleCompletion @ 0x1402D7070 (PopDeviceIdleCompletion.c)
 *     PopFxCompleteComponentPerfState @ 0x1402D79B8 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1402D7ABC (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x1402D7C20 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDeviceDpm @ 0x1402D7D34 (PopFxDestroyDeviceDpm.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1402D7E80 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x1402D7F00 (PopFxDeviceWork.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x1402D7FC0 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxPlatformIdleVeto @ 0x1402D8C10 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x1402D8DF0 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1402D92D4 (PopFxReleaseAcpiRefDevice.c)
 *     PopFxReleaseDevice @ 0x1402D9304 (PopFxReleaseDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x1402DA350 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x1402DA460 (PopFxUpdateProcessorIdleState.c)
 *     PopUpdateWakeSourceWorker @ 0x1402DBE60 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x1402DC690 (PopBatteryIrpComplete.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1402DDFF0 (PopPepStartDeviceUnregisterActivity.c)
 *     PopFxAcpiForwardNotification @ 0x1402E833C (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1402E83E0 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1402E8480 (PopFxAcpiForwardPepWorkRequest.c)
 *     PsDispatchIumService @ 0x1402EAB94 (PsDispatchIumService.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140301D94 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140303660 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140308E50 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140308F30 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x14030E670 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x140313E30 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x140316698 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140316D50 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140316DC0 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x140316E20 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x140319F40 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x140319F90 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x14031BFA0 (ExReleaseRundownProtectionEx.c)
 *     WheapProcessWorkQueueItem @ 0x1403204D0 (WheapProcessWorkQueueItem.c)
 *     EmpReleasePagingReference @ 0x140565618 (EmpReleasePagingReference.c)
 *     PopHandleWakeSources @ 0x140566540 (PopHandleWakeSources.c)
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PopEndMirroring @ 0x14056B600 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x14056C0F0 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14056C274 (MmDuplicateMemory.c)
 *     PopSystemIrpCompletion @ 0x14056C720 (PopSystemIrpCompletion.c)
 *     ExpSetSwappingKernelApc @ 0x14056D710 (ExpSetSwappingKernelApc.c)
 *     PopFlushVolumeWorker @ 0x14056D9E0 (PopFlushVolumeWorker.c)
 *     PfpScenCtxPrefetchStateSet @ 0x14056DC34 (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxScenarioSet @ 0x14056EA68 (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x140579814 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x14057ABC0 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x14057BBF4 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x14057BD54 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x14057C9C0 (PopGracefulShutdown.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x14057D9F0 (PopBuildDeviceNotifyListWatchdog.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14057DA10 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PnpDeviceEventWorker @ 0x14058BBC0 (PnpDeviceEventWorker.c)
 *     PnpCompleteDeviceEvent @ 0x14058BFC0 (PnpCompleteDeviceEvent.c)
 *     PiUEventDereferenceEventEntry @ 0x14058EAD8 (PiUEventDereferenceEventEntry.c)
 *     IopMountVolume @ 0x1405A2E64 (IopMountVolume.c)
 *     IopAcquireFileObjectLock @ 0x1405A3480 (IopAcquireFileObjectLock.c)
 *     CmpCompleteUnloadKey @ 0x1405AF61C (CmpCompleteUnloadKey.c)
 *     CmpWakeWriteQueueWaiters @ 0x1405B4D38 (CmpWakeWriteQueueWaiters.c)
 *     EtwpQueueNotification @ 0x1405C054C (EtwpQueueNotification.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1405C1198 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpLogger @ 0x1405C1430 (EtwpLogger.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1405C19BC (EtwpRealtimeInjectEtwBuffer.c)
 *     CmLoadAppKey @ 0x1405CF54C (CmLoadAppKey.c)
 *     CmpPostNotify @ 0x1405DC29C (CmpPostNotify.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     CmNotifyRunDown @ 0x1405F917C (CmNotifyRunDown.c)
 *     NtLockFile @ 0x1405FA000 (NtLockFile.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140603DE8 (PspEvaluateAndNotifyEmptyJob.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406109F8 (ExpWnfNotifyNameSubscribers.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406356A0 (AlpcpCompleteDispatchMessage.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     IopCloseFile @ 0x140639B10 (IopCloseFile.c)
 *     NtReadFile @ 0x14063A140 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063AA10 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x14063B620 (IopSynchronousServiceTail.c)
 *     CmpDeleteKeyObject @ 0x14063F500 (CmpDeleteKeyObject.c)
 *     NtSetEvent @ 0x140646250 (NtSetEvent.c)
 *     PfGetCompletedTrace @ 0x14064B634 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14064B8C0 (PfTTraceListAdd.c)
 *     NtQueryVolumeInformationFile @ 0x14065E460 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x140661720 (IopQueryXxxInformation.c)
 *     MiPfExecuteReadList @ 0x14066279C (MiPfExecuteReadList.c)
 *     RtlDecompressBufferLZNT1 @ 0x140663570 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x140663710 (RtlDecompressFragmentLZNT1.c)
 *     PfSnEndTrace @ 0x140669354 (PfSnEndTrace.c)
 *     PfTReplaceCurrentBuffer @ 0x14066A7BC (PfTReplaceCurrentBuffer.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140680D60 (PiDrvDbLoadNodeWorkerCallback.c)
 *     sub_1406884A0 @ 0x1406884A0 (sub_1406884A0.c)
 *     IopTrackLink @ 0x14068BD28 (IopTrackLink.c)
 *     WmipQueueNotification @ 0x14068F318 (WmipQueueNotification.c)
 *     CmpPostApc @ 0x140694BF0 (CmpPostApc.c)
 *     CmpSignalDeferredPosts @ 0x140694F94 (CmpSignalDeferredPosts.c)
 *     IopGetSetSecurityObject @ 0x1406990D0 (IopGetSetSecurityObject.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1406A65C0 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1406AF190 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     ExpWnfNotifySubscription @ 0x1406B7808 (ExpWnfNotifySubscription.c)
 *     EtwpFreeLoggerContext @ 0x1406C08A0 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406C0EC4 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C2FA8 (EtwpSynchronizeWithLogger.c)
 *     AlpcpTrackPortReferences @ 0x1406C3FC4 (AlpcpTrackPortReferences.c)
 *     IopLoadUnloadDriver @ 0x1406C6750 (IopLoadUnloadDriver.c)
 *     RtlRunOnceComplete @ 0x1406C7A80 (RtlRunOnceComplete.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x1406CB170 (CmpGetVolumeClusterSizeCompletion.c)
 *     EtwpStopLoggerInstance @ 0x1406CB854 (EtwpStopLoggerInstance.c)
 *     NtWriteFileGather @ 0x1406CC860 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD390 (NtReadFileScatter.c)
 *     EtwpDisassociateConsumer @ 0x1406CED40 (EtwpDisassociateConsumer.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406D0B80 (PfSnTracingStateExWorkerRoutine.c)
 *     MiInSwapStoreWorker @ 0x1406D0EC0 (MiInSwapStoreWorker.c)
 *     PopCompleteAction @ 0x1406DD008 (PopCompleteAction.c)
 *     MiDereferenceSessionFinal @ 0x1406E05B8 (MiDereferenceSessionFinal.c)
 *     PopFinalizeWakeInfo @ 0x1406E1160 (PopFinalizeWakeInfo.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1406EF00C (PopFxUnregisterDeviceOrWait.c)
 *     PiUEventHandleVetoEvent @ 0x1406FF7D0 (PiUEventHandleVetoEvent.c)
 *     IoSetInformation @ 0x140701280 (IoSetInformation.c)
 *     DbgkRegisterErrorPort @ 0x1407024A0 (DbgkRegisterErrorPort.c)
 *     IopInvalidateVolumesForDevice @ 0x140704F4C (IopInvalidateVolumesForDevice.c)
 *     WmipAddDataSource @ 0x1407075D0 (WmipAddDataSource.c)
 *     WmipReleaseCollectionEnabled @ 0x14070F0D0 (WmipReleaseCollectionEnabled.c)
 *     IopDestroyActiveConnectBlock @ 0x140710B5C (IopDestroyActiveConnectBlock.c)
 *     NtNotifyChangeSession @ 0x14071B8B0 (NtNotifyChangeSession.c)
 *     PfGenerateTrace @ 0x14071BDC4 (PfGenerateTrace.c)
 *     MmSetSessionObjectIoEvent @ 0x14071DF80 (MmSetSessionObjectIoEvent.c)
 *     PopReleaseTransitionLock @ 0x14071E704 (PopReleaseTransitionLock.c)
 *     PopUserPresentSetWorker @ 0x14071F100 (PopUserPresentSetWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x140732580 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140735B30 (CmpLoadHiveThread.c)
 *     ArbBuildAssignmentOrdering @ 0x140739438 (ArbBuildAssignmentOrdering.c)
 *     MUIRegistrySystemRoutine @ 0x14073D8F0 (MUIRegistrySystemRoutine.c)
 *     PfTLoggingWorker @ 0x14073F930 (PfTLoggingWorker.c)
 *     MmStoreRegister @ 0x14074BD2C (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x14074C910 (MiInsertPageFileInList.c)
 *     PopThermalWorker @ 0x140750F60 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140751380 (PopFanWorker.c)
 *     ExpPartitionCreatePool @ 0x140754944 (ExpPartitionCreatePool.c)
 *     ArbArbiterHandler @ 0x140755470 (ArbArbiterHandler.c)
 *     CmpWaitForHiveMount @ 0x1407555A4 (CmpWaitForHiveMount.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140755DF4 (IopAcquireReleaseConnectLockInternal.c)
 *     CmpInitializeSystemHivesLoad @ 0x140756824 (CmpInitializeSystemHivesLoad.c)
 *     WheapEtwEnableCallback @ 0x140761480 (WheapEtwEnableCallback.c)
 *     CmThawRegistry @ 0x1407F5A74 (CmThawRegistry.c)
 *     CmpPostApcRunDown @ 0x140800FF0 (CmpPostApcRunDown.c)
 *     DbgkpCloseObject @ 0x14080E7A0 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x14080F404 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x14080F6EC (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x14080F9E0 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x14080FE40 (NtDebugContinue.c)
 *     DbgkpLkmdSnapThreadApc @ 0x140811FB0 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x140815570 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopAllocateIrpCleanup @ 0x1408193B4 (IopAllocateIrpCleanup.c)
 *     IopConnectLinkTrackingPort @ 0x1408199D0 (IopConnectLinkTrackingPort.c)
 *     IopExceptionCleanup @ 0x140819B28 (IopExceptionCleanup.c)
 *     IopSendMessageToTrackService @ 0x14081A954 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x14081CBB0 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x140823000 (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14082741C (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x140833780 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x14083CE54 (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x1408455A8 (KeUpdateUmsThreadState.c)
 *     PfTCleanup @ 0x1408651DC (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x140865A10 (PfpParametersWatcher.c)
 *     PopFxUnregisterDevice @ 0x14086A7AC (PopFxUnregisterDevice.c)
 *     PopBatteryReadTag @ 0x14086D45C (PopBatteryReadTag.c)
 *     TtmiCloseEventQueue @ 0x140882230 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140882594 (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x1408870A0 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x140887178 (PspDeleteServerSiloGlobals.c)
 *     PsIsVsmEnclaveTerminated @ 0x14088E32C (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x14088E43C (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x14088E6A0 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x14089992C (RtlpCtSelfSubscribe.c)
 *     SmcCacheAdd @ 0x1408AE894 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x1408AEA28 (SmcCacheDelete.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x1408C3D10 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408C44F0 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1408C67A8 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExpPartitionDestroy @ 0x1408D6334 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x1408D94A0 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x1408DBE70 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     SbpVmbusNotificationHandler @ 0x140905CD0 (SbpVmbusNotificationHandler.c)
 *     KdpTimeSlipWork @ 0x140917C10 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x140930930 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140933DD4 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140943610 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x14094F440 (AnFwpFadeAnimationTimer.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 *     MiInitializePagedPoolEvents @ 0x1409BD640 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x1400ACA10 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2F70 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4DD0 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDC60 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE10 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14028DDA8 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FD8C (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  LONG SignalState; // esi
  LIST_ENTRY *p_WaitListHead; // r14
  struct _LIST_ENTRY *Flink; // r13
  struct _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *v13; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  char v15; // al
  bool v16; // zf
  struct _LIST_ENTRY *v17; // rdx
  char v18; // al
  __int64 v19; // r8
  unsigned __int8 v20; // cl
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  char v23; // al
  int v24; // r10d
  struct _LIST_ENTRY *v25; // r9
  unsigned __int8 v26; // cl
  _QWORD *v27; // r9
  __int64 v28; // rcx
  char v29; // al
  int v30; // r10d
  struct _LIST_ENTRY *v31; // r8
  unsigned __int8 IsThreadRunning; // al
  __int64 v33; // rdx
  __int64 v34; // r9
  unsigned __int8 v35; // al
  __int64 v36; // rdx
  __int64 v37; // r9
  struct _LIST_ENTRY *v38; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v39; // [rsp+30h] [rbp-58h]
  struct _LIST_ENTRY *v40; // [rsp+38h] [rbp-50h]
  struct _KPRCB *v41; // [rsp+38h] [rbp-50h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  _KTHREAD *v43; // [rsp+40h] [rbp-48h]
  int v44; // [rsp+90h] [rbp+8h]
  __int64 v45; // [rsp+90h] [rbp+8h]
  __int64 v46; // [rsp+90h] [rbp+8h]

  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v44 = 0;
    goto LABEL_3;
  }
  if ( Event->Header.SignalState != 1 || Wait )
  {
    v44 = 1;
LABEL_3:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(Event);
    SignalState = Event->Header.SignalState;
    Event->Header.SignalState = 1;
    if ( SignalState )
      goto LABEL_7;
    p_WaitListHead = &Event->Header.WaitListHead;
    Flink = Event->Header.WaitListHead.Flink;
    if ( !v44 )
    {
      if ( Flink == p_WaitListHead )
      {
LABEL_7:
        _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
        KiExitDispatcher((_DWORD)CurrentPrcb, Wait != 0 ? 3 : 0, 1, Increment, CurrentIrql);
        return SignalState;
      }
      while ( 1 )
      {
        v12 = Flink->Flink;
        v13 = Flink;
        v38 = Flink;
        Flink = v12;
        Blink = v38->Blink;
        if ( v12->Blink != v38 || Blink->Flink != v13 )
          goto LABEL_71;
        Blink->Flink = v12;
        v12->Blink = Blink;
        v15 = (char)v13[1].Flink;
        if ( v15 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v13, WORD1(v13[1].Flink), 0LL) )
          {
            v16 = Event->Header.SignalState-- == 1;
            if ( v16 )
              goto LABEL_7;
          }
        }
        else
        {
          if ( v15 == 2 )
          {
            BYTE1(v13[1].Flink) = 5;
            v45 = (__int64)v13[1].Blink;
            v13->Flink = 0LL;
            v20 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v41 = KeGetCurrentPrcb();
            CurrentThread = v41->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v41->CurrentThread);
              EtwTraceEnqueueWork(v34, v33, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v45);
            v21 = (_QWORD *)(v45 + 8);
            v22 = v45;
            if ( (_QWORD *)*v21 == v21
              || *(_DWORD *)(v45 + 40) >= *(_DWORD *)(v45 + 44)
              || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v45 && CurrentThread->WaitReason == 15 )
            {
LABEL_34:
              v24 = *(_DWORD *)(v22 + 4);
              *(_DWORD *)(v22 + 4) = v24 + 1;
              v25 = *(struct _LIST_ENTRY **)(v22 + 32);
              if ( v25->Flink != (struct _LIST_ENTRY *)(v22 + 24) )
                goto LABEL_71;
              v38->Flink = (struct _LIST_ENTRY *)(v22 + 24);
              v38->Blink = v25;
              v25->Flink = v38;
              *(_QWORD *)(v22 + 32) = v38;
              if ( !v24 && (_QWORD *)*v21 != v21 )
              {
                KiWakeOtherQueueWaiters(v41, v22);
                v22 = v45;
              }
            }
            else
            {
              v23 = KiWakeQueueWaiter((__int64)v41, v45, (__int64)v38);
              v22 = v45;
              if ( !v23 )
              {
                v21 = (_QWORD *)(v45 + 8);
                goto LABEL_34;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
            v16 = Event->Header.SignalState-- == 1;
            if ( v16 )
              goto LABEL_7;
            goto LABEL_55;
          }
          KiTryUnwaitThread(CurrentPrcb, v13, 256LL, 0LL);
        }
LABEL_55:
        if ( Flink == p_WaitListHead )
          goto LABEL_7;
      }
    }
    if ( Flink == p_WaitListHead )
    {
LABEL_11:
      Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
      p_WaitListHead->Flink = p_WaitListHead;
      goto LABEL_7;
    }
    while ( 1 )
    {
      v17 = Flink;
      Flink = Flink->Flink;
      v40 = v17;
      v18 = (char)v17[1].Flink;
      if ( v18 == 1 )
      {
        v19 = WORD1(v17[1].Flink);
      }
      else
      {
        if ( v18 == 2 )
        {
          BYTE1(v17[1].Flink) = 5;
          v46 = (__int64)v17[1].Blink;
          v17->Flink = 0LL;
          v26 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v39 = KeGetCurrentPrcb();
          v43 = v39->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v35 = KeIsThreadRunning(v39->CurrentThread);
            EtwTraceEnqueueWork(v37, v36, v35);
          }
          KiAcquireKobjectLockSafe(v46);
          v27 = (_QWORD *)(v46 + 8);
          v28 = v46;
          if ( (_QWORD *)*v27 == v27
            || *(_DWORD *)(v46 + 40) >= *(_DWORD *)(v46 + 44)
            || v43->Queue == (_DISPATCHER_HEADER *volatile)v46 && v43->WaitReason == 15 )
          {
LABEL_58:
            v30 = *(_DWORD *)(v28 + 4);
            *(_DWORD *)(v28 + 4) = v30 + 1;
            v31 = *(struct _LIST_ENTRY **)(v28 + 32);
            if ( v31->Flink != (struct _LIST_ENTRY *)(v28 + 24) )
LABEL_71:
              __fastfail(3u);
            v40->Flink = (struct _LIST_ENTRY *)(v28 + 24);
            v40->Blink = v31;
            v31->Flink = v40;
            *(_QWORD *)(v28 + 32) = v40;
            if ( !v30 && (_QWORD *)*v27 != v27 )
            {
              KiWakeOtherQueueWaiters(v39, v28);
              v28 = v46;
            }
          }
          else
          {
            v29 = KiWakeQueueWaiter((__int64)v39, v46, (__int64)v40);
            v28 = v46;
            if ( !v29 )
            {
              v27 = (_QWORD *)(v46 + 8);
              goto LABEL_58;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
          goto LABEL_21;
        }
        v19 = 256LL;
      }
      KiTryUnwaitThread(CurrentPrcb, v17, v19, 0LL);
LABEL_21:
      if ( Flink == p_WaitListHead )
        goto LABEL_11;
    }
  }
  return 1;
}
