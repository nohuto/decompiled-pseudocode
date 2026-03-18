/*
 * XREFs of RemoteRedrawRectangle @ 0x1C01F6EDC
 * Callers:
 *     CtxDisplayIOCtl @ 0x1C01FB810 (CtxDisplayIOCtl.c)
 *     NtUserRemoteRedrawRectangle @ 0x1C021B930 (NtUserRemoteRedrawRectangle.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 *     vDrvInvalidateRect @ 0x1C02A2750 (vDrvInvalidateRect.c)
 */

void __fastcall RemoteRedrawRectangle(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !gspdeskShouldBeForeground )
  {
    v3 = gspwndFullScreen;
    if ( gspwndFullScreen )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
      v7[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v7;
      v7[1] = v3;
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      vDrvInvalidateRect(*(_QWORD *)(gpDispInfo + 40LL), a1);
      xxxRedrawWindow((struct tagWND *)gspwndFullScreen, a1, 0LL, 645);
      ThreadUnlock1(v6, v5);
    }
  }
}
