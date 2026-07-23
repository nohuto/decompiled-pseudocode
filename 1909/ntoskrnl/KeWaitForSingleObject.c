/*
 * XREFs of KeWaitForSingleObject @ 0x14003FB10
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006C70 (MiWaitForInPageComplete.c)
 *     AlpcpSignalAndWait @ 0x14000CDC0 (AlpcpSignalAndWait.c)
 *     CcInitializeCacheMapEx @ 0x14000D930 (CcInitializeCacheMapEx.c)
 *     ExpWaitForResource @ 0x140042F70 (ExpWaitForResource.c)
 *     CcUnmapVacbArray @ 0x14007A300 (CcUnmapVacbArray.c)
 *     MiRetryNonPagedAllocation @ 0x14007C3F8 (MiRetryNonPagedAllocation.c)
 *     MiWaitForFreePagesToZero @ 0x14007C490 (MiWaitForFreePagesToZero.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     CcWriteBehind @ 0x14007DB9C (CcWriteBehind.c)
 *     KiSchedulerApc @ 0x140081AF0 (KiSchedulerApc.c)
 *     IopWaitForSynchronousIo @ 0x140089780 (IopWaitForSynchronousIo.c)
 *     PopExecuteOnTargetProcessors @ 0x140098ED8 (PopExecuteOnTargetProcessors.c)
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     PpmCheckPeriodicStart @ 0x14009D1F0 (PpmCheckPeriodicStart.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400A1930 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1400D7930 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400DF250 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1400DFCF8 (LdrpGetFromMUIMemCache.c)
 *     PopFxActivateComponent @ 0x1400E0A8C (PopFxActivateComponent.c)
 *     CcSetValidData @ 0x1400ED764 (CcSetValidData.c)
 *     WmipFindRegEntryByProviderId @ 0x1400EDDB4 (WmipFindRegEntryByProviderId.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x1400EE148 (SmKmStoreDeleteWhenEmpty.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400EE6D4 (FsRtlpWaitForIoAtEof.c)
 *     IopWaitForLockAlertable @ 0x1400EF4C4 (IopWaitForLockAlertable.c)
 *     ExpAcquireFastMutexContended @ 0x1400EF620 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400EF6F0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     PnpDisableWatchdog @ 0x1400EFC58 (PnpDisableWatchdog.c)
 *     PopSetWatchdog @ 0x1400EFD4C (PopSetWatchdog.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     IopCompleteUnloadOrDelete @ 0x1400F10C4 (IopCompleteUnloadOrDelete.c)
 *     CcCanIWrite @ 0x1400F2E80 (CcCanIWrite.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400F89E0 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1400F8AC4 (ExpUnblockPushLock.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1400FD320 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     MiZeroPageWrite @ 0x1400FF184 (MiZeroPageWrite.c)
 *     MiWaitForCollidedFaultComplete @ 0x140109964 (MiWaitForCollidedFaultComplete.c)
 *     ExfWaitForRundownProtectionRelease @ 0x140116050 (ExfWaitForRundownProtectionRelease.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011B014 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x14011B218 (SmKmStoreHelperCleanup.c)
 *     MiIssueSynchronousFlush @ 0x14011ECA4 (MiIssueSynchronousFlush.c)
 *     AlpcpWaitForSingleObject @ 0x140122AC8 (AlpcpWaitForSingleObject.c)
 *     CcWaitForUninitializeCacheMap @ 0x14012387C (CcWaitForUninitializeCacheMap.c)
 *     IoSynchronousCallDriver @ 0x14012B020 (IoSynchronousCallDriver.c)
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     CmpDoFileRead @ 0x140134B54 (CmpDoFileRead.c)
 *     SmKmStoreHelperWorker @ 0x140136040 (SmKmStoreHelperWorker.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140143618 (MmStoreFlushOutstandingEvictions.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140144574 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x140145F4C (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x140145FF4 (PopFxActivateDevice.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140148B50 (SmKmStoreHelperWaitForCommand.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140149CA0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014C428 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     IopLoadDriverImage @ 0x140153F4C (IopLoadDriverImage.c)
 *     WmipFindRegEntryByDevice @ 0x140158A48 (WmipFindRegEntryByDevice.c)
 *     PnpLockDeviceActionQueue @ 0x14015965C (PnpLockDeviceActionQueue.c)
 *     WmipBuildTraceDeviceList @ 0x14015BBDC (WmipBuildTraceDeviceList.c)
 *     PpmTryAcquireLock @ 0x14015C394 (PpmTryAcquireLock.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14015C500 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     PopIgnoreBatteryStatusChange @ 0x14015E270 (PopIgnoreBatteryStatusChange.c)
 *     PopWakeDeviceList @ 0x14015EEC4 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x14015F0B0 (PopSleepDeviceList.c)
 *     PopHaltDeviceIdle @ 0x1401659DC (PopHaltDeviceIdle.c)
 *     PopRunMaximumIrpWorkers @ 0x1401684F0 (PopRunMaximumIrpWorkers.c)
 *     PopTimeoutWakeTracking @ 0x140168984 (PopTimeoutWakeTracking.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140169B64 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PnpLockMountableDevice @ 0x14017111C (PnpLockMountableDevice.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14017181C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     WmipDeregisterRegEntry @ 0x140174728 (WmipDeregisterRegEntry.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140175DE0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     WmipAllocRegEntry @ 0x140175FB8 (WmipAllocRegEntry.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x140177D90 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopIrpWorker @ 0x14017B5B0 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x14017BCAC (PopPepUpdateConstraints.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14017E2F4 (LdrpSetAlternateResourceModuleHandle.c)
 *     MiQueueWorkingSetRequest @ 0x14017F8E0 (MiQueueWorkingSetRequest.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140180940 (LdrUnloadAlternateResourceModuleEx.c)
 *     ExUnregisterCallback @ 0x1401817D0 (ExUnregisterCallback.c)
 *     KeSwapProcessOrStack @ 0x14018A530 (KeSwapProcessOrStack.c)
 *     WheapAddErrorSource @ 0x14018B8B8 (WheapAddErrorSource.c)
 *     CcQueueLazyWriteScanThread @ 0x14018DB90 (CcQueueLazyWriteScanThread.c)
 *     MiOkToZeroNextLargePage @ 0x14018FD50 (MiOkToZeroNextLargePage.c)
 *     MiModifiedPageWriter @ 0x140192C90 (MiModifiedPageWriter.c)
 *     CmpLazyWriteWorker @ 0x140193B70 (CmpLazyWriteWorker.c)
 *     MiStoreEvictThread @ 0x140193D70 (MiStoreEvictThread.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x1401982AC (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     WmiQueryTraceProviderCount @ 0x140198728 (WmiQueryTraceProviderCount.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140199500 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     WheaLogInternalEvent @ 0x140199CC0 (WheaLogInternalEvent.c)
 *     PopIrpWorkerControl @ 0x14019D0F0 (PopIrpWorkerControl.c)
 *     PnpSerializeBoot @ 0x14019D848 (PnpSerializeBoot.c)
 *     CcDeleteSectionsForPartition @ 0x14027EB34 (CcDeleteSectionsForPartition.c)
 *     FsRtlpWaitOnIrp @ 0x140283BBC (FsRtlpWaitOnIrp.c)
 *     FsFilterAllocateCompletionStack @ 0x140283EBC (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x1402844F4 (FsRtlpPostStackOverflow.c)
 *     IopAllocateBackpocketIrp @ 0x140292C10 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140292EF0 (IopAllocateReserveIrp.c)
 *     PnprQuiesce @ 0x1402A0658 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x1402A15F8 (PnpProcessRebalance.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1402A9B04 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KeAbCrossThreadDelete @ 0x1402B0538 (KeAbCrossThreadDelete.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402B0D30 (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x1402B1140 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1402B1170 (KiSynchronizePassiveInterruptExecution.c)
 *     KiParkUmsThread @ 0x1402B5E90 (KiParkUmsThread.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB4A8 (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402BC654 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x1402C693C (MiPfCompleteCoalescedIo.c)
 *     MiIssuePageExtendRequest @ 0x1402CE42C (MiIssuePageExtendRequest.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1402CE9F8 (MiQueueSyncModifiedWriterApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEB70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1402CF498 (MiCheckHoldFaultForHotPatch.c)
 *     MiApplyCommitDelay @ 0x1402D96DC (MiApplyCommitDelay.c)
 *     MiWaitForAvailablePages @ 0x1402E5648 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402E59A0 (MiContractWsSwapPageFileWorker.c)
 *     MiDrainCrossPartitionUsage @ 0x1402EA1F8 (MiDrainCrossPartitionUsage.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402ED0D0 (NtSignalAndWaitForSingleObject.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402F3844 (PopFxIssueComponentPerfStateChanges.c)
 *     PspIumFreePartitionState @ 0x140308E6C (PspIumFreePartitionState.c)
 *     SmpFpWaitForResource @ 0x1403257A4 (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14032612C (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x140326AA8 (SmWaitForSyncIo.c)
 *     WmipEnterSMCritSection @ 0x14032B5A8 (WmipEnterSMCritSection.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140331C98 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureContextStop @ 0x140334C20 (EtwpCovSampCaptureContextStop.c)
 *     ExRegisterBootDevice @ 0x140338770 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x1403389B0 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x1403401A0 (WheapProcessWorkQueueItem.c)
 *     sub_140343AB0 @ 0x140343AB0 (sub_140343AB0.c)
 *     PopCaptureTimeOnProcZero @ 0x1405960F0 (PopCaptureTimeOnProcZero.c)
 *     PfpScenCtxPrefetchWait @ 0x1405966FC (PfpScenCtxPrefetchWait.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopEndMirroring @ 0x140599120 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x14059BDF4 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14059C990 (PopFlushVolumes.c)
 *     PopTransitionToSleep @ 0x14059D270 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14059D3EC (MmDuplicateMemory.c)
 *     IoShutdownSystem @ 0x1405A7968 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1405A7CC4 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x1405A9630 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1405AAA10 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1405ABCB4 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1405AC850 (PopGracefulShutdown.c)
 *     PopFxProcessWorkPool @ 0x1405B1E30 (PopFxProcessWorkPool.c)
 *     WmipFindGEByGuid @ 0x1405C0B60 (WmipFindGEByGuid.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C5448 (EtwpAcquireLoggerContextByLoggerId.c)
 *     IopCloseFile @ 0x1405D8DF0 (IopCloseFile.c)
 *     PspUserThreadStartup @ 0x1405E7470 (PspUserThreadStartup.c)
 *     NtQueryInformationFile @ 0x1405F0890 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x1405F1150 (IopDeleteFile.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 *     CmpParseKey @ 0x1405F9560 (CmpParseKey.c)
 *     NtWaitForSingleObject @ 0x1405FE090 (NtWaitForSingleObject.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     MmCleanProcessAddressSpace @ 0x14060B9E8 (MmCleanProcessAddressSpace.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14060C800 (FsRtlCancellableWaitForMultipleObjects.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     IopGetSetSecurityObject @ 0x140623F40 (IopGetSetSecurityObject.c)
 *     FsRtlSetFileSize @ 0x140625490 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406255B0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140625750 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140625A60 (FsRtlQueryKernelEaFile.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140625E64 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IopSynchronousApiServiceTail @ 0x14062B718 (IopSynchronousApiServiceTail.c)
 *     IopGetFileInformation @ 0x14062BCD4 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14062EE34 (IopQueryXxxInformation.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 *     CmpLockRegistryFreezeAware @ 0x140638760 (CmpLockRegistryFreezeAware.c)
 *     CmpOpenHiveFile @ 0x140639E3C (CmpOpenHiveFile.c)
 *     CmLoadAppKey @ 0x14063A4D4 (CmLoadAppKey.c)
 *     sub_1406494FC @ 0x1406494FC (sub_1406494FC.c)
 *     IoVolumeDeviceToDosName @ 0x14064BE70 (IoVolumeDeviceToDosName.c)
 *     FsRtlGetFileSize @ 0x1406507C0 (FsRtlGetFileSize.c)
 *     PiControlGetSetDeviceStatus @ 0x14066FE60 (PiControlGetSetDeviceStatus.c)
 *     PiDrvDbLoadNode @ 0x140677A54 (PiDrvDbLoadNode.c)
 *     IoVolumeDeviceToGuidPath @ 0x1406902F0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140690460 (IoVolumeDeviceNameToGuidPath.c)
 *     CmpFileFlushAndPurge @ 0x140690A7C (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x140690C18 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x140690E2C (IopSynchronousCall.c)
 *     EtwpDisableTraceProviders @ 0x14069301C (EtwpDisableTraceProviders.c)
 *     WmipPrepareForWnodeAD @ 0x140695ADC (WmipPrepareForWnodeAD.c)
 *     WmipDeleteMethod @ 0x140696A80 (WmipDeleteMethod.c)
 *     WmipUnreferenceEntry @ 0x140696B78 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x140696C4C (WmipForwardWmiIrp.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1406983F0 (RtlDecompressFragmentLZNT1.c)
 *     RtlDecompressBufferLZNT1 @ 0x140698660 (RtlDecompressBufferLZNT1.c)
 *     PnpDeviceEventWorker @ 0x140699360 (PnpDeviceEventWorker.c)
 *     IopMountVolume @ 0x1406A0254 (IopMountVolume.c)
 *     NtNotifyChangeSession @ 0x1406A3AF0 (NtNotifyChangeSession.c)
 *     EtwpStopTrace @ 0x1406A8734 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406A9A50 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpStartTrace @ 0x1406AAB88 (EtwpStartTrace.c)
 *     EtwpLogger @ 0x1406ACDA0 (EtwpLogger.c)
 *     IopGetSetObjectId @ 0x1406B2378 (IopGetSetObjectId.c)
 *     AlpcpWaitForPortReferences @ 0x1406B463C (AlpcpWaitForPortReferences.c)
 *     NtWaitForKeyedEvent @ 0x1406B5CD0 (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x1406B5F40 (NtReleaseKeyedEvent.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1406C39C0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwpSynchronizeWithLogger @ 0x1406CB384 (EtwpSynchronizeWithLogger.c)
 *     NtGetMUIRegistryInfo @ 0x1406CFA90 (NtGetMUIRegistryInfo.c)
 *     IopCancelIrpsInThreadList @ 0x1406D0294 (IopCancelIrpsInThreadList.c)
 *     WmipEnableCollectOrEvent @ 0x1406D194C (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x1406DB02C (WmipIsQuerySetGuid.c)
 *     MiReadImageHeaders @ 0x1406DCB0C (MiReadImageHeaders.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406E8248 (EtwpUpdateGlobalGroupMasks.c)
 *     WmipEnumerateMofResources @ 0x1406EBBE0 (WmipEnumerateMofResources.c)
 *     FsRtlQueryCachedVdl @ 0x1406EBD80 (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x1406EDE60 (IoSetInformation.c)
 *     WmipDisableCollectOrEvent @ 0x1406EF318 (WmipDisableCollectOrEvent.c)
 *     MiInSwapStore @ 0x1406F4C34 (MiInSwapStore.c)
 *     SmStoreCompressionStop @ 0x1406F7488 (SmStoreCompressionStop.c)
 *     IopGetVolumeId @ 0x1406F9A64 (IopGetVolumeId.c)
 *     WmipPrepareWnodeSI @ 0x140713800 (WmipPrepareWnodeSI.c)
 *     PnpQueryInterface @ 0x1407164D0 (PnpQueryInterface.c)
 *     WmipQueueRegWork @ 0x140716770 (WmipQueueRegWork.c)
 *     PnpStartDeviceNode @ 0x140719E1C (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x14071A08C (IopUncacheInterfaceInformation.c)
 *     WmipProcessEvent @ 0x14071C3AC (WmipProcessEvent.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14071DD8C (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopGetWakeSource @ 0x14071F400 (PopGetWakeSource.c)
 *     PnpAllocateResources @ 0x1407238F0 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x1407245A0 (IopFilterResourceRequirementsCall.c)
 *     NtInitiatePowerAction @ 0x1407272E0 (NtInitiatePowerAction.c)
 *     EmPowerPagingEnabled @ 0x140728378 (EmPowerPagingEnabled.c)
 *     PopInitSystemSleeperThread @ 0x14072A7A8 (PopInitSystemSleeperThread.c)
 *     PopResizeHiberFile @ 0x14072B528 (PopResizeHiberFile.c)
 *     ExSwapinWorkerThreads @ 0x14072BB98 (ExSwapinWorkerThreads.c)
 *     IoReportTargetDeviceChange @ 0x14072DB60 (IoReportTargetDeviceChange.c)
 *     IopInvalidateVolumesForDevice @ 0x14072DF28 (IopInvalidateVolumesForDevice.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14072E6C0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x14072FBA8 (IopLoadFileSystemDriver.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140732EB8 (PopFxUnregisterDeviceOrWait.c)
 *     WmipAddDataSource @ 0x140734788 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140734EE0 (WmipDetermineInstanceBaseIndex.c)
 *     WmipFindISinGEbyName @ 0x140735640 (WmipFindISinGEbyName.c)
 *     FsRtlIssueDeviceIoControl @ 0x140736E60 (FsRtlIssueDeviceIoControl.c)
 *     WmipSendEnableDisableRequest @ 0x140738420 (WmipSendEnableDisableRequest.c)
 *     WmipRegisterDevice @ 0x140738A64 (WmipRegisterDevice.c)
 *     WmipUpdateDeviceStackSize @ 0x140738BCC (WmipUpdateDeviceStackSize.c)
 *     IopCreateArcName @ 0x140738C38 (IopCreateArcName.c)
 *     PopBatteryWorker @ 0x14073A3F0 (PopBatteryWorker.c)
 *     WmipDSCleanup @ 0x14073BCB0 (WmipDSCleanup.c)
 *     WmipSetTraceNotify @ 0x14073BF50 (WmipSetTraceNotify.c)
 *     FsRtlBalanceReads @ 0x14073CDE0 (FsRtlBalanceReads.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x14073CFDC (PnpSynchronizeDeviceEventQueue.c)
 *     IoWMISetNotificationCallback @ 0x14073D180 (IoWMISetNotificationCallback.c)
 *     IoDisconnectInterrupt @ 0x140742F80 (IoDisconnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x1407437B0 (IopDestroyActiveConnectBlock.c)
 *     PoUnregisterPowerSettingCallback @ 0x140747B40 (PoUnregisterPowerSettingCallback.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140748070 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14074843C (FsRtlIssueFileNotificationFsctl.c)
 *     ObWaitForSingleObject @ 0x1407486F0 (ObWaitForSingleObject.c)
 *     PopSanityCheckHiberFile @ 0x140748EB0 (PopSanityCheckHiberFile.c)
 *     PopAcquireTransitionLock @ 0x1407491E0 (PopAcquireTransitionLock.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1407493A8 (SPCallServerHandleWaitForDisplayWindow.c)
 *     PopClearHiberFileSignature @ 0x1407496F4 (PopClearHiberFileSignature.c)
 *     IopLegacyResourceAllocation @ 0x1407515AC (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x140752DC0 (IopAllocateBootResources.c)
 *     CmCompleteRegistryInitialization @ 0x140759428 (CmCompleteRegistryInitialization.c)
 *     PopCreateHiberFile @ 0x14075A430 (PopCreateHiberFile.c)
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 *     ArbBuildAssignmentOrdering @ 0x140767418 (ArbBuildAssignmentOrdering.c)
 *     SepRmCommandServerThread @ 0x1407683E0 (SepRmCommandServerThread.c)
 *     IopUnloadDriver @ 0x140768D48 (IopUnloadDriver.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1407690E0 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14076910C (PnpWaitForEmptyDeviceActionQueue.c)
 *     PopFxUnregisterDevice @ 0x14077189C (PopFxUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x140771A68 (PopPepUnregisterDevice.c)
 *     MiZeroPageFileFirstPage @ 0x140774B20 (MiZeroPageFileFirstPage.c)
 *     WmipAddMofResource @ 0x140779FCC (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x14077A208 (WmipFindMRByNames.c)
 *     ArbArbiterHandler @ 0x14077D980 (ArbArbiterHandler.c)
 *     WmipUpdateDataSource @ 0x14077DAB4 (WmipUpdateDataSource.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x14077E5C8 (IopAcquireReleaseConnectLockInternal.c)
 *     WmipLegacyEtwWorker @ 0x14077F0F0 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x14077F24C (WmipProcessLegacyEtwRegister.c)
 *     IopInsertLegacyBusDeviceNode @ 0x140780600 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x140781004 (FsRtlpRegisterUncProvider.c)
 *     PiPagePathSetState @ 0x140783ABC (PiPagePathSetState.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140784E10 (IoRegisterFsRegistrationChangeMountAware.c)
 *     WmipQueryGuidInfo @ 0x14078AED0 (WmipQueryGuidInfo.c)
 *     WheapEtwEnableCallback @ 0x14078BA40 (WheapEtwEnableCallback.c)
 *     CmpDummyThreadRoutine @ 0x14078C9E0 (CmpDummyThreadRoutine.c)
 *     FsRtlWaitForSmssEvent @ 0x14078CDE0 (FsRtlWaitForSmssEvent.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14082E9E4 (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140846E48 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     DbgkpQueueMessage @ 0x1408483C8 (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x1408492B0 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x140849EA8 (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14084AE74 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14084D69C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x14084E220 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x14084E8F0 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x140852F5C (IopCancelAlertedRequest.c)
 *     IopHardErrorThread @ 0x140853560 (IopHardErrorThread.c)
 *     IopSendMessageToTrackService @ 0x140853FB4 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x140854BD8 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x140855520 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x140856330 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14085B944 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x14085C2D4 (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x14085CB4C (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x14085E190 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14085FAF4 (PnpRequestHwProfileChangeNotification.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140860F9C (IopAcquireReleaseDispatcherLock.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14086C8C0 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x14086D7C0 (PnpReplacePartitionUnit.c)
 *     PiIrpQueryRemoveDevice @ 0x1408756D4 (PiIrpQueryRemoveDevice.c)
 *     PnpReallocateResources @ 0x140875B80 (PnpReallocateResources.c)
 *     PiQueueDeviceRequest @ 0x14087708C (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1408771F4 (PnpQueueQueryAndRemoveEvent.c)
 *     PipSendGuestAssignedNotification @ 0x1408775AC (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x140877740 (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x14087D100 (IopQueryConflictList.c)
 *     PfTCleanup @ 0x1408A0F20 (PfTCleanup.c)
 *     PopCoolingExtensionPnpNotification @ 0x1408A32A0 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x1408A33F8 (PopDeactiveThermalRequest.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1408A4640 (PopDirectedDripsWorkerRoutine.c)
 *     PopReadPagesFromHiberFile @ 0x1408A795C (PopReadPagesFromHiberFile.c)
 *     PopSetSystemAwayMode @ 0x1408A8250 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x1408A8810 (PopThermalZoneRemove.c)
 *     PopBatteryRemove @ 0x1408A9890 (PopBatteryRemove.c)
 *     PopDiagStopCsSleepStudySession @ 0x1408ACAB4 (PopDiagStopCsSleepStudySession.c)
 *     PopSleepStudyTaskClientTimerWorker @ 0x1408B1650 (PopSleepStudyTaskClientTimerWorker.c)
 *     PopFanRemove @ 0x1408B3230 (PopFanRemove.c)
 *     PspQueueDeferredWorkAndWait @ 0x1408C5194 (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x1408C82F8 (PsSetVmProcessorHostProcess.c)
 *     PsWaitForAllProcesses @ 0x1408C9134 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x1408C9638 (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x1408CB2A0 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x1408CB3F0 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1408CC43C (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x1408CD534 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1408CD680 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x1408CDA34 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1408D7D90 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     RtlpRunOnceWaitForInit @ 0x1408D7DD4 (RtlpRunOnceWaitForInit.c)
 *     SmProcessResizeRequest @ 0x1408E7E38 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1408E7F34 (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x1408E8400 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x1408E94D8 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x1408E9D34 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1408E9DE8 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x1408E9EAC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1408EA60C (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1408EA6AC (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x1408EAD40 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x1408EEB30 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x1408EF9D8 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1408F0184 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x1408F0394 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x1408F052C (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1408F1210 (WmipLegacyEtwCallback.c)
 *     WmipWaitForCollectionEnabled @ 0x1408F1560 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x1408F1E14 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1408F2040 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x1408F4FAC (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408F5EF0 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x1408FA2D0 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1408FA32C (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x1408FC1E4 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x1408FFC9C (EtwpUpdateDisallowedGuids.c)
 *     EtwpCovSampCaptureFlush @ 0x140900DB0 (EtwpCovSampCaptureFlush.c)
 *     EtwpKsrCallback @ 0x140906F10 (EtwpKsrCallback.c)
 *     ExpWorkQueueDestroy @ 0x140913868 (ExpWorkQueueDestroy.c)
 *     NtMapCMFModule @ 0x140916960 (NtMapCMFModule.c)
 *     NtStartProfile @ 0x140917BD0 (NtStartProfile.c)
 *     NtStopProfile @ 0x140917E30 (NtStopProfile.c)
 *     WheaAttemptClearPoison @ 0x140919510 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140919600 (WheaAttemptPhysicalPageOffline.c)
 *     sub_14091F398 @ 0x14091F398 (sub_14091F398.c)
 *     sub_140920B70 @ 0x140920B70 (sub_140920B70.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140943210 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdiVerifyBootDisk @ 0x140943C1C (VhdiVerifyBootDisk.c)
 *     VfDriverLock @ 0x14096043C (VfDriverLock.c)
 *     IovpUnloadDriver @ 0x140963BB8 (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x14096EDB0 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x140973134 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x1409734B0 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x14097D650 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x140982C00 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x14098F178 (AnFwFadeCompletion.c)
 *     IopCreateArcNamesCd @ 0x1409F5108 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x1409F594C (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140A39DBC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A3F12C (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A3FAA8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A3FC9C (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140A4007C (SbpWaitForVmbus.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012840 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 *     KiSelectNextThread @ 0x1400138D0 (KiSelectNextThread.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x14003BAA0 (KiSetVpThreadSpinLockCount.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KiCommitThreadWait @ 0x140040480 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043050 (KiDeliverApc.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     KeAbPreWait @ 0x1400EFB30 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     KiFastExitThreadWait @ 0x1401193C4 (KiFastExitThreadWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CB370 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x140284ED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AEF40 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

NTSTATUS __stdcall KeWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 WaitIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  unsigned __int8 v11; // r13
  $911DE60733D53BFA0F115C3A981F3323 *v12; // r12
  unsigned int v13; // r14d
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  volatile __int64 WaitStatus; // rsi
  struct _KPRCB *v17; // r15
  _DWORD *ThreadTimerDelay; // rdx
  bool v19; // r9
  LONGLONG v20; // r8
  unsigned int v21; // r10d
  unsigned __int64 v22; // rax
  PVOID *v23; // rcx
  _RTL_BALANCED_NODE *v24; // r14
  int v25; // eax
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // di
  _KWAIT_STATUS_REGISTER v28; // al
  unsigned __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  struct _KPRCB *v33; // rsi
  _DWORD *v34; // rcx
  volatile unsigned __int8 DpcRoutineActive; // cl
  char v36; // al
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v38; // rcx
  struct _KPRCB *v39; // rcx
  ULONG_PTR AbWaitObject; // rcx
  _KWAIT_STATUS_REGISTER v41; // al
  _DWORD *v42; // rcx
  _DWORD *v43; // rcx
  struct _KPRCB *v44; // rdi
  __int64 v45; // rdx
  struct _KPRCB *v46; // rbx
  __int64 v47; // rdi
  unsigned __int8 v48; // cl
  __int64 v49; // rbx
  _DWORD *v50; // rcx
  _DWORD *v51; // rcx
  struct _KPRCB *v52; // rsi
  _DWORD *v53; // rcx
  _KTHREAD *v54; // rsi
  __int64 v55; // r8
  struct _KPRCB *v56; // r14
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  struct _KPRCB *v61; // rcx
  _RTL_BALANCED_NODE *v62; // rax
  PRTL_BALANCED_NODE v63; // rax
  int v64; // r14d
  int v65; // eax
  _DWORD *v66; // rcx
  int v67; // eax
  _DWORD *v68; // rcx
  int v69; // eax
  struct _KPRCB *v70; // rcx
  struct _KPRCB *v71; // rcx
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  PRTL_BALANCED_NODE v76; // rax
  struct _KPRCB *v77; // rbx
  _DWORD *v78; // rcx
  int v79; // eax
  _DWORD *v80; // rcx
  int v81; // eax
  _DWORD *v82; // rcx
  int v83; // eax
  struct _KPRCB *v84; // rcx
  _DWORD *v85; // rdx
  int v86; // eax
  _KTHREAD *v87; // rax
  struct _KPRCB *v88; // r14
  _DWORD *v89; // rcx
  int v90; // eax
  _DWORD *v91; // rcx
  int v92; // eax
  _DWORD *v93; // rcx
  int v94; // eax
  _KTHREAD *NextThread; // r14
  __int64 v96; // r8
  int v97; // eax
  __int64 v98; // rbx
  struct _KPRCB *v99; // rdi
  _KTHREAD *v100; // rdi
  __int64 v101; // r8
  __int64 v102; // r8
  struct _KPRCB *v103; // rcx
  struct _KPRCB *v104; // r14
  struct _KPRCB *v105; // rbx
  struct _KPRCB *v106; // r14
  bool v107; // zf
  __int64 v108; // rbx
  struct _KPRCB *v109; // rdi
  _KTHREAD *v110; // rdi
  __int64 v111; // r8
  __int64 v112; // r8
  struct _KPRCB *v113; // rcx
  struct _KPRCB *v114; // rcx
  struct _KPRCB *v115; // rcx
  struct _KPRCB *v116; // rcx
  struct _KPRCB *v117; // rcx
  signed __int32 v118[8]; // [rsp+0h] [rbp-81h] BYREF
  bool v119; // [rsp+20h] [rbp-61h]
  unsigned __int8 v120; // [rsp+21h] [rbp-60h]
  LONGLONG QuadPart; // [rsp+28h] [rbp-59h]
  PRTL_BALANCED_NODE Node; // [rsp+30h] [rbp-51h]
  int v123; // [rsp+38h] [rbp-49h] BYREF
  int v124; // [rsp+3Ch] [rbp-45h] BYREF
  int v125; // [rsp+40h] [rbp-41h] BYREF
  int v126; // [rsp+44h] [rbp-3Dh] BYREF
  int v127; // [rsp+48h] [rbp-39h] BYREF
  int v128; // [rsp+4Ch] [rbp-35h] BYREF
  int v129; // [rsp+50h] [rbp-31h] BYREF
  int v130; // [rsp+54h] [rbp-2Dh] BYREF
  int v131; // [rsp+58h] [rbp-29h] BYREF
  int v132; // [rsp+5Ch] [rbp-25h] BYREF
  int v133; // [rsp+60h] [rbp-21h] BYREF
  int v134; // [rsp+64h] [rbp-1Dh] BYREF
  _QWORD *v135; // [rsp+68h] [rbp-19h] BYREF
  _QWORD *v136; // [rsp+70h] [rbp-11h] BYREF
  __int64 v137; // [rsp+78h] [rbp-9h]
  __int64 v138; // [rsp+80h] [rbp-1h]
  __int64 v139; // [rsp+88h] [rbp+7h]
  unsigned __int8 v141; // [rsp+E8h] [rbp+67h]
  int Timeouta; // [rsp+100h] [rbp+7Fh]

  v141 = WaitReason;
  CurrentThread = KeGetCurrentThread();
  v119 = 0;
  Node = 0LL;
  v120 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v120 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      Timeouta = 1;
    }
    else
    {
      Timeouta = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    Timeouta = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      v123 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v58 = SchedulerAssist[5];
          SchedulerAssist[5] = v58 + 1;
          if ( v58 == -1 )
LABEL_149:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v42 = CurrentPrcb->SchedulerAssist;
        if ( v42 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v59 = v42[5] - 1;
            v42[5] = v59;
            if ( !v59 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v123);
        while ( CurrentThread->ThreadLock );
        v43 = CurrentPrcb->SchedulerAssist;
        if ( v43 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v60 = v43[5];
            v43[5] = v60 + 1;
            if ( v60 == -1 )
              goto LABEL_149;
          }
        }
      }
      if ( !CurrentThread->ApcState.KernelApcPending || WaitIrql || CurrentThread->SpecialApcDisable )
        break;
      KiReleaseThreadLockSafe(CurrentThread);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v61 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v61->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v61);
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v48 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v48 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      CurrentThread->WaitIrql = 0;
    }
    v11 = v120;
    v12 = &CurrentThread->320;
    if ( !Alertable )
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && WaitMode )
        goto LABEL_95;
      goto LABEL_15;
    }
    if ( CurrentThread->Alerted[WaitMode] )
    {
      CurrentThread->Alerted[WaitMode] = 0;
      v64 = 257;
      goto LABEL_96;
    }
    if ( WaitMode && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      break;
    if ( CurrentThread->Alerted[0] )
    {
      CurrentThread->Alerted[0] = 0;
      v64 = 257;
      goto LABEL_96;
    }
LABEL_15:
    v13 = 0;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v141;
    CurrentThread->ThreadLock = 0LL;
    v14 = KeGetCurrentPrcb();
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v57 = v15[5] - 1;
        v15[5] = v57;
        if ( !v57 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    LODWORD(WaitStatus) = 0;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    v17 = KeGetCurrentPrcb();
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = Object;
    if ( _interlockedbittestandset((volatile signed __int32 *)Object, 7u) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v13);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)Object & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)Object, 7u) );
    }
    ThreadTimerDelay = (_DWORD *)*((unsigned int *)Object + 1);
    if ( (*(_BYTE *)Object & 0x7F) != 2 )
    {
      if ( (int)ThreadTimerDelay <= 0 )
      {
        v19 = v119;
        goto LABEL_20;
      }
      if ( (*(_BYTE *)Object & 7) == 1 )
      {
        *((_DWORD *)Object + 1) = 0;
      }
      else if ( (*(_BYTE *)Object & 0x7F) == 5 )
      {
        *((_DWORD *)Object + 1) = (_DWORD)ThreadTimerDelay - 1;
      }
LABEL_33:
      _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
      CurrentThread->WaitBlockFill6[68] = 2;
      _InterlockedOr(v118, 0);
      if ( CurrentThread->ThreadLock )
      {
        v44 = KeGetCurrentPrcb();
        v130 = 0;
        while ( 1 )
        {
          KiSetVpThreadSpinLockCount((__int64)v44, 1);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount((__int64)v44, 0);
          do
            KeYieldProcessorEx(&v130);
          while ( CurrentThread->ThreadLock );
        }
        KiReleaseThreadLockSafe(CurrentThread);
      }
      v27 = CurrentThread->WaitIrql;
      v28.Flags = (unsigned __int8)CurrentThread->WaitRegister;
      v136 = 0LL;
      if ( (v28.Flags & 0x38) == 0 )
      {
        if ( !v11 )
        {
LABEL_36:
          if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v27 >= 2u )
            goto LABEL_37;
          goto LABEL_355;
        }
        if ( v27 < 2u )
        {
          v49 = (__int64)v17->CurrentThread;
          if ( !v17->NextThread )
          {
            if ( (*(_DWORD *)(v49 + 116) & 0x40) == 0 )
            {
LABEL_113:
              if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
                goto LABEL_37;
LABEL_355:
              v117 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v117->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v117);
LABEL_37:
              __writecr8(v27);
              return WaitStatus;
            }
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
              goto LABEL_352;
            goto LABEL_143;
          }
          KiAbProcessContextSwitch(v17->CurrentThread, 0LL);
          v56 = KeGetCurrentPrcb();
          v134 = 0;
          while ( 1 )
          {
            KiSetVpThreadSpinLockCount((__int64)v56, 1);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&v17->PrcbLock, 0LL) )
              break;
            KiSetVpThreadSpinLockCount((__int64)v56, 0);
            do
              KeYieldProcessorEx(&v134);
            while ( v17->PrcbLock );
          }
          NextThread = v17->NextThread;
          v17->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)v17, v49, 0LL);
          _enable();
          v17->CurrentThread = NextThread;
          if ( NextThread->WaitBlockFill6[68] != 1 )
            goto LABEL_345;
LABEL_343:
          v97 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
LABEL_344:
          NextThread->ReadyTime = v97;
LABEL_345:
          NextThread->WaitBlockFill6[68] = 2;
          *(_BYTE *)(v49 + 643) = 32;
          *(_BYTE *)(v49 + 390) = v27;
          KiQueueReadyThread((__int64)v17, v49, v96);
          v107 = (unsigned __int8)KiSwapContext(v49, NextThread, v27) == 0;
LABEL_141:
          if ( v107 )
            goto LABEL_113;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
LABEL_352:
            v116 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v116->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v116);
          }
LABEL_143:
          __writecr8(1uLL);
          *(_DWORD *)(v49 + 116) &= ~0x40u;
          KiDeliverApc(0LL, 0LL, 0LL);
          goto LABEL_113;
        }
        if ( !v17->NextThread || v17->DpcRoutineActive )
          return WaitStatus;
LABEL_117:
        LOBYTE(ThreadTimerDelay) = 2;
        KiRequestSoftwareInterrupt(v17, ThreadTimerDelay);
        return WaitStatus;
      }
      if ( (v28.Flags & 0x18) != 0 )
      {
        if ( (v28.Flags & 8) != 0 )
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
        v105 = KeGetCurrentPrcb();
        v131 = 0;
        while ( 1 )
        {
          KiSetVpThreadSpinLockCount((__int64)v105, 1);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v17->PrcbLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount((__int64)v105, 0);
          do
            KeYieldProcessorEx(&v131);
          while ( v17->PrcbLock );
        }
        if ( !v17->NextThread )
          KiSelectNextThread((__int64)v17, (__int64 *)&v136);
        _InterlockedAnd64((volatile signed __int64 *)&v17->PrcbLock, 0LL);
        KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
        KiReadyDeferredReadyList((__int64)v17, &v136);
        v87 = v17->NextThread;
        if ( v27 < 2u )
        {
          v49 = (__int64)v17->CurrentThread;
          if ( v87 )
          {
            KiAbProcessContextSwitch(v17->CurrentThread, 0LL);
            v106 = KeGetCurrentPrcb();
            v132 = 0;
            while ( 1 )
            {
              KiSetVpThreadSpinLockCount((__int64)v106, 1);
              if ( !_interlockedbittestandset64((volatile signed __int32 *)&v17->PrcbLock, 0LL) )
                break;
              KiSetVpThreadSpinLockCount((__int64)v106, 0);
              do
                KeYieldProcessorEx(&v132);
              while ( v17->PrcbLock );
            }
            goto LABEL_307;
          }
          goto LABEL_309;
        }
LABEL_252:
        if ( !v87 || v17->DpcRoutineActive )
          return WaitStatus;
        goto LABEL_117;
      }
      v108 = (__int64)v17->CurrentThread;
      if ( v17->NextThread )
      {
        KiAbProcessContextSwitch(v17->CurrentThread, 0LL);
        v109 = KeGetCurrentPrcb();
        v133 = 0;
        while ( 1 )
        {
          KiSetVpThreadSpinLockCount((__int64)v109, 1);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v17->PrcbLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount((__int64)v109, 0);
          do
            KeYieldProcessorEx(&v133);
          while ( v17->PrcbLock );
        }
        v110 = v17->NextThread;
        v17->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)v17, v108, 0LL);
        _enable();
        v17->CurrentThread = v110;
        if ( v110->WaitBlockFill6[68] == 1 )
          v110->ReadyTime = v110->ReadyTime - v110->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
        v110->WaitBlockFill6[68] = 2;
        *(_BYTE *)(v108 + 643) = 32;
        *(_BYTE *)(v108 + 390) = 1;
        KiQueueReadyThread((__int64)v17, v108, v111);
        LOBYTE(v112) = 1;
        if ( !(unsigned __int8)KiSwapContext(v108, v110, v112) )
        {
LABEL_329:
          if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
            goto LABEL_333;
          goto LABEL_332;
        }
        if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
        {
LABEL_323:
          __writecr8(1uLL);
          *(_DWORD *)(v108 + 116) &= ~0x40u;
          KiDeliverApc(0LL, 0LL, 0LL);
          goto LABEL_329;
        }
      }
      else
      {
        if ( (*(_DWORD *)(v108 + 116) & 0x40) == 0 )
          goto LABEL_329;
        if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
          goto LABEL_323;
      }
      v113 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v113->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v113);
      goto LABEL_323;
    }
    v19 = (*((_BYTE *)Object + 48) & 2) != 0;
    v119 = v19;
    if ( (int)ThreadTimerDelay > 0
      || CurrentThread == *((struct _KTHREAD **)Object + 5) && *((_BYTE *)Object + 2) == v17->DpcRoutineActive )
    {
      v31 = *((_DWORD *)Object + 1);
      if ( v31 == 0x80000000 )
      {
        _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
        KiFastExitThreadWait(v17, CurrentThread, v11);
        RtlRaiseStatus(-1073741423);
      }
      v32 = v31 - 1;
      *((_DWORD *)Object + 1) = v32;
      if ( v32 )
        goto LABEL_33;
      CurrentThread->WaitStatus = 0LL;
      v33 = KeGetCurrentPrcb();
      v125 = 0;
      v34 = v33->SchedulerAssist;
      if ( v34 )
      {
        if ( v33->NestingLevel <= 1u )
        {
          v72 = v34[5];
          v34[5] = v72 + 1;
          if ( v72 == -1 )
LABEL_198:
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v50 = v33->SchedulerAssist;
        if ( v50 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v73 = v50[5] - 1;
            v50[5] = v73;
            if ( !v73 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
        do
          KeYieldProcessorEx(&v125);
        while ( CurrentThread->ThreadLock );
        v51 = v33->SchedulerAssist;
        if ( v51 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v74 = v51[5];
            v51[5] = v74 + 1;
            if ( v74 == -1 )
              goto LABEL_198;
          }
        }
      }
      CurrentThread->KernelApcDisable -= *((unsigned __int8 *)Object + 49);
      if ( v17->CurrentThread == CurrentThread )
        DpcRoutineActive = v17->DpcRoutineActive;
      else
        DpcRoutineActive = 0;
      v137 = 0LL;
      v138 = 0LL;
      v139 = 0LL;
      LODWORD(v137) = *(_DWORD *)Object;
      BYTE2(v137) = DpcRoutineActive;
      *(_DWORD *)Object = v137;
      v36 = *((_BYTE *)Object + 48);
      *((_QWORD *)Object + 5) = CurrentThread;
      if ( (v36 & 1) != 0 )
      {
        *((_BYTE *)Object + 48) = v36 & 0xFE;
        CurrentThread->WaitStatus |= 0x80uLL;
        v36 = *((_BYTE *)Object + 48);
      }
      if ( (v36 & 2) != 0 )
        CurrentThread->AbWaitObject = Object;
      Blink = CurrentThread->MutantListHead.Blink;
      v38 = (struct _LIST_ENTRY *)((char *)Object + 24);
      if ( Blink->Flink != &CurrentThread->MutantListHead )
LABEL_289:
        __fastfail(3u);
      v38->Flink = &CurrentThread->MutantListHead;
      *((_QWORD *)Object + 4) = Blink;
      Blink->Flink = v38;
      CurrentThread->MutantListHead.Blink = v38;
      _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
      CurrentThread->WaitBlockFill6[68] = 2;
      CurrentThread->ThreadLock = 0LL;
      v39 = KeGetCurrentPrcb();
      ThreadTimerDelay = v39->SchedulerAssist;
      if ( ThreadTimerDelay )
      {
        if ( v39->NestingLevel <= 1u )
        {
          v75 = ThreadTimerDelay[5] - 1;
          ThreadTimerDelay[5] = v75;
          if ( !v75 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
      WaitStatus = CurrentThread->WaitStatus;
      AbWaitObject = (ULONG_PTR)CurrentThread->AbWaitObject;
      if ( AbWaitObject )
      {
        CurrentThread->AbWaitObject = 0LL;
        v76 = KeAbPreAcquire(AbWaitObject, 0LL, 1);
        if ( v76 )
          BYTE2(v76[1].Left) |= 1u;
      }
      v27 = CurrentThread->WaitIrql;
      v41.Flags = (unsigned __int8)CurrentThread->WaitRegister;
      v135 = 0LL;
      if ( (v41.Flags & 0x38) == 0 )
      {
        if ( !v11 )
          goto LABEL_36;
        if ( v27 >= 2u )
        {
          if ( !v17->NextThread || v17->DpcRoutineActive )
            return WaitStatus;
          goto LABEL_117;
        }
        v49 = (__int64)v17->CurrentThread;
        if ( v17->NextThread )
        {
          KiAbProcessContextSwitch(v17->CurrentThread, 0LL);
          v104 = KeGetCurrentPrcb();
          v129 = 0;
          while ( 1 )
          {
            KiSetVpThreadSpinLockCount((__int64)v104, 1);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&v17->PrcbLock, 0LL) )
              break;
            KiSetVpThreadSpinLockCount((__int64)v104, 0);
            do
              KeYieldProcessorEx(&v129);
            while ( v17->PrcbLock );
          }
LABEL_307:
          NextThread = v17->NextThread;
          v17->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)v17, v49, 0LL);
          _enable();
          v17->CurrentThread = NextThread;
          if ( NextThread->WaitBlockFill6[68] != 1 )
            goto LABEL_345;
          goto LABEL_343;
        }
LABEL_309:
        v107 = (*(_DWORD *)(v49 + 116) & 0x40) == 0;
        goto LABEL_141;
      }
      if ( (v41.Flags & 0x18) != 0 )
      {
        if ( (v41.Flags & 8) != 0 )
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
        v77 = KeGetCurrentPrcb();
        v126 = 0;
        v78 = v77->SchedulerAssist;
        if ( v78 )
        {
          if ( v77->NestingLevel <= 1u )
          {
            v79 = v78[5];
            v78[5] = v79 + 1;
            if ( v79 == -1 )
LABEL_217:
              KiRemoveSystemWorkPriorityKick(v77);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v17->PrcbLock, 0LL) )
        {
          v80 = v77->SchedulerAssist;
          if ( v80 )
          {
            if ( v77->NestingLevel <= 1u )
            {
              v81 = v80[5] - 1;
              v80[5] = v81;
              if ( !v81 )
                KiRemoveSystemWorkPriorityKick(v77);
            }
          }
          do
            KeYieldProcessorEx(&v126);
          while ( v17->PrcbLock );
          v82 = v77->SchedulerAssist;
          if ( v82 )
          {
            if ( v77->NestingLevel <= 1u )
            {
              v83 = v82[5];
              v82[5] = v83 + 1;
              if ( v83 == -1 )
                goto LABEL_217;
            }
          }
        }
        if ( !v17->NextThread )
          KiSelectNextThread((__int64)v17, (__int64 *)&v135);
        _InterlockedAnd64((volatile signed __int64 *)&v17->PrcbLock, 0LL);
        v84 = KeGetCurrentPrcb();
        v85 = v84->SchedulerAssist;
        if ( v85 )
        {
          if ( v84->NestingLevel <= 1u )
          {
            v86 = v85[5] - 1;
            v85[5] = v86;
            if ( !v86 )
              KiRemoveSystemWorkPriorityKick(v84);
          }
        }
        KiReadyDeferredReadyList((__int64)v17, &v135);
        v87 = v17->NextThread;
        if ( v27 < 2u )
        {
          v49 = (__int64)v17->CurrentThread;
          if ( v87 )
          {
            KiAbProcessContextSwitch(v17->CurrentThread, 0LL);
            v88 = KeGetCurrentPrcb();
            v127 = 0;
            v89 = v88->SchedulerAssist;
            if ( v89 )
            {
              if ( v88->NestingLevel <= 1u )
              {
                v90 = v89[5];
                v89[5] = v90 + 1;
                if ( v90 == -1 )
LABEL_239:
                  KiRemoveSystemWorkPriorityKick(v88);
              }
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)&v17->PrcbLock, 0LL) )
            {
              v91 = v88->SchedulerAssist;
              if ( v91 )
              {
                if ( v88->NestingLevel <= 1u )
                {
                  v92 = v91[5] - 1;
                  v91[5] = v92;
                  if ( !v92 )
                    KiRemoveSystemWorkPriorityKick(v88);
                }
              }
              do
                KeYieldProcessorEx(&v127);
              while ( v17->PrcbLock );
              v93 = v88->SchedulerAssist;
              if ( v93 )
              {
                if ( v88->NestingLevel <= 1u )
                {
                  v94 = v93[5];
                  v93[5] = v94 + 1;
                  if ( v94 == -1 )
                    goto LABEL_239;
                }
              }
            }
            NextThread = v17->NextThread;
            v17->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation((__int64)v17, v49, 0LL);
            _enable();
            v17->CurrentThread = NextThread;
            if ( NextThread->WaitBlockFill6[68] != 1 )
              goto LABEL_345;
            v96 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
            v97 = v96 + MEMORY[0xFFFFF78000000320];
            goto LABEL_344;
          }
          goto LABEL_309;
        }
        goto LABEL_252;
      }
      v98 = (__int64)v17->CurrentThread;
      if ( v17->NextThread )
      {
        KiAbProcessContextSwitch(v17->CurrentThread, 0LL);
        v99 = KeGetCurrentPrcb();
        v128 = 0;
        while ( 1 )
        {
          KiSetVpThreadSpinLockCount((__int64)v99, 1);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v17->PrcbLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount((__int64)v99, 0);
          do
            KeYieldProcessorEx(&v128);
          while ( v17->PrcbLock );
        }
        v100 = v17->NextThread;
        v17->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)v17, v98, 0LL);
        _enable();
        v17->CurrentThread = v100;
        if ( v100->WaitBlockFill6[68] == 1 )
          v100->ReadyTime = v100->ReadyTime - v100->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
        v100->WaitBlockFill6[68] = 2;
        *(_BYTE *)(v98 + 643) = 32;
        *(_BYTE *)(v98 + 390) = 1;
        KiQueueReadyThread((__int64)v17, v98, v101);
        LOBYTE(v102) = 1;
        if ( (unsigned __int8)KiSwapContext(v98, v100, v102) )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
            goto LABEL_267;
          goto LABEL_268;
        }
      }
      else if ( (*(_DWORD *)(v98 + 116) & 0x40) != 0 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
LABEL_267:
          v103 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v103->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v103);
        }
LABEL_268:
        __writecr8(1uLL);
        *(_DWORD *)(v98 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
      }
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
        goto LABEL_333;
LABEL_332:
      v114 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v114->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v114);
LABEL_333:
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v115 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v115->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v115);
      }
      __writecr8(0LL);
      return WaitStatus;
    }
LABEL_20:
    v20 = QuadPart;
    v21 = Timeouta;
    v22 = QuadPart;
    if ( Timeouta == 2 )
    {
      ThreadTimerDelay = (_DWORD *)CurrentThread->ThreadTimerDelay;
      v30 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v22 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v22 = (unsigned __int64)ThreadTimerDelay + QuadPart;
      }
    }
    else
    {
      if ( !Timeouta )
        goto LABEL_22;
      if ( !QuadPart )
        goto LABEL_32;
      v30 = MEMORY[0xFFFFF78000000014];
    }
    if ( v30 > v22 )
    {
LABEL_32:
      LODWORD(WaitStatus) = 258;
      goto LABEL_33;
    }
LABEL_22:
    v23 = (PVOID *)*((_QWORD *)Object + 2);
    if ( *v23 != (char *)Object + 8 )
      goto LABEL_289;
    v12->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)Object + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v23;
    *v23 = v12;
    *((_QWORD *)Object + 2) = v12;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    if ( v19 )
    {
      v62 = KeAbPreAcquire((ULONG_PTR)Object, 0LL, 0);
      v20 = QuadPart;
      v24 = v62;
      v21 = Timeouta;
      Node = v62;
    }
    else
    {
      v24 = Node;
    }
    if ( v24 )
    {
      KeAbPreWait(v24);
      v20 = QuadPart;
      v21 = Timeouta;
    }
    v25 = KiCommitThreadWait(CurrentThread, &CurrentThread->320, v21, v20);
    LODWORD(WaitStatus) = v25;
    if ( v24 )
    {
      if ( (v25 & 0xFFFFFF7F) != 0 )
      {
        KeAbPreAcquire((ULONG_PTR)Object, v24, 0);
        KeAbPostReleaseEx((ULONG_PTR)Object);
        v63 = 0LL;
      }
      else
      {
        v63 = KeAbPreAcquire((ULONG_PTR)Object, v24, 1);
        BYTE2(v63[1].Left) |= 1u;
      }
      Node = v63;
    }
    CurrentThread->AbWaitObject = 0LL;
    if ( (_DWORD)WaitStatus != 256 )
      return WaitStatus;
    v120 = 0;
    v26 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentThread->WaitIrql = v26;
  }
  CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_95:
  v64 = 192;
LABEL_96:
  KiReleaseThreadLockSafe(CurrentThread);
  v46 = KeGetCurrentPrcb();
  if ( WaitIrql >= 2u )
  {
    if ( v46->NextThread && !v46->DpcRoutineActive )
    {
      LOBYTE(v45) = 2;
      KiRequestSoftwareInterrupt(v46, v45);
    }
  }
  else
  {
    v47 = (__int64)v46->CurrentThread;
    if ( !v46->NextThread )
    {
      if ( (*(_DWORD *)(v47 + 116) & 0x40) == 0 )
        goto LABEL_99;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
LABEL_192:
        v70 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v70->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v70);
      }
LABEL_128:
      __writecr8(1uLL);
      *(_DWORD *)(v47 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
      goto LABEL_99;
    }
    KiAbProcessContextSwitch(v46->CurrentThread, 0LL);
    v52 = KeGetCurrentPrcb();
    v124 = 0;
    v53 = v52->SchedulerAssist;
    if ( v53 )
    {
      if ( v52->NestingLevel <= 1u )
      {
        v65 = v53[5];
        v53[5] = v65 + 1;
        if ( v65 == -1 )
LABEL_178:
          KiRemoveSystemWorkPriorityKick(v52);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v46->PrcbLock, 0LL) )
    {
      v66 = v52->SchedulerAssist;
      if ( v66 )
      {
        if ( v52->NestingLevel <= 1u )
        {
          v67 = v66[5] - 1;
          v66[5] = v67;
          if ( !v67 )
            KiRemoveSystemWorkPriorityKick(v52);
        }
      }
      do
        KeYieldProcessorEx(&v124);
      while ( v46->PrcbLock );
      v68 = v52->SchedulerAssist;
      if ( v68 )
      {
        if ( v52->NestingLevel <= 1u )
        {
          v69 = v68[5];
          v68[5] = v69 + 1;
          if ( v69 == -1 )
            goto LABEL_178;
        }
      }
    }
    v54 = v46->NextThread;
    v46->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)v46, v47, 0LL);
    _enable();
    v46->CurrentThread = v54;
    if ( v54->WaitBlockFill6[68] == 1 )
    {
      v55 = v54->ReadyTime - v54->WaitBlock[2].SpareLong;
      v54->ReadyTime = v55 + MEMORY[0xFFFFF78000000320];
    }
    v54->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v47 + 643) = 32;
    *(_BYTE *)(v47 + 390) = WaitIrql;
    KiQueueReadyThread((__int64)v46, v47, v55);
    if ( (unsigned __int8)KiSwapContext(v47, v54, WaitIrql) )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        goto LABEL_192;
      goto LABEL_128;
    }
LABEL_99:
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v71 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v71->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v71);
    }
    __writecr8(WaitIrql);
  }
  LODWORD(WaitStatus) = v64;
  return WaitStatus;
}
