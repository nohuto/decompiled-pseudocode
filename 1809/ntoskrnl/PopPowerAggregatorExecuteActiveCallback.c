/*
 * XREFs of PopPowerAggregatorExecuteActiveCallback @ 0x140875B50
 * Callers:
 *     <none>
 * Callees:
 *     PopGetMonitorReasonFromPowerEventId @ 0x1402E37D4 (PopGetMonitorReasonFromPowerEventId.c)
 *     PdcPoPerfOverride @ 0x14086ECA0 (PdcPoPerfOverride.c)
 *     PopPdcEngagePhases @ 0x14086F218 (PopPdcEngagePhases.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x140875B04 (PopPowerAggregatorDisengageDirectedDrips.c)
 */

__int64 __fastcall PopPowerAggregatorExecuteActiveCallback(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int MonitorReasonFromPowerEventId; // eax

  PdcPoPerfOverride();
  PopPowerAggregatorDisengageDirectedDrips(a1, v2);
  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(dword_140410928);
  return PopPdcEngagePhases(0, MonitorReasonFromPowerEventId);
}
