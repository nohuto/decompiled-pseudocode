/*
 * XREFs of KeSetEvent @ 0x1400C2A40
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
 *     MiUnlinkNodeLargePageHelper @ 0x1400646F0 (MiUnlinkNodeLargePageHelper.c)
 *     MiFinishVadDeletion @ 0x140067760 (MiFinishVadDeletion.c)
 *     MiProcessWorkingSets @ 0x14006CEC0 (MiProcessWorkingSets.c)
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     MiInsertUnusedSubsection @ 0x14007B7CC (MiInsertUnusedSubsection.c)
 *     CcDeleteSharedCacheMap @ 0x14007C260 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14007C520 (CcUninitializeCacheMap.c)
 *     CcDereferencePartition @ 0x14007C988 (CcDereferencePartition.c)
 *     CcWriteBehindInternal @ 0x14007D2E0 (CcWriteBehindInternal.c)
 *     CcWorkerThread @ 0x14007F2D0 (CcWorkerThread.c)
 *     MiQueuePageAccessLog @ 0x140088970 (MiQueuePageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x140088AE0 (ExReferenceCallBackBlock.c)
 *     WmipUnreferenceRegEntry @ 0x14008DA70 (WmipUnreferenceRegEntry.c)
 *     ExNotifyWithProcessing @ 0x14008E498 (ExNotifyWithProcessing.c)
 *     ExpWakePushLock @ 0x140091530 (ExpWakePushLock.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140092010 (LZNT1DecompressChunkWorkItem.c)
 *     MiDecrementControlAreaCount @ 0x140094D54 (MiDecrementControlAreaCount.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 *     MiIncreaseAvailablePages @ 0x14009CE20 (MiIncreaseAvailablePages.c)
 *     PopQueueTargetDpc @ 0x1400A5F00 (PopQueueTargetDpc.c)
 *     AlpcpSignalAndWait @ 0x1400ABC10 (AlpcpSignalAndWait.c)
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     CcPinFileData @ 0x1400AE210 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x1400AF610 (CcFreeVirtualAddress.c)
 *     ExpWorkerThread @ 0x1400B5BB0 (ExpWorkerThread.c)
 *     ExpQueueWorkItem @ 0x1400B7260 (ExpQueueWorkItem.c)
 *     KiDetachProcess @ 0x1400B9BE0 (KiDetachProcess.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiReadyThread @ 0x1400C5040 (KiReadyThread.c)
 *     AlpcpSignal @ 0x1400D3870 (AlpcpSignal.c)
 *     PfFileInfoNotify @ 0x1400D3E60 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x1400D4B30 (PfSnReferenceProcessTrace.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400E0158 (CcPostWorkQueueAsyncRead.c)
 *     CcPrepareMdlWrite @ 0x1400E1AC0 (CcPrepareMdlWrite.c)
 *     PfSnRemoveProcessTrace @ 0x1400E25FC (PfSnRemoveProcessTrace.c)
 *     PfpReturnAccessBuffer @ 0x1400E281C (PfpReturnAccessBuffer.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7978 (CcPurgeAndClearCacheSection.c)
 *     MiDecreaseAvailablePages @ 0x1400EE8CC (MiDecreaseAvailablePages.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400EEE4C (MiStoreUpdateMemoryConditions.c)
 *     MiWorkingSetManager @ 0x1400EF634 (MiWorkingSetManager.c)
 *     MiReclaimSystemVa @ 0x1400F72F8 (MiReclaimSystemVa.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9890 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     IoAcquireRemoveLockEx @ 0x1400FE390 (IoAcquireRemoveLockEx.c)
 *     PopFxProcessWork @ 0x1400FE410 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1400FECCC (PopFxCompleteComponentActivation.c)
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     CcCanIWrite @ 0x140104DA0 (CcCanIWrite.c)
 *     ExfReleaseRundownProtection @ 0x14010B2D0 (ExfReleaseRundownProtection.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x14010C990 (ExReleaseRundownProtectionCacheAware.c)
 *     KiRequestProcessInSwap @ 0x14010CB00 (KiRequestProcessInSwap.c)
 *     ExpUnblockPushLock @ 0x140111BF0 (ExpUnblockPushLock.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D214 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x14011D674 (SmKmStoreHelperSendCommand.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011D770 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E350 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     IoReleaseRemoveLockEx @ 0x14011EE80 (IoReleaseRemoveLockEx.c)
 *     PfpEventHandleFullBuffer @ 0x1401229B0 (PfpEventHandleFullBuffer.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140129910 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x14012AFF0 (ExpPartitionCreateThreadIfNecessary.c)
 *     CcNotifyWriteBehindInternal @ 0x14012C00C (CcNotifyWriteBehindInternal.c)
 *     SmKmGenericCompletion @ 0x14012DC90 (SmKmGenericCompletion.c)
 *     SepRmCallLsa @ 0x14012FC10 (SepRmCallLsa.c)
 *     CmpLazyFlushDpcRoutine @ 0x140135290 (CmpLazyFlushDpcRoutine.c)
 *     PnpUnlockDeviceActionQueue @ 0x140135460 (PnpUnlockDeviceActionQueue.c)
 *     SmKmStoreHelperWorker @ 0x140135BA0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x1401375C0 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     ExpEnumerateCallback @ 0x1401386D0 (ExpEnumerateCallback.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140139330 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x14013AB80 (ExpWorkQueueManagerReaperTimer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14013B3B0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PopUnregisterPowerSettingCallback @ 0x140141F50 (PopUnregisterPowerSettingCallback.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14014C08C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmIoRequestComplete @ 0x14014CA9C (SmIoRequestComplete.c)
 *     SmFpFree @ 0x14014CB3C (SmFpFree.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014DB74 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14014EE10 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiFinishResume @ 0x140151A10 (MiFinishResume.c)
 *     MiFlushAllPagesWorker @ 0x1401532B8 (MiFlushAllPagesWorker.c)
 *     MiWakeModifiedPageWriter @ 0x1401533D8 (MiWakeModifiedPageWriter.c)
 *     MiProcessDereferenceList @ 0x140154150 (MiProcessDereferenceList.c)
 *     MiStoreSetEvictPageFile @ 0x1401561DC (MiStoreSetEvictPageFile.c)
 *     PoFxNotifySurprisePowerOn @ 0x1401587D0 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x140159280 (PoFxPowerControl.c)
 *     PopTimestampTargetProcessor @ 0x140159900 (PopTimestampTargetProcessor.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140159AA4 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140159B10 (PfpScenCtxWaiterTimedOut.c)
 *     PopFxActivateDevice @ 0x14015A1A8 (PopFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x14015A65C (PoFxPrepareDevice.c)
 *     PnpRemoveDeviceActionRequests @ 0x14015EF64 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x14015F400 (PnpDeviceActionWorker.c)
 *     CcDeleteBcbs @ 0x14016059C (CcDeleteBcbs.c)
 *     MiFreePagedPoolPages @ 0x140161B50 (MiFreePagedPoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x140162D70 (MiAllocatePagedPoolPages.c)
 *     MiFreeExcessSegments @ 0x1401644D4 (MiFreeExcessSegments.c)
 *     PnpUnlockMountableDevice @ 0x140169BE8 (PnpUnlockMountableDevice.c)
 *     VfPoolDelayFreeIfPossible @ 0x14016C430 (VfPoolDelayFreeIfPossible.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140170AE0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopRequestCompletion @ 0x140170F50 (PopRequestCompletion.c)
 *     PopFxReleasePowerIrp @ 0x1401716E8 (PopFxReleasePowerIrp.c)
 *     PopIrpWorker @ 0x140171840 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x1401722B4 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140172460 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopRequestPowerIrp @ 0x140172660 (PopRequestPowerIrp.c)
 *     PopFxAllocatePowerIrp @ 0x14017313C (PopFxAllocatePowerIrp.c)
 *     MiQueueWorkingSetRequest @ 0x140175DFC (MiQueueWorkingSetRequest.c)
 *     PopBatteryWakeDpc @ 0x140176350 (PopBatteryWakeDpc.c)
 *     PopFxComponentWork @ 0x140177330 (PopFxComponentWork.c)
 *     PopUserPresentSet @ 0x1401778F8 (PopUserPresentSet.c)
 *     WheapAddErrorSource @ 0x14017D31C (WheapAddErrorSource.c)
 *     MiZeroNodePages @ 0x14017F540 (MiZeroNodePages.c)
 *     MiUpdateAvailableEvents @ 0x14017F964 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14017FA60 (MiSignalNonPagedPoolWatchers.c)
 *     KeBalanceSetManager @ 0x140183C10 (KeBalanceSetManager.c)
 *     MiZeroLargePages @ 0x14018526C (MiZeroLargePages.c)
 *     MiReassessZeroThreads @ 0x140185858 (MiReassessZeroThreads.c)
 *     ExCompareExchangeCallBack @ 0x1401867BC (ExCompareExchangeCallBack.c)
 *     MiSyncCommitSignals @ 0x14018812C (MiSyncCommitSignals.c)
 *     MiModifiedPageWriter @ 0x140188880 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x14018A500 (MiStoreEvictThread.c)
 *     PnpCompleteSystemStartProcess @ 0x14018B314 (PnpCompleteSystemStartProcess.c)
 *     PopPropogateCoolingChange @ 0x14018DBE4 (PopPropogateCoolingChange.c)
 *     EtwpLoggerDpc @ 0x140192E80 (EtwpLoggerDpc.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x140268FEC (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x140269BA0 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x14026B390 (CcDeletePartition.c)
 *     FsFilterFreeCompletionStack @ 0x140270748 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x140270C10 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x14027F004 (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x14027F074 (IopFreeReserveIrp.c)
 *     PnpProcessWatchdogWorkItem @ 0x140289D7C (PnpProcessWatchdogWorkItem.c)
 *     PnprQuiesce @ 0x14028A75C (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14028B4D0 (PnpDiagnosticCompletionRoutine.c)
 *     KeRetryOutswapProcess @ 0x14028E834 (KeRetryOutswapProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x140293644 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1402937D4 (KiDisconnectSecondaryInterrupt.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140299EF4 (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x14029A1C0 (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x14029A1F8 (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x14029A2D0 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14029A300 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x14029D680 (KiBlockAndActivateUmsThread.c)
 *     MiProcessingPageExtendComplete @ 0x1402A2DA8 (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x1402A3158 (MiQueueControlAreaDelete.c)
 *     MiDecrementVadsBeingDeleted @ 0x1402A40F0 (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4558 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4DC4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402A4FB4 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x1402A6150 (MiZeroPageFile.c)
 *     MiFlushAllFilesystemPages @ 0x1402AB1E0 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x1402AEF7C (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1402AF194 (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x1402AF604 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x1402B3484 (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x1402B4B40 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x1402B4C54 (MiFreeOverlappedFlushEntry.c)
 *     MiDeleteExtentPfns @ 0x1402B5CB0 (MiDeleteExtentPfns.c)
 *     MiAttemptPageFileReductionApc @ 0x1402B7650 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402B8110 (MiFinishPageFileExtension.c)
 *     MiFlushAllHintedStorePages @ 0x1402B8224 (MiFlushAllHintedStorePages.c)
 *     MiIrpCompletionApcRoutine @ 0x1402B8540 (MiIrpCompletionApcRoutine.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1402B8B60 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiFinishHoldingDirtyFaults @ 0x1402B97DC (MiFinishHoldingDirtyFaults.c)
 *     MiPageNotZero @ 0x1402BFD38 (MiPageNotZero.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1402C4554 (MmStoreFlushOutstandingEvictions.c)
 *     MiDecrementCloneHeaderCount @ 0x1402C9958 (MiDecrementCloneHeaderCount.c)
 *     MiDeleteCloneDescriptor @ 0x1402C998C (MiDeleteCloneDescriptor.c)
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x1402D26AC (MiReturnCrossPartitionCharges.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402D2EE0 (NtSignalAndWaitForSingleObject.c)
 *     PopQueueDirectedDripsWork @ 0x1402D6D58 (PopQueueDirectedDripsWork.c)
 *     PopDeviceIdleCompletion @ 0x1402D7260 (PopDeviceIdleCompletion.c)
 *     PopFxCompleteComponentPerfState @ 0x1402D7BA8 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1402D7CAC (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x1402D7E10 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDeviceDpm @ 0x1402D7F24 (PopFxDestroyDeviceDpm.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1402D8070 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x1402D80F0 (PopFxDeviceWork.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x1402D81B0 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxPlatformIdleVeto @ 0x1402D8E00 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x1402D8FE0 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1402D94C4 (PopFxReleaseAcpiRefDevice.c)
 *     PopFxReleaseDevice @ 0x1402D94F4 (PopFxReleaseDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x1402DA540 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x1402DA650 (PopFxUpdateProcessorIdleState.c)
 *     PopUpdateWakeSourceWorker @ 0x1402DC050 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x1402DC880 (PopBatteryIrpComplete.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1402DE1E0 (PopPepStartDeviceUnregisterActivity.c)
 *     PopFxAcpiForwardNotification @ 0x1402E852C (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1402E85D0 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1402E8670 (PopFxAcpiForwardPepWorkRequest.c)
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140301F84 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140303850 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140309040 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140309120 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x14030E860 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x140314020 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x140316888 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140316F40 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140316FB0 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x140317010 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x14031A130 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x14031A180 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x14031C190 (ExReleaseRundownProtectionEx.c)
 *     WheapProcessWorkQueueItem @ 0x1403206C0 (WheapProcessWorkQueueItem.c)
 *     EmpReleasePagingReference @ 0x140566618 (EmpReleasePagingReference.c)
 *     PopHandleWakeSources @ 0x140567540 (PopHandleWakeSources.c)
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PopEndMirroring @ 0x14056C600 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x14056D0F0 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14056D274 (MmDuplicateMemory.c)
 *     PopSystemIrpCompletion @ 0x14056D720 (PopSystemIrpCompletion.c)
 *     ExpSetSwappingKernelApc @ 0x14056E710 (ExpSetSwappingKernelApc.c)
 *     PopFlushVolumeWorker @ 0x14056E9E0 (PopFlushVolumeWorker.c)
 *     PfpScenCtxPrefetchStateSet @ 0x14056EC34 (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxScenarioSet @ 0x14056FA68 (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x14057A814 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x14057BBC0 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x14057CBF4 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x14057CD54 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x14057D9C0 (PopGracefulShutdown.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x14057E9F0 (PopBuildDeviceNotifyListWatchdog.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14057EA10 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PnpDeviceEventWorker @ 0x14058CBC0 (PnpDeviceEventWorker.c)
 *     PnpCompleteDeviceEvent @ 0x14058CFC0 (PnpCompleteDeviceEvent.c)
 *     PiUEventDereferenceEventEntry @ 0x14058FAD8 (PiUEventDereferenceEventEntry.c)
 *     IopMountVolume @ 0x1405A3E64 (IopMountVolume.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     CmpCompleteUnloadKey @ 0x1405B061C (CmpCompleteUnloadKey.c)
 *     CmpWakeWriteQueueWaiters @ 0x1405B5D38 (CmpWakeWriteQueueWaiters.c)
 *     EtwpQueueNotification @ 0x1405C154C (EtwpQueueNotification.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1405C2198 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpLogger @ 0x1405C2430 (EtwpLogger.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1405C29BC (EtwpRealtimeInjectEtwBuffer.c)
 *     CmLoadAppKey @ 0x1405D054C (CmLoadAppKey.c)
 *     CmpPostNotify @ 0x1405DD29C (CmpPostNotify.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     CmNotifyRunDown @ 0x1405FA17C (CmNotifyRunDown.c)
 *     NtLockFile @ 0x1405FB000 (NtLockFile.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140604DE8 (PspEvaluateAndNotifyEmptyJob.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406119F8 (ExpWnfNotifyNameSubscribers.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406366C0 (AlpcpCompleteDispatchMessage.c)
 *     NtWriteFile @ 0x140639C60 (NtWriteFile.c)
 *     IopCloseFile @ 0x14063AB30 (IopCloseFile.c)
 *     NtReadFile @ 0x14063B160 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063BA30 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     CmpDeleteKeyObject @ 0x140640520 (CmpDeleteKeyObject.c)
 *     NtSetEvent @ 0x140647270 (NtSetEvent.c)
 *     PfGetCompletedTrace @ 0x14064C7F4 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14064CA80 (PfTTraceListAdd.c)
 *     NtQueryVolumeInformationFile @ 0x14065F620 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x1406628E0 (IopQueryXxxInformation.c)
 *     MiPfExecuteReadList @ 0x14066395C (MiPfExecuteReadList.c)
 *     RtlDecompressBufferLZNT1 @ 0x140664730 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1406648D0 (RtlDecompressFragmentLZNT1.c)
 *     PfSnEndTrace @ 0x14066A514 (PfSnEndTrace.c)
 *     PfTReplaceCurrentBuffer @ 0x14066B97C (PfTReplaceCurrentBuffer.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140681F20 (PiDrvDbLoadNodeWorkerCallback.c)
 *     sub_140689660 @ 0x140689660 (sub_140689660.c)
 *     IopTrackLink @ 0x14068CEE8 (IopTrackLink.c)
 *     WmipQueueNotification @ 0x1406904D8 (WmipQueueNotification.c)
 *     CmpPostApc @ 0x140695DB0 (CmpPostApc.c)
 *     CmpSignalDeferredPosts @ 0x140696154 (CmpSignalDeferredPosts.c)
 *     IopGetSetSecurityObject @ 0x14069A290 (IopGetSetSecurityObject.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1406A7860 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1406B0430 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     ExpWnfNotifySubscription @ 0x1406B8AA8 (ExpWnfNotifySubscription.c)
 *     EtwpFreeLoggerContext @ 0x1406C1B40 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406C2164 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C4248 (EtwpSynchronizeWithLogger.c)
 *     AlpcpTrackPortReferences @ 0x1406C5264 (AlpcpTrackPortReferences.c)
 *     IopLoadUnloadDriver @ 0x1406C79F0 (IopLoadUnloadDriver.c)
 *     RtlRunOnceComplete @ 0x1406C8D20 (RtlRunOnceComplete.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x1406CC410 (CmpGetVolumeClusterSizeCompletion.c)
 *     EtwpStopLoggerInstance @ 0x1406CCAF4 (EtwpStopLoggerInstance.c)
 *     NtWriteFileGather @ 0x1406CDB00 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CE630 (NtReadFileScatter.c)
 *     EtwpDisassociateConsumer @ 0x1406CFFE0 (EtwpDisassociateConsumer.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406D1E20 (PfSnTracingStateExWorkerRoutine.c)
 *     MiInSwapStoreWorker @ 0x1406D2160 (MiInSwapStoreWorker.c)
 *     PopCompleteAction @ 0x1406DE2A8 (PopCompleteAction.c)
 *     MiDereferenceSessionFinal @ 0x1406E1858 (MiDereferenceSessionFinal.c)
 *     PopFinalizeWakeInfo @ 0x1406E2400 (PopFinalizeWakeInfo.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1406F02AC (PopFxUnregisterDeviceOrWait.c)
 *     PiUEventHandleVetoEvent @ 0x140700A70 (PiUEventHandleVetoEvent.c)
 *     IoSetInformation @ 0x140702520 (IoSetInformation.c)
 *     DbgkRegisterErrorPort @ 0x140703740 (DbgkRegisterErrorPort.c)
 *     IopInvalidateVolumesForDevice @ 0x1407061EC (IopInvalidateVolumesForDevice.c)
 *     WmipAddDataSource @ 0x140708870 (WmipAddDataSource.c)
 *     WmipReleaseCollectionEnabled @ 0x140710370 (WmipReleaseCollectionEnabled.c)
 *     IopDestroyActiveConnectBlock @ 0x140711DFC (IopDestroyActiveConnectBlock.c)
 *     NtNotifyChangeSession @ 0x14071CB50 (NtNotifyChangeSession.c)
 *     PfGenerateTrace @ 0x14071D064 (PfGenerateTrace.c)
 *     MmSetSessionObjectIoEvent @ 0x14071F220 (MmSetSessionObjectIoEvent.c)
 *     PopReleaseTransitionLock @ 0x14071F9A4 (PopReleaseTransitionLock.c)
 *     PopUserPresentSetWorker @ 0x1407203A0 (PopUserPresentSetWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 *     ArbBuildAssignmentOrdering @ 0x14073A628 (ArbBuildAssignmentOrdering.c)
 *     MUIRegistrySystemRoutine @ 0x14073EAE0 (MUIRegistrySystemRoutine.c)
 *     PfTLoggingWorker @ 0x140740B20 (PfTLoggingWorker.c)
 *     MmStoreRegister @ 0x14074CF1C (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x14074DB00 (MiInsertPageFileInList.c)
 *     PopThermalWorker @ 0x140752150 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140752570 (PopFanWorker.c)
 *     ExpPartitionCreatePool @ 0x140755B34 (ExpPartitionCreatePool.c)
 *     ArbArbiterHandler @ 0x140756660 (ArbArbiterHandler.c)
 *     CmpWaitForHiveMount @ 0x140756794 (CmpWaitForHiveMount.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140756FE4 (IopAcquireReleaseConnectLockInternal.c)
 *     CmpInitializeSystemHivesLoad @ 0x140757A14 (CmpInitializeSystemHivesLoad.c)
 *     WheapEtwEnableCallback @ 0x140762670 (WheapEtwEnableCallback.c)
 *     CmThawRegistry @ 0x1407F6C74 (CmThawRegistry.c)
 *     CmpPostApcRunDown @ 0x1408021F0 (CmpPostApcRunDown.c)
 *     DbgkpCloseObject @ 0x14080F9A0 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x140810604 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x1408108EC (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x140810BE0 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x140811040 (NtDebugContinue.c)
 *     DbgkpLkmdSnapThreadApc @ 0x1408131B0 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x140816770 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopConnectLinkTrackingPort @ 0x14081ABD0 (IopConnectLinkTrackingPort.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     IopSendMessageToTrackService @ 0x14081BB54 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x14081DDB0 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x140824200 (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14082861C (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x14083E0B4 (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x140846808 (KeUpdateUmsThreadState.c)
 *     PfTCleanup @ 0x14086643C (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x140866C70 (PfpParametersWatcher.c)
 *     PopFxUnregisterDevice @ 0x14086BA0C (PopFxUnregisterDevice.c)
 *     PopBatteryReadTag @ 0x14086E6BC (PopBatteryReadTag.c)
 *     TtmiCloseEventQueue @ 0x140883490 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408837F4 (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x140888300 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x1408883D8 (PspDeleteServerSiloGlobals.c)
 *     PsIsVsmEnclaveTerminated @ 0x14088F58C (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x14088F69C (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x14088F900 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x14089AB8C (RtlpCtSelfSubscribe.c)
 *     SmcCacheAdd @ 0x1408AFAF4 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x1408AFC88 (SmcCacheDelete.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x1408C4FD0 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408C57B0 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1408C7A68 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExpPartitionDestroy @ 0x1408D75F4 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x1408DA760 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x1408DD130 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     SbpVmbusNotificationHandler @ 0x140906F90 (SbpVmbusNotificationHandler.c)
 *     KdpTimeSlipWork @ 0x140918C10 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x140931930 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140934DD4 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140944610 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140950440 (AnFwpFadeAnimationTimer.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 *     MiInitializePagedPoolEvents @ 0x1409BE640 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
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
