/*
 * XREFs of _TlgKeywordOn @ 0x1C0011C70
 * Callers:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C00017EC (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0001F1C (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpLogPerAdapterStatistics @ 0x1C00028A4 (StorpLogPerAdapterStatistics.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C0002CB4 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     RaidAdapterRequestComplete @ 0x1C0005DE0 (RaidAdapterRequestComplete.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C00117AC (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C0011CA4 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C00127F8 (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C001652C (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterCompleteInitialization @ 0x1C001E9EC (RaidAdapterCompleteInitialization.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C0022D88 (StorpTelemetryMiniportEventUnit.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C00236F4 (RaUnitTelemetryIdIoctl.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C0024BB0 (RaidRegisterForRuntimePowerManagement.c)
 *     RaidAdapterResetBus @ 0x1C0038ED4 (RaidAdapterResetBus.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0042A24 (RaidAdapterSetMaxOperationalPower.c)
 *     RaUnitStartResetIo @ 0x1C00486F4 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0049A50 (RaidUnitCompleteResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C004DD64 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C004E150 (StorpCSExitTelemetry.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C004E86C (StorpLogPhysicalTopologyInfo.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C004EE00 (StorpLogRegisterAdapterPerfStates.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C004EFB8 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C004F504 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C004FA4C (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C004FD70 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C00500CC (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C00503F8 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C0050824 (StorpTelemetryMarkUnitResponsive.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0050990 (StorpTelemetryMarkUnitUnresponsive.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C0050B34 (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C0050F8C (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C0051294 (StorpTelemetryNvmeHealthInfo.c)
 *     RaidInitializeAdapter @ 0x1C006C958 (RaidInitializeAdapter.c)
 *     RaUnitStartDeviceIrp @ 0x1C006D6C8 (RaUnitStartDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0074244 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword || (keyword & qword_1C0061068) != 0 && (keyword & qword_1C0061070) == qword_1C0061070 )
    return 1;
  return v2;
}
