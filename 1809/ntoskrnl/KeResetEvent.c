/*
 * XREFs of KeResetEvent @ 0x1400B8A80
 * Callers:
 *     PnpEnableWatchdog @ 0x140005C04 (PnpEnableWatchdog.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14000630C (PopUpdateWatchdogNoWorkersEvent.c)
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     CcUnmapVacbArray @ 0x1400798E0 (CcUnmapVacbArray.c)
 *     IopResetEvent @ 0x1400B8B44 (IopResetEvent.c)
 *     MiRetryNonPagedAllocation @ 0x1400CB3EC (MiRetryNonPagedAllocation.c)
 *     PopFxIdleWorker @ 0x1400FE8D4 (PopFxIdleWorker.c)
 *     MiIssueSynchronousFlush @ 0x14011C938 (MiIssueSynchronousFlush.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011D6E0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E2C0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PnpLockDeviceActionQueue @ 0x140135414 (PnpLockDeviceActionQueue.c)
 *     SmKmStoreHelperWorker @ 0x140135AB0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1401463C0 (SmKmStoreHelperWaitForCommand.c)
 *     MiProcessDereferenceList @ 0x140154030 (MiProcessDereferenceList.c)
 *     PnpRequestDeviceAction @ 0x14015EFE4 (PnpRequestDeviceAction.c)
 *     MiFreePagedPoolPages @ 0x140161A30 (MiFreePagedPoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x140162C50 (MiAllocatePagedPoolPages.c)
 *     ExUnregisterCallback @ 0x14016CED0 (ExUnregisterCallback.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401709C0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopPepUpdateConstraints @ 0x140172194 (PopPepUpdateConstraints.c)
 *     PopFxAllocatePowerIrp @ 0x14017301C (PopFxAllocatePowerIrp.c)
 *     MiQueueWorkingSetRequest @ 0x140175CDC (MiQueueWorkingSetRequest.c)
 *     MiUpdateAvailableEvents @ 0x14017F804 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14017F900 (MiSignalNonPagedPoolWatchers.c)
 *     MiOkToZeroNextLargePage @ 0x14018537C (MiOkToZeroNextLargePage.c)
 *     MiDereferenceSegmentThread @ 0x140187580 (MiDereferenceSegmentThread.c)
 *     MiSyncCommitSignals @ 0x140187FCC (MiSyncCommitSignals.c)
 *     MiModifiedPageWriter @ 0x140188720 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x14018A3A0 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140191760 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiWakeFileOnlyReaper @ 0x1402B716C (MiWakeFileOnlyReaper.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8970 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1402C4264 (MmStoreFlushOutstandingEvictions.c)
 *     MiWaitForAvailablePages @ 0x1402CB298 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x1402CB3A4 (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x1402D1624 (MiDrainCrossPartitionUsage.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402D8528 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1402DE67C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     EtwpCovSampCaptureContextStop @ 0x1403166B0 (EtwpCovSampCaptureContextStop.c)
 *     sub_140322470 @ 0x140322470 (sub_140322470.c)
 *     PopNewWakeInfo @ 0x140566640 (PopNewWakeInfo.c)
 *     PfpScenCtxPrefetchWait @ 0x1405669E0 (PfpScenCtxPrefetchWait.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x14056DBA8 (PfpScenCtxQueryScenarioInformation.c)
 *     IoShutdownSystem @ 0x140577C68 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140577E88 (IopShutdownBaseFileSystems.c)
 *     PnpInsertEventInQueue @ 0x14058FED8 (PnpInsertEventInQueue.c)
 *     IopMountVolume @ 0x1405A2E64 (IopMountVolume.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B1640 (CmpLockRegistryFreezeAware.c)
 *     CmpLinkHiveToMaster @ 0x1405B8C48 (CmpLinkHiveToMaster.c)
 *     EtwpLogger @ 0x1405C1430 (EtwpLogger.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405CE180 (NtNotifyChangeMultipleKeys.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FA000 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA710 (BuildQueryDirectoryIrp.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     MiCreateImageFileMap @ 0x14061CEB8 (MiCreateImageFileMap.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     NtReadFile @ 0x14063A140 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063AA10 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x14063B3C0 (IopDeleteFile.c)
 *     EtwpStopTrace @ 0x140658FB0 (EtwpStopTrace.c)
 *     NtFlushBuffersFileEx @ 0x14065C7C0 (NtFlushBuffersFileEx.c)
 *     NtResetEvent @ 0x14065CA60 (NtResetEvent.c)
 *     NtQueryVolumeInformationFile @ 0x14065E480 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x140661740 (IopQueryXxxInformation.c)
 *     sub_1406884C0 @ 0x1406884C0 (sub_1406884C0.c)
 *     CmUnloadKey @ 0x140691E38 (CmUnloadKey.c)
 *     NtClearEvent @ 0x140698800 (NtClearEvent.c)
 *     IopGetSetSecurityObject @ 0x1406990F0 (IopGetSetSecurityObject.c)
 *     NtUnlockFile @ 0x14069B660 (NtUnlockFile.c)
 *     IopCancelIrpsInThreadList @ 0x1406A6A28 (IopCancelIrpsInThreadList.c)
 *     NtQueryEaFile @ 0x1406A95D0 (NtQueryEaFile.c)
 *     WmipCopyFromEventQueues @ 0x1406AA55C (WmipCopyFromEventQueues.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406B9D00 (NtNotifyChangeDirectoryFileEx.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C2FC8 (EtwpSynchronizeWithLogger.c)
 *     NtWriteFileGather @ 0x1406CC880 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD3B0 (NtReadFileScatter.c)
 *     PoUnregisterPowerSettingCallback @ 0x1406DB570 (PoUnregisterPowerSettingCallback.c)
 *     NtSetVolumeInformationFile @ 0x1406FF290 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x1407012A0 (IoSetInformation.c)
 *     IopInvalidateVolumesForDevice @ 0x140704F6C (IopInvalidateVolumesForDevice.c)
 *     DbgkpRemoveErrorPort @ 0x140706C80 (DbgkpRemoveErrorPort.c)
 *     IopCreateArcName @ 0x14070B428 (IopCreateArcName.c)
 *     PfGenerateTrace @ 0x14071BDE4 (PfGenerateTrace.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14071CD4C (SPCallServerHandleWaitForDisplayWindow.c)
 *     PopQueueBatteryStatusTimeout @ 0x14071F04C (PopQueueBatteryStatusTimeout.c)
 *     PfTLoggingWorker @ 0x14073F950 (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x140751D78 (PfTInitialize.c)
 *     ArbArbiterHandler @ 0x140755490 (ArbArbiterHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14075BF80 (IoRegisterFsRegistrationChangeMountAware.c)
 *     NtWaitForDebugEvent @ 0x140810320 (NtWaitForDebugEvent.c)
 *     IopSendMessageToTrackService @ 0x14081A974 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC5C (IopSetEaOrQuotaInformationFile.c)
 *     IoCancelFileOpen @ 0x14081BDE0 (IoCancelFileOpen.c)
 *     NtSetEaFile @ 0x14081E200 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081E860 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x14082291C (IopFreeBandwidthContract.c)
 *     PopSetSystemAwayMode @ 0x14086C100 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x14086C550 (PopThermalReadCounters.c)
 *     TtmiRetrieveEventFromQueue @ 0x140882444 (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x14088F9E0 (RawQueryFsSizeInfo.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408C4510 (EtwpCovSampCaptureWorkerThread.c)
 *     sub_1408E3310 @ 0x1408E3310 (sub_1408E3310.c)
 *     AnFwDisplayFade @ 0x14094EBA8 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x1409BD640 (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x1409F4A94 (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  unsigned __int8 CurrentIrql; // si
  LONG SignalState; // edi
  struct _KPRCB *CurrentPrcb; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v8 = 0;
  while ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
      KeYieldProcessorEx(&v8, v1, v2);
    while ( (Event->Header.LockNV & 0x80u) != 0 );
  }
  SignalState = Event->Header.SignalState;
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return SignalState;
}
