/*
 * XREFs of PtInsideWindowFrameBounds @ 0x1C01BF640
 * Callers:
 *     NtUserRequestMoveSizeOperation @ 0x1C01F4300 (NtUserRequestMoveSizeOperation.c)
 * Callees:
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     PhysicalToLogicalPointForWindow @ 0x1C01AF9E4 (PhysicalToLogicalPointForWindow.c)
 *     GetWindowFrameBounds @ 0x1C01BF5C0 (GetWindowFrameBounds.c)
 */

_BOOL8 __fastcall PtInsideWindowFrameBounds(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  unsigned __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h] BYREF

  PhysicalToLogicalPointForWindow(a1, a2, &v4);
  v5 = *GetWindowFrameBounds(&v5, v2);
  return PtInRect(&v5, v4);
}
