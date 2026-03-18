/*
 * XREFs of ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00FD7BC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxBeginPaint @ 0x1C001DEFC (xxxBeginPaint.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007AA94 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxEndPaint @ 0x1C00FD91C (xxxEndPaint.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall xxxDWP_Paint(struct tagWND *a1)
{
  __int64 v2; // rcx
  _BYTE v3[80]; // [rsp+20h] [rbp-68h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v2 + 20) & 4) == 0 || IsRectEmptyInl((const struct tagRECT *)(v2 + 104)) )
  {
    if ( xxxBeginPaint(a1, (__int64)v3) )
      xxxEndPaint(a1);
  }
}
