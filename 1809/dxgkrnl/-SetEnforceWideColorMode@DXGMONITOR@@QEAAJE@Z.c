/*
 * XREFs of ?SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z @ 0x1C0297110
 * Callers:
 *     MonitorSetEnforceWideColorMode @ 0x1C02919D8 (MonitorSetEnforceWideColorMode.c)
 * Callees:
 *     ?_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z @ 0x1C0296A6C (-_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0297AA0 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 */

__int64 __fastcall DXGMONITOR::SetEnforceWideColorMode(DXGMONITOR *this, unsigned __int8 a2)
{
  int v5; // esi

  if ( *((_BYTE *)this + 697) == a2 )
    return 255LL;
  v5 = DXGMONITOR::_SaveWCGEnforcedToMonitorStore(this, a2);
  if ( v5 >= 0 )
    *((_BYTE *)this + 697) = a2;
  DXGMONITOR::_MonitorTelemetry(this, 5LL, 0LL);
  return (unsigned int)v5;
}
