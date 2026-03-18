/*
 * XREFs of PopPowerAggregatorExecuteActiveCallback @ 0x1408B2240
 * Callers:
 *     <none>
 * Callees:
 *     PopGetMonitorReasonFromPowerEventId @ 0x1402FFFF4 (PopGetMonitorReasonFromPowerEventId.c)
 *     PdcPoPerfOverride @ 0x1408AB050 (PdcPoPerfOverride.c)
 *     PopPdcEngagePhases @ 0x1408AB6BC (PopPdcEngagePhases.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x1408B2114 (PopPowerAggregatorDisengageDirectedDrips.c)
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
