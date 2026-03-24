/*
 * XREFs of PopPowerAggregatorExecuteModernStandbyCallback @ 0x140875BF0
 * Callers:
 *     <none>
 * Callees:
 *     PopGetMonitorReasonFromPowerEventId @ 0x1402E37D4 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPdcEngagePhases @ 0x14086F218 (PopPdcEngagePhases.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x140875B04 (PopPowerAggregatorDisengageDirectedDrips.c)
 */

__int64 __fastcall PopPowerAggregatorExecuteModernStandbyCallback(__int64 a1, __int64 a2)
{
  unsigned int MonitorReasonFromPowerEventId; // eax

  PopPowerAggregatorDisengageDirectedDrips(a1, a2);
  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(dword_140410928);
  return PopPdcEngagePhases(1, MonitorReasonFromPowerEventId);
}
