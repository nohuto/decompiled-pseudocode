/*
 * XREFs of ?_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z @ 0x1C0001C40
 * Callers:
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00B48F4 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00C2C0C (MonitorIsMonitorAndDriverWCGCapable.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00C2EBC (MonitorIsMonitorAndLinkHDRCapable.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

struct ADAPTER_DISPLAY *__fastcall MONITOR_MGR::_GetDisplayCoreFromMonitor(struct HDXGMONITOR__ *a1)
{
  struct DXGMONITOR *v2; // rbx
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  struct DXGMONITOR *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v5);
  }
  v9 = 0LL;
  MONITOR_MGR::_GetMonitorFromHandle(a1, &v9);
  v2 = v9;
  if ( !v9 )
  {
    v6 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v6);
  }
  v3 = *((_QWORD *)v2 + 4);
  if ( !v3 )
  {
    v7 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v7);
    v3 = *((_QWORD *)v2 + 4);
  }
  if ( !*(_QWORD *)(v3 + 8) )
  {
    v8 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v8);
    v3 = *((_QWORD *)v2 + 4);
  }
  return *(struct ADAPTER_DISPLAY **)(v3 + 8);
}
