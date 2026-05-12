/*
 * XREFs of _TlgWrite @ 0x1C000E500
 * Callers:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C0001008 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     RaidAdapterRequestComplete @ 0x1C00057A0 (RaidAdapterRequestComplete.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C000C744 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C000DDD4 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C000E0D8 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C000E5DC (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpLogPerAdapterStatistics @ 0x1C000E660 (StorpLogPerAdapterStatistics.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C00106A0 (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0015F54 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterCompleteInitialization @ 0x1C001A4B0 (RaidAdapterCompleteInitialization.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C001F6A0 (StorpTelemetryMiniportEventUnit.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001FD4C (RaUnitTelemetryIdIoctl.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C0021524 (RaidRegisterForRuntimePowerManagement.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0022198 (StorpLogPhysicalTopologyInfo.c)
 *     RaidAdapterResetBus @ 0x1C0034ACC (RaidAdapterResetBus.c)
 *     StorpMarkDeviceFailed @ 0x1C003DA18 (StorpMarkDeviceFailed.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003F6C8 (RaidAdapterSetMaxOperationalPower.c)
 *     RaUnitStartResetIo @ 0x1C0045A1C (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00470E0 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitResetTarget @ 0x1C004806C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C0048328 (RaidUnitResetUnit.c)
 *     StorpCSEntryTelemetry @ 0x1C004BDC0 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C004C1B8 (StorpCSExitTelemetry.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C004C8DC (StorpLogRegisterAdapterPerfStates.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1C004CA94 (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1C004CD98 (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C004D24C (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C004D7CC (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C004DD48 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C004E078 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C004E408 (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C004E730 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C004EB9C (StorpTelemetryMarkUnitResponsive.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C004ED08 (StorpTelemetryMarkUnitUnresponsive.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C004EEAC (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C004F304 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C004F60C (StorpTelemetryNvmeHealthInfo.c)
 *     RaUnitStartDeviceIrp @ 0x1C006C970 (RaUnitStartDeviceIrp.c)
 *     RaidInitializeAdapter @ 0x1C006D634 (RaidInitializeAdapter.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00736F4 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *(unsigned __int8 *)pEventMetadata << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = (unsigned __int64)EventInformation;
  pData->Size = *(unsigned __int16 *)EventInformation;
  pData[1].Ptr = (unsigned __int64)pEventMetadata + 11;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, cData, pData);
}
