/*
 * XREFs of xxxMinimizeHungWindow @ 0x1C023C24C
 * Callers:
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxShowOwnedWindows @ 0x1C0014CEC (xxxShowOwnedWindows.c)
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0064CD4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     xxxSendMinRectMessages @ 0x1C0109A64 (xxxSendMinRectMessages.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0139FEC (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     xxxDrawAnimatedRects @ 0x1C023C0C0 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinimizeHungWindow(struct tagWND *a1)
{
  __int64 result; // rax
  char v3; // cl
  __int64 RectRgnIndirect; // rbx
  int v5; // edx
  struct tagRECT v6; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&v6.left = 0LL;
  *(_QWORD *)&v6.right = 0LL;
  result = *((_QWORD *)a1 + 5);
  v3 = *(_BYTE *)(result + 31);
  if ( (v3 & 0x20) == 0 && (v3 & 0x10) != 0 )
  {
    if ( (gdwPUDFlags & 0x10000) != 0 )
    {
      xxxSendMinRectMessages((unsigned __int64 *)a1, (struct _LARGE_STRING *)&v6);
      if ( !IsRectEmptyInl(&v6) )
        xxxDrawAnimatedRects(a1, 3, (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL), &v6);
    }
    SetVisible(a1, 0);
    RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL);
    xxxShowOwnedWindows((__int64)a1, 1, RectRgnIndirect);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
    xxxRedrawWindow(0LL, 0LL, RectRgnIndirect, 133);
    GreDeleteObject(RectRgnIndirect);
    if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      xxxActivateOnMinimize(a1, v5);
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
