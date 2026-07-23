/*
 * XREFs of EtwWriteEx @ 0x1400CAE40
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
 *     PpmCheckStart @ 0x14008B8D0 (PpmCheckStart.c)
 *     PpmCheckRun @ 0x14008BB70 (PpmCheckRun.c)
 *     PpmCheckComputeEnergy @ 0x1400A7400 (PpmCheckComputeEnergy.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     IoReuseIrp @ 0x1400DF810 (IoReuseIrp.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x1400E1EE8 (PoTraceSystemTimerResolutionUpdate.c)
 *     EtwTraceMemoryAcg @ 0x1400F17A8 (EtwTraceMemoryAcg.c)
 *     KsepLogEtwMessage @ 0x1400F4DE8 (KsepLogEtwMessage.c)
 *     PnpDiagnosticTraceObject @ 0x1400F5308 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400F5F44 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400FCCD0 (PoTraceSystemTimerResolutionKernel.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400FE7E4 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400FEC50 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopPepWork @ 0x1400FF084 (PopPepWork.c)
 *     PopDiagTraceFxDevicePowered @ 0x140100180 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1401005A4 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     PpmPerfRecordUtility @ 0x140102530 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x1401028A0 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfSelectProcessorState @ 0x140102CB0 (PpmPerfSelectProcessorState.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x14010BAC0 (PpmPerfSnapDeliveredPerformance.c)
 *     SeLogAccessFailure @ 0x140118F70 (SeLogAccessFailure.c)
 *     EtwWriteTransfer @ 0x140127D70 (EtwWriteTransfer.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140132810 (IopAttachDeviceToDeviceStackSafe.c)
 *     PopDiagTraceEventNoPayload @ 0x140135B30 (PopDiagTraceEventNoPayload.c)
 *     PnpDiagnosticTrace @ 0x1401372E4 (PnpDiagnosticTrace.c)
 *     PopTraceSystemIdleTimeReset @ 0x140138D08 (PopTraceSystemIdleTimeReset.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x140139064 (PpmEventTraceFailedPerfCheckStart.c)
 *     PpmMediaBufferingWorker @ 0x14013F0A0 (PpmMediaBufferingWorker.c)
 *     PoLatencySensitivityHint @ 0x14013F430 (PoLatencySensitivityHint.c)
 *     PopThermalTraceRundownEvents @ 0x140141E48 (PopThermalTraceRundownEvents.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x140142474 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopDiagTraceRtcWakeInfo @ 0x140143028 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x140158CAC (PopDiagTraceSessionDisplayStateChange.c)
 *     McGenEventWrite @ 0x14015D7C0 (McGenEventWrite.c)
 *     IoTransferActivityId @ 0x14015FC00 (IoTransferActivityId.c)
 *     IopLogEventIoMgrMountBegin @ 0x14016838C (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x140168488 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x140169734 (IopLogEventIoMgrMountFailed.c)
 *     PnpTraceInterruptUsage @ 0x14016DBDC (PnpTraceInterruptUsage.c)
 *     KiIntSteerLogState @ 0x14016E32C (KiIntSteerLogState.c)
 *     PopDiagTraceIrpFinish @ 0x140171368 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1401717BC (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceDeviceReleaseIrp @ 0x140171DE0 (PopDiagTraceDeviceReleaseIrp.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140171EDC (PopDiagTraceDeviceAcquireIrp.c)
 *     PopDiagTraceIrpStart @ 0x140172E20 (PopDiagTraceIrpStart.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140174AF4 (PopBatteryTraceSystemBatteryStatus.c)
 *     PpmEventArbitratorPerfStateChange @ 0x140175708 (PpmEventArbitratorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x1401758B0 (PpmEventTraceExpectedUtility.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1401771F0 (PopDiagTraceFxComponentIdleState.c)
 *     PopDiagTraceSetSystemState @ 0x1401779C0 (PopDiagTraceSetSystemState.c)
 *     PpmEventDomainPerfStateChange @ 0x1401785B0 (PpmEventDomainPerfStateChange.c)
 *     BapdWriteEtwEvents @ 0x140178808 (BapdWriteEtwEvents.c)
 *     KsepEvntLogFlagsApplied @ 0x1401791E8 (KsepEvntLogFlagsApplied.c)
 *     WheaLogInternalEvent @ 0x14017D4A0 (WheaLogInternalEvent.c)
 *     PnpDiagnosticTraceElamDecision @ 0x1401823B4 (PnpDiagnosticTraceElamDecision.c)
 *     PnpDiagnosticTraceElamStatus @ 0x140182480 (PnpDiagnosticTraceElamStatus.c)
 *     EtwpTraceFileName @ 0x140183ED0 (EtwpTraceFileName.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x14018C0C4 (PopDiagTraceThermalZoneEnumeration.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x14018DB40 (EtwTraceJobServerSiloMonitorCallback.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x14026E088 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x140278C28 (HvlpWriteEventLog.c)
 *     IopInitActivityIdIrp @ 0x14027F1D4 (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x140285DC0 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140285E04 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140285ED8 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140285FC4 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1402860EC (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140286194 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x1402861F4 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x14028624C (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x1402862A4 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x140286300 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x140286394 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x1402863EC (IopLiveDumpTraceSystemQuiesceStart.c)
 *     SecureDump_LogErrorEvent @ 0x140286B40 (SecureDump_LogErrorEvent.c)
 *     KiIntSteerLogStatus @ 0x14029AB98 (KiIntSteerLogStatus.c)
 *     KsepEvntLogShimsApplied @ 0x14029FE78 (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x1402A0920 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x1402A0A48 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x1402A0B40 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x1402A0C24 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x1402A0D3C (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x1402A0E3C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x1402A0F10 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x1402A0FCC (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x1402A10DC (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x1402A11D4 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x1402A12B8 (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x1402A139C (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x1402A1498 (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x1402A1570 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1402A1678 (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x1402A186C (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x1402A196C (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x1402DE9E0 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x1402DEAD0 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x1402DEB74 (PoTraceForceIdleReset.c)
 *     PoTraceForceIdleStateChange @ 0x1402DEC8C (PoTraceForceIdleStateChange.c)
 *     PopDiagTraceAbnormalReset @ 0x1402DF7EC (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x1402DF88C (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x1402DF9A0 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1402DFA98 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1402DFC94 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x1402DFDF8 (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x1402E01E0 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x1402E02BC (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1402E0378 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x1402E06B8 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x1402E0774 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentLatency @ 0x1402E0868 (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x1402E0954 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1402E0A40 (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x1402E0B3C (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1402E0E40 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1402E0F28 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x1402E1010 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x1402E11F0 (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x1402E1338 (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x1402E1450 (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1402E1548 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x1402E1630 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x1402E16E0 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x1402E197C (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1402E1B20 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x1402E1BC0 (PopDiagTraceIrpPended.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1402E1C60 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x1402E1DA8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceRegisterSystemState @ 0x1402E1F08 (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x1402E1FCC (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x1402E20B8 (PopDiagTraceSleepStudyBlocker.c)
 *     PopDiagTraceThermalStateChange @ 0x1402E2160 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1402E2280 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402E23B0 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x1402E3DA0 (PpmHeteroDispatchHgsInterrupt.c)
 *     PpmEventAutonomousModeChange @ 0x1402E54F0 (PpmEventAutonomousModeChange.c)
 *     PpmEventBiosCapChange @ 0x1402E55E4 (PpmEventBiosCapChange.c)
 *     PpmEventCoreParkingStateChange @ 0x1402E575C (PpmEventCoreParkingStateChange.c)
 *     PpmEventIdleDurationExpiration @ 0x1402E58EC (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x1402E5A5C (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x1402E5B1C (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x1402E5C08 (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventParkNodeParkHintChanged @ 0x1402E5D24 (PpmEventParkNodeParkHintChanged.c)
 *     PpmEventParkNodePreference @ 0x1402E5E04 (PpmEventParkNodePreference.c)
 *     PpmEventPlatformVetoRequest @ 0x1402E5F2C (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x1402E6004 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x1402E61F4 (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x1402E6304 (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x1402E653C (PpmEventThermalCapChange.c)
 *     PpmEventTraceCoreParkingSelection @ 0x1402E66A0 (PpmEventTraceCoreParkingSelection.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1402E6820 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x1402E6918 (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x1402E6AC4 (PpmEventTraceLPIState.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x1402E6B8C (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402E6BF0 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1402E6E00 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventVpQosChange @ 0x1402E7090 (PpmEventVpQosChange.c)
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x1402E77D4 (PopDirectedDripsDiagTraceBroadcastVisit.c)
 *     PopSqmAddToStream @ 0x1402E8B3C (PopSqmAddToStream.c)
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x140307058 (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x140307124 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x14030725C (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x140307328 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x140307940 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x140309824 (SmKmSqmAddToStream.c)
 *     EtwpFileProvTrace @ 0x140310E20 (EtwpFileProvTrace.c)
 *     EtwpLogMemInfo @ 0x140311110 (EtwpLogMemInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x1403112C4 (EtwpNetProvTraceNetwork.c)
 *     EtwpPsProvTracePriority @ 0x140311684 (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x1403126A0 (SeEtwWriteKMCveEvent.c)
 *     EtwpTraceLostEvent @ 0x140312938 (EtwpTraceLostEvent.c)
 *     EtwpTiFillVadEventWrite @ 0x14031301C (EtwpTiFillVadEventWrite.c)
 *     KitLogFeatureUsage @ 0x14031E9F0 (KitLogFeatureUsage.c)
 *     WheapGenerateETWEvents @ 0x140321178 (WheapGenerateETWEvents.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x1403211F8 (WheapLogPageOfflineAttemptEvent.c)
 *     WheapLogProcessTerminateEvent @ 0x1403212D8 (WheapLogProcessTerminateEvent.c)
 *     WheapSqmDwordCommon @ 0x140321D88 (WheapSqmDwordCommon.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x14057EC00 (PopDiagTraceFirmwareS3Stats.c)
 *     EtwpPsProvTraceImage @ 0x1405F7154 (EtwpPsProvTraceImage.c)
 *     SmKmEtwLogStoreChange @ 0x1408AD974 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1408ADAA8 (SmKmEtwLogStoreStats.c)
 *     BapdpRecordIumStatus @ 0x1409D2958 (BapdpRecordIumStatus.c)
 *     EtwpTraceSystemInitialization @ 0x1409D2A58 (EtwpTraceSystemInitialization.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x1409DF38C (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceDirtyTransition @ 0x1409F8FC8 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x14005B930 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
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
  _QWORD *v17; // r11
  unsigned __int8 v18; // r10
  __int64 v19; // r11
  __int64 v20; // r10
  char v21; // r11
  _QWORD *v22; // r10
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
            *(_QWORD **)(v9 + 32),
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
                 *(_QWORD **)(*(_QWORD *)(v9 + 32) + 400LL),
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
