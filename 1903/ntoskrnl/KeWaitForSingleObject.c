/*
 * XREFs of KeWaitForSingleObject @ 0x14003FDD0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006BE0 (MiWaitForInPageComplete.c)
 *     AlpcpSignalAndWait @ 0x14000CB90 (AlpcpSignalAndWait.c)
 *     CcInitializeCacheMapEx @ 0x14000D700 (CcInitializeCacheMapEx.c)
 *     ExpWaitForResource @ 0x140043230 (ExpWaitForResource.c)
 *     CcUnmapVacbArray @ 0x140079F40 (CcUnmapVacbArray.c)
 *     MiRetryNonPagedAllocation @ 0x14007BFF8 (MiRetryNonPagedAllocation.c)
 *     MiWaitForFreePagesToZero @ 0x14007C090 (MiWaitForFreePagesToZero.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     CcWriteBehind @ 0x14007D79C (CcWriteBehind.c)
 *     KiSchedulerApc @ 0x1400816F0 (KiSchedulerApc.c)
 *     IopWaitForSynchronousIo @ 0x140088480 (IopWaitForSynchronousIo.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x140099580 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     CcSetValidData @ 0x14009990C (CcSetValidData.c)
 *     WmipFindRegEntryByProviderId @ 0x140099D58 (WmipFindRegEntryByProviderId.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14009A4FC (SmKmStoreDeleteWhenEmpty.c)
 *     FsRtlpWaitForIoAtEof @ 0x14009AA84 (FsRtlpWaitForIoAtEof.c)
 *     IopWaitForLockAlertable @ 0x14009C534 (IopWaitForLockAlertable.c)
 *     ExpAcquireFastMutexContended @ 0x14009C690 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x14009C760 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     PopFxActivateComponent @ 0x1400B099C (PopFxActivateComponent.c)
 *     PopSetWatchdog @ 0x1400B35A0 (PopSetWatchdog.c)
 *     PnpDisableWatchdog @ 0x1400B38B0 (PnpDisableWatchdog.c)
 *     IopCompleteUnloadOrDelete @ 0x1400B40A4 (IopCompleteUnloadOrDelete.c)
 *     CcCanIWrite @ 0x1400B4600 (CcCanIWrite.c)
 *     PopExecuteOnTargetProcessors @ 0x1400B9068 (PopExecuteOnTargetProcessors.c)
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     PpmCheckPeriodicStart @ 0x1400BD370 (PpmCheckPeriodicStart.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400C1AB0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     MiZeroPageWrite @ 0x1400FCFF4 (MiZeroPageWrite.c)
 *     MiWaitForCollidedFaultComplete @ 0x140100F44 (MiWaitForCollidedFaultComplete.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140106174 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x140106378 (SmKmStoreHelperCleanup.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x140106E88 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     ExTimedWaitForUnblockPushLock @ 0x14010BA30 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x14010BB14 (ExpUnblockPushLock.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1401149E0 (ExfWaitForRundownProtectionRelease.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14011CF4C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x14011D9F4 (LdrpGetFromMUIMemCache.c)
 *     MiIssueSynchronousFlush @ 0x14011E794 (MiIssueSynchronousFlush.c)
 *     AlpcpWaitForSingleObject @ 0x140121C78 (AlpcpWaitForSingleObject.c)
 *     CcWaitForUninitializeCacheMap @ 0x14012276C (CcWaitForUninitializeCacheMap.c)
 *     IoSynchronousCallDriver @ 0x14012A600 (IoSynchronousCallDriver.c)
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     CmpDoFileRead @ 0x140134250 (CmpDoFileRead.c)
 *     SmKmStoreHelperWorker @ 0x140135680 (SmKmStoreHelperWorker.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1401430D8 (MmStoreFlushOutstandingEvictions.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140144034 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1401458AC (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x140145954 (PopFxActivateDevice.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1401484B0 (SmKmStoreHelperWaitForCommand.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140149600 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014BD88 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     IopLoadDriverImage @ 0x1401538AC (IopLoadDriverImage.c)
 *     WmipFindRegEntryByDevice @ 0x1401583A8 (WmipFindRegEntryByDevice.c)
 *     PnpLockDeviceActionQueue @ 0x140158FBC (PnpLockDeviceActionQueue.c)
 *     WmipBuildTraceDeviceList @ 0x14015B53C (WmipBuildTraceDeviceList.c)
 *     PpmTryAcquireLock @ 0x14015BCF4 (PpmTryAcquireLock.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14015BE60 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     PopIgnoreBatteryStatusChange @ 0x14015DBD0 (PopIgnoreBatteryStatusChange.c)
 *     PopWakeDeviceList @ 0x14015E824 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x14015EA10 (PopSleepDeviceList.c)
 *     PopHaltDeviceIdle @ 0x140165F8C (PopHaltDeviceIdle.c)
 *     PopRunMaximumIrpWorkers @ 0x140168AA0 (PopRunMaximumIrpWorkers.c)
 *     PopTimeoutWakeTracking @ 0x140168F34 (PopTimeoutWakeTracking.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14016A0C4 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PnpLockMountableDevice @ 0x140170A2C (PnpLockMountableDevice.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14017112C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     WmipDeregisterRegEntry @ 0x140173FF8 (WmipDeregisterRegEntry.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1401756B0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     WmipAllocRegEntry @ 0x140175888 (WmipAllocRegEntry.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401776A0 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopIrpWorker @ 0x14017AEC0 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x14017B5BC (PopPepUpdateConstraints.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14017DC04 (LdrpSetAlternateResourceModuleHandle.c)
 *     MiQueueWorkingSetRequest @ 0x14017F1F0 (MiQueueWorkingSetRequest.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140180250 (LdrUnloadAlternateResourceModuleEx.c)
 *     ExUnregisterCallback @ 0x1401810E0 (ExUnregisterCallback.c)
 *     KeSwapProcessOrStack @ 0x140189BA0 (KeSwapProcessOrStack.c)
 *     WheapAddErrorSource @ 0x14018AF28 (WheapAddErrorSource.c)
 *     CcQueueLazyWriteScanThread @ 0x14018D280 (CcQueueLazyWriteScanThread.c)
 *     MiOkToZeroNextLargePage @ 0x14018FBB0 (MiOkToZeroNextLargePage.c)
 *     MiModifiedPageWriter @ 0x1401924B0 (MiModifiedPageWriter.c)
 *     CmpLazyWriteWorker @ 0x140193390 (CmpLazyWriteWorker.c)
 *     MiStoreEvictThread @ 0x140193590 (MiStoreEvictThread.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x140197C4C (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     WmiQueryTraceProviderCount @ 0x1401980C8 (WmiQueryTraceProviderCount.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140198EA0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     WheaLogInternalEvent @ 0x140199660 (WheaLogInternalEvent.c)
 *     PopIrpWorkerControl @ 0x14019C970 (PopIrpWorkerControl.c)
 *     PnpSerializeBoot @ 0x14019D0C8 (PnpSerializeBoot.c)
 *     CcDeleteSectionsForPartition @ 0x14027EDD4 (CcDeleteSectionsForPartition.c)
 *     FsRtlpWaitOnIrp @ 0x140283E5C (FsRtlpWaitOnIrp.c)
 *     FsFilterAllocateCompletionStack @ 0x14028415C (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x140284794 (FsRtlpPostStackOverflow.c)
 *     IopAllocateBackpocketIrp @ 0x140292EB0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140293190 (IopAllocateReserveIrp.c)
 *     PnprQuiesce @ 0x1402A08F8 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x1402A1898 (PnpProcessRebalance.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1402A9DA4 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KeAbCrossThreadDelete @ 0x1402B07D8 (KeAbCrossThreadDelete.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402B0FD0 (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x1402B13E0 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1402B1410 (KiSynchronizePassiveInterruptExecution.c)
 *     KiParkUmsThread @ 0x1402B6130 (KiParkUmsThread.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB748 (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402BC8F4 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x1402C6BDC (MiPfCompleteCoalescedIo.c)
 *     MiIssuePageExtendRequest @ 0x1402CE6CC (MiIssuePageExtendRequest.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1402CEC98 (MiQueueSyncModifiedWriterApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEE10 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1402CF738 (MiCheckHoldFaultForHotPatch.c)
 *     MiApplyCommitDelay @ 0x1402D997C (MiApplyCommitDelay.c)
 *     MiWaitForAvailablePages @ 0x1402E58E8 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x1402E5A00 (MiWaitForFreePage.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402E5C40 (MiContractWsSwapPageFileWorker.c)
 *     MiDrainCrossPartitionUsage @ 0x1402EA498 (MiDrainCrossPartitionUsage.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402ED370 (NtSignalAndWaitForSingleObject.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402F3AE4 (PopFxIssueComponentPerfStateChanges.c)
 *     PspIumFreePartitionState @ 0x1403093BC (PspIumFreePartitionState.c)
 *     SmpFpWaitForResource @ 0x140325D54 (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1403266DC (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x140327058 (SmWaitForSyncIo.c)
 *     WmipEnterSMCritSection @ 0x14032BB58 (WmipEnterSMCritSection.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140332238 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureContextStop @ 0x1403351C0 (EtwpCovSampCaptureContextStop.c)
 *     ExRegisterBootDevice @ 0x140338D10 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x140338F50 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x140340740 (WheapProcessWorkQueueItem.c)
 *     sub_140344050 @ 0x140344050 (sub_140344050.c)
 *     PopCaptureTimeOnProcZero @ 0x1405960F0 (PopCaptureTimeOnProcZero.c)
 *     PfpScenCtxPrefetchWait @ 0x1405967B0 (PfpScenCtxPrefetchWait.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopEndMirroring @ 0x140599140 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x14059BD10 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14059BE8C (MmDuplicateMemory.c)
 *     PopBuildDeviceNotifyList @ 0x14059C574 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14059D110 (PopFlushVolumes.c)
 *     IoShutdownSystem @ 0x1405A7988 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1405A7CE4 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x1405A9650 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1405AAA30 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1405ABCD4 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1405AC870 (PopGracefulShutdown.c)
 *     WmipFindGEByGuid @ 0x1405C0690 (WmipFindGEByGuid.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C4F48 (EtwpAcquireLoggerContextByLoggerId.c)
 *     IopCloseFile @ 0x1405D8630 (IopCloseFile.c)
 *     PspUserThreadStartup @ 0x1405E6CA0 (PspUserThreadStartup.c)
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x1405F0850 (IopDeleteFile.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     CmpParseKey @ 0x1405F8510 (CmpParseKey.c)
 *     NtWaitForSingleObject @ 0x1405FD000 (NtWaitForSingleObject.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     MmCleanProcessAddressSpace @ 0x140609ED8 (MmCleanProcessAddressSpace.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14060ACF0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140621FBC (ExpHwidSendSynchronousIrpToDevice.c)
 *     IopSynchronousApiServiceTail @ 0x1406278C4 (IopSynchronousApiServiceTail.c)
 *     IopGetFileInformation @ 0x140627E84 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14062AFE4 (IopQueryXxxInformation.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062B6E0 (NtNotifyChangeMultipleKeys.c)
 *     CmpOpenHiveFile @ 0x140636BDC (CmpOpenHiveFile.c)
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 *     IoVolumeDeviceToGuidPath @ 0x140661640 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1406617B0 (IoVolumeDeviceNameToGuidPath.c)
 *     CmpLockRegistryFreezeAware @ 0x140662030 (CmpLockRegistryFreezeAware.c)
 *     CmpFileFlushAndPurge @ 0x140663994 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x140663B30 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x140663D44 (IopSynchronousCall.c)
 *     EtwpDisableTraceProviders @ 0x140665C08 (EtwpDisableTraceProviders.c)
 *     WmipPrepareForWnodeAD @ 0x1406686BC (WmipPrepareForWnodeAD.c)
 *     WmipDeleteMethod @ 0x140669660 (WmipDeleteMethod.c)
 *     WmipUnreferenceEntry @ 0x140669758 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x14066982C (WmipForwardWmiIrp.c)
 *     RtlDecompressFragmentLZNT1 @ 0x14066B520 (RtlDecompressFragmentLZNT1.c)
 *     RtlDecompressBufferLZNT1 @ 0x14066B790 (RtlDecompressBufferLZNT1.c)
 *     PnpDeviceEventWorker @ 0x14066C710 (PnpDeviceEventWorker.c)
 *     PiDrvDbLoadNode @ 0x14067C6D4 (PiDrvDbLoadNode.c)
 *     IopMountVolume @ 0x140681CF4 (IopMountVolume.c)
 *     sub_140683598 @ 0x140683598 (sub_140683598.c)
 *     IoVolumeDeviceToDosName @ 0x140685F00 (IoVolumeDeviceToDosName.c)
 *     FsRtlGetFileSize @ 0x14068A6A0 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x14069CFA0 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x14069D0C0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14069D260 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x14069D570 (FsRtlQueryKernelEaFile.c)
 *     IopGetSetSecurityObject @ 0x14069E430 (IopGetSetSecurityObject.c)
 *     PiControlGetSetDeviceStatus @ 0x1406A2980 (PiControlGetSetDeviceStatus.c)
 *     MiInSwapStore @ 0x1406A4C38 (MiInSwapStore.c)
 *     NtNotifyChangeSession @ 0x1406AD140 (NtNotifyChangeSession.c)
 *     IopGetSetObjectId @ 0x1406B0448 (IopGetSetObjectId.c)
 *     AlpcpWaitForPortReferences @ 0x1406B169C (AlpcpWaitForPortReferences.c)
 *     EtwpStopTrace @ 0x1406B4F7C (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406B6264 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpStartTrace @ 0x1406B70FC (EtwpStartTrace.c)
 *     EtwpLogger @ 0x1406B76B0 (EtwpLogger.c)
 *     NtWaitForKeyedEvent @ 0x1406BA540 (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x1406BA7B0 (NtReleaseKeyedEvent.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1406C4800 (EtwpCrimsonProvEnableCallback.c)
 *     EtwpSynchronizeWithLogger @ 0x1406CC554 (EtwpSynchronizeWithLogger.c)
 *     NtGetMUIRegistryInfo @ 0x1406D0820 (NtGetMUIRegistryInfo.c)
 *     IopCancelIrpsInThreadList @ 0x1406D1024 (IopCancelIrpsInThreadList.c)
 *     WmipEnableCollectOrEvent @ 0x1406D25EC (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x1406DA72C (WmipIsQuerySetGuid.c)
 *     MiReadImageHeaders @ 0x1406DBE84 (MiReadImageHeaders.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406E7148 (EtwpUpdateGlobalGroupMasks.c)
 *     WmipEnumerateMofResources @ 0x1406EA920 (WmipEnumerateMofResources.c)
 *     FsRtlQueryCachedVdl @ 0x1406EAAC0 (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x1406ECC40 (IoSetInformation.c)
 *     WmipDisableCollectOrEvent @ 0x1406EDDF8 (WmipDisableCollectOrEvent.c)
 *     SmStoreCompressionStop @ 0x1406F56C4 (SmStoreCompressionStop.c)
 *     IopGetVolumeId @ 0x1406F7CA4 (IopGetVolumeId.c)
 *     WmipPrepareWnodeSI @ 0x140711A20 (WmipPrepareWnodeSI.c)
 *     PnpQueryInterface @ 0x1407146F0 (PnpQueryInterface.c)
 *     WmipQueueRegWork @ 0x140714990 (WmipQueueRegWork.c)
 *     PnpStartDeviceNode @ 0x14071802C (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x14071829C (IopUncacheInterfaceInformation.c)
 *     WmipProcessEvent @ 0x14071A5BC (WmipProcessEvent.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14071BF9C (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopGetWakeSource @ 0x14071D570 (PopGetWakeSource.c)
 *     PnpAllocateResources @ 0x140721A50 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x140722700 (IopFilterResourceRequirementsCall.c)
 *     NtInitiatePowerAction @ 0x140725440 (NtInitiatePowerAction.c)
 *     EmPowerPagingEnabled @ 0x1407264D8 (EmPowerPagingEnabled.c)
 *     PopResizeHiberFile @ 0x140726EE8 (PopResizeHiberFile.c)
 *     ExSwapinWorkerThreads @ 0x140727638 (ExSwapinWorkerThreads.c)
 *     PopInitSystemSleeperThread @ 0x140729438 (PopInitSystemSleeperThread.c)
 *     IoReportTargetDeviceChange @ 0x14072BCC0 (IoReportTargetDeviceChange.c)
 *     IopInvalidateVolumesForDevice @ 0x14072C088 (IopInvalidateVolumesForDevice.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14072C820 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopLoadFileSystemDriver @ 0x14072DCD8 (IopLoadFileSystemDriver.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140730C58 (PopFxUnregisterDeviceOrWait.c)
 *     WmipAddDataSource @ 0x140732528 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140732C80 (WmipDetermineInstanceBaseIndex.c)
 *     WmipFindISinGEbyName @ 0x1407333E0 (WmipFindISinGEbyName.c)
 *     FsRtlIssueDeviceIoControl @ 0x140734C00 (FsRtlIssueDeviceIoControl.c)
 *     WmipSendEnableDisableRequest @ 0x1407361C0 (WmipSendEnableDisableRequest.c)
 *     WmipRegisterDevice @ 0x140736804 (WmipRegisterDevice.c)
 *     WmipUpdateDeviceStackSize @ 0x14073696C (WmipUpdateDeviceStackSize.c)
 *     IopCreateArcName @ 0x1407369D8 (IopCreateArcName.c)
 *     PopBatteryWorker @ 0x140738190 (PopBatteryWorker.c)
 *     WmipDSCleanup @ 0x140739A20 (WmipDSCleanup.c)
 *     WmipSetTraceNotify @ 0x140739CC0 (WmipSetTraceNotify.c)
 *     FsRtlBalanceReads @ 0x14073AE80 (FsRtlBalanceReads.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x14073B07C (PnpSynchronizeDeviceEventQueue.c)
 *     IoWMISetNotificationCallback @ 0x14073B280 (IoWMISetNotificationCallback.c)
 *     IoDisconnectInterrupt @ 0x140741080 (IoDisconnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x1407418B0 (IopDestroyActiveConnectBlock.c)
 *     PoUnregisterPowerSettingCallback @ 0x140745C40 (PoUnregisterPowerSettingCallback.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140746170 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14074653C (FsRtlIssueFileNotificationFsctl.c)
 *     ObWaitForSingleObject @ 0x1407467F0 (ObWaitForSingleObject.c)
 *     PopSanityCheckHiberFile @ 0x140746FB0 (PopSanityCheckHiberFile.c)
 *     PopAcquireTransitionLock @ 0x1407472E0 (PopAcquireTransitionLock.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1407474A8 (SPCallServerHandleWaitForDisplayWindow.c)
 *     PopClearHiberFileSignature @ 0x1407477F4 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x14074A544 (PopCreateHiberFile.c)
 *     IopLegacyResourceAllocation @ 0x140750B1C (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x140752330 (IopAllocateBootResources.c)
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 *     CmpFinishSystemHivesLoad @ 0x14075DD80 (CmpFinishSystemHivesLoad.c)
 *     ArbBuildAssignmentOrdering @ 0x140762A08 (ArbBuildAssignmentOrdering.c)
 *     SepRmCommandServerThread @ 0x1407639D0 (SepRmCommandServerThread.c)
 *     IopUnloadDriver @ 0x140764248 (IopUnloadDriver.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1407645E0 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14076460C (PnpWaitForEmptyDeviceActionQueue.c)
 *     CmCompleteRegistryInitialization @ 0x140769A5C (CmCompleteRegistryInitialization.c)
 *     PopFxUnregisterDevice @ 0x14076EA3C (PopFxUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x14076EC08 (PopPepUnregisterDevice.c)
 *     MiZeroPageFileFirstPage @ 0x140771540 (MiZeroPageFileFirstPage.c)
 *     WmipAddMofResource @ 0x1407769EC (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x140776C28 (WmipFindMRByNames.c)
 *     ArbArbiterHandler @ 0x14077B0B0 (ArbArbiterHandler.c)
 *     WmipUpdateDataSource @ 0x14077B1E4 (WmipUpdateDataSource.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x14077BCF8 (IopAcquireReleaseConnectLockInternal.c)
 *     WmipLegacyEtwWorker @ 0x14077C7D0 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x14077C92C (WmipProcessLegacyEtwRegister.c)
 *     IopInsertLegacyBusDeviceNode @ 0x14077DBE0 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x14077E5E4 (FsRtlpRegisterUncProvider.c)
 *     PiPagePathSetState @ 0x14078175C (PiPagePathSetState.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140782B40 (IoRegisterFsRegistrationChangeMountAware.c)
 *     WmipQueryGuidInfo @ 0x140788A70 (WmipQueryGuidInfo.c)
 *     WheapEtwEnableCallback @ 0x1407895E0 (WheapEtwEnableCallback.c)
 *     CmpDummyThreadRoutine @ 0x14078A540 (CmpDummyThreadRoutine.c)
 *     FsRtlWaitForSmssEvent @ 0x14078A900 (FsRtlWaitForSmssEvent.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14082EB74 (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140847740 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     DbgkpQueueMessage @ 0x140848CC8 (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x140849BB0 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x14084A7A8 (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14084B774 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14084DF9C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x14084EB20 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x14084F1F0 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x14085385C (IopCancelAlertedRequest.c)
 *     IopHardErrorThread @ 0x140853E60 (IopHardErrorThread.c)
 *     IopSendMessageToTrackService @ 0x1408548B4 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x1408554D8 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x140855E20 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x140856C30 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14085C244 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x14085CBD4 (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x14085D44C (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x14085EA90 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1408603F4 (PnpRequestHwProfileChangeNotification.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14086189C (IopAcquireReleaseDispatcherLock.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14086D1C0 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x14086E0C0 (PnpReplacePartitionUnit.c)
 *     PiIrpQueryRemoveDevice @ 0x140875FD4 (PiIrpQueryRemoveDevice.c)
 *     PnpReallocateResources @ 0x140876480 (PnpReallocateResources.c)
 *     PiQueueDeviceRequest @ 0x14087798C (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x140877AF4 (PnpQueueQueryAndRemoveEvent.c)
 *     PipSendGuestAssignedNotification @ 0x140877EAC (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x140878040 (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x14087DA00 (IopQueryConflictList.c)
 *     PfTCleanup @ 0x1408A16E0 (PfTCleanup.c)
 *     PopCoolingExtensionPnpNotification @ 0x1408A3A60 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x1408A3BB8 (PopDeactiveThermalRequest.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1408A4E00 (PopDirectedDripsWorkerRoutine.c)
 *     PopReadPagesFromHiberFile @ 0x1408A80FC (PopReadPagesFromHiberFile.c)
 *     PopSetSystemAwayMode @ 0x1408A89F0 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x1408A8FB0 (PopThermalZoneRemove.c)
 *     PopBatteryRemove @ 0x1408AA030 (PopBatteryRemove.c)
 *     PopDiagStopCsSleepStudySession @ 0x1408AD254 (PopDiagStopCsSleepStudySession.c)
 *     PopSleepStudyTaskClientTimerWorker @ 0x1408B1DF0 (PopSleepStudyTaskClientTimerWorker.c)
 *     PopFanRemove @ 0x1408B3960 (PopFanRemove.c)
 *     PspQueueDeferredWorkAndWait @ 0x1408C58B4 (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x1408C8A18 (PsSetVmProcessorHostProcess.c)
 *     PsWaitForAllProcesses @ 0x1408C9854 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x1408C9D58 (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x1408CB9C0 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x1408CBB10 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1408CCB5C (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x1408CDC54 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1408CDDA0 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x1408CE154 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1408D8490 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     RtlpRunOnceWaitForInit @ 0x1408D84D4 (RtlpRunOnceWaitForInit.c)
 *     SmProcessResizeRequest @ 0x1408E8530 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1408E862C (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x1408E8AF8 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x1408E9BD0 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x1408EA42C (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1408EA4E0 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x1408EA5A4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1408EAD04 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1408EADA4 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x1408EB438 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x1408EF220 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x1408F00C8 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1408F0874 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x1408F0A84 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x1408F0C1C (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1408F1900 (WmipLegacyEtwCallback.c)
 *     WmipWaitForCollectionEnabled @ 0x1408F1C50 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x1408F2504 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1408F2730 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x1408F563C (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408F6580 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x1408FA8F0 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1408FA94C (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x1408FC804 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x14090033C (EtwpUpdateDisallowedGuids.c)
 *     EtwpCovSampCaptureFlush @ 0x140901450 (EtwpCovSampCaptureFlush.c)
 *     EtwpKsrCallback @ 0x1409074E0 (EtwpKsrCallback.c)
 *     ExpWorkQueueDestroy @ 0x140913E08 (ExpWorkQueueDestroy.c)
 *     NtMapCMFModule @ 0x140916F00 (NtMapCMFModule.c)
 *     NtStartProfile @ 0x140918170 (NtStartProfile.c)
 *     NtStopProfile @ 0x1409183D0 (NtStopProfile.c)
 *     WheaAttemptClearPoison @ 0x140919AB0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140919BA0 (WheaAttemptPhysicalPageOffline.c)
 *     sub_14091F938 @ 0x14091F938 (sub_14091F938.c)
 *     sub_140921110 @ 0x140921110 (sub_140921110.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1409437A0 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdiVerifyBootDisk @ 0x1409441AC (VhdiVerifyBootDisk.c)
 *     VfDriverLock @ 0x14096043C (VfDriverLock.c)
 *     IovpUnloadDriver @ 0x140963BB8 (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x14096EDB0 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x140973134 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x1409734B0 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x14097D650 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x140982C00 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x14098F178 (AnFwFadeCompletion.c)
 *     IopCreateArcNamesCd @ 0x1409F51F8 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x1409F5A3C (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140A39FEC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A3F35C (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A3FCD8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A3FECC (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140A402AC (SbpWaitForVmbus.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiSelectNextThread @ 0x1400136A0 (KiSelectNextThread.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x14003BD60 (KiSetVpThreadSpinLockCount.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KiCommitThreadWait @ 0x140040740 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KeAbPreWait @ 0x14009CBA0 (KeAbPreWait.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiFastExitThreadWait @ 0x14011AF94 (KiFastExitThreadWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
  $B82006E644A0B3C21B5C2164048F272C *v12; // r12
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
