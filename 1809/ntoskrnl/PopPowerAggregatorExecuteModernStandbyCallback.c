/*
 * XREFs of PopPowerAggregatorExecuteModernStandbyCallback @ 0x140876E50
 * Callers:
 *     <none>
 * Callees:
 *     PopGetMonitorReasonFromPowerEventId @ 0x1402E39C4 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPdcEngagePhases @ 0x140870478 (PopPdcEngagePhases.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x140876D64 (PopPowerAggregatorDisengageDirectedDrips.c)
 */

__int64 __fastcall PopPowerAggregatorExecuteModernStandbyCallback(__int64 a1, __int64 a2)
{
  unsigned int MonitorReasonFromPowerEventId; // eax

  PopPowerAggregatorDisengageDirectedDrips(a1, a2);
  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(dword_1404119E8);
  return PopPdcEngagePhases(1, MonitorReasonFromPowerEventId);
}
