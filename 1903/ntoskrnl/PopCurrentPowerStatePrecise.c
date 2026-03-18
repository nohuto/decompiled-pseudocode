/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x140747960
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402FB070 (PdcPoCurrentPdcPhase.c)
 *     PopValidateRTCWake @ 0x14059641C (PopValidateRTCWake.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1405AD8B0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     PopCurrentPowerState @ 0x14067E620 (PopCurrentPowerState.c)
 *     PopBatteryUpdateCurrentState @ 0x140747994 (PopBatteryUpdateCurrentState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(_OWORD *a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
