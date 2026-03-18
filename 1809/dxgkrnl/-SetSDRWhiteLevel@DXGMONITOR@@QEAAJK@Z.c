/*
 * XREFs of ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C0297308
 * Callers:
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C02918B0 (MonitorSetDefaultAdvancedColorParams.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C0291ABC (MonitorSetSDRWhiteLevel.c)
 * Callees:
 *     ?_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C0296700 (-_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0297AA0 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 */

__int64 __fastcall DXGMONITOR::SetSDRWhiteLevel(DXGMONITOR *this, int a2)
{
  int v5; // esi

  if ( *((_DWORD *)this + 171) == a2 )
    return 255LL;
  v5 = DXGMONITOR::_SaveSDRWhiteLevelToMonitorStore(this, a2);
  if ( v5 >= 0 )
    *((_DWORD *)this + 171) = a2;
  DXGMONITOR::_MonitorTelemetry(this, 4LL, 0LL);
  return (unsigned int)v5;
}
