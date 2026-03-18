/*
 * XREFs of KeSetEvent @ 0x140067720
 * Callers:
 *     EtwpSwitchBuffer @ 0x140003560 (EtwpSwitchBuffer.c)
 *     MiIssueHardFaultIo @ 0x140006A94 (MiIssueHardFaultIo.c)
 *     AlpcpSignalAndWait @ 0x14000CB90 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x14000D460 (AlpcpSignal.c)
 *     CcInitializeCacheMapEx @ 0x14000D700 (CcInitializeCacheMapEx.c)
 *     CcUninitializeCacheMap @ 0x14000E330 (CcUninitializeCacheMap.c)
 *     MiEmptyPageAccessLog @ 0x14001C930 (MiEmptyPageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x14001CEA0 (ExReferenceCallBackBlock.c)
 *     MiInsertProtectedStandbyPage @ 0x140024110 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002BE20 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x14002F250 (MiIncreaseAvailablePages.c)
 *     KiDetachProcess @ 0x14003A6F0 (KiDetachProcess.c)
 *     ExpWorkerFactoryStartDeferredWork @ 0x1400457F0 (ExpWorkerFactoryStartDeferredWork.c)
 *     MiProcessWorkingSets @ 0x140047BB0 (MiProcessWorkingSets.c)
 *     MiFinishVadDeletion @ 0x140056B50 (MiFinishVadDeletion.c)
 *     ExpWorkerThread @ 0x140059C30 (ExpWorkerThread.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     KiReadyThread @ 0x140067ED0 (KiReadyThread.c)
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 *     MiInsertUnusedSubsection @ 0x14006FCC0 (MiInsertUnusedSubsection.c)
 *     MiCheckControlArea @ 0x140070F40 (MiCheckControlArea.c)
 *     CcFlushCachePriv @ 0x140077160 (CcFlushCachePriv.c)
 *     CcUnpinFileDataEx @ 0x140078D40 (CcUnpinFileDataEx.c)
 *     CcWorkerThread @ 0x14007D940 (CcWorkerThread.c)
 *     CcDereferencePartition @ 0x14007E0D4 (CcDereferencePartition.c)
 *     CcWriteBehindInternal @ 0x14007E1E0 (CcWriteBehindInternal.c)
 *     CcDeleteSharedCacheMap @ 0x14007F890 (CcDeleteSharedCacheMap.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x14008059C (ExpPartitionCreateThreadIfNecessary.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140083FF0 (LZNT1DecompressChunkWorkItem.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     KiRequestProcessInSwap @ 0x140090510 (KiRequestProcessInSwap.c)
 *     KiDecrementProcessStackCount @ 0x1400909F0 (KiDecrementProcessStackCount.c)
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     PfFileInfoNotify @ 0x140093D90 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x140094AA0 (PfSnReferenceProcessTrace.c)
 *     PfpReturnAccessBuffer @ 0x140098294 (PfpReturnAccessBuffer.c)
 *     PfSnRemoveProcessTrace @ 0x1400989FC (PfSnRemoveProcessTrace.c)
 *     WmipUnreferenceRegEntry @ 0x140099D28 (WmipUnreferenceRegEntry.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14009C010 (MiUnlinkNodeLargePageHelper.c)
 *     ExpWakePushLock @ 0x14009E580 (ExpWakePushLock.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400A9898 (CcPostWorkQueueAsyncRead.c)
 *     IoAcquireRemoveLockEx @ 0x1400B0BA0 (IoAcquireRemoveLockEx.c)
 *     PopFxProcessWork @ 0x1400B0C20 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1400B14D0 (PopFxCompleteComponentActivation.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1400B387C (PopUpdateWatchdogNoWorkersEvent.c)
 *     CcCanIWrite @ 0x1400B4600 (CcCanIWrite.c)
 *     PopQueueTargetDpc @ 0x1400BAA48 (PopQueueTargetDpc.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x1400D3150 (MiHandleTransitionFault.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     CcPinFileData @ 0x1400D47D0 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x1400D5C50 (CcFreeVirtualAddress.c)
 *     MiDecreaseAvailablePages @ 0x1400DB4B8 (MiDecreaseAvailablePages.c)
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiDecrementControlAreaCount @ 0x1400DFA24 (MiDecrementControlAreaCount.c)
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 *     MiWorkingSetManager @ 0x1400F1CC8 (MiWorkingSetManager.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400F3268 (MiStoreUpdateMemoryConditions.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA0F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExNotifyWithProcessing @ 0x1400FA688 (ExNotifyWithProcessing.c)
 *     CmpLazyFlushDpcRoutine @ 0x1400FEAE0 (CmpLazyFlushDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1400FEFD0 (KiBalanceSetManagerDeferredRoutine.c)
 *     MiPrivateFixup @ 0x140101BD0 (MiPrivateFixup.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140102AA0 (ExReleaseRundownProtectionCacheAware.c)
 *     ExfReleaseRundownProtection @ 0x140102C00 (ExfReleaseRundownProtection.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401049B0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140105330 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140106174 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x1401063C8 (SmKmStoreHelperSendCommand.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x140106470 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     ExpUnblockPushLock @ 0x14010BB14 (ExpUnblockPushLock.c)
 *     MiQueuePageAccessLog @ 0x1401134B4 (MiQueuePageAccessLog.c)
 *     IoReleaseRemoveLockEx @ 0x14011F290 (IoReleaseRemoveLockEx.c)
 *     CcNotifyWriteBehindInternal @ 0x14011F49C (CcNotifyWriteBehindInternal.c)
 *     PfpEventHandleFullBuffer @ 0x1401239D0 (PfpEventHandleFullBuffer.c)
 *     CcPurgeAndClearCacheSection @ 0x140125D84 (CcPurgeAndClearCacheSection.c)
 *     SmKmGenericCompletion @ 0x14012DD00 (SmKmGenericCompletion.c)
 *     SepRmCallLsa @ 0x140132630 (SepRmCallLsa.c)
 *     SmKmStoreHelperWorker @ 0x140135680 (SmKmStoreHelperWorker.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140135C50 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     CcPrepareMdlWrite @ 0x1401363D0 (CcPrepareMdlWrite.c)
 *     ExpEnumerateCallback @ 0x140138F70 (ExpEnumerateCallback.c)
 *     MiReclaimSystemVa @ 0x140139874 (MiReclaimSystemVa.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x14013C970 (ExpWorkQueueManagerReaperTimer.c)
 *     PopFxComponentWork @ 0x14013CBB0 (PopFxComponentWork.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x1401406D0 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     MiFlushAllHintedStorePages @ 0x1401406F8 (MiFlushAllHintedStorePages.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1401430D8 (MmStoreFlushOutstandingEvictions.c)
 *     PopFxActivateDevice @ 0x140145954 (PopFxActivateDevice.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140149054 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140149600 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmIoRequestComplete @ 0x140149DC4 (SmIoRequestComplete.c)
 *     SmFpFree @ 0x140149E64 (SmFpFree.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014B4F4 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14014C91C (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiStoreSetEvictPageFile @ 0x140158808 (MiStoreSetEvictPageFile.c)
 *     PoFxPrepareDevice @ 0x1401589B0 (PoFxPrepareDevice.c)
 *     PnpUnlockDeviceActionQueue @ 0x140158F18 (PnpUnlockDeviceActionQueue.c)
 *     MiWakeModifiedPageWriter @ 0x14015C314 (MiWakeModifiedPageWriter.c)
 *     EtwpLoggerDpc @ 0x14015CE30 (EtwpLoggerDpc.c)
 *     PnpDeviceActionWorker @ 0x14015D540 (PnpDeviceActionWorker.c)
 *     MiFlushAllPagesWorker @ 0x140160C18 (MiFlushAllPagesWorker.c)
 *     MiFinishResume @ 0x1401610F0 (MiFinishResume.c)
 *     MiProcessDereferenceList @ 0x140165044 (MiProcessDereferenceList.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140165A10 (PopCompleteNotifyTransitionCommon.c)
 *     PoFxNotifySurprisePowerOn @ 0x1401689C0 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x140169770 (PoFxPowerControl.c)
 *     PopTimestampTargetProcessor @ 0x140169F60 (PopTimestampTargetProcessor.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14016A0C4 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PfpScenCtxWaiterTimedOut @ 0x14016A164 (PfpScenCtxWaiterTimedOut.c)
 *     CcDeleteBcbs @ 0x14016A228 (CcDeleteBcbs.c)
 *     PnpUnlockMountableDevice @ 0x140170A88 (PnpUnlockMountableDevice.c)
 *     PopRequestPowerIrp @ 0x140172EB0 (PopRequestPowerIrp.c)
 *     PopFxAllocatePowerIrp @ 0x140173A60 (PopFxAllocatePowerIrp.c)
 *     PnpRemoveDeviceActionRequests @ 0x140177278 (PnpRemoveDeviceActionRequests.c)
 *     PopIrpWorker @ 0x14017AEC0 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x14017B5BC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14017B770 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14017E4C0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     VfPoolDelayFreeIfPossible @ 0x14017E7C0 (VfPoolDelayFreeIfPossible.c)
 *     PopFxReleasePowerIrp @ 0x14017EEC0 (PopFxReleasePowerIrp.c)
 *     MiQueueWorkingSetRequest @ 0x14017F1F0 (MiQueueWorkingSetRequest.c)
 *     PopUnregisterPowerSettingCallback @ 0x1401808AC (PopUnregisterPowerSettingCallback.c)
 *     PopUserPresentSet @ 0x140181308 (PopUserPresentSet.c)
 *     PopBatteryWakeDpc @ 0x140181F70 (PopBatteryWakeDpc.c)
 *     MiZeroNodePages @ 0x140188120 (MiZeroNodePages.c)
 *     MiUpdateAvailableEvents @ 0x140188504 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140188620 (MiSignalNonPagedPoolWatchers.c)
 *     WheapAddErrorSource @ 0x14018AF28 (WheapAddErrorSource.c)
 *     KeBalanceSetManager @ 0x14018D570 (KeBalanceSetManager.c)
 *     ExCompareExchangeCallBack @ 0x14018F34C (ExCompareExchangeCallBack.c)
 *     MiZeroLargePages @ 0x14018FA6C (MiZeroLargePages.c)
 *     MiReassessZeroThreads @ 0x14018FC84 (MiReassessZeroThreads.c)
 *     MiModifiedPageWriter @ 0x1401924B0 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x140192C24 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x140193590 (MiStoreEvictThread.c)
 *     PnpCompleteSystemStartProcess @ 0x1401947F4 (PnpCompleteSystemStartProcess.c)
 *     WheaLogInternalEvent @ 0x140199660 (WheaLogInternalEvent.c)
 *     PopPropogateCoolingChange @ 0x140199988 (PopPropogateCoolingChange.c)
 *     PopFxDestroyDeviceDpm @ 0x14019C7D4 (PopFxDestroyDeviceDpm.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x14019E3E0 (PopPepStartDeviceUnregisterActivity.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x14027BDBC (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x14027D3F0 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x14027EC20 (CcDeletePartition.c)
 *     FsFilterFreeCompletionStack @ 0x140284238 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x140284720 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x1402937DC (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x14029384C (IopFreeReserveIrp.c)
 *     PnpProcessWatchdogWorkItem @ 0x14029FD18 (PnpProcessWatchdogWorkItem.c)
 *     PnprQuiesce @ 0x1402A08F8 (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1402A1550 (PnpDiagnosticCompletionRoutine.c)
 *     KeRetryOutswapProcess @ 0x1402A5108 (KeRetryOutswapProcess.c)
 *     KiConnectSecondaryInterrupt @ 0x1402A9E34 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1402A9FC4 (KiDisconnectSecondaryInterrupt.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x1402B0A40 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402B0FD0 (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x1402B12D0 (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x1402B1308 (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x1402B13E0 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1402B1410 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x1402B5EFC (KiBlockAndActivateUmsThread.c)
 *     MiFreeExcessSegments @ 0x1402B99CC (MiFreeExcessSegments.c)
 *     MiProcessingPageExtendComplete @ 0x1402B9F68 (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x1402BA318 (MiQueueControlAreaDelete.c)
 *     MiDecrementVadsBeingDeleted @ 0x1402BB2C0 (MiDecrementVadsBeingDeleted.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB748 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402BBF64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402BC154 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x1402BD2F0 (MiZeroPageFile.c)
 *     MiFlushAllFilesystemPages @ 0x1402C3C00 (MiFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x1402C6BDC (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1402C6DF4 (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x1402C7278 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x1402C86F4 (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x1402CA040 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x1402CA154 (MiFreeOverlappedFlushEntry.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CAE80 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x1402CB23C (MiCopyImageExtentContents.c)
 *     MiAttemptPageFileReductionApc @ 0x1402CD8B0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402CE39C (MiFinishPageFileExtension.c)
 *     MiIrpCompletionApcRoutine @ 0x1402CE6B0 (MiIrpCompletionApcRoutine.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1402CED10 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiFinishHoldingDirtyFaults @ 0x1402CFAC8 (MiFinishHoldingDirtyFaults.c)
 *     MiPageNotZero @ 0x1402D9448 (MiPageNotZero.c)
 *     MiDecrementCloneHeaderCount @ 0x1402E3ABC (MiDecrementCloneHeaderCount.c)
 *     MiDeleteCloneDescriptor @ 0x1402E3AF0 (MiDeleteCloneDescriptor.c)
 *     MiDeletePartitionResources @ 0x1402E9F58 (MiDeletePartitionResources.c)
 *     MiReturnCrossPartitionCharges @ 0x1402EB2BC (MiReturnCrossPartitionCharges.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402ED370 (NtSignalAndWaitForSingleObject.c)
 *     PopQueueDirectedDripsWork @ 0x1402F1840 (PopQueueDirectedDripsWork.c)
 *     PopDeviceIdleCompletion @ 0x1402F1C10 (PopDeviceIdleCompletion.c)
 *     PopFxCompleteComponentPerfState @ 0x1402F2C08 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1402F2D0C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x1402F2ED0 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1402F2FE0 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x1402F3060 (PopFxDeviceWork.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x1402F3120 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxPlatformIdleVeto @ 0x1402F40E0 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x1402F4480 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1402F4B44 (PopFxReleaseAcpiRefDevice.c)
 *     PopFxReleaseDevice @ 0x1402F4B74 (PopFxReleaseDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x1402F5D50 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x1402F5E60 (PopFxUpdateProcessorIdleState.c)
 *     PopUpdateWakeSourceWorker @ 0x1402F7940 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x1402F8E40 (PopBatteryIrpComplete.c)
 *     PopFxAcpiForwardNotification @ 0x140304944 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1403049E8 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140304A90 (PopFxAcpiForwardPepWorkRequest.c)
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x14031FC54 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1403268F0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1403269D0 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x14032C280 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x140332200 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1403350A8 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x14033577C (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1403357F0 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x140335850 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x140338CC0 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x140338D10 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x14033AF50 (ExReleaseRundownProtectionEx.c)
 *     ExpWorkQueueManagerSignal @ 0x14033C548 (ExpWorkQueueManagerSignal.c)
 *     WheapProcessWorkQueueItem @ 0x140340740 (WheapProcessWorkQueueItem.c)
 *     EmpReleasePagingReference @ 0x140595708 (EmpReleasePagingReference.c)
 *     PopHandleWakeSources @ 0x140596234 (PopHandleWakeSources.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopEndMirroring @ 0x140599140 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x14059BD10 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14059BE8C (MmDuplicateMemory.c)
 *     ExpSetSwappingKernelApc @ 0x14059D0D0 (ExpSetSwappingKernelApc.c)
 *     PopFlushVolumeWorker @ 0x14059D3C0 (PopFlushVolumeWorker.c)
 *     PfpScenCtxPrefetchStateSet @ 0x14059D640 (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxScenarioSet @ 0x14059E480 (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x1405A9650 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1405AAA30 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x1405ABB20 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x1405ABCD4 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1405AC870 (PopGracefulShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1405AD8B0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x1405AD950 (PopBuildDeviceNotifyListWatchdog.c)
 *     NtLockFile @ 0x1405D4830 (NtLockFile.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2410 (AlpcpCompleteDispatchMessage.c)
 *     NtReadFile @ 0x1405EF450 (NtReadFile.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 *     CmpSignalDeferredPosts @ 0x1406023E0 (CmpSignalDeferredPosts.c)
 *     CmNotifyRunDown @ 0x14060D8F0 (CmNotifyRunDown.c)
 *     NtWriteFile @ 0x140629160 (NtWriteFile.c)
 *     CmpPostNotify @ 0x14062D830 (CmpPostNotify.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x14062F7D4 (EtwpRealtimeInjectEtwBuffer.c)
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 *     CmpCompleteUnloadKey @ 0x14063DD64 (CmpCompleteUnloadKey.c)
 *     ExpWnfNotifySubscription @ 0x14063EFD4 (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140641174 (ExpWnfNotifyNameSubscribers.c)
 *     PfGetCompletedTrace @ 0x140657F14 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x1406581A0 (PfTTraceListAdd.c)
 *     PfTReplaceCurrentBuffer @ 0x14065BD7C (PfTReplaceCurrentBuffer.c)
 *     PfSnEndTrace @ 0x14065CF74 (PfSnEndTrace.c)
 *     EtwpQueueNotification @ 0x140666444 (EtwpQueueNotification.c)
 *     PiUEventDereferenceEventEntry @ 0x14066A6E0 (PiUEventDereferenceEventEntry.c)
 *     RtlDecompressFragmentLZNT1 @ 0x14066B520 (RtlDecompressFragmentLZNT1.c)
 *     RtlDecompressBufferLZNT1 @ 0x14066B790 (RtlDecompressBufferLZNT1.c)
 *     PnpCompleteDeviceEvent @ 0x14066C488 (PnpCompleteDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x14066C710 (PnpDeviceEventWorker.c)
 *     MiPfExecuteReadList @ 0x14066E304 (MiPfExecuteReadList.c)
 *     IopMountVolume @ 0x140681CF4 (IopMountVolume.c)
 *     sub_140683598 @ 0x140683598 (sub_140683598.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140693DFC (PspEvaluateAndNotifyEmptyJob.c)
 *     MiInSwapStoreWorker @ 0x1406A4D30 (MiInSwapStoreWorker.c)
 *     NtNotifyChangeSession @ 0x1406AD140 (NtNotifyChangeSession.c)
 *     IopTrackLink @ 0x1406AFA80 (IopTrackLink.c)
 *     NtSetEvent @ 0x1406B2B60 (NtSetEvent.c)
 *     EtwpFreeLoggerContext @ 0x1406B717C (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406B7560 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpStopLoggerInstance @ 0x1406B759C (EtwpStopLoggerInstance.c)
 *     EtwpLogger @ 0x1406B76B0 (EtwpLogger.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1406B7C24 (EtwpRealtimeUpdateConsumers.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1406BD430 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     EtwpSynchronizeWithLogger @ 0x1406CC554 (EtwpSynchronizeWithLogger.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1406D0CE0 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     CmpPostApc @ 0x1406D1D30 (CmpPostApc.c)
 *     AlpcpTrackPortReferences @ 0x1406E42B4 (AlpcpTrackPortReferences.c)
 *     CmpWakeWriteQueueWaiters @ 0x1406E9484 (CmpWakeWriteQueueWaiters.c)
 *     RtlRunOnceComplete @ 0x1406E9F00 (RtlRunOnceComplete.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x1406EA780 (CmpGetVolumeClusterSizeCompletion.c)
 *     EtwpDisassociateConsumer @ 0x1406EDD80 (EtwpDisassociateConsumer.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406F0220 (PfSnTracingStateExWorkerRoutine.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1406F0460 (PiDrvDbLoadNodeWorkerCallback.c)
 *     IopLoadUnloadDriver @ 0x1407087B0 (IopLoadUnloadDriver.c)
 *     WmipQueueNotification @ 0x14071A728 (WmipQueueNotification.c)
 *     PopCompleteAction @ 0x140724590 (PopCompleteAction.c)
 *     MiDereferenceSessionFinal @ 0x140727B5C (MiDereferenceSessionFinal.c)
 *     PopFinalizeWakeInfo @ 0x1407287A4 (PopFinalizeWakeInfo.c)
 *     DbgkRegisterErrorPort @ 0x1407287E4 (DbgkRegisterErrorPort.c)
 *     IopInvalidateVolumesForDevice @ 0x14072C088 (IopInvalidateVolumesForDevice.c)
 *     PiUEventHandleVetoEvent @ 0x14072C730 (PiUEventHandleVetoEvent.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140730C58 (PopFxUnregisterDeviceOrWait.c)
 *     WmipAddDataSource @ 0x140732528 (WmipAddDataSource.c)
 *     WmipReleaseCollectionEnabled @ 0x14073B05C (WmipReleaseCollectionEnabled.c)
 *     IopDestroyActiveConnectBlock @ 0x1407418B0 (IopDestroyActiveConnectBlock.c)
 *     PfGenerateTrace @ 0x140744728 (PfGenerateTrace.c)
 *     MmSetSessionObjectIoEvent @ 0x1407466D0 (MmSetSessionObjectIoEvent.c)
 *     PopReleaseTransitionLock @ 0x14074733C (PopReleaseTransitionLock.c)
 *     PopUserPresentSetWorker @ 0x140747F10 (PopUserPresentSetWorker.c)
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 *     PfTLoggingWorker @ 0x14075B710 (PfTLoggingWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x14075DD80 (CmpFinishSystemHivesLoad.c)
 *     ArbBuildAssignmentOrdering @ 0x140762A08 (ArbBuildAssignmentOrdering.c)
 *     MUIRegistrySystemRoutine @ 0x140765790 (MUIRegistrySystemRoutine.c)
 *     CmpInitializeSystemHivesLoad @ 0x14076AB90 (CmpInitializeSystemHivesLoad.c)
 *     EtwInitialize @ 0x14076B184 (EtwInitialize.c)
 *     PopFxUnregisterDevice @ 0x14076EA3C (PopFxUnregisterDevice.c)
 *     MmStoreRegister @ 0x140770384 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x140770FBC (MiInsertPageFileInList.c)
 *     PopFanWorker @ 0x140778910 (PopFanWorker.c)
 *     PopThermalWorker @ 0x140778A10 (PopThermalWorker.c)
 *     ArbArbiterHandler @ 0x14077B0B0 (ArbArbiterHandler.c)
 *     CmpWaitForHiveMount @ 0x14077B818 (CmpWaitForHiveMount.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x14077BCF8 (IopAcquireReleaseConnectLockInternal.c)
 *     WheapEtwEnableCallback @ 0x1407895E0 (WheapEtwEnableCallback.c)
 *     CmThawRegistry @ 0x14082E868 (CmThawRegistry.c)
 *     CmpPostApcRunDown @ 0x14083A550 (CmpPostApcRunDown.c)
 *     DbgkpCloseObject @ 0x140848040 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x140848CC8 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140848FC0 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x1408492C4 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x140849740 (NtDebugContinue.c)
 *     DbgkpLkmdSnapThreadApc @ 0x14084B9F0 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x14084F060 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopConnectLinkTrackingPort @ 0x140853C40 (IopConnectLinkTrackingPort.c)
 *     IopSendMessageToTrackService @ 0x1408548B4 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x140856C30 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x14085D44C (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14086189C (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x14086E0C0 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x140878040 (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x140880B94 (KeUpdateUmsThreadState.c)
 *     PfTCleanup @ 0x1408A16E0 (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x1408A1F30 (PfpParametersWatcher.c)
 *     PopBatteryReadTag @ 0x1408A9FA8 (PopBatteryReadTag.c)
 *     PopPowerAggregatorWorker @ 0x1408B2E60 (PopPowerAggregatorWorker.c)
 *     TtmiCloseEventQueue @ 0x1408BFF98 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408C0344 (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x1408C5460 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x1408C551C (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1408C9020 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PsIsVsmEnclaveTerminated @ 0x1408CCA34 (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x1408CCB5C (PsTerminateVsmEnclave.c)
 *     PspReleaseEnclaveThread @ 0x1408CCDD8 (PspReleaseEnclaveThread.c)
 *     RtlpCtSelfSubscribe @ 0x1408D8468 (RtlpCtSelfSubscribe.c)
 *     SmcCacheAdd @ 0x1408EB894 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x1408EBA28 (SmcCacheDelete.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x140900F30 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140901740 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140903C10 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExpPartitionDestroy @ 0x140913C24 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x1409167B0 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x14091A090 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     SbpVmbusNotificationHandler @ 0x140944300 (SbpVmbusNotificationHandler.c)
 *     KdpTimeSlipWork @ 0x140956660 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x14096F1B0 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1409733F4 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140982FE0 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x14098F480 (AnFwpFadeAnimationTimer.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 *     MiInitializePagedPoolEvents @ 0x1409F1BD0 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D060 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E060 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A0B0 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x1402A493C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032DA48 (EtwTraceEnqueueWork.c)
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
