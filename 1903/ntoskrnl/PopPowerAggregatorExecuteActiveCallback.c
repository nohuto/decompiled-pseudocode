/*
 * XREFs of PopPowerAggregatorExecuteActiveCallback @ 0x1408B29E0
 * Callers:
 *     <none>
 * Callees:
 *     PopGetMonitorReasonFromPowerEventId @ 0x140300544 (PopGetMonitorReasonFromPowerEventId.c)
 *     PdcPoPerfOverride @ 0x1408AB7F0 (PdcPoPerfOverride.c)
 *     PopPdcEngagePhases @ 0x1408ABE5C (PopPdcEngagePhases.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x1408B28B4 (PopPowerAggregatorDisengageDirectedDrips.c)
 */

__int64 __fastcall PopPowerAggregatorExecuteActiveCallback(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int MonitorReasonFromPowerEventId; // eax

  PdcPoPerfOverride();
  PopPowerAggregatorDisengageDirectedDrips(v4, v3);
  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(a2);
  return PopPdcEngagePhases(0, MonitorReasonFromPowerEventId);
}
