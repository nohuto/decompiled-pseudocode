/*
 * XREFs of KeSetEvent @ 0x1400C2AE0
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
 *     PopQueueTargetDpc @ 0x1400A5FA0 (PopQueueTargetDpc.c)
 *     AlpcpSignalAndWait @ 0x1400ABCB0 (AlpcpSignalAndWait.c)
 *     CcInitializeCacheMapEx @ 0x1400AC030 (CcInitializeCacheMapEx.c)
 *     CcPinFileData @ 0x1400AE2B0 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x1400AF6B0 (CcFreeVirtualAddress.c)
 *     ExpWorkerThread @ 0x1400B5C50 (ExpWorkerThread.c)
 *     ExpQueueWorkItem @ 0x1400B7300 (ExpQueueWorkItem.c)
 *     KiDetachProcess @ 0x1400B9C80 (KiDetachProcess.c)
 *     IopCompleteRequest @ 0x1400BFCF0 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400C2F50 (KiExitDispatcher.c)
 *     KiReadyThread @ 0x1400C50E0 (KiReadyThread.c)
 *     AlpcpSignal @ 0x1400D37D0 (AlpcpSignal.c)
 *     PfFileInfoNotify @ 0x1400D3DC0 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x1400D4A90 (PfSnReferenceProcessTrace.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400E00B8 (CcPostWorkQueueAsyncRead.c)
 *     CcPrepareMdlWrite @ 0x1400E1A20 (CcPrepareMdlWrite.c)
 *     PfSnRemoveProcessTrace @ 0x1400E255C (PfSnRemoveProcessTrace.c)
 *     PfpReturnAccessBuffer @ 0x1400E277C (PfpReturnAccessBuffer.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E78D8 (CcPurgeAndClearCacheSection.c)
 *     MiDecreaseAvailablePages @ 0x1400EE82C (MiDecreaseAvailablePages.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400EEDAC (MiStoreUpdateMemoryConditions.c)
 *     MiWorkingSetManager @ 0x1400EF594 (MiWorkingSetManager.c)
 *     MiReclaimSystemVa @ 0x1400F7258 (MiReclaimSystemVa.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F97F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     IoAcquireRemoveLockEx @ 0x1400FE2F0 (IoAcquireRemoveLockEx.c)
 *     PopFxProcessWork @ 0x1400FE370 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1400FEC2C (PopFxCompleteComponentActivation.c)
 *     NtSetInformationFile @ 0x140100E70 (NtSetInformationFile.c)
 *     CcCanIWrite @ 0x140104D00 (CcCanIWrite.c)
 *     ExfReleaseRundownProtection @ 0x14010B230 (ExfReleaseRundownProtection.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x14010C8F0 (ExReleaseRundownProtectionCacheAware.c)
 *     KiRequestProcessInSwap @ 0x14010CA60 (KiRequestProcessInSwap.c)
 *     ExpUnblockPushLock @ 0x140111B60 (ExpUnblockPushLock.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D184 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x14011D5E4 (SmKmStoreHelperSendCommand.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011D6E0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E2C0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     IoReleaseRemoveLockEx @ 0x14011EDF0 (IoReleaseRemoveLockEx.c)
 *     PfpEventHandleFullBuffer @ 0x1401228C0 (PfpEventHandleFullBuffer.c)
 *     MiPrivateFixup @ 0x140125E20 (MiPrivateFixup.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140129820 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x14012AF00 (ExpPartitionCreateThreadIfNecessary.c)
 *     CcNotifyWriteBehindInternal @ 0x14012BF1C (CcNotifyWriteBehindInternal.c)
 *     SmKmGenericCompletion @ 0x14012DBA0 (SmKmGenericCompletion.c)
 *     SepRmCallLsa @ 0x14012FB20 (SepRmCallLsa.c)
 *     CmpLazyFlushDpcRoutine @ 0x1401351A0 (CmpLazyFlushDpcRoutine.c)
 *     PnpUnlockDeviceActionQueue @ 0x140135370 (PnpUnlockDeviceActionQueue.c)
 *     SmKmStoreHelperWorker @ 0x140135AB0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x1401374A0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     ExpEnumerateCallback @ 0x1401385B0 (ExpEnumerateCallback.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140139210 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x14013AA60 (ExpWorkQueueManagerReaperTimer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14013B290 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PopUnregisterPowerSettingCallback @ 0x140141E30 (PopUnregisterPowerSettingCallback.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14014BF6C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmIoRequestComplete @ 0x14014C97C (SmIoRequestComplete.c)
 *     SmFpFree @ 0x14014CA1C (SmFpFree.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014DA54 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14014ECF0 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiFinishResume @ 0x1401518F0 (MiFinishResume.c)
 *     MiFlushAllPagesWorker @ 0x140153198 (MiFlushAllPagesWorker.c)
 *     MiWakeModifiedPageWriter @ 0x1401532B8 (MiWakeModifiedPageWriter.c)
 *     MiProcessDereferenceList @ 0x140154030 (MiProcessDereferenceList.c)
 *     MiStoreSetEvictPageFile @ 0x1401560BC (MiStoreSetEvictPageFile.c)
 *     PoFxNotifySurprisePowerOn @ 0x1401586B0 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x140159160 (PoFxPowerControl.c)
 *     PopTimestampTargetProcessor @ 0x1401597E0 (PopTimestampTargetProcessor.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140159984 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PfpScenCtxWaiterTimedOut @ 0x1401599F0 (PfpScenCtxWaiterTimedOut.c)
 *     PopFxActivateDevice @ 0x14015A088 (PopFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x14015A53C (PoFxPrepareDevice.c)
 *     PnpRemoveDeviceActionRequests @ 0x14015EE44 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x14015F2E0 (PnpDeviceActionWorker.c)
 *     CcDeleteBcbs @ 0x14016047C (CcDeleteBcbs.c)
 *     MiFreePagedPoolPages @ 0x140161A30 (MiFreePagedPoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x140162C50 (MiAllocatePagedPoolPages.c)
 *     MiFreeExcessSegments @ 0x1401643B4 (MiFreeExcessSegments.c)
 *     PnpUnlockMountableDevice @ 0x140169AC8 (PnpUnlockMountableDevice.c)
 *     VfPoolDelayFreeIfPossible @ 0x14016C310 (VfPoolDelayFreeIfPossible.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401709C0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopRequestCompletion @ 0x140170E30 (PopRequestCompletion.c)
 *     PopFxReleasePowerIrp @ 0x1401715C8 (PopFxReleasePowerIrp.c)
 *     PopIrpWorker @ 0x140171720 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x140172194 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140172340 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopRequestPowerIrp @ 0x140172540 (PopRequestPowerIrp.c)
 *     PopFxAllocatePowerIrp @ 0x14017301C (PopFxAllocatePowerIrp.c)
 *     MiQueueWorkingSetRequest @ 0x140175CDC (MiQueueWorkingSetRequest.c)
 *     PopBatteryWakeDpc @ 0x140176230 (PopBatteryWakeDpc.c)
 *     PopFxComponentWork @ 0x140177210 (PopFxComponentWork.c)
 *     PopUserPresentSet @ 0x1401777D8 (PopUserPresentSet.c)
 *     WheapAddErrorSource @ 0x14017D1BC (WheapAddErrorSource.c)
 *     MiZeroNodePages @ 0x14017F3E0 (MiZeroNodePages.c)
 *     MiUpdateAvailableEvents @ 0x14017F804 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14017F900 (MiSignalNonPagedPoolWatchers.c)
 *     KeBalanceSetManager @ 0x140183AB0 (KeBalanceSetManager.c)
 *     MiZeroLargePages @ 0x14018510C (MiZeroLargePages.c)
 *     MiReassessZeroThreads @ 0x1401856F8 (MiReassessZeroThreads.c)
 *     ExCompareExchangeCallBack @ 0x14018665C (ExCompareExchangeCallBack.c)
 *     MiSyncCommitSignals @ 0x140187FCC (MiSyncCommitSignals.c)
 *     MiModifiedPageWriter @ 0x140188720 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x14018A3A0 (MiStoreEvictThread.c)
 *     PnpCompleteSystemStartProcess @ 0x14018B1B4 (PnpCompleteSystemStartProcess.c)
 *     PopPropogateCoolingChange @ 0x14018DA84 (PopPropogateCoolingChange.c)
 *     EtwpLoggerDpc @ 0x140192D20 (EtwpLoggerDpc.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x140268CFC (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x1402698B0 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x14026B0A0 (CcDeletePartition.c)
 *     FsFilterFreeCompletionStack @ 0x140270458 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x140270920 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x14027ED14 (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x14027ED84 (IopFreeReserveIrp.c)
 *     PnpProcessWatchdogWorkItem @ 0x140289A8C (PnpProcessWatchdogWorkItem.c)
 *     PnprQuiesce @ 0x14028A46C (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14028B1E0 (PnpDiagnosticCompletionRoutine.c)
 *     KeRetryOutswapProcess @ 0x14028E544 (KeRetryOutswapProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x140293354 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1402934E4 (KiDisconnectSecondaryInterrupt.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140299C04 (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x140299ED0 (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x140299F08 (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x140299FE0 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14029A010 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x14029D390 (KiBlockAndActivateUmsThread.c)
 *     MiProcessingPageExtendComplete @ 0x1402A2AB8 (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x1402A2E68 (MiQueueControlAreaDelete.c)
 *     MiDecrementVadsBeingDeleted @ 0x1402A3E00 (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4268 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4AD4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402A4CC4 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x1402A5E60 (MiZeroPageFile.c)
 *     MiFlushAllFilesystemPages @ 0x1402AAEF0 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x1402AEC8C (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1402AEEA4 (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x1402AF314 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x1402B3194 (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x1402B4850 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x1402B4964 (MiFreeOverlappedFlushEntry.c)
 *     MiDeleteExtentPfns @ 0x1402B59C0 (MiDeleteExtentPfns.c)
 *     MiAttemptPageFileReductionApc @ 0x1402B7360 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402B7E20 (MiFinishPageFileExtension.c)
 *     MiFlushAllHintedStorePages @ 0x1402B7F34 (MiFlushAllHintedStorePages.c)
 *     MiIrpCompletionApcRoutine @ 0x1402B8250 (MiIrpCompletionApcRoutine.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1402B8870 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiFinishHoldingDirtyFaults @ 0x1402B94EC (MiFinishHoldingDirtyFaults.c)
 *     MiPageNotZero @ 0x1402BFA48 (MiPageNotZero.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1402C4264 (MmStoreFlushOutstandingEvictions.c)
 *     MiDecrementCloneHeaderCount @ 0x1402C9668 (MiDecrementCloneHeaderCount.c)
 *     MiDeleteCloneDescriptor @ 0x1402C969C (MiDeleteCloneDescriptor.c)
 *     MiDeletePartitionResources @ 0x1402D0EAC (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x1402D23BC (MiReturnCrossPartitionCharges.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402D2BF0 (NtSignalAndWaitForSingleObject.c)
 *     PopQueueDirectedDripsWork @ 0x1402D6A68 (PopQueueDirectedDripsWork.c)
 *     PopDeviceIdleCompletion @ 0x1402D6F70 (PopDeviceIdleCompletion.c)
 *     PopFxCompleteComponentPerfState @ 0x1402D78B8 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1402D79BC (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x1402D7B20 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDeviceDpm @ 0x1402D7C34 (PopFxDestroyDeviceDpm.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1402D7D80 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x1402D7E00 (PopFxDeviceWork.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x1402D7EC0 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxPlatformIdleVeto @ 0x1402D8B10 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x1402D8CF0 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1402D91D4 (PopFxReleaseAcpiRefDevice.c)
 *     PopFxReleaseDevice @ 0x1402D9204 (PopFxReleaseDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x1402DA250 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x1402DA360 (PopFxUpdateProcessorIdleState.c)
 *     PopUpdateWakeSourceWorker @ 0x1402DBD60 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x1402DC590 (PopBatteryIrpComplete.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1402DDEF0 (PopPepStartDeviceUnregisterActivity.c)
 *     PopFxAcpiForwardNotification @ 0x1402E823C (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1402E82E0 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1402E8380 (PopFxAcpiForwardPepWorkRequest.c)
 *     PsDispatchIumService @ 0x1402EAA94 (PsDispatchIumService.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140301C94 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140303560 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140308D50 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140308E30 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x14030E570 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x140313D30 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x140316598 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140316C50 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140316CC0 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x140316D20 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x140319E40 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x140319E90 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x14031BEA0 (ExReleaseRundownProtectionEx.c)
 *     WheapProcessWorkQueueItem @ 0x1403203D0 (WheapProcessWorkQueueItem.c)
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
 *     CmpDeleteKeyObject @ 0x14063F520 (CmpDeleteKeyObject.c)
 *     NtSetEvent @ 0x140646270 (NtSetEvent.c)
 *     PfGetCompletedTrace @ 0x14064B654 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14064B8E0 (PfTTraceListAdd.c)
 *     NtQueryVolumeInformationFile @ 0x14065E480 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x140661740 (IopQueryXxxInformation.c)
 *     MiPfExecuteReadList @ 0x1406627BC (MiPfExecuteReadList.c)
 *     RtlDecompressBufferLZNT1 @ 0x140663590 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x140663730 (RtlDecompressFragmentLZNT1.c)
 *     PfSnEndTrace @ 0x140669374 (PfSnEndTrace.c)
 *     PfTReplaceCurrentBuffer @ 0x14066A7DC (PfTReplaceCurrentBuffer.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140680D80 (PiDrvDbLoadNodeWorkerCallback.c)
 *     sub_1406884C0 @ 0x1406884C0 (sub_1406884C0.c)
 *     IopTrackLink @ 0x14068BD48 (IopTrackLink.c)
 *     WmipQueueNotification @ 0x14068F338 (WmipQueueNotification.c)
 *     CmpPostApc @ 0x140694C10 (CmpPostApc.c)
 *     CmpSignalDeferredPosts @ 0x140694FB4 (CmpSignalDeferredPosts.c)
 *     IopGetSetSecurityObject @ 0x1406990F0 (IopGetSetSecurityObject.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1406A65E0 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1406AF1B0 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     ExpWnfNotifySubscription @ 0x1406B7828 (ExpWnfNotifySubscription.c)
 *     EtwpFreeLoggerContext @ 0x1406C08C0 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406C0EE4 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C2FC8 (EtwpSynchronizeWithLogger.c)
 *     AlpcpTrackPortReferences @ 0x1406C3FE4 (AlpcpTrackPortReferences.c)
 *     IopLoadUnloadDriver @ 0x1406C6770 (IopLoadUnloadDriver.c)
 *     RtlRunOnceComplete @ 0x1406C7AA0 (RtlRunOnceComplete.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x1406CB190 (CmpGetVolumeClusterSizeCompletion.c)
 *     EtwpStopLoggerInstance @ 0x1406CB874 (EtwpStopLoggerInstance.c)
 *     NtWriteFileGather @ 0x1406CC880 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD3B0 (NtReadFileScatter.c)
 *     EtwpDisassociateConsumer @ 0x1406CED60 (EtwpDisassociateConsumer.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406D0BA0 (PfSnTracingStateExWorkerRoutine.c)
 *     MiInSwapStoreWorker @ 0x1406D0EE0 (MiInSwapStoreWorker.c)
 *     PopCompleteAction @ 0x1406DD028 (PopCompleteAction.c)
 *     MiDereferenceSessionFinal @ 0x1406E05D8 (MiDereferenceSessionFinal.c)
 *     PopFinalizeWakeInfo @ 0x1406E1180 (PopFinalizeWakeInfo.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1406EF02C (PopFxUnregisterDeviceOrWait.c)
 *     PiUEventHandleVetoEvent @ 0x1406FF7F0 (PiUEventHandleVetoEvent.c)
 *     IoSetInformation @ 0x1407012A0 (IoSetInformation.c)
 *     DbgkRegisterErrorPort @ 0x1407024C0 (DbgkRegisterErrorPort.c)
 *     IopInvalidateVolumesForDevice @ 0x140704F6C (IopInvalidateVolumesForDevice.c)
 *     WmipAddDataSource @ 0x1407075F0 (WmipAddDataSource.c)
 *     WmipReleaseCollectionEnabled @ 0x14070F0F0 (WmipReleaseCollectionEnabled.c)
 *     IopDestroyActiveConnectBlock @ 0x140710B7C (IopDestroyActiveConnectBlock.c)
 *     NtNotifyChangeSession @ 0x14071B8D0 (NtNotifyChangeSession.c)
 *     PfGenerateTrace @ 0x14071BDE4 (PfGenerateTrace.c)
 *     MmSetSessionObjectIoEvent @ 0x14071DFA0 (MmSetSessionObjectIoEvent.c)
 *     PopReleaseTransitionLock @ 0x14071E724 (PopReleaseTransitionLock.c)
 *     PopUserPresentSetWorker @ 0x14071F120 (PopUserPresentSetWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x1407325A0 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140735B50 (CmpLoadHiveThread.c)
 *     ArbBuildAssignmentOrdering @ 0x140739458 (ArbBuildAssignmentOrdering.c)
 *     MUIRegistrySystemRoutine @ 0x14073D910 (MUIRegistrySystemRoutine.c)
 *     PfTLoggingWorker @ 0x14073F950 (PfTLoggingWorker.c)
 *     MmStoreRegister @ 0x14074BD4C (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x14074C930 (MiInsertPageFileInList.c)
 *     PopThermalWorker @ 0x140750F80 (PopThermalWorker.c)
 *     PopFanWorker @ 0x1407513A0 (PopFanWorker.c)
 *     ExpPartitionCreatePool @ 0x140754964 (ExpPartitionCreatePool.c)
 *     ArbArbiterHandler @ 0x140755490 (ArbArbiterHandler.c)
 *     CmpWaitForHiveMount @ 0x1407555C4 (CmpWaitForHiveMount.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140755E14 (IopAcquireReleaseConnectLockInternal.c)
 *     CmpInitializeSystemHivesLoad @ 0x140756844 (CmpInitializeSystemHivesLoad.c)
 *     WheapEtwEnableCallback @ 0x1407614A0 (WheapEtwEnableCallback.c)
 *     CmThawRegistry @ 0x1407F5A94 (CmThawRegistry.c)
 *     CmpPostApcRunDown @ 0x140801010 (CmpPostApcRunDown.c)
 *     DbgkpCloseObject @ 0x14080E7C0 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x14080F424 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x14080F70C (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x14080FA00 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x14080FE60 (NtDebugContinue.c)
 *     DbgkpLkmdSnapThreadApc @ 0x140811FD0 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x140815590 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopAllocateIrpCleanup @ 0x1408193D4 (IopAllocateIrpCleanup.c)
 *     IopConnectLinkTrackingPort @ 0x1408199F0 (IopConnectLinkTrackingPort.c)
 *     IopExceptionCleanup @ 0x140819B48 (IopExceptionCleanup.c)
 *     IopSendMessageToTrackService @ 0x14081A974 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x14081CBD0 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x140823020 (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14082743C (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x1408337A0 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x14083CE74 (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x1408455C8 (KeUpdateUmsThreadState.c)
 *     PfTCleanup @ 0x1408651FC (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x140865A30 (PfpParametersWatcher.c)
 *     PopFxUnregisterDevice @ 0x14086A7CC (PopFxUnregisterDevice.c)
 *     PopBatteryReadTag @ 0x14086D47C (PopBatteryReadTag.c)
 *     TtmiCloseEventQueue @ 0x140882250 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408825B4 (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x1408870C0 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x140887198 (PspDeleteServerSiloGlobals.c)
 *     PsIsVsmEnclaveTerminated @ 0x14088E34C (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x14088E45C (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x14088E6C0 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x14089994C (RtlpCtSelfSubscribe.c)
 *     SmcCacheAdd @ 0x1408AE8B4 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x1408AEA48 (SmcCacheDelete.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x1408C3D30 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408C4510 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1408C67C8 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExpPartitionDestroy @ 0x1408D6354 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x1408D94C0 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x1408DBE90 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     SbpVmbusNotificationHandler @ 0x140905CF0 (SbpVmbusNotificationHandler.c)
 *     KdpTimeSlipWork @ 0x140917C10 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x140930930 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140933DD4 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140943610 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x14094F440 (AnFwpFadeAnimationTimer.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 *     MiInitializePagedPoolEvents @ 0x1409BD640 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x1400AC9F0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2F50 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4DB0 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDC40 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBDF0 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14028DCA8 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FC8C (EtwTraceEnqueueWork.c)
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
