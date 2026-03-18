/*
 * XREFs of PopPowerAggregatorExecuteModernStandbyCallback @ 0x1408B2A60
 * Callers:
 *     <none>
 * Callees:
 *     PopGetMonitorReasonFromPowerEventId @ 0x140300544 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPdcEngagePhases @ 0x1408ABE5C (PopPdcEngagePhases.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x1408B28B4 (PopPowerAggregatorDisengageDirectedDrips.c)
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
