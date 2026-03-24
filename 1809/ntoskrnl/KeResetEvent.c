/*
 * XREFs of KeResetEvent @ 0x1400B8AA0
 * Callers:
 *     PnpEnableWatchdog @ 0x140005C04 (PnpEnableWatchdog.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14000630C (PopUpdateWatchdogNoWorkersEvent.c)
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     CcUnmapVacbArray @ 0x1400798E0 (CcUnmapVacbArray.c)
 *     IopResetEvent @ 0x1400B8B64 (IopResetEvent.c)
 *     MiRetryNonPagedAllocation @ 0x1400CB40C (MiRetryNonPagedAllocation.c)
 *     PopFxIdleWorker @ 0x1400FE8F4 (PopFxIdleWorker.c)
 *     MiIssueSynchronousFlush @ 0x14011C958 (MiIssueSynchronousFlush.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011D700 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E2E0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PnpLockDeviceActionQueue @ 0x140135434 (PnpLockDeviceActionQueue.c)
 *     SmKmStoreHelperWorker @ 0x140135AD0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1401463E0 (SmKmStoreHelperWaitForCommand.c)
 *     MiProcessDereferenceList @ 0x140154050 (MiProcessDereferenceList.c)
 *     PnpRequestDeviceAction @ 0x14015F004 (PnpRequestDeviceAction.c)
 *     MiFreePagedPoolPages @ 0x140161A50 (MiFreePagedPoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x140162C70 (MiAllocatePagedPoolPages.c)
 *     ExUnregisterCallback @ 0x14016CEF0 (ExUnregisterCallback.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401709E0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopPepUpdateConstraints @ 0x1401721B4 (PopPepUpdateConstraints.c)
 *     PopFxAllocatePowerIrp @ 0x14017303C (PopFxAllocatePowerIrp.c)
 *     MiQueueWorkingSetRequest @ 0x140175CFC (MiQueueWorkingSetRequest.c)
 *     MiUpdateAvailableEvents @ 0x14017F824 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14017F920 (MiSignalNonPagedPoolWatchers.c)
 *     MiOkToZeroNextLargePage @ 0x14018539C (MiOkToZeroNextLargePage.c)
 *     MiDereferenceSegmentThread @ 0x1401875A0 (MiDereferenceSegmentThread.c)
 *     MiSyncCommitSignals @ 0x140187FEC (MiSyncCommitSignals.c)
 *     MiModifiedPageWriter @ 0x140188740 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x14018A3C0 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140191780 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiWakeFileOnlyReaper @ 0x1402B726C (MiWakeFileOnlyReaper.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8A70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1402C4364 (MmStoreFlushOutstandingEvictions.c)
 *     MiWaitForAvailablePages @ 0x1402CB398 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x1402CB4A4 (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x1402D1724 (MiDrainCrossPartitionUsage.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402D8628 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1402DE77C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     EtwpCovSampCaptureContextStop @ 0x1403167B0 (EtwpCovSampCaptureContextStop.c)
 *     sub_140322570 @ 0x140322570 (sub_140322570.c)
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
 *     EtwpStopTrace @ 0x140658F90 (EtwpStopTrace.c)
 *     NtFlushBuffersFileEx @ 0x14065C7A0 (NtFlushBuffersFileEx.c)
 *     NtResetEvent @ 0x14065CA40 (NtResetEvent.c)
 *     NtQueryVolumeInformationFile @ 0x14065E460 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x140661720 (IopQueryXxxInformation.c)
 *     sub_1406884A0 @ 0x1406884A0 (sub_1406884A0.c)
 *     CmUnloadKey @ 0x140691E18 (CmUnloadKey.c)
 *     NtClearEvent @ 0x1406987E0 (NtClearEvent.c)
 *     IopGetSetSecurityObject @ 0x1406990D0 (IopGetSetSecurityObject.c)
 *     NtUnlockFile @ 0x14069B640 (NtUnlockFile.c)
 *     IopCancelIrpsInThreadList @ 0x1406A6A08 (IopCancelIrpsInThreadList.c)
 *     NtQueryEaFile @ 0x1406A95B0 (NtQueryEaFile.c)
 *     WmipCopyFromEventQueues @ 0x1406AA53C (WmipCopyFromEventQueues.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406B9CE0 (NtNotifyChangeDirectoryFileEx.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C2FA8 (EtwpSynchronizeWithLogger.c)
 *     NtWriteFileGather @ 0x1406CC860 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD390 (NtReadFileScatter.c)
 *     PoUnregisterPowerSettingCallback @ 0x1406DB550 (PoUnregisterPowerSettingCallback.c)
 *     NtSetVolumeInformationFile @ 0x1406FF270 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x140701280 (IoSetInformation.c)
 *     IopInvalidateVolumesForDevice @ 0x140704F4C (IopInvalidateVolumesForDevice.c)
 *     DbgkpRemoveErrorPort @ 0x140706C60 (DbgkpRemoveErrorPort.c)
 *     IopCreateArcName @ 0x14070B408 (IopCreateArcName.c)
 *     PfGenerateTrace @ 0x14071BDC4 (PfGenerateTrace.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14071CD2C (SPCallServerHandleWaitForDisplayWindow.c)
 *     PopQueueBatteryStatusTimeout @ 0x14071F02C (PopQueueBatteryStatusTimeout.c)
 *     PfTLoggingWorker @ 0x14073F930 (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x140751D58 (PfTInitialize.c)
 *     ArbArbiterHandler @ 0x140755470 (ArbArbiterHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14075BF60 (IoRegisterFsRegistrationChangeMountAware.c)
 *     NtWaitForDebugEvent @ 0x140810300 (NtWaitForDebugEvent.c)
 *     IopSendMessageToTrackService @ 0x14081A954 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC3C (IopSetEaOrQuotaInformationFile.c)
 *     IoCancelFileOpen @ 0x14081BDC0 (IoCancelFileOpen.c)
 *     NtSetEaFile @ 0x14081E1E0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081E840 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x1408228FC (IopFreeBandwidthContract.c)
 *     PopSetSystemAwayMode @ 0x14086C0E0 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x14086C530 (PopThermalReadCounters.c)
 *     TtmiRetrieveEventFromQueue @ 0x140882424 (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x14088F9C0 (RawQueryFsSizeInfo.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408C44F0 (EtwpCovSampCaptureWorkerThread.c)
 *     sub_1408E32F0 @ 0x1408E32F0 (sub_1408E32F0.c)
 *     AnFwDisplayFade @ 0x14094EBA8 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x1409BD640 (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x1409F4AA4 (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
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
