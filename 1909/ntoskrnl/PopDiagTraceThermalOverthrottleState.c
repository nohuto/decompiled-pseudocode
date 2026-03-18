/*
 * XREFs of PopDiagTraceThermalOverthrottleState @ 0x1402FE8D4
 * Callers:
 *     PopUpdateOverThrottledCount @ 0x1408A89DC (PopUpdateOverThrottledCount.c)
 * Callees:
 *     PopDiagTraceThermalStateChange @ 0x1402FE90C (PopDiagTraceThermalStateChange.c)
 */

__int64 __fastcall PopDiagTraceThermalOverthrottleState(__int64 a1, __int64 a2)
{
  return PopDiagTraceThermalStateChange(a1, a2, &POP_ETW_EVENT_THERMAL_ZONE_OVERTHROTTLED_UPDATE);
}
