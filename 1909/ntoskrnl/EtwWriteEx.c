/*
 * XREFs of EtwWriteEx @ 0x1400366F0
 * Callers:
 *     PpmCheckComputeEnergy @ 0x1400050A0 (PpmCheckComputeEnergy.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140035C00 (PpmCheckSnapAllDeliveredPerformance.c)
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwWriteTransfer @ 0x1400366B0 (EtwWriteTransfer.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140036B00 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PsImpersonateContainerOfThread @ 0x140047240 (PsImpersonateContainerOfThread.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     _TlgWriteAgg @ 0x14008BAEC (_TlgWriteAgg.c)
 *     IoReuseIrp @ 0x140091F90 (IoReuseIrp.c)
 *     PpmPerfAction @ 0x14009C480 (PpmPerfAction.c)
 *     PpmParkSteerInterrupts @ 0x14009DA20 (PpmParkSteerInterrupts.c)
 *     PpmCheckStart @ 0x14009E580 (PpmCheckStart.c)
 *     KiIntSteerLogProc @ 0x14009E818 (KiIntSteerLogProc.c)
 *     PopDiagTraceIdleCheck @ 0x1400D5C50 (PopDiagTraceIdleCheck.c)
 *     PopDiagTracePowerRequestChange @ 0x1400D66D4 (PopDiagTracePowerRequestChange.c)
 *     MiAllocatePagesForMdl @ 0x1400DCB14 (MiAllocatePagesForMdl.c)
 *     PopDiagTraceFxDevicePowered @ 0x1400E09B0 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400E10E4 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400E1544 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopPepWork @ 0x1400E19A0 (PopPepWork.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1400E2E78 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     EtwTraceMemoryAcg @ 0x1400E5500 (EtwTraceMemoryAcg.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1400F0874 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x1400F08CC (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x1400F0B64 (PopDiagTraceSystemLatencyUpdate.c)
 *     PpmPerfRecordUtility @ 0x1400F36B0 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x1400F38F0 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfSelectProcessorState @ 0x1400F3D00 (PpmPerfSelectProcessorState.c)
 *     MiAllocateContiguousMemory @ 0x1400F5D4C (MiAllocateContiguousMemory.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x1400FCAF0 (PoTraceSystemTimerResolutionUpdate.c)
 *     PpmCheckRun @ 0x140107FC0 (PpmCheckRun.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140112380 (PoTraceSystemTimerResolutionKernel.c)
 *     SeLogAccessFailure @ 0x14012777C (SeLogAccessFailure.c)
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 *     PopTraceSystemIdleTimeReset @ 0x14013B3E4 (PopTraceSystemIdleTimeReset.c)
 *     _TlgWriteEx @ 0x14013CFBC (_TlgWriteEx.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x14013D254 (PpmEventTraceFailedPerfCheckStart.c)
 *     PnpDiagnosticTraceObject @ 0x14013E0AC (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x14013E294 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PpmMediaBufferingWorker @ 0x140143720 (PpmMediaBufferingWorker.c)
 *     McGenEventWrite @ 0x1401450D0 (McGenEventWrite.c)
 *     PnpDiagnosticTrace @ 0x140154434 (PnpDiagnosticTrace.c)
 *     KsepLogEtwMessage @ 0x1401547EC (KsepLogEtwMessage.c)
 *     EtwpTraceFileName @ 0x140157DC0 (EtwpTraceFileName.c)
 *     PoLatencySensitivityHint @ 0x14015C220 (PoLatencySensitivityHint.c)
 *     PopThermalTraceRundownEvents @ 0x14015CD24 (PopThermalTraceRundownEvents.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x14015D428 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopDiagTraceRtcWakeInfo @ 0x14015E988 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14016A9A0 (PopDiagTraceSessionDisplayStateChange.c)
 *     IopLogEventIoMgrMountBegin @ 0x14016FA48 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x14016FB44 (IopLogEventIoMgrMountSucceeded.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140170690 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x14017072C (PpmEventBiosCapChange.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1401707A4 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     IopLogEventIoMgrMountFailed @ 0x140170F28 (IopLogEventIoMgrMountFailed.c)
 *     PopDiagTraceIrpFinish @ 0x140172A68 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpStart @ 0x140173E48 (PopDiagTraceIrpStart.c)
 *     PopDiagTraceDeviceReleaseIrp @ 0x140175388 (PopDiagTraceDeviceReleaseIrp.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140175484 (PopDiagTraceDeviceAcquireIrp.c)
 *     IoTransferActivityId @ 0x140175BF0 (IoTransferActivityId.c)
 *     PpmEventArbitratorPerfStateChange @ 0x140176618 (PpmEventArbitratorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x1401767C0 (PpmEventTraceExpectedUtility.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140176B38 (PopBatteryTraceSystemBatteryStatus.c)
 *     PpmEventDomainPerfStateChange @ 0x140177AF8 (PpmEventDomainPerfStateChange.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14017B52C (PopDiagTraceFxDevicePowerState.c)
 *     KiIntSteerLogState @ 0x14017D0C0 (KiIntSteerLogState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1401814D0 (PopDiagTraceFxComponentIdleState.c)
 *     PopDiagTraceSetSystemState @ 0x140181AC0 (PopDiagTraceSetSystemState.c)
 *     BapdWriteEtwEvents @ 0x14018279C (BapdWriteEtwEvents.c)
 *     KsepEvntLogFlagsApplied @ 0x140182D40 (KsepEvntLogFlagsApplied.c)
 *     PnpDiagnosticTraceElamDecision @ 0x14018E3A0 (PnpDiagnosticTraceElamDecision.c)
 *     PnpDiagnosticTraceElamStatus @ 0x14018E46C (PnpDiagnosticTraceElamStatus.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1401967C0 (PopDiagTraceThermalZoneEnumeration.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x14019856C (EtwTraceJobServerSiloMonitorCallback.c)
 *     WheaLogInternalEvent @ 0x140199CC0 (WheaLogInternalEvent.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x140281718 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x14028CA6C (HvlpWriteEventLog.c)
 *     IopInitActivityIdIrp @ 0x140293718 (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x14029AC90 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x14029ACD4 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x14029ADA8 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14029AE94 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14029AFBC (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14029B064 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x14029B0C4 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x14029B11C (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x14029B174 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x14029B1D0 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x14029B264 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x14029B2BC (IopLiveDumpTraceSystemQuiesceStart.c)
 *     SecureDump_LogErrorEvent @ 0x14029BA10 (SecureDump_LogErrorEvent.c)
 *     KiIntSteerLogStatus @ 0x1402B1A08 (KiIntSteerLogStatus.c)
 *     KsepEvntLogShimsApplied @ 0x1402B6DF8 (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x1402B78D0 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x1402B79F8 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x1402B7AF0 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x1402B7BD4 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x1402B7CEC (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x1402B7DEC (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x1402B7EC0 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x1402B7F7C (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x1402B808C (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x1402B8184 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x1402B8268 (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x1402B834C (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x1402B8448 (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x1402B8520 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1402B8628 (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x1402B881C (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x1402B891C (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x1402FB1B0 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x1402FB2A8 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x1402FB34C (PoTraceForceIdleReset.c)
 *     PoTraceForceIdleStateChange @ 0x1402FB464 (PoTraceForceIdleStateChange.c)
 *     PopDiagTraceAbnormalReset @ 0x1402FC18C (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x1402FC22C (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x1402FC340 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1402FC438 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1402FC634 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x1402FC790 (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x1402FCB7C (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x1402FCC58 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1402FCD14 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x1402FD054 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x1402FD110 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentLatency @ 0x1402FD204 (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x1402FD2F0 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1402FD3DC (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x1402FD4D8 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1402FD7F0 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1402FD8F4 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x1402FD9DC (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x1402FDBBC (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x1402FDD00 (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x1402FDE10 (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1402FDF08 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x1402FDFF0 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x1402FE0A0 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x1402FE3D0 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1402FE574 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x1402FE614 (PopDiagTraceIrpPended.c)
 *     PopDiagTraceRegisterSystemState @ 0x1402FE6B4 (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x1402FE778 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x1402FE864 (PopDiagTraceSleepStudyBlocker.c)
 *     PopDiagTraceThermalStateChange @ 0x1402FE90C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1402FEA2C (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402FEB5C (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x140300420 (PpmHeteroDispatchHgsInterrupt.c)
 *     PpmEventAutonomousModeChange @ 0x140301920 (PpmEventAutonomousModeChange.c)
 *     PpmEventCoreParkingStateChange @ 0x140301A98 (PpmEventCoreParkingStateChange.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x140301C28 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x140301D30 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventIdleDurationExpiration @ 0x140301E38 (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x140301FA8 (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x140302068 (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x140302154 (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventParkNodeParkHintChanged @ 0x140302270 (PpmEventParkNodeParkHintChanged.c)
 *     PpmEventParkNodePreference @ 0x140302350 (PpmEventParkNodePreference.c)
 *     PpmEventPlatformVetoRequest @ 0x140302470 (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x140302548 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x140302738 (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x140302848 (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x140302A88 (PpmEventThermalCapChange.c)
 *     PpmEventTraceCoreParkingSelection @ 0x140302BF0 (PpmEventTraceCoreParkingSelection.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x140302D70 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x140302E68 (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x140303014 (PpmEventTraceLPIState.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x1403030DC (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTracePreVetoAccounting @ 0x140303140 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x140303350 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventVpQosChange @ 0x1403035E0 (PpmEventVpQosChange.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x140304108 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x140304210 (PopDirectedDripsDiagTraceMarkDevice.c)
 *     PopSqmAddToStream @ 0x14030573C (PopSqmAddToStream.c)
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x14032433C (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x140324408 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x140324544 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x140324610 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x140324C10 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x140326B64 (SmKmSqmAddToStream.c)
 *     EtwpFileProvTrace @ 0x14032E590 (EtwpFileProvTrace.c)
 *     EtwpLogMemInfo @ 0x14032E8F0 (EtwpLogMemInfo.c)
 *     EtwpLogMemNodeInfo @ 0x14032EAC8 (EtwpLogMemNodeInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x14032EC50 (EtwpNetProvTraceNetwork.c)
 *     EtwpPsProvTracePriority @ 0x14032F02C (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x140330160 (SeEtwWriteKMCveEvent.c)
 *     EtwpTraceLostEvent @ 0x1403303F8 (EtwpTraceLostEvent.c)
 *     EtwpTiFillVadEventWrite @ 0x140330AAC (EtwpTiFillVadEventWrite.c)
 *     KitLogFeatureUsage @ 0x14033E250 (KitLogFeatureUsage.c)
 *     WheapGenerateETWEvents @ 0x140341240 (WheapGenerateETWEvents.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x14034148C (WheapLogPageOfflineAttemptEvent.c)
 *     WheapLogProcessTerminateEvent @ 0x14034156C (WheapLogProcessTerminateEvent.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1405ADAC8 (PopDiagTraceFirmwareS3Stats.c)
 *     EtwpPsProvTraceImage @ 0x1405EA5D0 (EtwpPsProvTraceImage.c)
 *     SmKmEtwLogStoreChange @ 0x1408E8F5C (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1408E9078 (SmKmEtwLogStoreStats.c)
 *     BapdpRecordIumStatus @ 0x140A0A754 (BapdpRecordIumStatus.c)
 *     EtwpTraceSystemInitialization @ 0x140A16090 (EtwpTraceSystemInitialization.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140A21B38 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceDirtyTransition @ 0x140A3D814 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140036AB0 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x1400A0020 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
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
  int v11; // r12d
  NTSTATUS v12; // r9d
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int8 v16; // r10
  int v17; // r11d
  unsigned __int8 v18; // r10
  __int64 v19; // r11
  __int64 v20; // r10
  char v21; // r11
  int v22; // r10d
  unsigned __int8 v23; // r11
  PEVENT_DATA_DESCRIPTOR v24; // r12
  unsigned __int8 v25; // r10
  __int64 v26; // r11
  __int64 v27; // [rsp+98h] [rbp-70h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  __int64 v31; // [rsp+B8h] [rbp-50h]

  v27 = 0LL;
  v28 = 0LL;
  v9 = 0LL;
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
  v15 = v14 + 28;
  if ( !v14 )
    v15 = 0LL;
  if ( *(_BYTE *)(v9 + 100)
    && (unsigned __int8)EtwpLevelKeywordEnabled(
                          *(_QWORD *)(v9 + 32) + 96LL,
                          EventDescriptor->Level,
                          EventDescriptor->Keyword) )
  {
    v12 = EtwpEventWriteFull(
            v17,
            v16,
            v11,
            Flags,
            (__int64)EventDescriptor,
            0,
            0,
            (__int64)ActivityId,
            (__int64)RelatedActivityId,
            UserDataCount,
            (__int64)UserData,
            0LL,
            (__int64)&v28,
            0LL,
            *(_WORD *)(v9 + 98),
            v15,
            (__int64)&v27);
  }
  if ( *(_BYTE *)(v9 + 101)
    && (unsigned __int8)EtwpLevelKeywordEnabled(
                          *(_QWORD *)(v9 + 40) + 96LL,
                          EventDescriptor->Level,
                          EventDescriptor->Keyword) )
  {
    v12 = EtwpEventWriteFull(
            *(_QWORD *)(v9 + 32),
            v18,
            v11,
            Flags,
            (__int64)EventDescriptor,
            0,
            0,
            (__int64)ActivityId,
            (__int64)RelatedActivityId,
            UserDataCount,
            (__int64)UserData,
            0LL,
            (__int64)&v28,
            v19,
            *(_WORD *)(v9 + 98),
            v15,
            (__int64)&v27);
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
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(v20 + 96, EventDescriptor->Level, EventDescriptor->Keyword) )
        v12 = EtwpEventWriteFull(
                v22,
                v23,
                0,
                Flags,
                (__int64)EventDescriptor,
                0,
                0,
                (__int64)ActivityId,
                (__int64)RelatedActivityId,
                UserDataCount,
                (__int64)UserData,
                0LL,
                (__int64)&v28,
                0LL,
                *(_WORD *)(v9 + 98),
                v15,
                (__int64)&v27);
    }
    else
    {
      v24 = UserData;
    }
    if ( *(_BYTE *)(v9 + 103) )
    {
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                              *(_QWORD *)(*(_QWORD *)(v9 + 40) + 400LL) + 96LL,
                              EventDescriptor->Level,
                              EventDescriptor->Keyword) )
        return EtwpEventWriteFull(
                 *(_QWORD *)(*(_QWORD *)(v9 + 32) + 400LL),
                 v25,
                 0,
                 Flags,
                 (__int64)EventDescriptor,
                 0,
                 0,
                 (__int64)ActivityId,
                 (__int64)RelatedActivityId,
                 UserDataCount,
                 (__int64)v24,
                 0LL,
                 (__int64)&v28,
                 v26,
                 *(_WORD *)(v9 + 98),
                 v15,
                 (__int64)&v27);
    }
  }
  return v12;
}
