/*
 * XREFs of PopPowerAggregatorExecuteActiveCallback @ 0x140876DB0
 * Callers:
 *     <none>
 * Callees:
 *     PopGetMonitorReasonFromPowerEventId @ 0x1402E39C4 (PopGetMonitorReasonFromPowerEventId.c)
 *     PdcPoPerfOverride @ 0x14086FF00 (PdcPoPerfOverride.c)
 *     PopPdcEngagePhases @ 0x140870478 (PopPdcEngagePhases.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x140876D64 (PopPowerAggregatorDisengageDirectedDrips.c)
 */

__int64 __fastcall PopPowerAggregatorExecuteActiveCallback(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int MonitorReasonFromPowerEventId; // eax

  PdcPoPerfOverride();
  PopPowerAggregatorDisengageDirectedDrips(a1, v2);
  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(dword_1404119E8);
  return PopPdcEngagePhases(0, MonitorReasonFromPowerEventId);
}
