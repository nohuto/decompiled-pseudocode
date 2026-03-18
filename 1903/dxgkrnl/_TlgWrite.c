/*
 * XREFs of _TlgWrite @ 0x1C0019EC0
 * Callers:
 *     ?WriteDxgDiagnosticsEvent_HPD@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000289C (-WriteDxgDiagnosticsEvent_HPD@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CCD_DATABASE_ACCESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0002990 (-WriteDxgDiagnosticsEvent_CCD_DATABASE_ACCESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_FUNCTIONALIZE_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0002B60 (-WriteDxgDiagnosticsEvent_FUNCTIONALIZE_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0002C40 (-WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0003268 (-WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00033EC (-WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0019970 (-WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0019A64 (-WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_USER_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0019B3C (-WriteDxgDiagnosticsEvent_USER_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DRV_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0019C14 (-WriteDxgDiagnosticsEvent_DRV_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_MGR@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0019CEC (-WriteDxgDiagnosticsEvent_MONITOR_MGR@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_BML_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0019DE0 (-WriteDxgDiagnosticsEvent_BML_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     SendBDDDiagTelemetry @ 0x1C0022CAC (SendBDDDiagTelemetry.c)
 *     ?WriteDxgDiagnosticsEvent_ADAPTER_START2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00230A0 (-WriteDxgDiagnosticsEvent_ADAPTER_START2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?DeadlockPulseDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0032770 (-DeadlockPulseDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?DeadlockTimeOutDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0032AF0 (-DeadlockTimeOutDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z @ 0x1C0035E48 (-NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z.c)
 *     ?VSyncTelemetryBucket@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0036110 (-VSyncTelemetryBucket@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C004129C (-WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0041374 (-WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0041538 (-WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0041610 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00416E8 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00417C0 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0041898 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0041970 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS_EX@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0041A48 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS_EX@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0041B20 (-WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0041D0C (-WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?DxgkHandleDiagnosticNotifications@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z @ 0x1C00487A0 (-DxgkHandleDiagnosticNotifications@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z.c)
 *     ?DxgkHandleDiagnosticProgressions@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z @ 0x1C0048CB0 (-DxgkHandleDiagnosticProgressions@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C0052B6C (TraceLoggingWriteMiracastSessionStart.c)
 *     TraceLoggingWriteMiracastSessionStop @ 0x1C0052EB8 (TraceLoggingWriteMiracastSessionStop.c)
 *     TraceLoggingWriteMiracastStartSessionEntry @ 0x1C00533AC (TraceLoggingWriteMiracastStartSessionEntry.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z @ 0x1C012A000 (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z.c)
 *     ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1C0145A2C (-Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C014A724 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 *     ?UpdateHPDFilteringTelemetry@VIDPN_MGR@@QEAAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C01577EC (-UpdateHPDFilteringTelemetry@VIDPN_MGR@@QEAAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 *     ?ProcessHPDFiltering@VIDPN_MGR@@QEAA?AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C0158244 (-ProcessHPDFiltering@VIDPN_MGR@@QEAA-AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEA.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0158B4C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015BE84 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015E4D8 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0167A7C (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0167BDC (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0172D54 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 *     LookUpTableFlushComplete @ 0x1C017FEB4 (LookUpTableFlushComplete.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01EEFE8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C020DCF0 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z @ 0x1C02418A4 (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z.c)
 *     ?EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@AEAAXEAEB_KPEAGII@Z @ 0x1C0242180 (-EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@AEAAXEAEB_KPEAGII@Z.c)
 *     ?EmitSleepStudyBlockerTelemetry@DripsBlockerTrackingHelper@@AEAAXEAEB_KPEAU_UNICODE_STRING@@I@Z @ 0x1C0242974 (-EmitSleepStudyBlockerTelemetry@DripsBlockerTrackingHelper@@AEAAXEAEB_KPEAU_UNICODE_STRING@@I@Z.c)
 *     ?EmitSleepStudyTotalTimeModernStandbyTelemetry@DripsBlockerTrackingHelper@@AEAAXE@Z @ 0x1C0242B1C (-EmitSleepStudyTotalTimeModernStandbyTelemetry@DripsBlockerTrackingHelper@@AEAAXE@Z.c)
 *     ?LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@IW4DxgkrnlLiveDumpFailureReason@1@@Z @ 0x1C0296570 (-LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@IW4Dx.c)
 *     ?LogDisplayTelemetrySourceInfo@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEBU_DXG_BLACKBOX_DISPLAY_SOURCE_INFO@@@Z @ 0x1C02967A8 (-LogDisplayTelemetrySourceInfo@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEB.c)
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
  pData->Ptr = *((_QWORD *)hProvider + 1);
  pData->Size = **((unsigned __int16 **)hProvider + 1);
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteTransfer(*((_QWORD *)hProvider + 4), &EventDescriptor, pActivityId, 0LL, cData, pData);
}
