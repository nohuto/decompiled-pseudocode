/*
 * XREFs of KeResetEvent @ 0x1400B89E0
 * Callers:
 *     PnpEnableWatchdog @ 0x140005C04 (PnpEnableWatchdog.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14000630C (PopUpdateWatchdogNoWorkersEvent.c)
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     CcUnmapVacbArray @ 0x1400798D0 (CcUnmapVacbArray.c)
 *     IopResetEvent @ 0x1400B8AA4 (IopResetEvent.c)
 *     MiRetryNonPagedAllocation @ 0x1400CB4EC (MiRetryNonPagedAllocation.c)
 *     PopFxIdleWorker @ 0x1400FE974 (PopFxIdleWorker.c)
 *     MiIssueSynchronousFlush @ 0x14011C9C8 (MiIssueSynchronousFlush.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011D770 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E350 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PnpLockDeviceActionQueue @ 0x140135504 (PnpLockDeviceActionQueue.c)
 *     SmKmStoreHelperWorker @ 0x140135BA0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1401464E0 (SmKmStoreHelperWaitForCommand.c)
 *     MiProcessDereferenceList @ 0x140154150 (MiProcessDereferenceList.c)
 *     PnpRequestDeviceAction @ 0x14015F104 (PnpRequestDeviceAction.c)
 *     MiFreePagedPoolPages @ 0x140161B50 (MiFreePagedPoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x140162D70 (MiAllocatePagedPoolPages.c)
 *     ExUnregisterCallback @ 0x14016CFF0 (ExUnregisterCallback.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140170AE0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopPepUpdateConstraints @ 0x1401722B4 (PopPepUpdateConstraints.c)
 *     PopFxAllocatePowerIrp @ 0x14017313C (PopFxAllocatePowerIrp.c)
 *     MiQueueWorkingSetRequest @ 0x140175DFC (MiQueueWorkingSetRequest.c)
 *     MiUpdateAvailableEvents @ 0x14017F964 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14017FA60 (MiSignalNonPagedPoolWatchers.c)
 *     MiOkToZeroNextLargePage @ 0x1401854DC (MiOkToZeroNextLargePage.c)
 *     MiDereferenceSegmentThread @ 0x1401876E0 (MiDereferenceSegmentThread.c)
 *     MiSyncCommitSignals @ 0x14018812C (MiSyncCommitSignals.c)
 *     MiModifiedPageWriter @ 0x140188880 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x14018A500 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401918C0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiWakeFileOnlyReaper @ 0x1402B745C (MiWakeFileOnlyReaper.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8C60 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1402C4554 (MmStoreFlushOutstandingEvictions.c)
 *     MiWaitForAvailablePages @ 0x1402CB588 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x1402D1914 (MiDrainCrossPartitionUsage.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402D8818 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1402DE96C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     EtwpCovSampCaptureContextStop @ 0x1403169A0 (EtwpCovSampCaptureContextStop.c)
 *     sub_140322760 @ 0x140322760 (sub_140322760.c)
 *     PopNewWakeInfo @ 0x140567640 (PopNewWakeInfo.c)
 *     PfpScenCtxPrefetchWait @ 0x1405679E0 (PfpScenCtxPrefetchWait.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x14056EBA8 (PfpScenCtxQueryScenarioInformation.c)
 *     IoShutdownSystem @ 0x140578C68 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140578E88 (IopShutdownBaseFileSystems.c)
 *     PnpInsertEventInQueue @ 0x140590ED8 (PnpInsertEventInQueue.c)
 *     IopMountVolume @ 0x1405A3E64 (IopMountVolume.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B2640 (CmpLockRegistryFreezeAware.c)
 *     CmpLinkHiveToMaster @ 0x1405B9C48 (CmpLinkHiveToMaster.c)
 *     EtwpLogger @ 0x1405C2430 (EtwpLogger.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405CF180 (NtNotifyChangeMultipleKeys.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FB000 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FB710 (BuildQueryDirectoryIrp.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     MiCreateImageFileMap @ 0x14061DEB8 (MiCreateImageFileMap.c)
 *     NtWriteFile @ 0x140639C60 (NtWriteFile.c)
 *     NtReadFile @ 0x14063B160 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063BA30 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x14063C3E0 (IopDeleteFile.c)
 *     EtwpStopTrace @ 0x14065A150 (EtwpStopTrace.c)
 *     NtFlushBuffersFileEx @ 0x14065D960 (NtFlushBuffersFileEx.c)
 *     NtResetEvent @ 0x14065DC00 (NtResetEvent.c)
 *     NtQueryVolumeInformationFile @ 0x14065F620 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x1406628E0 (IopQueryXxxInformation.c)
 *     sub_140689660 @ 0x140689660 (sub_140689660.c)
 *     CmUnloadKey @ 0x140692FD8 (CmUnloadKey.c)
 *     NtClearEvent @ 0x1406999A0 (NtClearEvent.c)
 *     IopGetSetSecurityObject @ 0x14069A290 (IopGetSetSecurityObject.c)
 *     NtUnlockFile @ 0x14069C800 (NtUnlockFile.c)
 *     IopCancelIrpsInThreadList @ 0x1406A7CA8 (IopCancelIrpsInThreadList.c)
 *     NtQueryEaFile @ 0x1406AA850 (NtQueryEaFile.c)
 *     WmipCopyFromEventQueues @ 0x1406AB7DC (WmipCopyFromEventQueues.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406BAF80 (NtNotifyChangeDirectoryFileEx.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C4248 (EtwpSynchronizeWithLogger.c)
 *     NtWriteFileGather @ 0x1406CDB00 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CE630 (NtReadFileScatter.c)
 *     PoUnregisterPowerSettingCallback @ 0x1406DC7F0 (PoUnregisterPowerSettingCallback.c)
 *     NtSetVolumeInformationFile @ 0x140700510 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x140702520 (IoSetInformation.c)
 *     IopInvalidateVolumesForDevice @ 0x1407061EC (IopInvalidateVolumesForDevice.c)
 *     DbgkpRemoveErrorPort @ 0x140707F00 (DbgkpRemoveErrorPort.c)
 *     IopCreateArcName @ 0x14070C6A8 (IopCreateArcName.c)
 *     PfGenerateTrace @ 0x14071D064 (PfGenerateTrace.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14071DFCC (SPCallServerHandleWaitForDisplayWindow.c)
 *     PopQueueBatteryStatusTimeout @ 0x1407202CC (PopQueueBatteryStatusTimeout.c)
 *     PfTLoggingWorker @ 0x140740B20 (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x140752F48 (PfTInitialize.c)
 *     ArbArbiterHandler @ 0x140756660 (ArbArbiterHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14075D150 (IoRegisterFsRegistrationChangeMountAware.c)
 *     NtWaitForDebugEvent @ 0x140811500 (NtWaitForDebugEvent.c)
 *     IopSendMessageToTrackService @ 0x14081BB54 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081BE3C (IopSetEaOrQuotaInformationFile.c)
 *     IoCancelFileOpen @ 0x14081CFC0 (IoCancelFileOpen.c)
 *     NtSetEaFile @ 0x14081F3E0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081FA40 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x140823AFC (IopFreeBandwidthContract.c)
 *     PopSetSystemAwayMode @ 0x14086D340 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x14086D790 (PopThermalReadCounters.c)
 *     TtmiRetrieveEventFromQueue @ 0x140883684 (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x140890C20 (RawQueryFsSizeInfo.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408C57B0 (EtwpCovSampCaptureWorkerThread.c)
 *     sub_1408E45B0 @ 0x1408E45B0 (sub_1408E45B0.c)
 *     AnFwDisplayFade @ 0x14094FBA8 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x1409BE640 (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x1409F5AA4 (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
