/*
 * XREFs of EtwWriteEx @ 0x1400CAD40
 * Callers:
 *     PopDiagTracePowerRequestChange @ 0x140003064 (PopDiagTracePowerRequestChange.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x140004FA4 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x140005044 (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x140005F88 (PopDiagTraceSystemLatencyUpdate.c)
 *     PopDiagTraceIdleCheck @ 0x14000FFD0 (PopDiagTraceIdleCheck.c)
 *     PopScanIdleList @ 0x140010050 (PopScanIdleList.c)
 *     _TlgWriteAgg @ 0x140012A30 (_TlgWriteAgg.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x14005B870 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14005B980 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeIntSteerPeriodic @ 0x1400626A0 (KeIntSteerPeriodic.c)
 *     PpmCheckStart @ 0x14008B8E0 (PpmCheckStart.c)
 *     PpmCheckRun @ 0x14008BB80 (PpmCheckRun.c)
 *     PpmCheckComputeEnergy @ 0x1400A74A0 (PpmCheckComputeEnergy.c)
 *     EtwWrite @ 0x1400CAD00 (EtwWrite.c)
 *     IoReuseIrp @ 0x1400DF770 (IoReuseIrp.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x1400E1E48 (PoTraceSystemTimerResolutionUpdate.c)
 *     EtwTraceMemoryAcg @ 0x1400F1708 (EtwTraceMemoryAcg.c)
 *     KsepLogEtwMessage @ 0x1400F4D48 (KsepLogEtwMessage.c)
 *     PnpDiagnosticTraceObject @ 0x1400F5268 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400F5EA4 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400FCC30 (PoTraceSystemTimerResolutionKernel.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400FE744 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400FEBB0 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopPepWork @ 0x1400FEFE4 (PopPepWork.c)
 *     PopDiagTraceFxDevicePowered @ 0x1401000E0 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140100504 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     _TlgWriteEx @ 0x140100898 (_TlgWriteEx.c)
 *     PpmPerfRecordUtility @ 0x140102490 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x140102800 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfSelectProcessorState @ 0x140102C10 (PpmPerfSelectProcessorState.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x14010BA20 (PpmPerfSnapDeliveredPerformance.c)
 *     SeLogAccessFailure @ 0x140118EE0 (SeLogAccessFailure.c)
 *     EtwWriteTransfer @ 0x140127C80 (EtwWriteTransfer.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140132720 (IopAttachDeviceToDeviceStackSafe.c)
 *     PopDiagTraceEventNoPayload @ 0x140135A40 (PopDiagTraceEventNoPayload.c)
 *     PnpDiagnosticTrace @ 0x1401371C4 (PnpDiagnosticTrace.c)
 *     PopTraceSystemIdleTimeReset @ 0x140138BE8 (PopTraceSystemIdleTimeReset.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x140138F44 (PpmEventTraceFailedPerfCheckStart.c)
 *     PpmMediaBufferingWorker @ 0x14013EF80 (PpmMediaBufferingWorker.c)
 *     PoLatencySensitivityHint @ 0x14013F310 (PoLatencySensitivityHint.c)
 *     PopThermalTraceRundownEvents @ 0x140141D28 (PopThermalTraceRundownEvents.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x140142354 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopDiagTraceRtcWakeInfo @ 0x140142F08 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x140158B8C (PopDiagTraceSessionDisplayStateChange.c)
 *     McGenEventWrite @ 0x14015D6A0 (McGenEventWrite.c)
 *     IoTransferActivityId @ 0x14015FAE0 (IoTransferActivityId.c)
 *     IopLogEventIoMgrMountBegin @ 0x14016826C (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x140168368 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x140169614 (IopLogEventIoMgrMountFailed.c)
 *     PnpTraceInterruptUsage @ 0x14016DABC (PnpTraceInterruptUsage.c)
 *     KiIntSteerLogState @ 0x14016E20C (KiIntSteerLogState.c)
 *     PopDiagTraceIrpFinish @ 0x140171248 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14017169C (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceDeviceReleaseIrp @ 0x140171CC0 (PopDiagTraceDeviceReleaseIrp.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140171DBC (PopDiagTraceDeviceAcquireIrp.c)
 *     PopDiagTraceIrpStart @ 0x140172D00 (PopDiagTraceIrpStart.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1401749D4 (PopBatteryTraceSystemBatteryStatus.c)
 *     PpmEventArbitratorPerfStateChange @ 0x1401755E8 (PpmEventArbitratorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x140175790 (PpmEventTraceExpectedUtility.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1401770D0 (PopDiagTraceFxComponentIdleState.c)
 *     PopDiagTraceSetSystemState @ 0x1401778A0 (PopDiagTraceSetSystemState.c)
 *     PpmEventDomainPerfStateChange @ 0x140178490 (PpmEventDomainPerfStateChange.c)
 *     BapdWriteEtwEvents @ 0x1401786E8 (BapdWriteEtwEvents.c)
 *     KsepEvntLogFlagsApplied @ 0x1401790C8 (KsepEvntLogFlagsApplied.c)
 *     WheaLogInternalEvent @ 0x14017D340 (WheaLogInternalEvent.c)
 *     PnpDiagnosticTraceElamDecision @ 0x140182254 (PnpDiagnosticTraceElamDecision.c)
 *     PnpDiagnosticTraceElamStatus @ 0x140182320 (PnpDiagnosticTraceElamStatus.c)
 *     EtwpTraceFileName @ 0x140183D70 (EtwpTraceFileName.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x14018BF64 (PopDiagTraceThermalZoneEnumeration.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x14018D9E0 (EtwTraceJobServerSiloMonitorCallback.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x14026DD98 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x140278938 (HvlpWriteEventLog.c)
 *     IopInitActivityIdIrp @ 0x14027EEE4 (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x140285AD0 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140285B14 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140285BE8 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140285CD4 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x140285DFC (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140285EA4 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x140285F04 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x140285F5C (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x140285FB4 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x140286010 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x1402860A4 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x1402860FC (IopLiveDumpTraceSystemQuiesceStart.c)
 *     SecureDump_LogErrorEvent @ 0x140286850 (SecureDump_LogErrorEvent.c)
 *     KiIntSteerLogStatus @ 0x14029A8A8 (KiIntSteerLogStatus.c)
 *     KsepEvntLogShimsApplied @ 0x14029FB88 (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x1402A0630 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x1402A0758 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x1402A0850 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x1402A0934 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x1402A0A4C (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x1402A0B4C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x1402A0C20 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x1402A0CDC (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x1402A0DEC (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x1402A0EE4 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x1402A0FC8 (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x1402A10AC (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x1402A11A8 (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x1402A1280 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1402A1388 (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x1402A157C (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x1402A167C (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x1402DE6F0 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x1402DE7E0 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x1402DE884 (PoTraceForceIdleReset.c)
 *     PoTraceForceIdleStateChange @ 0x1402DE99C (PoTraceForceIdleStateChange.c)
 *     PopDiagTraceAbnormalReset @ 0x1402DF4FC (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x1402DF59C (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x1402DF6B0 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1402DF7A8 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1402DF9A4 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x1402DFB08 (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x1402DFEF0 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x1402DFFCC (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1402E0088 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x1402E03C8 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x1402E0484 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentLatency @ 0x1402E0578 (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x1402E0664 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1402E0750 (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x1402E084C (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1402E0B50 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1402E0C38 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x1402E0D20 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x1402E0F00 (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x1402E1048 (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x1402E1160 (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1402E1258 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x1402E1340 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x1402E13F0 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x1402E168C (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1402E1830 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x1402E18D0 (PopDiagTraceIrpPended.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1402E1970 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x1402E1AB8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceRegisterSystemState @ 0x1402E1C18 (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x1402E1CDC (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x1402E1DC8 (PopDiagTraceSleepStudyBlocker.c)
 *     PopDiagTraceThermalStateChange @ 0x1402E1E70 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1402E1F90 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402E20C0 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x1402E3AB0 (PpmHeteroDispatchHgsInterrupt.c)
 *     PpmEventAutonomousModeChange @ 0x1402E5200 (PpmEventAutonomousModeChange.c)
 *     PpmEventBiosCapChange @ 0x1402E52F4 (PpmEventBiosCapChange.c)
 *     PpmEventCoreParkingStateChange @ 0x1402E546C (PpmEventCoreParkingStateChange.c)
 *     PpmEventIdleDurationExpiration @ 0x1402E55FC (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x1402E576C (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x1402E582C (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x1402E5918 (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventParkNodeParkHintChanged @ 0x1402E5A34 (PpmEventParkNodeParkHintChanged.c)
 *     PpmEventParkNodePreference @ 0x1402E5B14 (PpmEventParkNodePreference.c)
 *     PpmEventPlatformVetoRequest @ 0x1402E5C3C (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x1402E5D14 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x1402E5F04 (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x1402E6014 (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x1402E624C (PpmEventThermalCapChange.c)
 *     PpmEventTraceCoreParkingSelection @ 0x1402E63B0 (PpmEventTraceCoreParkingSelection.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1402E6530 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x1402E6628 (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x1402E67D4 (PpmEventTraceLPIState.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x1402E689C (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402E6900 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1402E6B10 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventVpQosChange @ 0x1402E6DA0 (PpmEventVpQosChange.c)
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x1402E74E4 (PopDirectedDripsDiagTraceBroadcastVisit.c)
 *     PopSqmAddToStream @ 0x1402E884C (PopSqmAddToStream.c)
 *     PsDispatchIumService @ 0x1402EAA94 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x140306D68 (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x140306E34 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x140306F6C (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x140307038 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x140307650 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x140309534 (SmKmSqmAddToStream.c)
 *     EtwpFileProvTrace @ 0x140310B30 (EtwpFileProvTrace.c)
 *     EtwpLogMemInfo @ 0x140310E20 (EtwpLogMemInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x140310FD4 (EtwpNetProvTraceNetwork.c)
 *     EtwpPsProvTracePriority @ 0x140311394 (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x1403123B0 (SeEtwWriteKMCveEvent.c)
 *     EtwpTraceLostEvent @ 0x140312648 (EtwpTraceLostEvent.c)
 *     EtwpTiFillVadEventWrite @ 0x140312D2C (EtwpTiFillVadEventWrite.c)
 *     KitLogFeatureUsage @ 0x14031E700 (KitLogFeatureUsage.c)
 *     WheapGenerateETWEvents @ 0x140320E88 (WheapGenerateETWEvents.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x140320F08 (WheapLogPageOfflineAttemptEvent.c)
 *     WheapLogProcessTerminateEvent @ 0x140320FE8 (WheapLogProcessTerminateEvent.c)
 *     WheapSqmDwordCommon @ 0x140321A98 (WheapSqmDwordCommon.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x14057DC00 (PopDiagTraceFirmwareS3Stats.c)
 *     EtwpPsProvTraceImage @ 0x1405F6154 (EtwpPsProvTraceImage.c)
 *     SmKmEtwLogStoreChange @ 0x1408AC734 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1408AC868 (SmKmEtwLogStoreStats.c)
 *     BapdpRecordIumStatus @ 0x1409D1958 (BapdpRecordIumStatus.c)
 *     EtwpTraceSystemInitialization @ 0x1409D1A58 (EtwpTraceSystemInitialization.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x1409DE38C (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceDirtyTransition @ 0x1409F7FB8 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x14005B930 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x1400C84C0 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 */

NTSTATUS __stdcall EtwWriteEx(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG64 Filter,
        ULONG Flags,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  REGHANDLE v9; // rbx
  char v11; // r15
  NTSTATUS v12; // r9d
  __int64 v14; // rax
  void *v15; // rsi
  unsigned __int8 v16; // r10
  __int64 v17; // r11
  unsigned __int8 v18; // r10
  __int64 v19; // r11
  __int64 v20; // r10
  char v21; // r11
  __int64 v22; // r10
  unsigned __int8 v23; // r11
  PEVENT_DATA_DESCRIPTOR v24; // r15
  unsigned __int8 v25; // r10
  __int64 v26; // r11
  unsigned __int64 v27; // [rsp+98h] [rbp-70h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  __int64 v31; // [rsp+B8h] [rbp-50h]

  v9 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( RegHandle )
    v9 = RegHandle;
  v30 = 0LL;
  v31 = 0LL;
  v11 = Filter;
  v12 = 0;
  if ( !v9 )
    return -1073741816;
  v14 = *(_QWORD *)(v9 + 104);
  v15 = (void *)(v14 + 28);
  if ( !v14 )
    v15 = 0LL;
  if ( *(_BYTE *)(v9 + 100)
    && EtwpLevelKeywordEnabled(*(_QWORD *)(v9 + 32) + 96LL, EventDescriptor->Level, EventDescriptor->Keyword) )
  {
    v12 = EtwpEventWriteFull(
            v17,
            v16,
            v11,
            Flags,
            &EventDescriptor->Id,
            0,
            0,
            (GUID *)ActivityId,
            RelatedActivityId,
            UserDataCount,
            (__int64)UserData,
            0LL,
            (__int64)&v28,
            0LL,
            *(_WORD *)(v9 + 98),
            v15,
            &v27);
  }
  if ( *(_BYTE *)(v9 + 101)
    && EtwpLevelKeywordEnabled(*(_QWORD *)(v9 + 40) + 96LL, EventDescriptor->Level, EventDescriptor->Keyword) )
  {
    v12 = EtwpEventWriteFull(
            *(_QWORD *)(v9 + 32),
            v18,
            v11,
            Flags,
            &EventDescriptor->Id,
            0,
            0,
            (GUID *)ActivityId,
            RelatedActivityId,
            UserDataCount,
            (__int64)UserData,
            0LL,
            (__int64)&v28,
            v19,
            *(_WORD *)(v9 + 98),
            v15,
            &v27);
  }
  v20 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 400LL);
  if ( v20 )
  {
    v21 = *(_BYTE *)(v9 + 102);
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    if ( v21 )
    {
      v24 = UserData;
      if ( EtwpLevelKeywordEnabled(v20 + 96, EventDescriptor->Level, EventDescriptor->Keyword) )
        v12 = EtwpEventWriteFull(
                v22,
                v23,
                0,
                Flags,
                &EventDescriptor->Id,
                0,
                0,
                (GUID *)ActivityId,
                RelatedActivityId,
                UserDataCount,
                (__int64)UserData,
                0LL,
                (__int64)&v28,
                0LL,
                *(_WORD *)(v9 + 98),
                v15,
                &v27);
    }
    else
    {
      v24 = UserData;
    }
    if ( *(_BYTE *)(v9 + 103) )
    {
      if ( EtwpLevelKeywordEnabled(
             *(_QWORD *)(*(_QWORD *)(v9 + 40) + 400LL) + 96LL,
             EventDescriptor->Level,
             EventDescriptor->Keyword) )
      {
        return EtwpEventWriteFull(
                 *(_QWORD *)(*(_QWORD *)(v9 + 32) + 400LL),
                 v25,
                 0,
                 Flags,
                 &EventDescriptor->Id,
                 0,
                 0,
                 (GUID *)ActivityId,
                 RelatedActivityId,
                 UserDataCount,
                 (__int64)v24,
                 0LL,
                 (__int64)&v28,
                 v26,
                 *(_WORD *)(v9 + 98),
                 v15,
                 &v27);
      }
    }
  }
  return v12;
}
