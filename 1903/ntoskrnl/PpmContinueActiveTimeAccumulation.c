/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x140004648
 * Callers:
 *     PopGetIdleTimesCallback @ 0x140004AC0 (PopGetIdleTimesCallback.c)
 *     PpmPerfApplyProcessorState @ 0x140175B70 (PpmPerfApplyProcessorState.c)
 *     PpmInstallFeedbackCounters @ 0x1401937A8 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdateTimeAccumulation @ 0x14000467C (PpmUpdateTimeAccumulation.c)
 *     PpmUpdatePerformanceFeedback @ 0x140033D20 (PpmUpdatePerformanceFeedback.c)
 */

__int64 __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx

  LOBYTE(a3) = 1;
  v3 = a1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(v3, 0, 0, 0, 0LL);
}
