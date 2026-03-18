/*
 * XREFs of ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00B48F4
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B44E8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029CE54 (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C029DDC8 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z @ 0x1C0001C40 (-_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C0004C74 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z @ 0x1C00B4984 (-DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_QueryDriverRecommendMonitorModes(D3DDDI_VIDEO_PRESENT_TARGET_ID *this)
{
  __int64 v2; // rcx
  struct HDXGMONITOR__ *MonitorHandle; // rdi
  __int64 v4; // rcx
  struct ADAPTER_DISPLAY *DisplayCoreFromMonitor; // rsi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  _DXGKARG_RECOMMENDMONITORMODES v14; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)this + 4) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  MonitorHandle = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)this);
  if ( !MonitorHandle )
  {
    v11 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v11);
  }
  DisplayCoreFromMonitor = MONITOR_MGR::_GetDisplayCoreFromMonitor(MonitorHandle);
  if ( !DisplayCoreFromMonitor )
  {
    v12 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v12);
  }
  v14.VideoPresentTargetId = this[11];
  v14.hMonitorSourceModeSet = (D3DKMDT_HMONITORSOURCEMODESET)MonitorHandle;
  v14.pMonitorSourceModeSetInterface = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
  v6 = ADAPTER_DISPLAY::DdiRecommendMonitorModes(DisplayCoreFromMonitor, &v14);
  v8 = v6;
  if ( v6 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v13[3] = this;
    v13[4] = this[11];
    v13[5] = *((_QWORD *)DisplayCoreFromMonitor + 2);
    v13[6] = v8;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v8;
}
