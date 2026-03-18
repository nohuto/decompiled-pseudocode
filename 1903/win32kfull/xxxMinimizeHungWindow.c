/*
 * XREFs of xxxMinimizeHungWindow @ 0x1C023C86C
 * Callers:
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     xxxShowOwnedWindows @ 0x1C0084C90 (xxxShowOwnedWindows.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0091FF0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00C3604 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0100D18 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C012E7D4 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     xxxDrawAnimatedRects @ 0x1C023C6E0 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinimizeHungWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  char v6; // cl
  __int64 RectRgnIndirect; // rbx
  struct tagRECT v8; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&v8.left = 0LL;
  *(_QWORD *)&v8.right = 0LL;
  result = *((_QWORD *)a1 + 5);
  v6 = *(_BYTE *)(result + 31);
  if ( (v6 & 0x20) == 0 && (v6 & 0x10) != 0 )
  {
    if ( (gdwPUDFlags & 0x10000) != 0 )
    {
      xxxSendMinRectMessages((HWND *)a1, (struct _LARGE_STRING *)&v8, a3, a4);
      if ( !IsRectEmptyInl(&v8) )
        xxxDrawAnimatedRects(a1, 3, (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL), &v8);
    }
    SetVisible(a1, 0);
    RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL);
    xxxShowOwnedWindows((__int64)a1, 1, RectRgnIndirect);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
    xxxRedrawWindow(0LL, 0LL, RectRgnIndirect, 133LL);
    GreDeleteObject(RectRgnIndirect);
    if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      xxxActivateOnMinimize(a1);
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
