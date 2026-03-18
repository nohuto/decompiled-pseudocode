/*
 * XREFs of KeResetEvent @ 0x1400896E0
 * Callers:
 *     CcUnmapVacbArray @ 0x14007A300 (CcUnmapVacbArray.c)
 *     MiRetryNonPagedAllocation @ 0x14007C3F8 (MiRetryNonPagedAllocation.c)
 *     MiWaitForFreePagesToZero @ 0x14007C490 (MiWaitForFreePagesToZero.c)
 *     PopFxIdleWorker @ 0x1400E1274 (PopFxIdleWorker.c)
 *     PnpInitWatchdog @ 0x1400EEFF0 (PnpInitWatchdog.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1400F0028 (PopUpdateWatchdogNoWorkersEvent.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011B570 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011C180 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiIssueSynchronousFlush @ 0x14011ECA4 (MiIssueSynchronousFlush.c)
 *     SmKmStoreHelperWorker @ 0x140136040 (SmKmStoreHelperWorker.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140143618 (MmStoreFlushOutstandingEvictions.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140148B50 (SmKmStoreHelperWaitForCommand.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140149CA0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PnpLockDeviceActionQueue @ 0x14015965C (PnpLockDeviceActionQueue.c)
 *     PnpRequestDeviceAction @ 0x14015D824 (PnpRequestDeviceAction.c)
 *     MiProcessDereferenceList @ 0x140164A94 (MiProcessDereferenceList.c)
 *     PopFxAllocatePowerIrp @ 0x140174190 (PopFxAllocatePowerIrp.c)
 *     PopPepUpdateConstraints @ 0x14017BCAC (PopPepUpdateConstraints.c)
 *     MiQueueWorkingSetRequest @ 0x14017F8E0 (MiQueueWorkingSetRequest.c)
 *     ExUnregisterCallback @ 0x1401817D0 (ExUnregisterCallback.c)
 *     MiUpdateAvailableEvents @ 0x140188AB4 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140188BD0 (MiSignalNonPagedPoolWatchers.c)
 *     MiOkToZeroNextLargePage @ 0x14018FD50 (MiOkToZeroNextLargePage.c)
 *     MiDereferenceSegmentThread @ 0x140191670 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x140192C90 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x140193404 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x140193D70 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140199500 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KeClearEvent @ 0x1402A98AC (KeClearEvent.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEB70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiWaitForAvailablePages @ 0x1402E5648 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x1402EA1F8 (MiDrainCrossPartitionUsage.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402F3844 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1402FAF64 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     EtwpCovSampCaptureContextStop @ 0x140334C20 (EtwpCovSampCaptureContextStop.c)
 *     sub_140343AB0 @ 0x140343AB0 (sub_140343AB0.c)
 *     PopNewWakeInfo @ 0x14059634C (PopNewWakeInfo.c)
 *     PfpScenCtxPrefetchWait @ 0x1405966FC (PfpScenCtxPrefetchWait.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x14059CE34 (PfpScenCtxQueryScenarioInformation.c)
 *     IoShutdownSystem @ 0x1405A7968 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1405A7CC4 (IopShutdownBaseFileSystems.c)
 *     NtLockFile @ 0x1405D4D30 (NtLockFile.c)
 *     IopCloseFile @ 0x1405D8DF0 (IopCloseFile.c)
 *     NtReadFile @ 0x1405EFC20 (NtReadFile.c)
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     NtResetEvent @ 0x14062A340 (NtResetEvent.c)
 *     NtWriteFile @ 0x14062CFB0 (NtWriteFile.c)
 *     IopQueryXxxInformation @ 0x14062EE34 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x14062F040 (NtQueryVolumeInformationFile.c)
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 *     CmpLockRegistryFreezeAware @ 0x140638760 (CmpLockRegistryFreezeAware.c)
 *     NtReadFileScatter @ 0x140674200 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140674810 (NtWriteFileGather.c)
 *     BuildQueryDirectoryIrp @ 0x14067EAF0 (BuildQueryDirectoryIrp.c)
 *     CmpLinkHiveToMaster @ 0x14068C808 (CmpLinkHiveToMaster.c)
 *     PnpInsertEventInQueue @ 0x140696EC0 (PnpInsertEventInQueue.c)
 *     IopMountVolume @ 0x1406A0254 (IopMountVolume.c)
 *     EtwpStopTrace @ 0x1406A8734 (EtwpStopTrace.c)
 *     EtwpLogger @ 0x1406ACDA0 (EtwpLogger.c)
 *     CmUnloadKey @ 0x1406B8CA4 (CmUnloadKey.c)
 *     NtClearEvent @ 0x1406BD510 (NtClearEvent.c)
 *     EtwpSynchronizeWithLogger @ 0x1406CB384 (EtwpSynchronizeWithLogger.c)
 *     NtQueryEaFile @ 0x1406CEC10 (NtQueryEaFile.c)
 *     IopCancelIrpsInThreadList @ 0x1406D0294 (IopCancelIrpsInThreadList.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DC110 (NtNotifyChangeDirectoryFileEx.c)
 *     IoSetInformation @ 0x1406EDE60 (IoSetInformation.c)
 *     WmipCopyFromEventQueues @ 0x14071E198 (WmipCopyFromEventQueues.c)
 *     IopInvalidateVolumesForDevice @ 0x14072DF28 (IopInvalidateVolumesForDevice.c)
 *     IopCreateArcName @ 0x140738C38 (IopCreateArcName.c)
 *     PfGenerateTrace @ 0x140746628 (PfGenerateTrace.c)
 *     PoUnregisterPowerSettingCallback @ 0x140747B40 (PoUnregisterPowerSettingCallback.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1407493A8 (SPCallServerHandleWaitForDisplayWindow.c)
 *     PopQueueBatteryStatusTimeout @ 0x140749D88 (PopQueueBatteryStatusTimeout.c)
 *     PfTLoggingWorker @ 0x14075FE90 (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x14077AAC0 (PfTInitialize.c)
 *     ArbArbiterHandler @ 0x14077D980 (ArbArbiterHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140784E10 (IoRegisterFsRegistrationChangeMountAware.c)
 *     NtWaitForDebugEvent @ 0x1408492B0 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x140849BC4 (DbgkpRemoveErrorPort.c)
 *     IopSendMessageToTrackService @ 0x140853FB4 (IopSendMessageToTrackService.c)
 *     IoCancelFileOpen @ 0x140855520 (IoCancelFileOpen.c)
 *     NtQueryQuotaInformationFile @ 0x140857ED0 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x14085C2D4 (IopFreeBandwidthContract.c)
 *     PopSetSystemAwayMode @ 0x1408A8250 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x1408A8700 (PopThermalReadCounters.c)
 *     TtmiRetrieveEventFromQueue @ 0x1408BFAA4 (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x1408CD680 (RawQueryFsSizeInfo.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1409010A0 (EtwpCovSampCaptureWorkerThread.c)
 *     sub_14091F398 @ 0x14091F398 (sub_14091F398.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x1409F1AE0 (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x140A39DBC (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
