/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x1400A5F8C
 * Callers:
 *     PopGetIdleTimesCallback @ 0x1400A78F0 (PopGetIdleTimesCallback.c)
 *     PpmPerfApplyProcessorState @ 0x14017547C (PpmPerfApplyProcessorState.c)
 *     PpmInstallFeedbackCounters @ 0x140189628 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x14005FA00 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x1400A5FC0 (PpmUpdateTimeAccumulation.c)
 */

char __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(a1, 0, 0, 0, 0LL);
}
