/*
 * XREFs of KeResetEvent @ 0x1400883E0
 * Callers:
 *     CcUnmapVacbArray @ 0x140079F40 (CcUnmapVacbArray.c)
 *     MiRetryNonPagedAllocation @ 0x14007BFF8 (MiRetryNonPagedAllocation.c)
 *     MiWaitForFreePagesToZero @ 0x14007C090 (MiWaitForFreePagesToZero.c)
 *     PnpInitWatchdog @ 0x14009AFE0 (PnpInitWatchdog.c)
 *     PopFxIdleWorker @ 0x1400B1184 (PopFxIdleWorker.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1400B387C (PopUpdateWatchdogNoWorkersEvent.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401049B0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140105330 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiIssueSynchronousFlush @ 0x14011E794 (MiIssueSynchronousFlush.c)
 *     SmKmStoreHelperWorker @ 0x140135680 (SmKmStoreHelperWorker.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1401430D8 (MmStoreFlushOutstandingEvictions.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1401484B0 (SmKmStoreHelperWaitForCommand.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140149600 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PnpLockDeviceActionQueue @ 0x140158FBC (PnpLockDeviceActionQueue.c)
 *     PnpRequestDeviceAction @ 0x14015D184 (PnpRequestDeviceAction.c)
 *     MiProcessDereferenceList @ 0x140165044 (MiProcessDereferenceList.c)
 *     PopFxAllocatePowerIrp @ 0x140173A60 (PopFxAllocatePowerIrp.c)
 *     PopPepUpdateConstraints @ 0x14017B5BC (PopPepUpdateConstraints.c)
 *     MiQueueWorkingSetRequest @ 0x14017F1F0 (MiQueueWorkingSetRequest.c)
 *     ExUnregisterCallback @ 0x1401810E0 (ExUnregisterCallback.c)
 *     MiUpdateAvailableEvents @ 0x140188504 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140188620 (MiSignalNonPagedPoolWatchers.c)
 *     MiOkToZeroNextLargePage @ 0x14018FBB0 (MiOkToZeroNextLargePage.c)
 *     MiDereferenceSegmentThread @ 0x140191000 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x1401924B0 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x140192C24 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x140193590 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140198EA0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KeClearEvent @ 0x1402A9B4C (KeClearEvent.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEE10 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiWaitForAvailablePages @ 0x1402E58E8 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x1402E5A00 (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x1402EA498 (MiDrainCrossPartitionUsage.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402F3AE4 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1402FB4B4 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     EtwpCovSampCaptureContextStop @ 0x1403351C0 (EtwpCovSampCaptureContextStop.c)
 *     sub_140344050 @ 0x140344050 (sub_140344050.c)
 *     PopNewWakeInfo @ 0x14059634C (PopNewWakeInfo.c)
 *     PfpScenCtxPrefetchWait @ 0x1405967B0 (PfpScenCtxPrefetchWait.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x14059D5B4 (PfpScenCtxQueryScenarioInformation.c)
 *     IoShutdownSystem @ 0x1405A7988 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1405A7CE4 (IopShutdownBaseFileSystems.c)
 *     NtLockFile @ 0x1405D4830 (NtLockFile.c)
 *     IopCloseFile @ 0x1405D8630 (IopCloseFile.c)
 *     NtReadFile @ 0x1405EF450 (NtReadFile.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 *     NtResetEvent @ 0x140626490 (NtResetEvent.c)
 *     NtWriteFile @ 0x140629160 (NtWriteFile.c)
 *     IopQueryXxxInformation @ 0x14062AFE4 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x14062B1F0 (NtQueryVolumeInformationFile.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062B6E0 (NtNotifyChangeMultipleKeys.c)
 *     CmpLockRegistryFreezeAware @ 0x140662030 (CmpLockRegistryFreezeAware.c)
 *     CmpLinkHiveToMaster @ 0x1406622B0 (CmpLinkHiveToMaster.c)
 *     PnpInsertEventInQueue @ 0x140669AA0 (PnpInsertEventInQueue.c)
 *     BuildQueryDirectoryIrp @ 0x140679180 (BuildQueryDirectoryIrp.c)
 *     IopMountVolume @ 0x140681CF4 (IopMountVolume.c)
 *     CmUnloadKey @ 0x14069A6C4 (CmUnloadKey.c)
 *     NtWriteFileGather @ 0x1406A3D30 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406A4400 (NtReadFileScatter.c)
 *     EtwpStopTrace @ 0x1406B4F7C (EtwpStopTrace.c)
 *     EtwpLogger @ 0x1406B76B0 (EtwpLogger.c)
 *     NtClearEvent @ 0x1406BDA60 (NtClearEvent.c)
 *     EtwpSynchronizeWithLogger @ 0x1406CC554 (EtwpSynchronizeWithLogger.c)
 *     NtQueryEaFile @ 0x1406CF9A0 (NtQueryEaFile.c)
 *     IopCancelIrpsInThreadList @ 0x1406D1024 (IopCancelIrpsInThreadList.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DB3A0 (NtNotifyChangeDirectoryFileEx.c)
 *     IoSetInformation @ 0x1406ECC40 (IoSetInformation.c)
 *     WmipCopyFromEventQueues @ 0x14071C3A8 (WmipCopyFromEventQueues.c)
 *     IopInvalidateVolumesForDevice @ 0x14072C088 (IopInvalidateVolumesForDevice.c)
 *     IopCreateArcName @ 0x1407369D8 (IopCreateArcName.c)
 *     PfGenerateTrace @ 0x140744728 (PfGenerateTrace.c)
 *     PoUnregisterPowerSettingCallback @ 0x140745C40 (PoUnregisterPowerSettingCallback.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1407474A8 (SPCallServerHandleWaitForDisplayWindow.c)
 *     PopQueueBatteryStatusTimeout @ 0x140747E88 (PopQueueBatteryStatusTimeout.c)
 *     PfTLoggingWorker @ 0x14075B710 (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x1407774E0 (PfTInitialize.c)
 *     ArbArbiterHandler @ 0x14077B0B0 (ArbArbiterHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140782B40 (IoRegisterFsRegistrationChangeMountAware.c)
 *     NtWaitForDebugEvent @ 0x140849BB0 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x14084A4C4 (DbgkpRemoveErrorPort.c)
 *     IopSendMessageToTrackService @ 0x1408548B4 (IopSendMessageToTrackService.c)
 *     IoCancelFileOpen @ 0x140855E20 (IoCancelFileOpen.c)
 *     NtQueryQuotaInformationFile @ 0x1408587D0 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x14085CBD4 (IopFreeBandwidthContract.c)
 *     PopSetSystemAwayMode @ 0x1408A89F0 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x1408A8EA0 (PopThermalReadCounters.c)
 *     TtmiRetrieveEventFromQueue @ 0x1408C01D4 (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x1408CDDA0 (RawQueryFsSizeInfo.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140901740 (EtwpCovSampCaptureWorkerThread.c)
 *     sub_14091F938 @ 0x14091F938 (sub_14091F938.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x1409F1BD0 (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x140A39FEC (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  unsigned __int8 CurrentIrql; // si
  LONG SignalState; // edi
  struct _KPRCB *CurrentPrcb; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v6 = 0;
  while ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
      KeYieldProcessorEx(&v6);
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
