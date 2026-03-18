/*
 * XREFs of RemoteRedrawRectangle @ 0x1C020CEE8
 * Callers:
 *     CtxDisplayIOCtl @ 0x1C0212580 (CtxDisplayIOCtl.c)
 *     NtUserRemoteRedrawRectangle @ 0x1C0233420 (NtUserRemoteRedrawRectangle.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     vDrvInvalidateRect @ 0x1C02B8EFC (vDrvInvalidateRect.c)
 */

__int64 __fastcall RemoteRedrawRectangle(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  ULONG_PTR v5; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(a1, a2, 9, 18, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids);
  }
  result = gspdeskShouldBeForeground;
  if ( !gspdeskShouldBeForeground )
  {
    v5 = gspwndFullScreen;
    if ( gspwndFullScreen )
    {
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
      v10 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v10;
      v11 = v5;
      HMLockObject(v5);
      vDrvInvalidateRect(*(_QWORD *)(gpDispInfo + 40LL), a1);
      xxxRedrawWindow((struct tagWND *)gspwndFullScreen, a1, 0LL, 645);
      return ThreadUnlock1(v8, v7, v9);
    }
  }
  return result;
}
