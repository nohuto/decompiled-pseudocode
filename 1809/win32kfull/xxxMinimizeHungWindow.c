/*
 * XREFs of xxxMinimizeHungWindow @ 0x1C02243EC
 * Callers:
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 * Callees:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C000B40C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C003AB88 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007AA94 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxShowOwnedWindows @ 0x1C00B8C70 (xxxShowOwnedWindows.c)
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     xxxSendMinRectMessages @ 0x1C01240B0 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     xxxDrawAnimatedRects @ 0x1C022426C (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinimizeHungWindow(struct tagWND *a1)
{
  __int64 result; // rax
  char v3; // cl
  __int64 RectRgnIndirect; // rbx
  struct tagRECT v5; // [rsp+40h] [rbp-28h] BYREF

  result = *((_QWORD *)a1 + 5);
  v3 = *(_BYTE *)(result + 31);
  if ( (v3 & 0x20) == 0 && (v3 & 0x10) != 0 )
  {
    if ( (gdwPUDFlags & 0x10000) != 0 )
    {
      *(_QWORD *)&v5.left = 0LL;
      *(_QWORD *)&v5.right = 0LL;
      xxxSendMinRectMessages((unsigned __int64 *)a1, (__int64)&v5);
      if ( !IsRectEmptyInl(&v5) )
        xxxDrawAnimatedRects(a1, 3, (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL), &v5);
    }
    SetVisible(a1, 0);
    RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL);
    xxxShowOwnedWindows((__int64)a1, 1u, RectRgnIndirect);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
    xxxRedrawWindow(0LL, 0LL, RectRgnIndirect, 133);
    GreDeleteObject(RectRgnIndirect);
    if ( *((_QWORD *)a1 + 10) == GetDesktopWindow((__int64)a1) )
      xxxActivateOnMinimize(a1);
    return PostEventMessageEx(
             *((struct tagTHREADINFO **)a1 + 2),
             *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL),
             0xAu,
             a1,
             0,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
