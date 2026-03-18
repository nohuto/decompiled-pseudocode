/*
 * XREFs of EtwWriteEx @ 0x140036300
 * Callers:
 *     PpmCheckComputeEnergy @ 0x140005010 (PpmCheckComputeEnergy.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140035810 (PpmCheckSnapAllDeliveredPerformance.c)
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwWriteTransfer @ 0x1400362C0 (EtwWriteTransfer.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140036710 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PsImpersonateContainerOfThread @ 0x1400471A0 (PsImpersonateContainerOfThread.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     _TlgWriteAgg @ 0x14008A7EC (_TlgWriteAgg.c)
 *     IoReuseIrp @ 0x1400A7F70 (IoReuseIrp.c)
 *     EtwTraceMemoryAcg @ 0x1400AEFB0 (EtwTraceMemoryAcg.c)
 *     PopDiagTraceFxDevicePowered @ 0x1400B08C0 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400B0FF4 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400B1454 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopPepWork @ 0x1400B18B8 (PopPepWork.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1400B2D88 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PpmPerfAction @ 0x1400BC600 (PpmPerfAction.c)
 *     PpmParkSteerInterrupts @ 0x1400BDBA0 (PpmParkSteerInterrupts.c)
 *     PpmCheckStart @ 0x1400BE700 (PpmCheckStart.c)
 *     KiIntSteerLogProc @ 0x1400BE998 (KiIntSteerLogProc.c)
 *     PopDiagTracePowerRequestChange @ 0x1400ECF20 (PopDiagTracePowerRequestChange.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1400ED9B4 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x1400EDA0C (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x1400EDCA4 (PopDiagTraceSystemLatencyUpdate.c)
 *     PopScanIdleList @ 0x1400EDD84 (PopScanIdleList.c)
 *     PopDiagTraceIdleCheck @ 0x1400EE6D0 (PopDiagTraceIdleCheck.c)
 *     PopTraceSystemIdleTimeReset @ 0x1400EE944 (PopTraceSystemIdleTimeReset.c)
 *     MiAllocatePagesForMdl @ 0x1400EF404 (MiAllocatePagesForMdl.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x1400F9050 (PoTraceSystemTimerResolutionUpdate.c)
 *     PpmPerfRecordUtility @ 0x1400FA9D0 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x1400FAC10 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfSelectProcessorState @ 0x1400FB020 (PpmPerfSelectProcessorState.c)
 *     PpmCheckRun @ 0x140108FC0 (PpmCheckRun.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140112D90 (PoTraceSystemTimerResolutionKernel.c)
 *     MiAllocateContiguousMemory @ 0x140117C2C (MiAllocateContiguousMemory.c)
 *     SeLogAccessFailure @ 0x140126C7C (SeLogAccessFailure.c)
 *     PopDiagTraceEventNoPayload @ 0x140138034 (PopDiagTraceEventNoPayload.c)
 *     _TlgWriteEx @ 0x14013C9DC (_TlgWriteEx.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x14013CCF4 (PpmEventTraceFailedPerfCheckStart.c)
 *     PnpDiagnosticTraceObject @ 0x14013DB6C (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x14013DD54 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PpmMediaBufferingWorker @ 0x1401431E0 (PpmMediaBufferingWorker.c)
 *     McGenEventWrite @ 0x140144A30 (McGenEventWrite.c)
 *     PnpDiagnosticTrace @ 0x140153D94 (PnpDiagnosticTrace.c)
 *     KsepLogEtwMessage @ 0x14015414C (KsepLogEtwMessage.c)
 *     EtwpTraceFileName @ 0x140157720 (EtwpTraceFileName.c)
 *     PoLatencySensitivityHint @ 0x14015BB80 (PoLatencySensitivityHint.c)
 *     PopThermalTraceRundownEvents @ 0x14015C684 (PopThermalTraceRundownEvents.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x14015CD88 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopDiagTraceRtcWakeInfo @ 0x14015E2E8 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14016A2B0 (PopDiagTraceSessionDisplayStateChange.c)
 *     IopLogEventIoMgrMountBegin @ 0x14016F358 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x14016F454 (IopLogEventIoMgrMountSucceeded.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14016FFA0 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x14017003C (PpmEventBiosCapChange.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1401700B4 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     IopLogEventIoMgrMountFailed @ 0x140170838 (IopLogEventIoMgrMountFailed.c)
 *     PopDiagTraceIrpFinish @ 0x140172338 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpStart @ 0x140173718 (PopDiagTraceIrpStart.c)
 *     PopDiagTraceDeviceReleaseIrp @ 0x140174C58 (PopDiagTraceDeviceReleaseIrp.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140174D54 (PopDiagTraceDeviceAcquireIrp.c)
 *     IoTransferActivityId @ 0x1401754C0 (IoTransferActivityId.c)
 *     PpmEventArbitratorPerfStateChange @ 0x140175EE8 (PpmEventArbitratorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x140176090 (PpmEventTraceExpectedUtility.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140176408 (PopBatteryTraceSystemBatteryStatus.c)
 *     PpmEventDomainPerfStateChange @ 0x140177408 (PpmEventDomainPerfStateChange.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14017AE3C (PopDiagTraceFxDevicePowerState.c)
 *     KiIntSteerLogState @ 0x14017C9D0 (KiIntSteerLogState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x140180DE0 (PopDiagTraceFxComponentIdleState.c)
 *     PopDiagTraceSetSystemState @ 0x1401813D0 (PopDiagTraceSetSystemState.c)
 *     BapdWriteEtwEvents @ 0x1401820AC (BapdWriteEtwEvents.c)
 *     KsepEvntLogFlagsApplied @ 0x140182790 (KsepEvntLogFlagsApplied.c)
 *     PnpDiagnosticTraceElamDecision @ 0x14018DA90 (PnpDiagnosticTraceElamDecision.c)
 *     PnpDiagnosticTraceElamStatus @ 0x14018DB5C (PnpDiagnosticTraceElamStatus.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x140195FE0 (PopDiagTraceThermalZoneEnumeration.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x140197F0C (EtwTraceJobServerSiloMonitorCallback.c)
 *     WheaLogInternalEvent @ 0x140199660 (WheaLogInternalEvent.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x1402819B8 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x14028CD0C (HvlpWriteEventLog.c)
 *     IopInitActivityIdIrp @ 0x1402939B8 (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x14029AF30 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x14029AF74 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x14029B048 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14029B134 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14029B25C (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14029B304 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x14029B364 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x14029B3BC (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x14029B414 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x14029B470 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x14029B504 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x14029B55C (IopLiveDumpTraceSystemQuiesceStart.c)
 *     SecureDump_LogErrorEvent @ 0x14029BCB0 (SecureDump_LogErrorEvent.c)
 *     KiIntSteerLogStatus @ 0x1402B1CA8 (KiIntSteerLogStatus.c)
 *     KsepEvntLogShimsApplied @ 0x1402B7098 (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x1402B7B70 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x1402B7C98 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x1402B7D90 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x1402B7E74 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x1402B7F8C (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x1402B808C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x1402B8160 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x1402B821C (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x1402B832C (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x1402B8424 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x1402B8508 (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x1402B85EC (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x1402B86E8 (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x1402B87C0 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1402B88C8 (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x1402B8ABC (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x1402B8BBC (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x1402FB700 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x1402FB7F8 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x1402FB89C (PoTraceForceIdleReset.c)
 *     PoTraceForceIdleStateChange @ 0x1402FB9B4 (PoTraceForceIdleStateChange.c)
 *     PopDiagTraceAbnormalReset @ 0x1402FC6DC (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x1402FC77C (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x1402FC890 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1402FC988 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1402FCB84 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x1402FCCE0 (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x1402FD0CC (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x1402FD1A8 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1402FD264 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x1402FD5A4 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x1402FD660 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentLatency @ 0x1402FD754 (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x1402FD840 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1402FD92C (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x1402FDA28 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1402FDD40 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1402FDE44 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x1402FDF2C (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x1402FE10C (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x1402FE250 (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x1402FE360 (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1402FE458 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x1402FE540 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x1402FE5F0 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x1402FE920 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1402FEAC4 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x1402FEB64 (PopDiagTraceIrpPended.c)
 *     PopDiagTraceRegisterSystemState @ 0x1402FEC04 (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x1402FECC8 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x1402FEDB4 (PopDiagTraceSleepStudyBlocker.c)
 *     PopDiagTraceThermalStateChange @ 0x1402FEE5C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1402FEF7C (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402FF0AC (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x140300970 (PpmHeteroDispatchHgsInterrupt.c)
 *     PpmEventAutonomousModeChange @ 0x140301E70 (PpmEventAutonomousModeChange.c)
 *     PpmEventCoreParkingStateChange @ 0x140301FE8 (PpmEventCoreParkingStateChange.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x140302178 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x140302280 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventIdleDurationExpiration @ 0x140302388 (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x1403024F8 (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x1403025B8 (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x1403026A4 (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventParkNodeParkHintChanged @ 0x1403027C0 (PpmEventParkNodeParkHintChanged.c)
 *     PpmEventParkNodePreference @ 0x1403028A0 (PpmEventParkNodePreference.c)
 *     PpmEventPlatformVetoRequest @ 0x1403029C0 (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x140302A98 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x140302C88 (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x140302D98 (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x140302FD8 (PpmEventThermalCapChange.c)
 *     PpmEventTraceCoreParkingSelection @ 0x140303140 (PpmEventTraceCoreParkingSelection.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1403032C0 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x1403033B8 (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x140303564 (PpmEventTraceLPIState.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14030362C (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTracePreVetoAccounting @ 0x140303690 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1403038A0 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventVpQosChange @ 0x140303B30 (PpmEventVpQosChange.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x140304658 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x140304760 (PopDirectedDripsDiagTraceMarkDevice.c)
 *     PopSqmAddToStream @ 0x140305C8C (PopSqmAddToStream.c)
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x1403248EC (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x1403249B8 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x140324AF4 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x140324BC0 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x1403251C0 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x140327114 (SmKmSqmAddToStream.c)
 *     EtwpFileProvTrace @ 0x14032EB30 (EtwpFileProvTrace.c)
 *     EtwpLogMemInfo @ 0x14032EE90 (EtwpLogMemInfo.c)
 *     EtwpLogMemNodeInfo @ 0x14032F068 (EtwpLogMemNodeInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x14032F1F0 (EtwpNetProvTraceNetwork.c)
 *     EtwpPsProvTracePriority @ 0x14032F5CC (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x140330700 (SeEtwWriteKMCveEvent.c)
 *     EtwpTraceLostEvent @ 0x140330998 (EtwpTraceLostEvent.c)
 *     EtwpTiFillVadEventWrite @ 0x14033104C (EtwpTiFillVadEventWrite.c)
 *     KitLogFeatureUsage @ 0x14033E7F0 (KitLogFeatureUsage.c)
 *     WheapGenerateETWEvents @ 0x1403417E0 (WheapGenerateETWEvents.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x140341A2C (WheapLogPageOfflineAttemptEvent.c)
 *     WheapLogProcessTerminateEvent @ 0x140341B0C (WheapLogProcessTerminateEvent.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1405ADAE8 (PopDiagTraceFirmwareS3Stats.c)
 *     EtwpPsProvTraceImage @ 0x1405E9E00 (EtwpPsProvTraceImage.c)
 *     SmKmEtwLogStoreChange @ 0x1408E9654 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1408E9770 (SmKmEtwLogStoreStats.c)
 *     BapdpRecordIumStatus @ 0x140A0A228 (BapdpRecordIumStatus.c)
 *     EtwpTraceSystemInitialization @ 0x140A15EB0 (EtwpTraceSystemInitialization.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140A21A58 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceDirtyTransition @ 0x140A3DA44 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1400366C0 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x1400C01A0 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
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
