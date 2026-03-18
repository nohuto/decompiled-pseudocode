/*
 * XREFs of ExQueueWorkItem @ 0x14005B100
 * Callers:
 *     ExpWaitForResource @ 0x140043230 (ExpWaitForResource.c)
 *     PspRequestDeferredJobNotification @ 0x140083F6C (PspRequestDeferredJobNotification.c)
 *     PfSnGetFileInformation @ 0x140094D90 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x14009511C (PfSnTraceGetLogEntry.c)
 *     PfSnTraceTimerRoutine @ 0x140097190 (PfSnTraceTimerRoutine.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14009A4FC (SmKmStoreDeleteWhenEmpty.c)
 *     LZNT1DecompressChunkNewThread @ 0x14009AC68 (LZNT1DecompressChunkNewThread.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14009AE00 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PsDereferencePartition @ 0x1400A0388 (PsDereferencePartition.c)
 *     IopCompleteUnloadOrDelete @ 0x1400B40A4 (IopCompleteUnloadOrDelete.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     PopQueuePowerRequestCallbacks @ 0x1400ED0B8 (PopQueuePowerRequestCallbacks.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400ED808 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400ED890 (PopDeepSleepClearDisengageReason.c)
 *     PopCheckForWork @ 0x1400EE334 (PopCheckForWork.c)
 *     CmpArmDelayedCloseTimer @ 0x14011E33C (CmpArmDelayedCloseTimer.c)
 *     ObpDeferObjectDeletion @ 0x140128484 (ObpDeferObjectDeletion.c)
 *     SepQueueWorkItem @ 0x14012CD34 (SepQueueWorkItem.c)
 *     ExpHpGCTimerCallback @ 0x1401339C0 (ExpHpGCTimerCallback.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x14013C7C0 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     WdipTimeoutTimerRoutine @ 0x14013C8A0 (WdipTimeoutTimerRoutine.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x14013CC10 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     SepAdtDetermineInsertQueue @ 0x14013D030 (SepAdtDetermineInsertQueue.c)
 *     CmpDelayFreeRMDpcRoutine @ 0x14013D1E0 (CmpDelayFreeRMDpcRoutine.c)
 *     EtwpCoverageFlushTimerCallback @ 0x14013D590 (EtwpCoverageFlushTimerCallback.c)
 *     PfSnTracingStateDpcRoutine @ 0x14013D660 (PfSnTracingStateDpcRoutine.c)
 *     MiFreeCombineBlock @ 0x1401415B4 (MiFreeCombineBlock.c)
 *     PoNotifyMediaBuffering @ 0x140143320 (PoNotifyMediaBuffering.c)
 *     IopLoadDriverImage @ 0x1401538AC (IopLoadDriverImage.c)
 *     PnpUnlockDeviceActionQueue @ 0x140158F18 (PnpUnlockDeviceActionQueue.c)
 *     IoWMIWriteEvent @ 0x14015B430 (IoWMIWriteEvent.c)
 *     PoLatencySensitivityHint @ 0x14015BB80 (PoLatencySensitivityHint.c)
 *     EtwTelemetryCoverageReport @ 0x14015C790 (EtwTelemetryCoverageReport.c)
 *     PfSnPowerBoostDpc @ 0x14015CE90 (PfSnPowerBoostDpc.c)
 *     PnpRequestDeviceAction @ 0x14015D184 (PnpRequestDeviceAction.c)
 *     PopForceCompleteCsSleepStudySession @ 0x14015DBF8 (PopForceCompleteCsSleepStudySession.c)
 *     PopWakeInfoDereference @ 0x140169144 (PopWakeInfoDereference.c)
 *     PfpPowerActionDpcRoutine @ 0x140169C40 (PfpPowerActionDpcRoutine.c)
 *     PopWakeSourceTimeoutDpc @ 0x14016A060 (PopWakeSourceTimeoutDpc.c)
 *     ExpTimeRefreshDpcRoutine @ 0x140170400 (ExpTimeRefreshDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140170BE0 (ExpTimeZoneDpcRoutine.c)
 *     PopBatteryQueueWork @ 0x140176E10 (PopBatteryQueueWork.c)
 *     IoWriteErrorLogEntry @ 0x140177180 (IoWriteErrorLogEntry.c)
 *     PopQueueWorkItem @ 0x140177880 (PopQueueWorkItem.c)
 *     MmSetAccessLogging @ 0x14017DFC4 (MmSetAccessLogging.c)
 *     PopUserPresentSet @ 0x140181308 (PopUserPresentSet.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x140185A00 (MiFreeUnusedPfnPagesDpc.c)
 *     EmpQueueRuleUpdateState @ 0x140189808 (EmpQueueRuleUpdateState.c)
 *     ExInitializeProcessor @ 0x14018B3FC (ExInitializeProcessor.c)
 *     PopPowerSourceChangeCallback @ 0x14018BA10 (PopPowerSourceChangeCallback.c)
 *     KeBalanceSetManager @ 0x14018D570 (KeBalanceSetManager.c)
 *     PopThermalIrpComplete @ 0x14019C9E0 (PopThermalIrpComplete.c)
 *     PopFanIrpComplete @ 0x14019D4F0 (PopFanIrpComplete.c)
 *     ExpDebuggerDpcRoutine @ 0x14019E670 (ExpDebuggerDpcRoutine.c)
 *     CcBcbProfiler @ 0x1401A9C40 (CcBcbProfiler.c)
 *     CmpFreezeThawDpcRoutine @ 0x14027FF70 (CmpFreezeThawDpcRoutine.c)
 *     CmpLazyCommitDpcRoutine @ 0x14027FFA0 (CmpLazyCommitDpcRoutine.c)
 *     HvlpInitializeSvmIommuSupport @ 0x14028C334 (HvlpInitializeSvmIommuSupport.c)
 *     HvlpIommuPrqDpcRoutine @ 0x14028C450 (HvlpIommuPrqDpcRoutine.c)
 *     IoRaiseHardError @ 0x140298660 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140298920 (IoRaiseInformationalHardError.c)
 *     IoDecrementKeepAliveCount @ 0x140299730 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x140299860 (IoIncrementKeepAliveCount.c)
 *     IopErrorLogDpc @ 0x14029B660 (IopErrorLogDpc.c)
 *     IoRequestDeviceEjectEx @ 0x14029DE10 (IoRequestDeviceEjectEx.c)
 *     PnpTimerCallback @ 0x1402A0030 (PnpTimerCallback.c)
 *     IopDeviceEjectComplete @ 0x1402A14F0 (IopDeviceEjectComplete.c)
 *     MiFlushControlArea @ 0x1402B96B0 (MiFlushControlArea.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402BBF64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiWakeFileOnlyReaper @ 0x1402CD6B4 (MiWakeFileOnlyReaper.c)
 *     MiPageNotZero @ 0x1402D9448 (MiPageNotZero.c)
 *     MiNoPagesLastChance @ 0x1402D9E6C (MiNoPagesLastChance.c)
 *     ObpProcessRemoveObjectDpcWorker @ 0x1402ED350 (ObpProcessRemoveObjectDpcWorker.c)
 *     ObpDeferPushRefDerefInfo @ 0x1402ED5EC (ObpDeferPushRefDerefInfo.c)
 *     PopExecutionRequiredTimeoutCallback @ 0x1402EDE40 (PopExecutionRequiredTimeoutCallback.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1402F7480 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopUpdateWakeSource @ 0x1402F77DC (PopUpdateWakeSource.c)
 *     PopUserShutdownDelayDpcCallback @ 0x1402F7E10 (PopUserShutdownDelayDpcCallback.c)
 *     PopSleepStudyTaskClientTimerCallback @ 0x1402FF200 (PopSleepStudyTaskClientTimerCallback.c)
 *     PopWdiTimerCallback @ 0x1402FFB10 (PopWdiTimerCallback.c)
 *     PpmHeteroHgsUpdateDpcRoutine @ 0x140300A20 (PpmHeteroHgsUpdateDpcRoutine.c)
 *     PpmWmiIdleAccountingProcedure @ 0x1403014B0 (PpmWmiIdleAccountingProcedure.c)
 *     PopWatchdogDpc @ 0x140301AA0 (PopWatchdogDpc.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x140303E10 (PopIdleAoAcDozeS4TimerCallback.c)
 *     TtmpScheduledEvaluationDpc @ 0x140306930 (TtmpScheduledEvaluationDpc.c)
 *     PspHardDereferenceSiloWorker @ 0x140306C74 (PspHardDereferenceSiloWorker.c)
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     SepAuditFailedRaisedIrql @ 0x14031EBFC (SepAuditFailedRaisedIrql.c)
 *     ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x140320260 (-SmHighMemPriorityWatchdogTimerCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x1403267F0 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     EtwpCoverageResetTimerCallback @ 0x14032CE20 (EtwpCoverageResetTimerCallback.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x14032F6C0 (EtwpQueuePerfMemInfoWorkItem.c)
 *     EtwpTiAsyncVadQueryEventWrite @ 0x140330F44 (EtwpTiAsyncVadQueryEventWrite.c)
 *     EtwpCompressionDpc @ 0x1403335F0 (EtwpCompressionDpc.c)
 *     ExpCenturyDpcRoutine @ 0x140338290 (ExpCenturyDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x140338650 (ExpNextYearDpcRoutine.c)
 *     ExpSvmDpcRoutine @ 0x14033E4C0 (ExpSvmDpcRoutine.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x140341520 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x1403426E0 (WheapWorkQueueAddItem.c)
 *     WheapWorkQueueDpcRoutine @ 0x140342740 (WheapWorkQueueDpcRoutine.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     MmDuplicateMemory @ 0x14059BE8C (MmDuplicateMemory.c)
 *     PnprInitiateReplaceOperation @ 0x1405A9650 (PnprInitiateReplaceOperation.c)
 *     MiZeroAllPageFiles @ 0x1405ABCD4 (MiZeroAllPageFiles.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x1405B5384 (SepInformFileSystemsOfDeletedLogon.c)
 *     CmpSignalDeferredPosts @ 0x1406023E0 (CmpSignalDeferredPosts.c)
 *     CmpClaimGlobalQuota @ 0x14065EE74 (CmpClaimGlobalQuota.c)
 *     CmpCanGrowHive @ 0x14065FF9C (CmpCanGrowHive.c)
 *     CmWorkerEngineQueueWorkItem @ 0x140662BA4 (CmWorkerEngineQueueWorkItem.c)
 *     PnpInsertEventInQueue @ 0x140669AA0 (PnpInsertEventInQueue.c)
 *     PfSnPrefetchScenario @ 0x140669F44 (PfSnPrefetchScenario.c)
 *     PfSnPrefetchSections @ 0x14066AEDC (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x14066B198 (PfSnPrefetchSectionsCleanup.c)
 *     PiUEventNotifyUserMode @ 0x14066BB20 (PiUEventNotifyUserMode.c)
 *     PiDrvDbLoadNode @ 0x14067C6D4 (PiDrvDbLoadNode.c)
 *     PopDiagTraceControlCallback @ 0x14069D910 (PopDiagTraceControlCallback.c)
 *     NtNotifyChangeSession @ 0x1406AD140 (NtNotifyChangeSession.c)
 *     PspScheduleEnforcementWorker @ 0x1406AFA30 (PspScheduleEnforcementWorker.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1406C4800 (EtwpCrimsonProvEnableCallback.c)
 *     PsSetProcessWin32Process @ 0x1406D7500 (PsSetProcessWin32Process.c)
 *     ExpWnfStartKernelDispatcher @ 0x1406E4574 (ExpWnfStartKernelDispatcher.c)
 *     PfSnEndProcessTrace @ 0x1406E6D0C (PfSnEndProcessTrace.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1406F0700 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     SmStoreCompressionStop @ 0x1406F56C4 (SmStoreCompressionStop.c)
 *     WmipQueueRegWork @ 0x140714990 (WmipQueueRegWork.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140714CA0 (PiDqObjectManagerHandleObjectEvent.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14071A9B0 (PiUEventQueueBroadcastEventEntry.c)
 *     SepScheduleImageVerificationCallbacks @ 0x14071CEE8 (SepScheduleImageVerificationCallbacks.c)
 *     PerfDiagpRequestState @ 0x14071EAB8 (PerfDiagpRequestState.c)
 *     PnpChainDereferenceComplete @ 0x14072F02C (PnpChainDereferenceComplete.c)
 *     PopEsWorkItemSchedule @ 0x140738928 (PopEsWorkItemSchedule.c)
 *     PnpBootPhaseComplete @ 0x140754ED4 (PnpBootPhaseComplete.c)
 *     PopThermalZoneAdd @ 0x14075A950 (PopThermalZoneAdd.c)
 *     IopUnloadDriver @ 0x140764248 (IopUnloadDriver.c)
 *     ExpWorkQueueManagerThread @ 0x140766FB0 (ExpWorkQueueManagerThread.c)
 *     WdipSemStartTimeoutCheck @ 0x14076B480 (WdipSemStartTimeoutCheck.c)
 *     WmipQueueLegacyEtwWork @ 0x14077E97C (WmipQueueLegacyEtwWork.c)
 *     PopFanAdd @ 0x140781BC0 (PopFanAdd.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x140827190 (CmpDoQueueSystemHiveHysteresis.c)
 *     CmpDiskFullWarning @ 0x14083442C (CmpDiskFullWarning.c)
 *     CmpForceFlushForCoalescing @ 0x1408344DC (CmpForceFlushForCoalescing.c)
 *     DbgkQueueUserExceptionReport @ 0x140849F6C (DbgkQueueUserExceptionReport.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x14084C158 (DbgkpWerCaptureLiveFullDump.c)
 *     EmRemoveBadS3PagesCallback @ 0x14084D790 (EmRemoveBadS3PagesCallback.c)
 *     IopSendMessageToTrackService @ 0x1408548B4 (IopSendMessageToTrackService.c)
 *     IoReplacePartitionUnit @ 0x14085EA90 (IoReplacePartitionUnit.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1408656F4 (PiDqObjectManagerMakeInconsistent.c)
 *     PiProfileUpdateDeviceTree @ 0x14086CE70 (PiProfileUpdateDeviceTree.c)
 *     IopEjectDevice @ 0x140875BC4 (IopEjectDevice.c)
 *     MiRemovePhysicalMemory @ 0x140888F00 (MiRemovePhysicalMemory.c)
 *     PopLidSwitchChangeCallback @ 0x1408A5390 (PopLidSwitchChangeCallback.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1408A5950 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopPowerAggregatorHandleIntent @ 0x1408B2C6C (PopPowerAggregatorHandleIntent.c)
 *     TtmiScheduleSessionWorker @ 0x1408BDEDC (TtmiScheduleSessionWorker.c)
 *     PspCompleteServerSiloShutdown @ 0x1408C5088 (PspCompleteServerSiloShutdown.c)
 *     PspQueueDeferredWorkAndWait @ 0x1408C58B4 (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x1408C8A18 (PsSetVmProcessorHostProcess.c)
 *     PspRundownProcess @ 0x1408C9CB8 (PspRundownProcess.c)
 *     RtlpCtQueueWorkItem @ 0x1408D844C (RtlpCtQueueWorkItem.c)
 *     VmPrefetchVirtualAddresses @ 0x1408ECDC4 (VmPrefetchVirtualAddresses.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1408FD440 (PeriodicCaptureStateTimerCallback.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140913B00 (ExpNodeHotAddProcessorWorker.c)
 *     WheaAttemptClearPoison @ 0x140919AB0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140919BA0 (WheaAttemptPhysicalPageOffline.c)
 *     KdpTimeSlipDpcRoutine @ 0x140956630 (KdpTimeSlipDpcRoutine.c)
 *     IovpUnloadDriver @ 0x140963BB8 (IovpUnloadDriver.c)
 *     VfIrpLogRecordEvent @ 0x140980B50 (VfIrpLogRecordEvent.c)
 *     LogFwReport @ 0x14098E514 (LogFwReport.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 *     WmipInitializeRegistration @ 0x140A18D0C (WmipInitializeRegistration.c)
 *     FsRtlInitializeSmssEvent @ 0x140A1A51C (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     ExpNewThreadNecessary @ 0x14005A590 (ExpNewThreadNecessary.c)
 *     ExpValidateWorkItem @ 0x14005B298 (ExpValidateWorkItem.c)
 *     KeInsertPriQueue @ 0x14005B2E0 (KeInsertPriQueue.c)
 *     ExpIsPoolReadyForWork @ 0x14005BFD0 (ExpIsPoolReadyForWork.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MmGetNextNode @ 0x1400806F4 (MmGetNextNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
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
