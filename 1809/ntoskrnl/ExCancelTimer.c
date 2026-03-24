/*
 * XREFs of ExCancelTimer @ 0x1400FA2D0
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1406CB854 (EtwpStopLoggerInstance.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C034C (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1400FAF70 (KeCancelTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x1400FD0B4 (ExpCheckForFreedEnhancedTimer.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}
