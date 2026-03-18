/*
 * XREFs of ExQueueWorkItem @ 0x14005B1A0
 * Callers:
 *     ExpWaitForResource @ 0x140042F70 (ExpWaitForResource.c)
 *     PspRequestDeferredJobNotification @ 0x14008436C (PspRequestDeferredJobNotification.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     PsDereferencePartition @ 0x1400C5468 (PsDereferencePartition.c)
 *     PfSnGetFileInformation @ 0x1400D20B0 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x1400D243C (PfSnTraceGetLogEntry.c)
 *     PfSnTraceTimerRoutine @ 0x1400D44B0 (PfSnTraceTimerRoutine.c)
 *     PopCheckForWork @ 0x1400D5AC0 (PopCheckForWork.c)
 *     PopQueuePowerRequestCallbacks @ 0x1400D6834 (PopQueuePowerRequestCallbacks.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x1400EE148 (SmKmStoreDeleteWhenEmpty.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400EE8B8 (LZNT1DecompressChunkNewThread.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1400EEA50 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400F06C8 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400F0750 (PopDeepSleepClearDisengageReason.c)
 *     IopCompleteUnloadOrDelete @ 0x1400F10C4 (IopCompleteUnloadOrDelete.c)
 *     CmpArmDelayedCloseTimer @ 0x14011E850 (CmpArmDelayedCloseTimer.c)
 *     ObpDeferObjectDeletion @ 0x140128EA4 (ObpDeferObjectDeletion.c)
 *     SepQueueWorkItem @ 0x14012D804 (SepQueueWorkItem.c)
 *     ExpHpGCTimerCallback @ 0x1401343D0 (ExpHpGCTimerCallback.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x14013CDA0 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     WdipTimeoutTimerRoutine @ 0x14013CE80 (WdipTimeoutTimerRoutine.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x14013D1F0 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     SepAdtDetermineInsertQueue @ 0x14013D570 (SepAdtDetermineInsertQueue.c)
 *     CmpDelayFreeRMDpcRoutine @ 0x14013D6F0 (CmpDelayFreeRMDpcRoutine.c)
 *     EtwpCoverageFlushTimerCallback @ 0x14013DAA0 (EtwpCoverageFlushTimerCallback.c)
 *     PfSnTracingStateDpcRoutine @ 0x14013DB70 (PfSnTracingStateDpcRoutine.c)
 *     MiFreeCombineBlock @ 0x140141AF4 (MiFreeCombineBlock.c)
 *     PoNotifyMediaBuffering @ 0x140143860 (PoNotifyMediaBuffering.c)
 *     IopLoadDriverImage @ 0x140153F4C (IopLoadDriverImage.c)
 *     PnpUnlockDeviceActionQueue @ 0x1401595B8 (PnpUnlockDeviceActionQueue.c)
 *     IoWMIWriteEvent @ 0x14015BAD0 (IoWMIWriteEvent.c)
 *     PoLatencySensitivityHint @ 0x14015C220 (PoLatencySensitivityHint.c)
 *     EtwTelemetryCoverageReport @ 0x14015CE30 (EtwTelemetryCoverageReport.c)
 *     PfSnPowerBoostDpc @ 0x14015D530 (PfSnPowerBoostDpc.c)
 *     PnpRequestDeviceAction @ 0x14015D824 (PnpRequestDeviceAction.c)
 *     PopForceCompleteCsSleepStudySession @ 0x14015E298 (PopForceCompleteCsSleepStudySession.c)
 *     PopWakeInfoDereference @ 0x140168B94 (PopWakeInfoDereference.c)
 *     PfpPowerActionDpcRoutine @ 0x1401696E0 (PfpPowerActionDpcRoutine.c)
 *     PopWakeSourceTimeoutDpc @ 0x140169B00 (PopWakeSourceTimeoutDpc.c)
 *     ExpTimeRefreshDpcRoutine @ 0x140170AF0 (ExpTimeRefreshDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x1401712D0 (ExpTimeZoneDpcRoutine.c)
 *     PopBatteryQueueWork @ 0x140171F50 (PopBatteryQueueWork.c)
 *     IoWriteErrorLogEntry @ 0x140177870 (IoWriteErrorLogEntry.c)
 *     PopQueueWorkItem @ 0x140177F70 (PopQueueWorkItem.c)
 *     MmSetAccessLogging @ 0x14017E6B4 (MmSetAccessLogging.c)
 *     PopUserPresentSet @ 0x1401819F8 (PopUserPresentSet.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x140185FB0 (MiFreeUnusedPfnPagesDpc.c)
 *     EmpQueueRuleUpdateState @ 0x140189DB8 (EmpQueueRuleUpdateState.c)
 *     ExInitializeProcessor @ 0x14018BD8C (ExInitializeProcessor.c)
 *     PopPowerSourceChangeCallback @ 0x14018C3A0 (PopPowerSourceChangeCallback.c)
 *     KeBalanceSetManager @ 0x14018DE80 (KeBalanceSetManager.c)
 *     PopThermalIrpComplete @ 0x14019D160 (PopThermalIrpComplete.c)
 *     PopFanIrpComplete @ 0x14019DC70 (PopFanIrpComplete.c)
 *     ExpDebuggerDpcRoutine @ 0x14019ED90 (ExpDebuggerDpcRoutine.c)
 *     CcBcbProfiler @ 0x1401AA360 (CcBcbProfiler.c)
 *     CmpFreezeThawDpcRoutine @ 0x14027FCD0 (CmpFreezeThawDpcRoutine.c)
 *     CmpLazyCommitDpcRoutine @ 0x14027FD00 (CmpLazyCommitDpcRoutine.c)
 *     HvlpInitializeSvmIommuSupport @ 0x14028C094 (HvlpInitializeSvmIommuSupport.c)
 *     HvlpIommuPrqDpcRoutine @ 0x14028C1B0 (HvlpIommuPrqDpcRoutine.c)
 *     IoRaiseHardError @ 0x1402983C0 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140298680 (IoRaiseInformationalHardError.c)
 *     IoDecrementKeepAliveCount @ 0x140299490 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x1402995C0 (IoIncrementKeepAliveCount.c)
 *     IopErrorLogDpc @ 0x14029B3C0 (IopErrorLogDpc.c)
 *     IoRequestDeviceEjectEx @ 0x14029DB70 (IoRequestDeviceEjectEx.c)
 *     PnpTimerCallback @ 0x14029FD90 (PnpTimerCallback.c)
 *     IopDeviceEjectComplete @ 0x1402A1250 (IopDeviceEjectComplete.c)
 *     MiFlushControlArea @ 0x1402B9410 (MiFlushControlArea.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402BBCC4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiWakeFileOnlyReaper @ 0x1402CD414 (MiWakeFileOnlyReaper.c)
 *     MiPageNotZero @ 0x1402D91A8 (MiPageNotZero.c)
 *     MiNoPagesLastChance @ 0x1402D9BCC (MiNoPagesLastChance.c)
 *     ObpProcessRemoveObjectDpcWorker @ 0x1402ED0B0 (ObpProcessRemoveObjectDpcWorker.c)
 *     ObpDeferPushRefDerefInfo @ 0x1402ED34C (ObpDeferPushRefDerefInfo.c)
 *     PopExecutionRequiredTimeoutCallback @ 0x1402EDBA0 (PopExecutionRequiredTimeoutCallback.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1402F6F30 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopUpdateWakeSource @ 0x1402F728C (PopUpdateWakeSource.c)
 *     PopUserShutdownDelayDpcCallback @ 0x1402F78C0 (PopUserShutdownDelayDpcCallback.c)
 *     PopSleepStudyTaskClientTimerCallback @ 0x1402FECB0 (PopSleepStudyTaskClientTimerCallback.c)
 *     PopWdiTimerCallback @ 0x1402FF5C0 (PopWdiTimerCallback.c)
 *     PpmHeteroHgsUpdateDpcRoutine @ 0x1403004D0 (PpmHeteroHgsUpdateDpcRoutine.c)
 *     PpmWmiIdleAccountingProcedure @ 0x140300F60 (PpmWmiIdleAccountingProcedure.c)
 *     PopWatchdogDpc @ 0x140301550 (PopWatchdogDpc.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x1403038C0 (PopIdleAoAcDozeS4TimerCallback.c)
 *     TtmpScheduledEvaluationDpc @ 0x1403063E0 (TtmpScheduledEvaluationDpc.c)
 *     PspHardDereferenceSiloWorker @ 0x140306724 (PspHardDereferenceSiloWorker.c)
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     SepAuditFailedRaisedIrql @ 0x14031E64C (SepAuditFailedRaisedIrql.c)
 *     ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x14031FCB0 (-SmHighMemPriorityWatchdogTimerCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x140326240 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     EtwpCoverageResetTimerCallback @ 0x14032C870 (EtwpCoverageResetTimerCallback.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x14032F120 (EtwpQueuePerfMemInfoWorkItem.c)
 *     EtwpTiAsyncVadQueryEventWrite @ 0x1403309A4 (EtwpTiAsyncVadQueryEventWrite.c)
 *     EtwpCompressionDpc @ 0x140333050 (EtwpCompressionDpc.c)
 *     ExpCenturyDpcRoutine @ 0x140337CF0 (ExpCenturyDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x1403380B0 (ExpNextYearDpcRoutine.c)
 *     ExpSvmDpcRoutine @ 0x14033DF20 (ExpSvmDpcRoutine.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x140340F80 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x140342140 (WheapWorkQueueAddItem.c)
 *     WheapWorkQueueDpcRoutine @ 0x1403421A0 (WheapWorkQueueDpcRoutine.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     MmDuplicateMemory @ 0x14059D3EC (MmDuplicateMemory.c)
 *     PnprInitiateReplaceOperation @ 0x1405A9630 (PnprInitiateReplaceOperation.c)
 *     MiZeroAllPageFiles @ 0x1405ABCB4 (MiZeroAllPageFiles.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x1405B5764 (SepInformFileSystemsOfDeletedLogon.c)
 *     CmpSignalDeferredPosts @ 0x140603EF0 (CmpSignalDeferredPosts.c)
 *     PfSnEndProcessTrace @ 0x14066E9E4 (PfSnEndProcessTrace.c)
 *     PiDrvDbLoadNode @ 0x140677A54 (PiDrvDbLoadNode.c)
 *     CmpCanGrowHive @ 0x14068DFBC (CmpCanGrowHive.c)
 *     CmpClaimGlobalQuota @ 0x14068EEE4 (CmpClaimGlobalQuota.c)
 *     PnpInsertEventInQueue @ 0x140696EC0 (PnpInsertEventInQueue.c)
 *     PfSnPrefetchScenario @ 0x140697364 (PfSnPrefetchScenario.c)
 *     PfSnPrefetchSections @ 0x140697DAC (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140698068 (PfSnPrefetchSectionsCleanup.c)
 *     PiUEventNotifyUserMode @ 0x1406989F0 (PiUEventNotifyUserMode.c)
 *     NtNotifyChangeSession @ 0x1406A3AF0 (NtNotifyChangeSession.c)
 *     PspScheduleEnforcementWorker @ 0x1406B1960 (PspScheduleEnforcementWorker.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1406C39C0 (EtwpCrimsonProvEnableCallback.c)
 *     PsSetProcessWin32Process @ 0x1406D72E0 (PsSetProcessWin32Process.c)
 *     ExpWnfStartKernelDispatcher @ 0x1406D98B0 (ExpWnfStartKernelDispatcher.c)
 *     CmWorkerEngineQueueWorkItem @ 0x1406E7BA8 (CmWorkerEngineQueueWorkItem.c)
 *     PopDiagTraceControlCallback @ 0x1406EFCB0 (PopDiagTraceControlCallback.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1406F21A0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     SmStoreCompressionStop @ 0x1406F7488 (SmStoreCompressionStop.c)
 *     WmipQueueRegWork @ 0x140716770 (WmipQueueRegWork.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140716F5C (PiDqObjectManagerHandleObjectEvent.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14071C7A0 (PiUEventQueueBroadcastEventEntry.c)
 *     SepScheduleImageVerificationCallbacks @ 0x14071ED78 (SepScheduleImageVerificationCallbacks.c)
 *     PerfDiagpRequestState @ 0x140720948 (PerfDiagpRequestState.c)
 *     PnpChainDereferenceComplete @ 0x14073128C (PnpChainDereferenceComplete.c)
 *     PopEsWorkItemSchedule @ 0x14073AB88 (PopEsWorkItemSchedule.c)
 *     PnpBootPhaseComplete @ 0x140755964 (PnpBootPhaseComplete.c)
 *     PopThermalZoneAdd @ 0x14075F1E0 (PopThermalZoneAdd.c)
 *     IopUnloadDriver @ 0x140768D48 (IopUnloadDriver.c)
 *     ExpWorkQueueManagerThread @ 0x14076BAB0 (ExpWorkQueueManagerThread.c)
 *     WdipSemStartTimeoutCheck @ 0x14076E2D4 (WdipSemStartTimeoutCheck.c)
 *     WmipQueueLegacyEtwWork @ 0x14078139C (WmipQueueLegacyEtwWork.c)
 *     PopFanAdd @ 0x140783F20 (PopFanAdd.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x140826890 (CmpDoQueueSystemHiveHysteresis.c)
 *     CmpDiskFullWarning @ 0x140833A8C (CmpDiskFullWarning.c)
 *     CmpForceFlushForCoalescing @ 0x140833B3C (CmpForceFlushForCoalescing.c)
 *     DbgkQueueUserExceptionReport @ 0x14084966C (DbgkQueueUserExceptionReport.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x14084B858 (DbgkpWerCaptureLiveFullDump.c)
 *     EmRemoveBadS3PagesCallback @ 0x14084CE90 (EmRemoveBadS3PagesCallback.c)
 *     IopSendMessageToTrackService @ 0x140853FB4 (IopSendMessageToTrackService.c)
 *     IoReplacePartitionUnit @ 0x14085E190 (IoReplacePartitionUnit.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x140864DF4 (PiDqObjectManagerMakeInconsistent.c)
 *     PiProfileUpdateDeviceTree @ 0x14086C570 (PiProfileUpdateDeviceTree.c)
 *     IopEjectDevice @ 0x1408752C4 (IopEjectDevice.c)
 *     MiRemovePhysicalMemory @ 0x140888720 (MiRemovePhysicalMemory.c)
 *     PopLidSwitchChangeCallback @ 0x1408A4BD0 (PopLidSwitchChangeCallback.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1408A51B0 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopPowerAggregatorHandleIntent @ 0x1408B24CC (PopPowerAggregatorHandleIntent.c)
 *     TtmiScheduleSessionWorker @ 0x1408BD7AC (TtmiScheduleSessionWorker.c)
 *     PspCompleteServerSiloShutdown @ 0x1408C4958 (PspCompleteServerSiloShutdown.c)
 *     PspQueueDeferredWorkAndWait @ 0x1408C5194 (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x1408C82F8 (PsSetVmProcessorHostProcess.c)
 *     PspRundownProcess @ 0x1408C9598 (PspRundownProcess.c)
 *     RtlpCtQueueWorkItem @ 0x1408D7D4C (RtlpCtQueueWorkItem.c)
 *     VmPrefetchVirtualAddresses @ 0x1408EC6D4 (VmPrefetchVirtualAddresses.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1408FCDD0 (PeriodicCaptureStateTimerCallback.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140913560 (ExpNodeHotAddProcessorWorker.c)
 *     WheaAttemptClearPoison @ 0x140919510 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140919600 (WheaAttemptPhysicalPageOffline.c)
 *     KdpTimeSlipDpcRoutine @ 0x140956630 (KdpTimeSlipDpcRoutine.c)
 *     IovpUnloadDriver @ 0x140963BB8 (IovpUnloadDriver.c)
 *     VfIrpLogRecordEvent @ 0x140980B50 (VfIrpLogRecordEvent.c)
 *     LogFwReport @ 0x14098E514 (LogFwReport.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 *     WmipInitializeRegistration @ 0x140A191CC (WmipInitializeRegistration.c)
 *     FsRtlInitializeSmssEvent @ 0x140A1A794 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     ExpNewThreadNecessary @ 0x14005A630 (ExpNewThreadNecessary.c)
 *     ExpValidateWorkItem @ 0x14005B338 (ExpValidateWorkItem.c)
 *     KeInsertPriQueue @ 0x14005B380 (KeInsertPriQueue.c)
 *     ExpIsPoolReadyForWork @ 0x14005C070 (ExpIsPoolReadyForWork.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MmGetNextNode @ 0x140080AF4 (MmGetNextNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __stdcall ExQueueWorkItem(PWORK_QUEUE_ITEM WorkItem, WORK_QUEUE_TYPE QueueType)
{
  ULONG_PTR v3; // rbx
  char v4; // di
  __int64 v5; // r14
  unsigned __int8 CurrentIrql; // bp
  unsigned int v7; // r10d
  unsigned __int16 v8; // dx
  __int64 v9; // r15
  int v10; // r9d
  unsigned int v11; // r10d
  int v12; // r11d
  __int64 v13; // rdi
  unsigned int NextNode; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  int v16; // [rsp+68h] [rbp+10h] BYREF

  v3 = QueueType;
  ExpValidateWorkItem((ULONG_PTR)WorkItem);
  v4 = 0;
  v16 = 0;
  v5 = *((_QWORD *)PspSystemPartition + 2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v7 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  v8 = v7;
  if ( v7 < (unsigned __int16)KeNumberNodes )
  {
    while ( 1 )
    {
      v9 = KeNodeBlock[v8];
      if ( (_UNKNOWN *)v9 == (_UNKNOWN *)((char *)&KiNodeInit + 384 * v8) )
        v9 = 0LL;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(v5, v9, 0LL) )
        break;
      NextNode = MmGetNextNode(v11, &v16);
      v8 = NextNode;
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_11;
    }
    v13 = **(_QWORD **)(*(_QWORD *)(v5 + 8) + 8LL * *(unsigned __int16 *)(v9 + 146));
    if ( (v13 & 1) != 0 )
      v13 = 0LL;
    KeInsertPriQueue(v13, (_DWORD)WorkItem, v12, v10, 0);
    if ( ExpNewThreadNecessary(v13, *(_DWORD *)(v13 + 720)) )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8LL * *(unsigned __int16 *)(v9 + 146)) + 16LL), 0, 0);
    v4 = 1;
  }
LABEL_11:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  if ( !v4 )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)WorkItem, v3, 0xFFFFFFFFFFFFFFFFuLL);
}
