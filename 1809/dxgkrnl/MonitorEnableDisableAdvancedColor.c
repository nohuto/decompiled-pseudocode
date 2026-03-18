/*
 * XREFs of MonitorEnableDisableAdvancedColor @ 0x1C0290438
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z @ 0x1C0296620 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0297AA0 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 */

__int64 __fastcall MonitorEnableDisableAdvancedColor(struct HDXGMONITOR__ *a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  struct DXGMONITOR *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  bool v9; // zf
  unsigned int v10; // edi
  struct DXGMONITOR *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v11 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v11);
  if ( (int)result >= 0 )
  {
    v5 = v11;
    if ( !v11 )
    {
      v6 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v6);
      v8 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v8);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v5 + 296), 1u);
    if ( ((*((_DWORD *)v5 + 10) & 0x800) != 0 || (v9 = a2 == 0, !a2))
      && ((*((_DWORD *)v5 + 10) & 0x800) == 0 || (v9 = a2 == 0, a2)) )
    {
      v10 = 255;
    }
    else
    {
      v10 = DXGMONITOR::_SaveAdvancedColorEnabledToMonitorStore(v5, !v9);
      DXGMONITOR::_MonitorTelemetry(v5, 3LL, 0LL);
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v5 + 296));
    KeLeaveCriticalRegion();
    return v10;
  }
  return result;
}
