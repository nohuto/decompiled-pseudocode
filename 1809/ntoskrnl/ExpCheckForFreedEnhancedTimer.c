/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x1400FD094
 * Callers:
 *     ExDeleteTimer @ 0x1400F9870 (ExDeleteTimer.c)
 *     ExCancelTimer @ 0x1400FA2B0 (ExCancelTimer.c)
 *     ExSetTimer @ 0x1400FD010 (ExSetTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
