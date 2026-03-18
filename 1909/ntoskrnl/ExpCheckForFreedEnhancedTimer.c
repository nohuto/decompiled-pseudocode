/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x1401140E4
 * Callers:
 *     ExDeleteTimer @ 0x140113360 (ExDeleteTimer.c)
 *     ExCancelTimer @ 0x140113560 (ExCancelTimer.c)
 *     ExSetTimer @ 0x140114060 (ExSetTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
