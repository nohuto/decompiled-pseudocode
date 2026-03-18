/*
 * XREFs of PopDiagTraceThermalStandbyState @ 0x1402E1E54
 * Callers:
 *     PopThermalZoneRemove @ 0x14086C660 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceThermalStateChange @ 0x1402E1E70 (PopDiagTraceThermalStateChange.c)
 */

__int64 __fastcall PopDiagTraceThermalStandbyState(__int64 a1, __int64 a2)
{
  return PopDiagTraceThermalStateChange(a1, a2, &POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
}
