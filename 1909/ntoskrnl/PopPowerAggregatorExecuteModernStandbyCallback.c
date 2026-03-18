/*
 * XREFs of PopPowerAggregatorExecuteModernStandbyCallback @ 0x1408B22C0
 * Callers:
 *     <none>
 * Callees:
 *     PopGetMonitorReasonFromPowerEventId @ 0x1402FFFF4 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPdcEngagePhases @ 0x1408AB6BC (PopPdcEngagePhases.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x1408B2114 (PopPowerAggregatorDisengageDirectedDrips.c)
 */

__int64 __fastcall PopPowerAggregatorExecuteModernStandbyCallback(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int MonitorReasonFromPowerEventId; // eax

  v2 = a2;
  PopPowerAggregatorDisengageDirectedDrips(a1, a2);
  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(v2);
  return PopPdcEngagePhases(1, MonitorReasonFromPowerEventId);
}
