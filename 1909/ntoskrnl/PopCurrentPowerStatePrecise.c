/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x140749860
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402FAB20 (PdcPoCurrentPdcPhase.c)
 *     PopValidateRTCWake @ 0x14059641C (PopValidateRTCWake.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1405AD890 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     PopCurrentPowerState @ 0x14069B760 (PopCurrentPowerState.c)
 *     PopBatteryUpdateCurrentState @ 0x140749894 (PopBatteryUpdateCurrentState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(_OWORD *a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
