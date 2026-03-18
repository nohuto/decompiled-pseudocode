/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x1400046D8
 * Callers:
 *     PopGetIdleTimesCallback @ 0x140004B50 (PopGetIdleTimesCallback.c)
 *     PpmPerfApplyProcessorState @ 0x1401762A0 (PpmPerfApplyProcessorState.c)
 *     PpmInstallFeedbackCounters @ 0x140193F88 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdateTimeAccumulation @ 0x14000470C (PpmUpdateTimeAccumulation.c)
 *     PpmUpdatePerformanceFeedback @ 0x140034110 (PpmUpdatePerformanceFeedback.c)
 */

__int64 __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx

  LOBYTE(a3) = 1;
  v3 = a1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(v3, 0, 0, 0, 0LL);
}
