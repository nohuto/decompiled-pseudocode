/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x1400A602C
 * Callers:
 *     PopGetIdleTimesCallback @ 0x1400A7990 (PopGetIdleTimesCallback.c)
 *     PpmPerfApplyProcessorState @ 0x14017535C (PpmPerfApplyProcessorState.c)
 *     PpmInstallFeedbackCounters @ 0x1401894C8 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x14005FA00 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x1400A6060 (PpmUpdateTimeAccumulation.c)
 */

char __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(a1, 0, 0, 0, 0LL);
}
