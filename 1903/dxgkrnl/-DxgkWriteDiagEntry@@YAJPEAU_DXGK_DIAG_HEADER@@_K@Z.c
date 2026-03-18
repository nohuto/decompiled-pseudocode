/*
 * XREFs of ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C
 * Callers:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C000D5C8 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C004D1A0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C004DC70 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C004E698 (DxgkMiracastStartMiracastSession.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00D1E80 (DxgkInvalidateMonitorConnections.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C00D2230 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00D3B20 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C00D43B0 (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00D4870 (DxgkWriteDiagEntry.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DD334 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0128508 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C0129F4C (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C012D3A4 (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01570D0 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoIsChildConnected @ 0x1C0157358 (DpiPdoIsChildConnected.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0157898 (DpiPdoHandleChildConnectionChange.c)
 *     ?ProcessHPDFiltering@VIDPN_MGR@@QEAA?AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C0158244 (-ProcessHPDFiltering@VIDPN_MGR@@QEAA-AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEA.c)
 *     DpiPnpEnableVga @ 0x1C015A67C (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x1C015A7C8 (DpiPnpNotifyGdi.c)
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C01617D0 (DpiAddDevice.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F38D0 (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C01FDCF8 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     _lambda_10496a3648ceea7cb187be63008938e6_::operator() @ 0x1C02000B8 (_lambda_10496a3648ceea7cb187be63008938e6_--operator().c)
 *     _lambda_d81a481debf6296c527a71b94d2ae09c_::operator() @ 0x1C0233FC8 (_lambda_d81a481debf6296c527a71b94d2ae09c_--operator().c)
 *     ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C023C930 (-GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C02403A0 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C024FCD4 (-SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C026DFFC (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02964BC (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C029FF70 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C02A1480 (DpiFdoHandleTargetConnectionState.c)
 *     DpiFdoStopAdapter @ 0x1C02A2680 (DpiFdoStopAdapter.c)
 *     DpiMiracastConnectedStandbyDelayWork @ 0x1C02A43F0 (DpiMiracastConnectedStandbyDelayWork.c)
 *     DpiMiracastHandlePowerCallback @ 0x1C02A4AE0 (DpiMiracastHandlePowerCallback.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C02A4CA8 (DpiMiracastHandleStartSessionDone.c)
 *     DxgkHandleMiracastEscape @ 0x1C02A5A48 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C02A676C (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x1C02A6C0C (-DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C02A78E0 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02AC494 (DpiAcpiHandleAcpiEvent.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C02B45A0 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C02B4748 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0002E18 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWriteDiagEntry(struct _DXGK_DIAG_HEADER *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rsi
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  DXGFASTMUTEX **v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+30h] [rbp+8h]

  v3 = a2;
  if ( !a1 || !*((_DWORD *)a1 + 1) )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v17 + 24) = 7467LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( a1 && *((_DWORD *)a1 + 1) >= 0x30u )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
    if ( Global )
    {
      CurrentProcess = PsGetCurrentProcess();
      *((_OWORD *)a1 + 1) = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
      if ( v3 == 0x200000000LL )
      {
        v11 = *((_QWORD *)DXGGLOBAL::GetGlobal(v11, v10) + 74);
        v3 = *(unsigned int *)(v11 + 128);
        if ( v3 == 0xFFFFFFFFLL )
          v3 = 0x100000000LL;
      }
      if ( v3 == 0x100000000LL )
      {
        *((_DWORD *)a1 + 9) |= 0x80000000;
        v12 = *((_DWORD *)a1 + 9) ^ (PsGetCurrentProcessSessionId(v11, v10) ^ *((_DWORD *)a1 + 9)) & 0x7FFFFFFF;
      }
      else
      {
        v12 = v3 & 0x7FFFFFFF;
      }
      *((_DWORD *)a1 + 9) = v12;
      *((_DWORD *)a1 + 8) = (unsigned int)PsGetCurrentThreadId();
      v20 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)a1 + 1) = v20 * KeQueryTimeIncrement();
      v15 = (DXGFASTMUTEX **)*((_QWORD *)Global + 72);
      if ( v15 )
        return DXGDIAGNOSTICS::WriteDiagnosticEntry(v15, a1);
      v18 = WdLogNewEntry5_WdError(0LL, v13, v14);
      *(_QWORD *)(v18 + 32) = Global;
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v6, v5, v8);
    }
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
    return 3221225860LL;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
}
