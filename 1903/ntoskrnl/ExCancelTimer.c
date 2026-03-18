/*
 * XREFs of ExCancelTimer @ 0x140113CD0
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1406B759C (EtwpStopLoggerInstance.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408FD174 (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     KeCancelTimer2 @ 0x140113E70 (KeCancelTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x140114854 (ExpCheckForFreedEnhancedTimer.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}
