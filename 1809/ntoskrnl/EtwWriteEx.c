/*
 * XREFs of EtwWriteEx @ 0x1400CAD60
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
 *     PpmCheckComputeEnergy @ 0x1400A74C0 (PpmCheckComputeEnergy.c)
 *     EtwWrite @ 0x1400CAD20 (EtwWrite.c)
 *     IoReuseIrp @ 0x1400DF790 (IoReuseIrp.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x1400E1E68 (PoTraceSystemTimerResolutionUpdate.c)
 *     EtwTraceMemoryAcg @ 0x1400F1728 (EtwTraceMemoryAcg.c)
 *     KsepLogEtwMessage @ 0x1400F4D68 (KsepLogEtwMessage.c)
 *     PnpDiagnosticTraceObject @ 0x1400F5288 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400F5EC4 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400FCC50 (PoTraceSystemTimerResolutionKernel.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400FE764 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400FEBD0 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopPepWork @ 0x1400FF004 (PopPepWork.c)
 *     PopDiagTraceFxDevicePowered @ 0x140100100 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140100524 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     _TlgWriteEx @ 0x1401008B8 (_TlgWriteEx.c)
 *     PpmPerfRecordUtility @ 0x1401024B0 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x140102820 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfSelectProcessorState @ 0x140102C30 (PpmPerfSelectProcessorState.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x14010BA40 (PpmPerfSnapDeliveredPerformance.c)
 *     SeLogAccessFailure @ 0x140118F00 (SeLogAccessFailure.c)
 *     EtwWriteTransfer @ 0x140127CA0 (EtwWriteTransfer.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140132740 (IopAttachDeviceToDeviceStackSafe.c)
 *     PopDiagTraceEventNoPayload @ 0x140135A60 (PopDiagTraceEventNoPayload.c)
 *     PnpDiagnosticTrace @ 0x1401371E4 (PnpDiagnosticTrace.c)
 *     PopTraceSystemIdleTimeReset @ 0x140138C08 (PopTraceSystemIdleTimeReset.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x140138F64 (PpmEventTraceFailedPerfCheckStart.c)
 *     PpmMediaBufferingWorker @ 0x14013EFA0 (PpmMediaBufferingWorker.c)
 *     PoLatencySensitivityHint @ 0x14013F330 (PoLatencySensitivityHint.c)
 *     PopThermalTraceRundownEvents @ 0x140141D48 (PopThermalTraceRundownEvents.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x140142374 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopDiagTraceRtcWakeInfo @ 0x140142F28 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x140158BAC (PopDiagTraceSessionDisplayStateChange.c)
 *     McGenEventWrite @ 0x14015D6C0 (McGenEventWrite.c)
 *     IoTransferActivityId @ 0x14015FB00 (IoTransferActivityId.c)
 *     IopLogEventIoMgrMountBegin @ 0x14016828C (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x140168388 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x140169634 (IopLogEventIoMgrMountFailed.c)
 *     PnpTraceInterruptUsage @ 0x14016DADC (PnpTraceInterruptUsage.c)
 *     KiIntSteerLogState @ 0x14016E22C (KiIntSteerLogState.c)
 *     PopDiagTraceIrpFinish @ 0x140171268 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1401716BC (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceDeviceReleaseIrp @ 0x140171CE0 (PopDiagTraceDeviceReleaseIrp.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140171DDC (PopDiagTraceDeviceAcquireIrp.c)
 *     PopDiagTraceIrpStart @ 0x140172D20 (PopDiagTraceIrpStart.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1401749F4 (PopBatteryTraceSystemBatteryStatus.c)
 *     PpmEventArbitratorPerfStateChange @ 0x140175608 (PpmEventArbitratorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x1401757B0 (PpmEventTraceExpectedUtility.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1401770F0 (PopDiagTraceFxComponentIdleState.c)
 *     PopDiagTraceSetSystemState @ 0x1401778C0 (PopDiagTraceSetSystemState.c)
 *     PpmEventDomainPerfStateChange @ 0x1401784B0 (PpmEventDomainPerfStateChange.c)
 *     BapdWriteEtwEvents @ 0x140178708 (BapdWriteEtwEvents.c)
 *     KsepEvntLogFlagsApplied @ 0x1401790E8 (KsepEvntLogFlagsApplied.c)
 *     WheaLogInternalEvent @ 0x14017D360 (WheaLogInternalEvent.c)
 *     PnpDiagnosticTraceElamDecision @ 0x140182274 (PnpDiagnosticTraceElamDecision.c)
 *     PnpDiagnosticTraceElamStatus @ 0x140182340 (PnpDiagnosticTraceElamStatus.c)
 *     EtwpTraceFileName @ 0x140183D90 (EtwpTraceFileName.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x14018BF84 (PopDiagTraceThermalZoneEnumeration.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x14018DA00 (EtwTraceJobServerSiloMonitorCallback.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x14026DE98 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x140278A38 (HvlpWriteEventLog.c)
 *     IopInitActivityIdIrp @ 0x14027EFE4 (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x140285BD0 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140285C14 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140285CE8 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140285DD4 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x140285EFC (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140285FA4 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x140286004 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x14028605C (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x1402860B4 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x140286110 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x1402861A4 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x1402861FC (IopLiveDumpTraceSystemQuiesceStart.c)
 *     SecureDump_LogErrorEvent @ 0x140286950 (SecureDump_LogErrorEvent.c)
 *     KiIntSteerLogStatus @ 0x14029A9A8 (KiIntSteerLogStatus.c)
 *     KsepEvntLogShimsApplied @ 0x14029FC88 (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x1402A0730 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x1402A0858 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x1402A0950 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x1402A0A34 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x1402A0B4C (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x1402A0C4C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x1402A0D20 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x1402A0DDC (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x1402A0EEC (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x1402A0FE4 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x1402A10C8 (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x1402A11AC (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x1402A12A8 (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x1402A1380 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1402A1488 (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x1402A167C (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x1402A177C (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x1402DE7F0 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x1402DE8E0 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x1402DE984 (PoTraceForceIdleReset.c)
 *     PoTraceForceIdleStateChange @ 0x1402DEA9C (PoTraceForceIdleStateChange.c)
 *     PopDiagTraceAbnormalReset @ 0x1402DF5FC (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x1402DF69C (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x1402DF7B0 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1402DF8A8 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1402DFAA4 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x1402DFC08 (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x1402DFFF0 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x1402E00CC (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1402E0188 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x1402E04C8 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x1402E0584 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentLatency @ 0x1402E0678 (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x1402E0764 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1402E0850 (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x1402E094C (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1402E0C50 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1402E0D38 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x1402E0E20 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x1402E1000 (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x1402E1148 (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x1402E1260 (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1402E1358 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x1402E1440 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x1402E14F0 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x1402E178C (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1402E1930 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x1402E19D0 (PopDiagTraceIrpPended.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1402E1A70 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x1402E1BB8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceRegisterSystemState @ 0x1402E1D18 (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x1402E1DDC (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x1402E1EC8 (PopDiagTraceSleepStudyBlocker.c)
 *     PopDiagTraceThermalStateChange @ 0x1402E1F70 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1402E2090 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402E21C0 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x1402E3BB0 (PpmHeteroDispatchHgsInterrupt.c)
 *     PpmEventAutonomousModeChange @ 0x1402E5300 (PpmEventAutonomousModeChange.c)
 *     PpmEventBiosCapChange @ 0x1402E53F4 (PpmEventBiosCapChange.c)
 *     PpmEventCoreParkingStateChange @ 0x1402E556C (PpmEventCoreParkingStateChange.c)
 *     PpmEventIdleDurationExpiration @ 0x1402E56FC (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x1402E586C (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x1402E592C (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x1402E5A18 (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventParkNodeParkHintChanged @ 0x1402E5B34 (PpmEventParkNodeParkHintChanged.c)
 *     PpmEventParkNodePreference @ 0x1402E5C14 (PpmEventParkNodePreference.c)
 *     PpmEventPlatformVetoRequest @ 0x1402E5D3C (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x1402E5E14 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x1402E6004 (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x1402E6114 (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x1402E634C (PpmEventThermalCapChange.c)
 *     PpmEventTraceCoreParkingSelection @ 0x1402E64B0 (PpmEventTraceCoreParkingSelection.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1402E6630 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x1402E6728 (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x1402E68D4 (PpmEventTraceLPIState.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x1402E699C (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402E6A00 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1402E6C10 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventVpQosChange @ 0x1402E6EA0 (PpmEventVpQosChange.c)
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x1402E75E4 (PopDirectedDripsDiagTraceBroadcastVisit.c)
 *     PopSqmAddToStream @ 0x1402E894C (PopSqmAddToStream.c)
 *     PsDispatchIumService @ 0x1402EAB94 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x140306E68 (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x140306F34 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x14030706C (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x140307138 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x140307750 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x140309634 (SmKmSqmAddToStream.c)
 *     EtwpFileProvTrace @ 0x140310C30 (EtwpFileProvTrace.c)
 *     EtwpLogMemInfo @ 0x140310F20 (EtwpLogMemInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x1403110D4 (EtwpNetProvTraceNetwork.c)
 *     EtwpPsProvTracePriority @ 0x140311494 (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x1403124B0 (SeEtwWriteKMCveEvent.c)
 *     EtwpTraceLostEvent @ 0x140312748 (EtwpTraceLostEvent.c)
 *     EtwpTiFillVadEventWrite @ 0x140312E2C (EtwpTiFillVadEventWrite.c)
 *     KitLogFeatureUsage @ 0x14031E800 (KitLogFeatureUsage.c)
 *     WheapGenerateETWEvents @ 0x140320F88 (WheapGenerateETWEvents.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x140321008 (WheapLogPageOfflineAttemptEvent.c)
 *     WheapLogProcessTerminateEvent @ 0x1403210E8 (WheapLogProcessTerminateEvent.c)
 *     WheapSqmDwordCommon @ 0x140321B98 (WheapSqmDwordCommon.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x14057DC00 (PopDiagTraceFirmwareS3Stats.c)
 *     EtwpPsProvTraceImage @ 0x1405F6154 (EtwpPsProvTraceImage.c)
 *     SmKmEtwLogStoreChange @ 0x1408AC714 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1408AC848 (SmKmEtwLogStoreStats.c)
 *     BapdpRecordIumStatus @ 0x1409D1958 (BapdpRecordIumStatus.c)
 *     EtwpTraceSystemInitialization @ 0x1409D1A58 (EtwpTraceSystemInitialization.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x1409DE38C (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceDirtyTransition @ 0x1409F7FC8 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x14005B930 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x1400C84E0 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
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
