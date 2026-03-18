/*
 * XREFs of ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C02CDF68
 * Callers:
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C02CA220 (MonitorSetDefaultAdvancedColorParams.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C02CA594 (MonitorSetSDRWhiteLevel.c)
 * Callees:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0172D54 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 *     ?_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C02CB688 (-_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGMONITOR::SetSDRWhiteLevel(GUID *this, int a2)
{
  int v5; // esi

  if ( this[43].Data1 == a2 )
    return 255LL;
  v5 = DXGMONITOR::_SaveSDRWhiteLevelToMonitorStore((DXGMONITOR *)this, a2);
  if ( v5 >= 0 )
    this[43].Data1 = a2;
  DXGMONITOR::_MonitorTelemetry(this, 4LL, 0LL);
  return (unsigned int)v5;
}
