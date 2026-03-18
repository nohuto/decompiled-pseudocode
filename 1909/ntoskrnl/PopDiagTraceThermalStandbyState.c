/*
 * XREFs of PopDiagTraceThermalStandbyState @ 0x1402FE8F0
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140196720 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x1408A8810 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceThermalStateChange @ 0x1402FE90C (PopDiagTraceThermalStateChange.c)
 */

__int64 __fastcall PopDiagTraceThermalStandbyState(__int64 a1, __int64 a2)
{
  return PopDiagTraceThermalStateChange(a1, a2, &POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
}
