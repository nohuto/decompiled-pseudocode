/*
 * XREFs of PopPowerAggregatorExecuteModernStandbyCallback @ 0x140875C10
 * Callers:
 *     <none>
 * Callees:
 *     PopGetMonitorReasonFromPowerEventId @ 0x1402E36D4 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPdcEngagePhases @ 0x14086F238 (PopPdcEngagePhases.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x140875B24 (PopPowerAggregatorDisengageDirectedDrips.c)
 */

__int64 __fastcall PopPowerAggregatorExecuteModernStandbyCallback(__int64 a1, __int64 a2)
{
  unsigned int MonitorReasonFromPowerEventId; // eax

  PopPowerAggregatorDisengageDirectedDrips(a1, a2);
  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(dword_140410988);
  return PopPdcEngagePhases(1, MonitorReasonFromPowerEventId);
}
