/*
 * XREFs of _TlgWrite @ 0x1C0001F48
 * Callers:
 *     ?WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0001608 (-WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00016FC (-WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_USER_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00017DC (-WriteDxgDiagnosticsEvent_USER_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DRV_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00018BC (-WriteDxgDiagnosticsEvent_DRV_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_MGR@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000199C (-WriteDxgDiagnosticsEvent_MONITOR_MGR@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_BML_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0001A90 (-WriteDxgDiagnosticsEvent_BML_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_HPD@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0001D74 (-WriteDxgDiagnosticsEvent_HPD@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CCD_DATABASE_ACCESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0001E68 (-WriteDxgDiagnosticsEvent_CCD_DATABASE_ACCESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_FUNCTIONALIZE_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0005020 (-WriteDxgDiagnosticsEvent_FUNCTIONALIZE_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0005100 (-WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0005714 (-WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00058C0 (-WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS_EX@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C001A608 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS_EX@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     SendBDDDiagTelemetry @ 0x1C001EA14 (SendBDDDiagTelemetry.c)
 *     ?WriteDxgDiagnosticsEvent_ADAPTER_START2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0020500 (-WriteDxgDiagnosticsEvent_ADAPTER_START2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z @ 0x1C0030668 (-NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z.c)
 *     ?VSyncTelemetryBucket@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0030934 (-VSyncTelemetryBucket@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C003ACF4 (-WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C003ADCC (-WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C003AF90 (-WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C003B068 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C003B140 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C003B218 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C003B2F0 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C003B3C8 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C003B4A0 (-WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?DxgkHandleDiagnosticNotifications@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z @ 0x1C00417D0 (-DxgkHandleDiagnosticNotifications@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z.c)
 *     ?DxgkHandleDiagnosticProgressions@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z @ 0x1C0041CF0 (-DxgkHandleDiagnosticProgressions@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C004B91C (TraceLoggingWriteMiracastSessionStart.c)
 *     TraceLoggingWriteMiracastSessionStop @ 0x1C004BC68 (TraceLoggingWriteMiracastSessionStop.c)
 *     TraceLoggingWriteMiracastStartSessionEntry @ 0x1C004C15C (TraceLoggingWriteMiracastStartSessionEntry.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B71F8 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z @ 0x1C00BA33C (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C0133E70 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014CCC4 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C0150A40 (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0158E80 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     LookUpTableFlushComplete @ 0x1C015E7B4 (LookUpTableFlushComplete.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01BFA94 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z @ 0x1C020E464 (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z.c)
 *     ?EmitSleepStudyBlockerTelemetry@DripsBlockerInfoList@@AEAAXEPEAU_DripsBlockerInfoTelemetryEntry@1@@Z @ 0x1C020EF54 (-EmitSleepStudyBlockerTelemetry@DripsBlockerInfoList@@AEAAXEPEAU_DripsBlockerInfoTelemetryEntry@.c)
 *     ?LogDisplayState@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C025F9C8 (-LogDisplayState@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0297AA0 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
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
  ULONG v7; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = *((_QWORD *)hProvider + 1);
  v7 = **((unsigned __int16 **)hProvider + 1);
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v7;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteTransfer(*((_QWORD *)hProvider + 4), &EventDescriptor, pActivityId, 0LL, cData, pData);
}
