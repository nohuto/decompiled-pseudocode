/*
 * XREFs of _TlgKeywordOn @ 0x1C000E600
 * Callers:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C0001008 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     RaidAdapterRequestComplete @ 0x1C00057F0 (RaidAdapterRequestComplete.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C000C798 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C000DE2C (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C000E130 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C000E634 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpLogPerAdapterStatistics @ 0x1C000FC88 (StorpLogPerAdapterStatistics.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C0010840 (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0016284 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterCompleteInitialization @ 0x1C001AC2C (RaidAdapterCompleteInitialization.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C001DF74 (StorpLogPhysicalTopologyInfo.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C001E684 (RaidRegisterForRuntimePowerManagement.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C0020080 (StorpTelemetryMiniportEventUnit.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0020700 (RaUnitTelemetryIdIoctl.c)
 *     RaidAdapterResetBus @ 0x1C0035EBC (RaidAdapterResetBus.c)
 *     StorpMarkDeviceFailed @ 0x1C003EE08 (StorpMarkDeviceFailed.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0040AB8 (RaidAdapterSetMaxOperationalPower.c)
 *     RaUnitStartResetIo @ 0x1C0046E0C (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0048580 (RaidUnitCompleteResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C004CF30 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C004D328 (StorpCSExitTelemetry.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C004DA4C (StorpLogRegisterAdapterPerfStates.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1C004DC04 (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1C004DF08 (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C004E3BC (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C004E93C (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C004EEB8 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C004F1E8 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C004F578 (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C004F8A0 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C004FD0C (StorpTelemetryMarkUnitResponsive.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C004FE78 (StorpTelemetryMarkUnitUnresponsive.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C005001C (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C0050474 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C005077C (StorpTelemetryNvmeHealthInfo.c)
 *     RaUnitStartDeviceIrp @ 0x1C006CC50 (RaUnitStartDeviceIrp.c)
 *     RaidInitializeAdapter @ 0x1C006DD44 (RaidInitializeAdapter.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00745C8 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword || (keyword & qword_1C0062068) != 0 && (keyword & qword_1C0062070) == qword_1C0062070 )
    return 1;
  return v2;
}
