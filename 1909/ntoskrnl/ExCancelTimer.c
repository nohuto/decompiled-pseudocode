/*
 * XREFs of ExCancelTimer @ 0x140113560
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1406ACBBC (EtwpStopLoggerInstance.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408FCB54 (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     KeCancelTimer2 @ 0x140113700 (KeCancelTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x1401140E4 (ExpCheckForFreedEnhancedTimer.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}
