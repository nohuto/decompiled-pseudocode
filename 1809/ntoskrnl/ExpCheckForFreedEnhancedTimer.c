/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x1400FD134
 * Callers:
 *     ExDeleteTimer @ 0x1400F9910 (ExDeleteTimer.c)
 *     ExCancelTimer @ 0x1400FA350 (ExCancelTimer.c)
 *     ExSetTimer @ 0x1400FD0B0 (ExSetTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
