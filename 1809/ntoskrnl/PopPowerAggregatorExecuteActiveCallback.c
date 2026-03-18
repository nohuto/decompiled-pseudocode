/*
 * XREFs of PopPowerAggregatorExecuteActiveCallback @ 0x140875B70
 * Callers:
 *     <none>
 * Callees:
 *     PopGetMonitorReasonFromPowerEventId @ 0x1402E36D4 (PopGetMonitorReasonFromPowerEventId.c)
 *     PdcPoPerfOverride @ 0x14086ECC0 (PdcPoPerfOverride.c)
 *     PopPdcEngagePhases @ 0x14086F238 (PopPdcEngagePhases.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x140875B24 (PopPowerAggregatorDisengageDirectedDrips.c)
 */

__int64 __fastcall PopPowerAggregatorExecuteActiveCallback(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int MonitorReasonFromPowerEventId; // eax

  PdcPoPerfOverride();
  PopPowerAggregatorDisengageDirectedDrips(a1, v2);
  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(dword_140410988);
  return PopPdcEngagePhases(0, MonitorReasonFromPowerEventId);
}
