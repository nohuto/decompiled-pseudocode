/*
 * XREFs of PopDiagTraceThermalOverthrottleState @ 0x1402E1E38
 * Callers:
 *     PopUpdateOverThrottledCount @ 0x14086C800 (PopUpdateOverThrottledCount.c)
 * Callees:
 *     PopDiagTraceThermalStateChange @ 0x1402E1E70 (PopDiagTraceThermalStateChange.c)
 */

__int64 __fastcall PopDiagTraceThermalOverthrottleState(__int64 a1, __int64 a2)
{
  return PopDiagTraceThermalStateChange(a1, a2, &POP_ETW_EVENT_THERMAL_ZONE_OVERTHROTTLED_UPDATE);
}
