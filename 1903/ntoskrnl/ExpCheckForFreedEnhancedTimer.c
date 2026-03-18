/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x140114854
 * Callers:
 *     ExDeleteTimer @ 0x140113AD0 (ExDeleteTimer.c)
 *     ExCancelTimer @ 0x140113CD0 (ExCancelTimer.c)
 *     ExSetTimer @ 0x1401147D0 (ExSetTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
