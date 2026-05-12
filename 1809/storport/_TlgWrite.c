/*
 * XREFs of _TlgWrite @ 0x1C0011BC8
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
 *     RaidUnitResetTarget @ 0x1C004A83C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C004AAEC (RaidUnitResetUnit.c)
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

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  unsigned int v6; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = (unsigned __int64)EventInformation;
  v6 = *(unsigned __int16 *)EventInformation;
  pData[1].Ptr = (unsigned __int64)pEventMetadata + 11;
  pData->Size = v6;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, cData, pData);
}
