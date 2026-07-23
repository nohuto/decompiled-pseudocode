/*
 * XREFs of KeWaitForSingleObject @ 0x140054880
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     PnpDisablePnpEventWorkerWatchdog @ 0x140005B14 (PnpDisablePnpEventWorkerWatchdog.c)
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PopSetWatchdog @ 0x140006068 (PopSetWatchdog.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14000E780 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     IopWaitForLockAlertable @ 0x14000EBDC (IopWaitForLockAlertable.c)
 *     CcWaitForUninitializeCacheMap @ 0x14001B334 (CcWaitForUninitializeCacheMap.c)
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     CcUnmapVacbArray @ 0x1400798D0 (CcUnmapVacbArray.c)
 *     PpmCheckPeriodicStart @ 0x14008B6B0 (PpmCheckPeriodicStart.c)
 *     WmipFindRegEntryByProviderId @ 0x14008D9A8 (WmipFindRegEntryByProviderId.c)
 *     PopExecuteOnTargetProcessors @ 0x1400A5E08 (PopExecuteOnTargetProcessors.c)
 *     AlpcpSignalAndWait @ 0x1400ABC10 (AlpcpSignalAndWait.c)
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400C9D00 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MiRetryNonPagedAllocation @ 0x1400CB4EC (MiRetryNonPagedAllocation.c)
 *     CcWriteBehind @ 0x1400D621C (CcWriteBehind.c)
 *     IopCompleteUnloadOrDelete @ 0x1400DA98C (IopCompleteUnloadOrDelete.c)
 *     IopWaitForSynchronousIo @ 0x1400DDC70 (IopWaitForSynchronousIo.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400E1528 (FsRtlpWaitForIoAtEof.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1400E3B80 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     KiSchedulerApc @ 0x1400F1850 (KiSchedulerApc.c)
 *     LdrpGetFromMUIMemCache @ 0x1400F4300 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400F451C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     PopFxActivateComponent @ 0x1400FE190 (PopFxActivateComponent.c)
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     CcCanIWrite @ 0x140104DA0 (CcCanIWrite.c)
 *     ExfWaitForRundownProtectionRelease @ 0x14010C4C0 (ExfWaitForRundownProtectionRelease.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140111B50 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x140111BF0 (ExpUnblockPushLock.c)
 *     ExpWaitForResource @ 0x140113960 (ExpWaitForResource.c)
 *     MiIssueSynchronousFlush @ 0x14011C9C8 (MiIssueSynchronousFlush.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D214 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x14011D624 (SmKmStoreHelperCleanup.c)
 *     AlpcpWaitForSingleObject @ 0x140120494 (AlpcpWaitForSingleObject.c)
 *     WmipReceiveNotifications @ 0x140124AD8 (WmipReceiveNotifications.c)
 *     CcSetValidData @ 0x140126B74 (CcSetValidData.c)
 *     IoSynchronousCallDriver @ 0x1401282E0 (IoSynchronousCallDriver.c)
 *     MiZeroPageWrite @ 0x140128508 (MiZeroPageWrite.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     WmipFindRegEntryByDevice @ 0x14012EA18 (WmipFindRegEntryByDevice.c)
 *     CmpDoFileRead @ 0x1401343E4 (CmpDoFileRead.c)
 *     PnpLockDeviceActionQueue @ 0x140135504 (PnpLockDeviceActionQueue.c)
 *     IopLoadDriverImage @ 0x140135570 (IopLoadDriverImage.c)
 *     SmKmStoreHelperWorker @ 0x140135BA0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140138428 (SmKmStoreDeleteWhenEmpty.c)
 *     PpmTryAcquireLock @ 0x14013F590 (PpmTryAcquireLock.c)
 *     PopIgnoreBatteryStatusChange @ 0x1401425E8 (PopIgnoreBatteryStatusChange.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1401464E0 (SmKmStoreHelperWaitForCommand.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014E3BC (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     PopHaltDeviceIdle @ 0x140155F38 (PopHaltDeviceIdle.c)
 *     PopTimeoutWakeTracking @ 0x1401584EC (PopTimeoutWakeTracking.c)
 *     PopRunMaximumIrpWorkers @ 0x14015887C (PopRunMaximumIrpWorkers.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140159AA4 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PnpDisableDeviceCompletionQueueWatchdog @ 0x140159DD0 (PnpDisableDeviceCompletionQueueWatchdog.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14015A100 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x14015A1A8 (PopFxActivateDevice.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14015FD30 (FsRtlGetVirtualDiskNestingLevel.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140160D5C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     PnpLockMountableDevice @ 0x140169AE8 (PnpLockMountableDevice.c)
 *     WmipDeregisterRegEntry @ 0x14016A998 (WmipDeregisterRegEntry.c)
 *     WmipAllocRegEntry @ 0x14016B6C8 (WmipAllocRegEntry.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016CA00 (LdrUnloadAlternateResourceModuleEx.c)
 *     ExUnregisterCallback @ 0x14016CFF0 (ExUnregisterCallback.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x14016D140 (IoReleaseRemoveLockAndWaitEx.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140170AE0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopIrpWorker @ 0x140171840 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x1401722B4 (PopPepUpdateConstraints.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140174C40 (LdrpSetAlternateResourceModuleHandle.c)
 *     MiQueueWorkingSetRequest @ 0x140175DFC (MiQueueWorkingSetRequest.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14017737C (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     WheapAddErrorSource @ 0x14017D31C (WheapAddErrorSource.c)
 *     KeSwapProcessOrStack @ 0x14017FEE0 (KeSwapProcessOrStack.c)
 *     CcQueueLazyWriteScanThread @ 0x140183980 (CcQueueLazyWriteScanThread.c)
 *     MiOkToZeroNextLargePage @ 0x1401854DC (MiOkToZeroNextLargePage.c)
 *     MiModifiedPageWriter @ 0x140188880 (MiModifiedPageWriter.c)
 *     CmpLazyWriteWorker @ 0x140188C50 (CmpLazyWriteWorker.c)
 *     MiStoreEvictThread @ 0x14018A500 (MiStoreEvictThread.c)
 *     WmipBuildTraceDeviceList @ 0x14018C64C (WmipBuildTraceDeviceList.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x14018DAA8 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     WmiQueryTraceProviderCount @ 0x14018E014 (WmiQueryTraceProviderCount.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401918C0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopIrpWorkerControl @ 0x140191B10 (PopIrpWorkerControl.c)
 *     PnpSerializeBoot @ 0x140192EF8 (PnpSerializeBoot.c)
 *     CcDeleteSectionsForPartition @ 0x14026B544 (CcDeleteSectionsForPartition.c)
 *     FsRtlpWaitOnIrp @ 0x140270360 (FsRtlpWaitOnIrp.c)
 *     FsFilterAllocateCompletionStack @ 0x14027066C (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x140270C84 (FsRtlpPostStackOverflow.c)
 *     IopAllocateBackpocketIrp @ 0x14027E610 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x14027E8F0 (IopAllocateReserveIrp.c)
 *     PnpDisableDelayedRemoveWorkerWatchdog @ 0x140289CA8 (PnpDisableDelayedRemoveWorkerWatchdog.c)
 *     PnprQuiesce @ 0x14028A75C (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x14028BA04 (PnpProcessRebalance.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1402935B4 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140299EF4 (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x14029A2D0 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14029A300 (KiSynchronizePassiveInterruptExecution.c)
 *     KiParkUmsThread @ 0x14029D8B0 (KiParkUmsThread.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4558 (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402A5774 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x1402AEF7C (MiPfCompleteCoalescedIo.c)
 *     MiDeleteExtentPfns @ 0x1402B5CB0 (MiDeleteExtentPfns.c)
 *     MiIssuePageExtendRequest @ 0x1402B855C (MiIssuePageExtendRequest.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1402B8AE8 (MiQueueSyncModifiedWriterApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8C60 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1402B945C (MiCheckHoldFaultForHotPatch.c)
 *     MiApplyCommitDelay @ 0x1402C0240 (MiApplyCommitDelay.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1402C4554 (MmStoreFlushOutstandingEvictions.c)
 *     MiWaitForAvailablePages @ 0x1402CB588 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402CB8D0 (MiContractWsSwapPageFileWorker.c)
 *     MiDrainCrossPartitionUsage @ 0x1402D1914 (MiDrainCrossPartitionUsage.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402D2EE0 (NtSignalAndWaitForSingleObject.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402D8818 (PopFxIssueComponentPerfStateChanges.c)
 *     PopWdiTimerWorkerThread @ 0x1402E3000 (PopWdiTimerWorkerThread.c)
 *     PspIumFreePartitionState @ 0x1402EBA54 (PspIumFreePartitionState.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140302704 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmpFpWaitForResource @ 0x1403084F8 (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140308E40 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x140309768 (SmWaitForSyncIo.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140314058 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureContextStop @ 0x1403169A0 (EtwpCovSampCaptureContextStop.c)
 *     ExRegisterBootDevice @ 0x14031A180 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x14031A3D0 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x1403206C0 (WheapProcessWorkQueueItem.c)
 *     sub_140322760 @ 0x140322760 (sub_140322760.c)
 *     PopCaptureTimeOnProcZero @ 0x140567454 (PopCaptureTimeOnProcZero.c)
 *     PfpScenCtxPrefetchWait @ 0x1405679E0 (PfpScenCtxPrefetchWait.c)
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PopWakeDeviceList @ 0x140569954 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140569AB8 (PopSleepDeviceList.c)
 *     PopEndMirroring @ 0x14056C600 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x14056D0F0 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14056D274 (MmDuplicateMemory.c)
 *     PopBuildDeviceNotifyList @ 0x14056DD44 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14056E750 (PopFlushVolumes.c)
 *     IoShutdownSystem @ 0x140578C68 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140578E88 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x14057A814 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x14057BBC0 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x14057CD54 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x14057D9C0 (PopGracefulShutdown.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140588074 (ExpHwidSendSynchronousIrpToDevice.c)
 *     PnpDeviceEventWorker @ 0x14058CBC0 (PnpDeviceEventWorker.c)
 *     PiControlGetSetDeviceStatus @ 0x14059CD40 (PiControlGetSetDeviceStatus.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1405A2E10 (FsRtlCancellableWaitForMultipleObjects.c)
 *     IopSynchronousCall @ 0x1405A3CE0 (IopSynchronousCall.c)
 *     IopMountVolume @ 0x1405A3E64 (IopMountVolume.c)
 *     CmpGetVolumeClusterSize @ 0x1405A5094 (CmpGetVolumeClusterSize.c)
 *     IoVolumeDeviceToGuidPath @ 0x1405A5540 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405A5690 (IoVolumeDeviceNameToGuidPath.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B2640 (CmpLockRegistryFreezeAware.c)
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 *     EtwpLogger @ 0x1405C2430 (EtwpLogger.c)
 *     EtwpDisableTraceProviders @ 0x1405C3530 (EtwpDisableTraceProviders.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C61A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405CF180 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadAppKey @ 0x1405D054C (CmLoadAppKey.c)
 *     NtWaitForSingleObject @ 0x1405EAAA0 (NtWaitForSingleObject.c)
 *     MmCleanProcessAddressSpace @ 0x1405F2BC8 (MmCleanProcessAddressSpace.c)
 *     PspUserThreadStartup @ 0x1405F7E40 (PspUserThreadStartup.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     WmipForwardWmiIrp @ 0x1405FC974 (WmipForwardWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1405FD204 (WmipUnreferenceEntry.c)
 *     WmipOpenBlock @ 0x140612928 (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x1406137A0 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x140613888 (WmipPrepareWnodeSI.c)
 *     WmipEnableCollectOrEvent @ 0x140613CC4 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x140613DB8 (WmipIsQuerySetGuid.c)
 *     FsRtlGetFileSize @ 0x14061C4A0 (FsRtlGetFileSize.c)
 *     MiCreateImageFileMap @ 0x14061DEB8 (MiCreateImageFileMap.c)
 *     IopCloseFile @ 0x14063AB30 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x14063BA30 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x14063C3E0 (IopDeleteFile.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     CmpParseKey @ 0x140642370 (CmpParseKey.c)
 *     MmAcquireLoadLock @ 0x140652C20 (MmAcquireLoadLock.c)
 *     EtwpStopTrace @ 0x14065A150 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14065B124 (EtwpAcquireLoggerContextByLoggerName.c)
 *     IopSynchronousApiServiceTail @ 0x14065FADC (IopSynchronousApiServiceTail.c)
 *     IopQueryXxxInformation @ 0x1406628E0 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x140662AD0 (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140662C00 (IoVolumeDeviceToDosName.c)
 *     RtlDecompressBufferLZNT1 @ 0x140664730 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1406648D0 (RtlDecompressFragmentLZNT1.c)
 *     sub_140689660 @ 0x140689660 (sub_140689660.c)
 *     IopGetSetObjectId @ 0x14068D7F0 (IopGetSetObjectId.c)
 *     AlpcpWaitForPortReferences @ 0x14068FCBC (AlpcpWaitForPortReferences.c)
 *     WmipDeleteMethod @ 0x140690140 (WmipDeleteMethod.c)
 *     WmipDisableCollectOrEvent @ 0x140690238 (WmipDisableCollectOrEvent.c)
 *     WmipProcessEvent @ 0x14069036C (WmipProcessEvent.c)
 *     IopGetSetSecurityObject @ 0x14069A290 (IopGetSetSecurityObject.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A6380 (FsRtlQueryKernelEaFile.c)
 *     IopCancelIrpsInThreadList @ 0x1406A7CA8 (IopCancelIrpsInThreadList.c)
 *     PiDrvDbLoadNode @ 0x1406AAD94 (PiDrvDbLoadNode.c)
 *     WmipEnumerateMofResources @ 0x1406AB99C (WmipEnumerateMofResources.c)
 *     NtGetMUIRegistryInfo @ 0x1406AE860 (NtGetMUIRegistryInfo.c)
 *     FsRtlKernelFsControlFile @ 0x1406B3AD0 (FsRtlKernelFsControlFile.c)
 *     CmpFileFlushAndPurge @ 0x1406B9A2C (CmpFileFlushAndPurge.c)
 *     IoWMIRegistrationControl @ 0x1406BA1A0 (IoWMIRegistrationControl.c)
 *     WmipQueueRegWork @ 0x1406BA2C0 (WmipQueueRegWork.c)
 *     WmipPrepareForWnodeAD @ 0x1406BF364 (WmipPrepareForWnodeAD.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1406C3600 (EtwpCrimsonProvEnableCallback.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C4248 (EtwpSynchronizeWithLogger.c)
 *     NtWaitForKeyedEvent @ 0x1406C4A50 (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x1406C4D90 (NtReleaseKeyedEvent.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406C6838 (EtwpUpdateGlobalGroupMasks.c)
 *     WmipRegistrationWorker @ 0x1406C74F0 (WmipRegistrationWorker.c)
 *     FsRtlSetKernelEaFile @ 0x1406C9170 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryCachedVdl @ 0x1406CBB10 (FsRtlQueryCachedVdl.c)
 *     FsRtlSetFileSize @ 0x1406CBD00 (FsRtlSetFileSize.c)
 *     EtwpStartTrace @ 0x1406CEF4C (EtwpStartTrace.c)
 *     MiInSwapStore @ 0x1406D206C (MiInSwapStore.c)
 *     PoUnregisterPowerSettingCallback @ 0x1406DC7F0 (PoUnregisterPowerSettingCallback.c)
 *     PopInitSystemSleeperThread @ 0x1406DE104 (PopInitSystemSleeperThread.c)
 *     NtInitiatePowerAction @ 0x1406DF170 (NtInitiatePowerAction.c)
 *     EmPowerPagingEnabled @ 0x1406E01A8 (EmPowerPagingEnabled.c)
 *     PopResizeHiberFile @ 0x1406E0F88 (PopResizeHiberFile.c)
 *     ExSwapinWorkerThreads @ 0x1406E15BC (ExSwapinWorkerThreads.c)
 *     PopGetWakeSource @ 0x1406E2284 (PopGetWakeSource.c)
 *     PnpStartDeviceNode @ 0x1406ECCFC (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x1406ED004 (IopUncacheInterfaceInformation.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1406F02AC (PopFxUnregisterDeviceOrWait.c)
 *     PnpQueryInterface @ 0x1406FA418 (PnpQueryInterface.c)
 *     PnpAllocateResources @ 0x1406FC05C (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x1406FCD90 (IopFilterResourceRequirementsCall.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406FD570 (FsRtlIssueDeviceIoControl.c)
 *     IoReportTargetDeviceChange @ 0x1407008E0 (IoReportTargetDeviceChange.c)
 *     IoSetInformation @ 0x140702520 (IoSetInformation.c)
 *     FsRtlBalanceReads @ 0x140703640 (FsRtlBalanceReads.c)
 *     IopInvalidateVolumesForDevice @ 0x1407061EC (IopInvalidateVolumesForDevice.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140706CA0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     NtMapCMFModule @ 0x140707A40 (NtMapCMFModule.c)
 *     IopLoadFileSystemDriver @ 0x1407080BC (IopLoadFileSystemDriver.c)
 *     WmipDeregisterDevice @ 0x140708794 (WmipDeregisterDevice.c)
 *     WmipAddDataSource @ 0x140708870 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140709020 (WmipDetermineInstanceBaseIndex.c)
 *     WmipEnableCollectionForNewGuid @ 0x140709294 (WmipEnableCollectionForNewGuid.c)
 *     WmipFindISinGEbyName @ 0x140709798 (WmipFindISinGEbyName.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140709890 (WmipDisableCollectionForRemovedGuid.c)
 *     IopUnloadDriver @ 0x140709C68 (IopUnloadDriver.c)
 *     WmipSendEnableDisableRequest @ 0x14070BB0C (WmipSendEnableDisableRequest.c)
 *     WmipRegisterDevice @ 0x14070C4CC (WmipRegisterDevice.c)
 *     WmipUpdateDeviceStackSize @ 0x14070C634 (WmipUpdateDeviceStackSize.c)
 *     IopCreateArcName @ 0x14070C6A8 (IopCreateArcName.c)
 *     WmipDSCleanup @ 0x14070E810 (WmipDSCleanup.c)
 *     WmipSetTraceNotify @ 0x14070EB78 (WmipSetTraceNotify.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140710510 (PnpSynchronizeDeviceEventQueue.c)
 *     IoWMISetNotificationCallback @ 0x1407108B0 (IoWMISetNotificationCallback.c)
 *     IoDisconnectInterrupt @ 0x1407115F0 (IoDisconnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x140711DFC (IopDestroyActiveConnectBlock.c)
 *     PopBatteryWorker @ 0x14071B020 (PopBatteryWorker.c)
 *     NtNotifyChangeSession @ 0x14071CB50 (NtNotifyChangeSession.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14071DFCC (SPCallServerHandleWaitForDisplayWindow.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14071EC98 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14071F120 (FsRtlIssueFileNotificationFsctl.c)
 *     ObWaitForSingleObject @ 0x14071F340 (ObWaitForSingleObject.c)
 *     PopSanityCheckHiberFile @ 0x14071F818 (PopSanityCheckHiberFile.c)
 *     PopAcquireTransitionLock @ 0x14071F948 (PopAcquireTransitionLock.c)
 *     PopClearHiberFileSignature @ 0x14071FED4 (PopClearHiberFileSignature.c)
 *     IopLegacyResourceAllocation @ 0x14072E084 (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x14072F720 (IopAllocateBootResources.c)
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 *     ArbBuildAssignmentOrdering @ 0x14073A628 (ArbBuildAssignmentOrdering.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x14073D6A4 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14073D6D0 (PnpWaitForEmptyDeviceActionQueue.c)
 *     SepRmCommandServerThread @ 0x140741490 (SepRmCommandServerThread.c)
 *     CmCompleteRegistryInitialization @ 0x1407467A4 (CmCompleteRegistryInitialization.c)
 *     PopCreateHiberFile @ 0x140747900 (PopCreateHiberFile.c)
 *     MiZeroPageFileFirstPage @ 0x14074E06C (MiZeroPageFileFirstPage.c)
 *     WmipAddMofResource @ 0x140752B6C (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x140752DA4 (WmipFindMRByNames.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140754EDC (WmipSendWmiIrpToTraceDeviceList.c)
 *     ArbArbiterHandler @ 0x140756660 (ArbArbiterHandler.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140756FE4 (IopAcquireReleaseConnectLockInternal.c)
 *     WmipLegacyEtwWorker @ 0x140757650 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407577AC (WmipProcessLegacyEtwRegister.c)
 *     IopInsertLegacyBusDeviceNode @ 0x14075948C (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x14075A064 (FsRtlpRegisterUncProvider.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14075D150 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PiPagePathSetState @ 0x14075D3CC (PiPagePathSetState.c)
 *     WheapEtwEnableCallback @ 0x140762670 (WheapEtwEnableCallback.c)
 *     WmipQueryGuidInfo @ 0x140762CC0 (WmipQueryGuidInfo.c)
 *     CmpDummyThreadRoutine @ 0x140764D50 (CmpDummyThreadRoutine.c)
 *     FsRtlWaitForSmssEvent @ 0x140765110 (FsRtlWaitForSmssEvent.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1407F6F8C (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14080F0C8 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     DbgkpQueueMessage @ 0x140810604 (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x140811500 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x140811FCC (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140812F34 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140815730 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x140816200 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x1408168F0 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x14081A7EC (IopCancelAlertedRequest.c)
 *     IopGetVolumeId @ 0x14081B024 (IopGetVolumeId.c)
 *     IopHardErrorThread @ 0x14081B160 (IopHardErrorThread.c)
 *     IopSendMessageToTrackService @ 0x14081BB54 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x14081C6F8 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x14081CFC0 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x14081DDB0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140823374 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x140823AFC (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x140824200 (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x140825840 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1408271A4 (PnpRequestHwProfileChangeNotification.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14082861C (IopAcquireReleaseDispatcherLock.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1408339F4 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 *     PiIrpQueryRemoveDevice @ 0x14083C470 (PiIrpQueryRemoveDevice.c)
 *     PnpReallocateResources @ 0x14083C5B4 (PnpReallocateResources.c)
 *     PiQueueDeviceRequest @ 0x14083DA48 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14083DBA4 (PnpQueueQueryAndRemoveEvent.c)
 *     IopWarmEjectDevice @ 0x14083E0B4 (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x14084321C (IopQueryConflictList.c)
 *     PfTCleanup @ 0x14086643C (PfTCleanup.c)
 *     PopCoolingExtensionPnpNotification @ 0x1408687B0 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x14086890C (PopDeactiveThermalRequest.c)
 *     PopDirectedDripsWorkerRoutine @ 0x140869A50 (PopDirectedDripsWorkerRoutine.c)
 *     PopFxUnregisterDevice @ 0x14086BA0C (PopFxUnregisterDevice.c)
 *     PopSetSystemAwayMode @ 0x14086D340 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x14086D8A0 (PopThermalZoneRemove.c)
 *     PopBatteryRemove @ 0x14086E740 (PopBatteryRemove.c)
 *     PopPepUnregisterDevice @ 0x14086F17C (PopPepUnregisterDevice.c)
 *     PopDiagNextCsSleepStudySession @ 0x1408714D0 (PopDiagNextCsSleepStudySession.c)
 *     PopDiagStopCsSleepStudySession @ 0x1408717DC (PopDiagStopCsSleepStudySession.c)
 *     PopSleepStudyTaskClientTimerWorker @ 0x1408762C0 (PopSleepStudyTaskClientTimerWorker.c)
 *     PopFanRemove @ 0x1408778F0 (PopFanRemove.c)
 *     PspQueueDeferredWorkAndWait @ 0x1408887A4 (PspQueueDeferredWorkAndWait.c)
 *     PsWaitForAllProcesses @ 0x14088C5E0 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x14088CAC8 (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x14088E690 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x14088E7E0 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14088F69C (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x140890AE4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140890C20 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x140890FA0 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x14089ABB0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     RtlpRunOnceWaitForInit @ 0x14089ABF4 (RtlpRunOnceWaitForInit.c)
 *     SmProcessResizeRequest @ 0x1408AC530 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1408AC620 (SmProcessStatsRequest.c)
 *     SmStoreCompressionStop @ 0x1408AC9DC (SmStoreCompressionStop.c)
 *     SmStorePhysicalRequestIssue @ 0x1408ACC8C (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x1408ADEFC (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x1408AE738 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1408AE7EC (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x1408AE8B0 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1408AEFB8 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1408AF048 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AF6B0 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x1408B2FD0 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x1408B3E50 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1408B45F8 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x1408B4800 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x1408B4998 (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1408B56D0 (WmipLegacyEtwCallback.c)
 *     WmipUpdateDataSource @ 0x1408B5B08 (WmipUpdateDataSource.c)
 *     WmipWaitForCollectionEnabled @ 0x1408B6060 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x1408B6914 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1408B6B34 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x1408B9DB8 (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408BAD0C (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x1408BEFAC (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1408BF008 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x1408C0CB4 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x1408C43DC (EtwpUpdateDisallowedGuids.c)
 *     EtwpCovSampCaptureFlush @ 0x1408C54E0 (EtwpCovSampCaptureFlush.c)
 *     EtwpKsrCallback @ 0x1408CB240 (EtwpKsrCallback.c)
 *     ExpWorkQueueDestroy @ 0x1408D77D8 (ExpWorkQueueDestroy.c)
 *     NtStartProfile @ 0x1408DB6A0 (NtStartProfile.c)
 *     NtStopProfile @ 0x1408DB900 (NtStopProfile.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1408DCCC0 (WheaAttemptPhysicalPageOffline.c)
 *     sub_1408E45B0 @ 0x1408E45B0 (sub_1408E45B0.c)
 *     sub_1408E6348 @ 0x1408E6348 (sub_1408E6348.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140906448 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdiVerifyBootDisk @ 0x140906E4C (VhdiVerifyBootDisk.c)
 *     VfDriverLock @ 0x1409226E0 (VfDriverLock.c)
 *     IovpUnloadDriver @ 0x140925A38 (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x140931534 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x140934B18 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x140934E90 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140939140 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x140944260 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x140950140 (AnFwFadeCompletion.c)
 *     IopAssignBootDriveLetter @ 0x1409D75AC (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x1409D7910 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1409F5AA4 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1409FA784 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1409FB08C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1409FB274 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x1409FB64C (SbpWaitForVmbus.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400BC720 (KiSetVpThreadSpinLockCount.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiSelectNextThread @ 0x1400D71E8 (KiSelectNextThread.c)
 *     KiFastExitThreadWait @ 0x1400F9E2C (KiFastExitThreadWait.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiAcquirePrcbLock @ 0x14028F350 (KiAcquirePrcbLock.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

NTSTATUS __stdcall KeWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // dl
  __int64 v9; // r8
  LONGLONG QuadPart; // r13
  unsigned __int8 WaitIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax
  struct _KPRCB *v17; // rcx
  unsigned __int8 v18; // cl
  LONGLONG v19; // r13
  NTSTATUS v20; // esi
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  int v23; // eax
  volatile __int64 WaitStatus; // r15
  unsigned int v25; // esi
  struct _KPRCB *v26; // rbx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  struct _KPRCB *v30; // rsi
  _DWORD *v31; // rcx
  int v32; // eax
  _DWORD *v33; // rcx
  int v34; // eax
  unsigned int v35; // edx
  unsigned __int64 v36; // rax
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v38; // rcx
  PVOID *v39; // rcx
  NTSTATUS result; // eax
  unsigned __int8 v41; // dl
  struct _KPRCB *v42; // rdi
  _KTHREAD *v43; // r14
  _KTHREAD *v44; // rbx
  bool v45; // zf
  struct _KPRCB *v46; // rcx
  struct _KPRCB *v47; // rcx
  volatile unsigned __int8 DpcRoutineActive; // cl
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v50; // rcx
  struct _KPRCB *v51; // rcx
  _DWORD *v52; // rdx
  int v53; // eax
  unsigned __int8 v54; // r14
  _KWAIT_STATUS_REGISTER v55; // al
  struct _KPRCB *v56; // rdi
  _DWORD *v57; // rcx
  int v58; // eax
  _DWORD *v59; // rcx
  int v60; // eax
  struct _KPRCB *v61; // rcx
  _DWORD *v62; // rdx
  int v63; // eax
  _KTHREAD *NextThread; // rax
  _KTHREAD *v65; // rsi
  struct _KPRCB *v66; // rdi
  _DWORD *v67; // rcx
  int v68; // eax
  _DWORD *v69; // rcx
  int v70; // eax
  _KTHREAD *v71; // rdi
  bool v72; // zf
  struct _KPRCB *v73; // rcx
  bool v74; // zf
  _KTHREAD *v75; // rsi
  struct _KPRCB *v76; // rdi
  _DWORD *v77; // rcx
  int v78; // eax
  _DWORD *v79; // rcx
  int v80; // eax
  _KTHREAD *v81; // rdi
  __int64 v82; // r8
  struct _KPRCB *v83; // rcx
  struct _KPRCB *v84; // rcx
  _KTHREAD *v85; // rdi
  __int64 v86; // rdx
  struct _KPRCB *v87; // rsi
  _KTHREAD *v88; // rsi
  bool v89; // zf
  __int64 v90; // rdx
  int v91; // r9d
  unsigned int v92; // r8d
  struct _KPRCB *v93; // rsi
  _KWAIT_STATUS_REGISTER v94; // al
  struct _KPRCB *v95; // rdi
  __int64 v96; // rdx
  struct _KPRCB *v97; // rsi
  _KTHREAD *v98; // rdi
  __int64 v99; // rdx
  struct _KPRCB *v100; // rsi
  _KTHREAD *v101; // rsi
  __int64 v102; // r8
  struct _KPRCB *v103; // rcx
  struct _KPRCB *v104; // rcx
  struct _KPRCB *v105; // rcx
  struct _KPRCB *v106; // rcx
  __int64 v107; // rdx
  struct _KPRCB *v108; // rsi
  struct _KPRCB *v109; // rcx
  struct _KPRCB *v110; // rcx
  signed __int32 v111[8]; // [rsp+0h] [rbp-71h] BYREF
  int v112; // [rsp+20h] [rbp-51h] BYREF
  int v113; // [rsp+24h] [rbp-4Dh] BYREF
  int v114; // [rsp+28h] [rbp-49h] BYREF
  int v115; // [rsp+2Ch] [rbp-45h] BYREF
  int v116; // [rsp+30h] [rbp-41h] BYREF
  int v117; // [rsp+34h] [rbp-3Dh] BYREF
  int v118; // [rsp+38h] [rbp-39h] BYREF
  int v119; // [rsp+3Ch] [rbp-35h] BYREF
  int v120; // [rsp+40h] [rbp-31h] BYREF
  int v121; // [rsp+44h] [rbp-2Dh] BYREF
  int v122; // [rsp+48h] [rbp-29h] BYREF
  LONGLONG v123; // [rsp+50h] [rbp-21h]
  __int64 v124; // [rsp+58h] [rbp-19h] BYREF
  __int64 v125; // [rsp+60h] [rbp-11h] BYREF
  int v126; // [rsp+68h] [rbp-9h]
  unsigned __int8 v128; // [rsp+D8h] [rbp+67h]
  unsigned __int8 v129; // [rsp+E0h] [rbp+6Fh]
  int Timeouta; // [rsp+F0h] [rbp+7Fh]

  v128 = WaitReason;
  CurrentThread = KeGetCurrentThread();
  v129 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v129 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v9 = 1LL;
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
    v123 = QuadPart;
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
      v112 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v14 = SchedulerAssist[5];
            SchedulerAssist[5] = v14 + 1;
            if ( v14 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          break;
        v15 = CurrentPrcb->SchedulerAssist;
        if ( v15 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v16 = v15[5] - 1;
            v15[5] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v112);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      KiReleaseThreadLockSafe(CurrentThread);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v17);
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v18 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v18 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      CurrentThread->WaitIrql = 0;
    }
    v19 = v123;
    if ( !Alertable )
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && WaitMode )
        goto LABEL_99;
      goto LABEL_48;
    }
    if ( CurrentThread->Alerted[WaitMode] )
    {
      CurrentThread->Alerted[WaitMode] = 0;
      v20 = 257;
      goto LABEL_100;
    }
    if ( WaitMode && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      break;
    if ( CurrentThread->Alerted[0] )
    {
      CurrentThread->Alerted[0] = 0;
      v20 = 257;
      goto LABEL_100;
    }
LABEL_48:
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v128;
    CurrentThread->ThreadLock = 0LL;
    v21 = KeGetCurrentPrcb();
    v22 = v21->SchedulerAssist;
    if ( v22 )
    {
      if ( v21->NestingLevel <= 1u )
      {
        v23 = v22[5] - 1;
        v22[5] = v23;
        if ( !v23 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    LODWORD(WaitStatus) = 0;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    v25 = 0;
    v26 = KeGetCurrentPrcb();
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = Object;
    if ( _interlockedbittestandset((volatile signed __int32 *)Object, 7u) )
    {
      do
      {
        if ( (++v25 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21, v22, v9) )
        {
          HvlNotifyLongSpinWait(v25);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)Object & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)Object, 7u) );
    }
    v27 = *((_DWORD *)Object + 1);
    if ( (*(_BYTE *)Object & 0x7F) == 2 )
    {
      if ( v27 > 0
        || CurrentThread == *((struct _KTHREAD **)Object + 5) && *((_BYTE *)Object + 2) == v26->DpcRoutineActive )
      {
        v28 = *((_DWORD *)Object + 1);
        if ( v28 == 0x80000000 )
        {
          _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
          KiFastExitThreadWait(v26, CurrentThread, v129);
          RtlRaiseStatus(-1073741423);
        }
        v29 = v28 - 1;
        *((_DWORD *)Object + 1) = v29;
        if ( !v29 )
        {
          CurrentThread->WaitStatus = 0LL;
          v30 = KeGetCurrentPrcb();
          v113 = 0;
          while ( 1 )
          {
            v31 = v30->SchedulerAssist;
            if ( v31 )
            {
              if ( v30->NestingLevel <= 1u )
              {
                v32 = v31[5];
                v31[5] = v32 + 1;
                if ( v32 == -1 )
                  KiRemoveSystemWorkPriorityKick(v30);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
              break;
            v33 = v30->SchedulerAssist;
            if ( v33 )
            {
              if ( v30->NestingLevel <= 1u )
              {
                v34 = v33[5] - 1;
                v33[5] = v34;
                if ( !v34 )
                  KiRemoveSystemWorkPriorityKick(v30);
              }
            }
            do
              KeYieldProcessorEx(&v113);
            while ( CurrentThread->ThreadLock );
          }
          CurrentThread->KernelApcDisable -= *((unsigned __int8 *)Object + 49);
          if ( v26->CurrentThread == CurrentThread )
            DpcRoutineActive = v26->DpcRoutineActive;
          else
            DpcRoutineActive = 0;
          v126 = *(_DWORD *)Object;
          BYTE2(v126) = DpcRoutineActive;
          *(_DWORD *)Object = v126;
          v45 = *((_BYTE *)Object + 48) == 0;
          *((_QWORD *)Object + 5) = CurrentThread;
          if ( !v45 )
          {
            *((_BYTE *)Object + 48) = 0;
            CurrentThread->WaitStatus |= 0x80uLL;
          }
          Blink = CurrentThread->MutantListHead.Blink;
          v50 = (struct _LIST_ENTRY *)((char *)Object + 24);
          if ( Blink->Flink != &CurrentThread->MutantListHead )
LABEL_222:
            __fastfail(3u);
          v50->Flink = &CurrentThread->MutantListHead;
          *((_QWORD *)Object + 4) = Blink;
          Blink->Flink = v50;
          CurrentThread->MutantListHead.Blink = v50;
          _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
          KiSetThreadState(CurrentThread, 2LL);
          CurrentThread->ThreadLock = 0LL;
          v51 = KeGetCurrentPrcb();
          v52 = v51->SchedulerAssist;
          if ( v52 )
          {
            if ( v51->NestingLevel <= 1u )
            {
              v53 = v52[5] - 1;
              v52[5] = v53;
              if ( !v53 )
                KiRemoveSystemWorkPriorityKick(v51);
            }
          }
          WaitStatus = CurrentThread->WaitStatus;
          v54 = CurrentThread->WaitIrql;
          v55.Flags = (unsigned __int8)CurrentThread->WaitRegister;
          if ( (v55.Flags & 0x38) != 0 )
          {
            if ( (v55.Flags & 0x18) != 0 )
            {
              if ( (v55.Flags & 8) != 0 )
                _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
              v56 = KeGetCurrentPrcb();
              v114 = 0;
              v124 = 0LL;
              while ( 1 )
              {
                v57 = v56->SchedulerAssist;
                if ( v57 )
                {
                  if ( v56->NestingLevel <= 1u )
                  {
                    v58 = v57[5];
                    v57[5] = v58 + 1;
                    if ( v58 == -1 )
                      KiRemoveSystemWorkPriorityKick(v56);
                  }
                }
                if ( !_interlockedbittestandset64((volatile signed __int32 *)&v26->PrcbLock, 0LL) )
                  break;
                v59 = v56->SchedulerAssist;
                if ( v59 )
                {
                  if ( v56->NestingLevel <= 1u )
                  {
                    v60 = v59[5] - 1;
                    v59[5] = v60;
                    if ( !v60 )
                      KiRemoveSystemWorkPriorityKick(v56);
                  }
                }
                do
                  KeYieldProcessorEx(&v114);
                while ( v26->PrcbLock );
              }
              if ( !v26->NextThread )
                KiSelectNextThread(v26, &v124);
              _InterlockedAnd64((volatile signed __int64 *)&v26->PrcbLock, 0LL);
              v61 = KeGetCurrentPrcb();
              v62 = v61->SchedulerAssist;
              if ( v62 )
              {
                if ( v61->NestingLevel <= 1u )
                {
                  v63 = v62[5] - 1;
                  v62[5] = v63;
                  if ( !v63 )
                    KiRemoveSystemWorkPriorityKick(v61);
                }
              }
              KiReadyDeferredReadyList(v26, &v124);
              NextThread = v26->NextThread;
              if ( v54 < 2u )
              {
                v65 = v26->CurrentThread;
                if ( NextThread )
                {
                  KiAbProcessContextSwitch(v26->CurrentThread, 0LL);
                  v66 = KeGetCurrentPrcb();
                  v115 = 0;
                  while ( 1 )
                  {
                    v67 = v66->SchedulerAssist;
                    if ( v67 )
                    {
                      if ( v66->NestingLevel <= 1u )
                      {
                        v68 = v67[5];
                        v67[5] = v68 + 1;
                        if ( v68 == -1 )
                          KiRemoveSystemWorkPriorityKick(v66);
                      }
                    }
                    if ( !_interlockedbittestandset64((volatile signed __int32 *)&v26->PrcbLock, 0LL) )
                      break;
                    v69 = v66->SchedulerAssist;
                    if ( v69 )
                    {
                      if ( v66->NestingLevel <= 1u )
                      {
                        v70 = v69[5] - 1;
                        v69[5] = v70;
                        if ( !v70 )
                          KiRemoveSystemWorkPriorityKick(v66);
                      }
                    }
                    do
                      KeYieldProcessorEx(&v115);
                    while ( v26->PrcbLock );
                  }
                  v71 = v26->NextThread;
                  v26->NextThread = 0LL;
                  _disable();
                  KiEndThreadCycleAccumulation(v26, v65, 0LL);
                  _enable();
                  v26->CurrentThread = v71;
                  if ( v71->WaitBlockFill6[68] == 1 )
                    v71->ReadyTime = v71->ReadyTime - v71->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
                  v71->WaitBlockFill6[68] = 2;
                  v65->WaitReason = 32;
                  v65->WaitIrql = v54;
                  KiQueueReadyThread(v26, v65);
                  v72 = (unsigned __int8)KiSwapContext(v65, v71, v54) == 0;
                }
                else
                {
                  v72 = (v65->MiscFlags & 0x40) == 0;
                }
                if ( !v72 )
                {
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
                  {
                    v73 = KeGetCurrentPrcb();
                    _InterlockedAnd((volatile signed __int32 *)v73->SchedulerAssist, 0xFFFEFFFF);
                    KiRemoveSystemWorkPriorityKick(v73);
                  }
                  __writecr8(1uLL);
                  v65->MiscFlags &= ~0x40u;
LABEL_297:
                  KiDeliverApc(0LL, 0LL, 0LL);
                  goto LABEL_298;
                }
                goto LABEL_298;
              }
              goto LABEL_176;
            }
            v75 = v26->CurrentThread;
            if ( v26->NextThread )
            {
              KiAbProcessContextSwitch(v26->CurrentThread, 0LL);
              v76 = KeGetCurrentPrcb();
              v116 = 0;
              while ( 1 )
              {
                v77 = v76->SchedulerAssist;
                if ( v77 )
                {
                  if ( v76->NestingLevel <= 1u )
                  {
                    v78 = v77[5];
                    v77[5] = v78 + 1;
                    if ( v78 == -1 )
                      KiRemoveSystemWorkPriorityKick(v76);
                  }
                }
                if ( !_interlockedbittestandset64((volatile signed __int32 *)&v26->PrcbLock, 0LL) )
                  break;
                v79 = v76->SchedulerAssist;
                if ( v79 )
                {
                  if ( v76->NestingLevel <= 1u )
                  {
                    v80 = v79[5] - 1;
                    v79[5] = v80;
                    if ( !v80 )
                      KiRemoveSystemWorkPriorityKick(v76);
                  }
                }
                do
                  KeYieldProcessorEx(&v116);
                while ( v26->PrcbLock );
              }
              v81 = v26->NextThread;
              v26->NextThread = 0LL;
              _disable();
              KiEndThreadCycleAccumulation(v26, v75, 0LL);
              _enable();
              v26->CurrentThread = v81;
              if ( v81->WaitBlockFill6[68] == 1 )
                v81->ReadyTime = v81->ReadyTime - v81->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
              v81->WaitBlockFill6[68] = 2;
              v75->WaitReason = 32;
              v75->WaitIrql = 1;
              KiQueueReadyThread(v26, v75);
              LOBYTE(v82) = 1;
              if ( (unsigned __int8)KiSwapContext(v75, v81, v82) )
              {
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
                {
                  v83 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v83->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v83);
                }
                __writecr8(1uLL);
                v75->MiscFlags &= ~0x40u;
                KiDeliverApc(0LL, 0LL, 0LL);
              }
              goto LABEL_273;
            }
            if ( (v75->MiscFlags & 0x40) != 0 )
            {
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
              {
                v84 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v84->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v84);
              }
              __writecr8(1uLL);
              v75->MiscFlags &= ~0x40u;
LABEL_272:
              KiDeliverApc(0LL, 0LL, 0LL);
              goto LABEL_273;
            }
            goto LABEL_273;
          }
          if ( !v129 )
          {
LABEL_206:
            if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v54 >= 2u )
              goto LABEL_302;
LABEL_301:
            v110 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v110->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v110);
LABEL_302:
            __writecr8(v54);
            return WaitStatus;
          }
          if ( v54 < 2u )
          {
            v85 = v26->CurrentThread;
            if ( v26->NextThread )
            {
              KiAbProcessContextSwitch(v26->CurrentThread, 0LL);
              v87 = KeGetCurrentPrcb();
              v117 = 0;
              while ( 1 )
              {
                LOBYTE(v86) = 1;
                KiSetVpThreadSpinLockCount(v87, v86);
                if ( !_interlockedbittestandset64((volatile signed __int32 *)&v26->PrcbLock, 0LL) )
                  break;
                KiSetVpThreadSpinLockCount(v87, 0LL);
                do
                  KeYieldProcessorEx(&v117);
                while ( v26->PrcbLock );
              }
LABEL_218:
              v88 = v26->NextThread;
              v26->NextThread = 0LL;
              _disable();
              KiEndThreadCycleAccumulation(v26, v85, 0LL);
              _enable();
              v26->CurrentThread = v88;
              if ( v88->WaitBlockFill6[68] == 1 )
                v88->ReadyTime = v88->ReadyTime - v88->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
              v88->WaitBlockFill6[68] = 2;
              v85->WaitReason = 32;
              v85->WaitIrql = v54;
              KiQueueReadyThread(v26, v85);
              v89 = (unsigned __int8)KiSwapContext(v85, v88, v54) == 0;
LABEL_291:
              if ( !v89 )
              {
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
                {
                  v109 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v109->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v109);
                }
                __writecr8(1uLL);
                v85->MiscFlags &= ~0x40u;
                goto LABEL_297;
              }
LABEL_298:
              if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
                goto LABEL_302;
              goto LABEL_301;
            }
            goto LABEL_290;
          }
          goto LABEL_303;
        }
LABEL_227:
        _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
        KiSetThreadState(CurrentThread, 2LL);
        _InterlockedOr(v111, v92);
        if ( CurrentThread->ThreadLock )
        {
          v93 = KeGetCurrentPrcb();
          v118 = v91;
          while ( 1 )
          {
            LOBYTE(v90) = 1;
            KiSetVpThreadSpinLockCount(v93, v90);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
              break;
            KiSetVpThreadSpinLockCount(v93, 0LL);
            do
              KeYieldProcessorEx(&v118);
            while ( CurrentThread->ThreadLock );
          }
          KiReleaseThreadLockSafe(CurrentThread);
        }
        v54 = CurrentThread->WaitIrql;
        v94.Flags = (unsigned __int8)CurrentThread->WaitRegister;
        if ( (v94.Flags & 0x38) != 0 )
        {
          if ( (v94.Flags & 0x18) == 0 )
          {
            v98 = v26->CurrentThread;
            if ( v26->NextThread )
            {
              KiAbProcessContextSwitch(v26->CurrentThread, 0LL);
              v100 = KeGetCurrentPrcb();
              v121 = 0;
              while ( 1 )
              {
                LOBYTE(v99) = 1;
                KiSetVpThreadSpinLockCount(v100, v99);
                if ( !_interlockedbittestandset64((volatile signed __int32 *)&v26->PrcbLock, 0LL) )
                  break;
                KiSetVpThreadSpinLockCount(v100, 0LL);
                do
                  KeYieldProcessorEx(&v121);
                while ( v26->PrcbLock );
              }
              v101 = v26->NextThread;
              v26->NextThread = 0LL;
              _disable();
              KiEndThreadCycleAccumulation(v26, v98, 0LL);
              _enable();
              v26->CurrentThread = v101;
              if ( v101->WaitBlockFill6[68] == 1 )
                v101->ReadyTime = v101->ReadyTime - v101->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
              v101->WaitBlockFill6[68] = 2;
              v98->WaitReason = 32;
              v98->WaitIrql = 1;
              KiQueueReadyThread(v26, v98);
              LOBYTE(v102) = 1;
              if ( (unsigned __int8)KiSwapContext(v98, v101, v102) )
              {
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
                {
                  v103 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v103->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v103);
                }
                __writecr8(1uLL);
                v98->MiscFlags &= ~0x40u;
                KiDeliverApc(0LL, 0LL, 0LL);
              }
              goto LABEL_273;
            }
            if ( (v98->MiscFlags & 0x40) != 0 )
            {
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
              {
                v104 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v104->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v104);
              }
              __writecr8(1uLL);
              v98->MiscFlags &= ~0x40u;
              goto LABEL_272;
            }
LABEL_273:
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
            {
              v105 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v105->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v105);
            }
            __writecr8(1uLL);
            KiDeliverApc(0LL, 0LL, 0LL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
            {
              v106 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v106->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v106);
            }
            __writecr8(0LL);
            return WaitStatus;
          }
          if ( (v94.Flags & 8) != 0 )
            _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
          v95 = KeGetCurrentPrcb();
          v125 = 0LL;
          v119 = 0;
          while ( 1 )
          {
            LOBYTE(v90) = 1;
            KiSetVpThreadSpinLockCount(v95, v90);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&v26->PrcbLock, 0LL) )
              break;
            KiSetVpThreadSpinLockCount(v95, 0LL);
            do
              KeYieldProcessorEx(&v119);
            while ( v26->PrcbLock );
          }
          if ( !v26->NextThread )
            KiSelectNextThread(v26, &v125);
          _InterlockedAnd64((volatile signed __int64 *)&v26->PrcbLock, 0LL);
          KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
          KiReadyDeferredReadyList(v26, &v125);
          NextThread = v26->NextThread;
          if ( v54 >= 2u )
          {
LABEL_176:
            if ( !NextThread )
              return WaitStatus;
            v74 = v26->DpcRoutineActive == 0;
LABEL_305:
            if ( v74 )
              KiRequestSoftwareInterrupt(v26, 2);
            return WaitStatus;
          }
          v85 = v26->CurrentThread;
          if ( NextThread )
          {
            KiAbProcessContextSwitch(v26->CurrentThread, 0LL);
            v97 = KeGetCurrentPrcb();
            v120 = 0;
            while ( 1 )
            {
              LOBYTE(v96) = 1;
              KiSetVpThreadSpinLockCount(v97, v96);
              if ( !_interlockedbittestandset64((volatile signed __int32 *)&v26->PrcbLock, 0LL) )
                break;
              KiSetVpThreadSpinLockCount(v97, 0LL);
              do
                KeYieldProcessorEx(&v120);
              while ( v26->PrcbLock );
            }
            goto LABEL_218;
          }
LABEL_290:
          v89 = (v85->MiscFlags & 0x40) == 0;
          goto LABEL_291;
        }
        if ( !v129 )
          goto LABEL_206;
        if ( v54 < 2u )
        {
          v85 = v26->CurrentThread;
          if ( v26->NextThread )
          {
            KiAbProcessContextSwitch(v26->CurrentThread, 0LL);
            v108 = KeGetCurrentPrcb();
            v122 = 0;
            while ( 1 )
            {
              LOBYTE(v107) = 1;
              KiSetVpThreadSpinLockCount(v108, v107);
              if ( !_interlockedbittestandset64((volatile signed __int32 *)&v26->PrcbLock, 0LL) )
                break;
              KiSetVpThreadSpinLockCount(v108, 0LL);
              do
                KeYieldProcessorEx(&v122);
              while ( v26->PrcbLock );
            }
            goto LABEL_218;
          }
          goto LABEL_290;
        }
LABEL_303:
        if ( !v26->NextThread )
          return WaitStatus;
        v74 = v26->DpcRoutineActive == 0;
        goto LABEL_305;
      }
    }
    else if ( v27 > 0 )
    {
      if ( (*(_BYTE *)Object & 7) == 1 )
      {
        *((_DWORD *)Object + 1) = 0;
      }
      else if ( (*(_BYTE *)Object & 0x7F) == 5 )
      {
        *((_DWORD *)Object + 1) = v27 - 1;
      }
      goto LABEL_227;
    }
    v35 = Timeouta;
    v36 = v19;
    if ( Timeouta == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v38 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v36 = v19;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v36 = ThreadTimerDelay + v19;
      }
      v35 = 2;
    }
    else
    {
      if ( !Timeouta )
        goto LABEL_91;
      if ( !v19 )
        goto LABEL_221;
      v38 = MEMORY[0xFFFFF78000000014];
    }
    if ( v38 > v36 )
    {
LABEL_221:
      LODWORD(WaitStatus) = 258;
      goto LABEL_227;
    }
LABEL_91:
    v39 = (PVOID *)*((_QWORD *)Object + 2);
    if ( *v39 != (char *)Object + 8 )
      goto LABEL_222;
    CurrentThread->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)Object + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v39;
    *v39 = &CurrentThread->320;
    *((_QWORD *)Object + 2) = &CurrentThread->320;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait(CurrentThread, &CurrentThread->320, v35, v19);
    if ( result != 256 )
      return result;
    v129 = 0;
    v41 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v41 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentThread->WaitIrql = v41;
  }
  CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_99:
  v20 = 192;
LABEL_100:
  KiReleaseThreadLockSafe(CurrentThread);
  v42 = KeGetCurrentPrcb();
  if ( WaitIrql >= 2u )
  {
    if ( v42->NextThread && !v42->DpcRoutineActive )
      KiRequestSoftwareInterrupt(v42, 2);
    return v20;
  }
  else
  {
    v43 = v42->CurrentThread;
    if ( v42->NextThread )
    {
      KiAbProcessContextSwitch(v42->CurrentThread, 0LL);
      KiAcquirePrcbLock(v42);
      v44 = v42->NextThread;
      v42->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(v42, v43, 0LL);
      _enable();
      KiUpdatePriorityMatrixThreadState(v42, v44, 0LL, 2LL);
      v43->WaitReason = 32;
      v43->WaitIrql = WaitIrql;
      KiQueueReadyThread(v42, v43);
      v45 = (unsigned __int8)KiSwapContext(v43, v44, WaitIrql) == 0;
    }
    else
    {
      v45 = (v43->MiscFlags & 0x40) == 0;
    }
    if ( !v45 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v46 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v46);
      }
      __writecr8(1uLL);
      v43->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v47 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v47);
    }
    __writecr8(WaitIrql);
    return v20;
  }
}
