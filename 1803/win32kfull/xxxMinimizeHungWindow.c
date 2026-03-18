/*
 * XREFs of xxxMinimizeHungWindow @ 0x1C01FBAB4
 * Callers:
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     xxxRedrawWindow @ 0x1C002AA30 (xxxRedrawWindow.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0033D9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxShowOwnedWindows @ 0x1C0066E74 (xxxShowOwnedWindows.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00FB27C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C0102848 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     xxxDrawAnimatedRects @ 0x1C01FB950 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinimizeHungWindow(struct tagWND *a1)
{
  __int64 result; // rax
  char v3; // cl
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 RectRgnIndirect; // rbx
  __int64 v7; // rdx
  struct tagRECT v8; // [rsp+40h] [rbp-28h] BYREF

  result = *((_QWORD *)a1 + 5);
  v3 = *(_BYTE *)(result + 31);
  if ( (v3 & 0x20) == 0 && (v3 & 0x10) != 0 )
  {
    if ( (gdwPUDFlags & 0x10000) != 0 )
    {
      *(_QWORD *)&v8.left = 0LL;
      *(_QWORD *)&v8.right = 0LL;
      xxxSendMinRectMessages((HWND *)a1, (__int64)&v8);
      if ( !IsRectEmptyInl(&v8) )
        xxxDrawAnimatedRects(a1, 3, (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL), &v8);
    }
    SetVisible(a1, 0);
    RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL, v4, v5);
    xxxShowOwnedWindows((__int64)a1, 1u, RectRgnIndirect);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
    xxxRedrawWindow(0LL, 0LL, RectRgnIndirect, 133);
    GreDeleteObject(RectRgnIndirect);
    if ( *((_QWORD *)a1 + 10) == GetDesktopWindow((__int64)a1) )
      xxxActivateOnMinimize(a1, v7);
    return PostEventMessageEx(
             *((struct tagTHREADINFO **)a1 + 2),
             *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL),
             0xAu,
             (__int64)a1,
             0,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
