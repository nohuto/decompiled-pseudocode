/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x14071C1B0
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402DE160 (PdcPoCurrentPdcPhase.c)
 *     PopValidateRTCWake @ 0x140566700 (PopValidateRTCWake.c)
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14057DA10 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 * Callees:
 *     PopCurrentPowerState @ 0x14058DED4 (PopCurrentPowerState.c)
 *     PopBatteryUpdateCurrentState @ 0x14071C1E4 (PopBatteryUpdateCurrentState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(_OWORD *a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
