/*
 * XREFs of ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C0004C74
 * Callers:
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00B48F4 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     MonitorGetMonitorHandle @ 0x1C00C3AE8 (MonitorGetMonitorHandle.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00DCE30 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0297AA0 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 * Callees:
 *     <none>
 */

struct HDXGMONITOR__ *__fastcall MONITOR_MGR::_GetMonitorHandle(struct DXGMONITOR *a1)
{
  __int64 v3; // rax

  if ( !a1 )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v3);
  }
  return a1;
}
