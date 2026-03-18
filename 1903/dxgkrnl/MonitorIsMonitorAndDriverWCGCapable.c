/*
 * XREFs of MonitorIsMonitorAndDriverWCGCapable @ 0x1C00D601C
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00D31CC (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0172D54 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006314 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z @ 0x1C001FF38 (-_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall MonitorIsMonitorAndDriverWCGCapable(struct HDXGMONITOR__ *a1, char *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGMONITOR *v7; // rbx
  char v8; // di
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct DXGMONITOR *v14; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v14 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v14);
  if ( (int)result >= 0 )
  {
    v7 = v14;
    if ( !v14 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v10);
      v13 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v13);
    }
    KeEnterCriticalRegion();
    v8 = 1;
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v7 + 296), 1u);
    if ( !*((_BYTE *)v7 + 701)
      || (*(_DWORD *)(*((_QWORD *)MONITOR_MGR::_GetDisplayCoreFromMonitor(a1, v9) + 2) + 1896LL) & 8) == 0 )
    {
      v8 = 0;
    }
    *a2 = v8;
    ExReleaseResourceLite((PERESOURCE)((char *)v7 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
