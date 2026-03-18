/*
 * XREFs of RemoteRedrawRectangle @ 0x1C020D198
 * Callers:
 *     CtxDisplayIOCtl @ 0x1C0212AC0 (CtxDisplayIOCtl.c)
 *     NtUserRemoteRedrawRectangle @ 0x1C0233A40 (NtUserRemoteRedrawRectangle.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 *     vDrvInvalidateRect @ 0x1C02B93AC (vDrvInvalidateRect.c)
 */

__int64 __fastcall RemoteRedrawRectangle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  ULONG_PTR v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(a1, a2, 9, 18, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids);
  }
  result = gspdeskShouldBeForeground;
  if ( !gspdeskShouldBeForeground )
  {
    v6 = gspwndFullScreen;
    if ( gspwndFullScreen )
    {
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      v11 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
      v12 = v6;
      HMLockObject(v6);
      vDrvInvalidateRect(*(_QWORD *)(gpDispInfo + 40LL), a1);
      xxxRedrawWindow((struct tagWND *)gspwndFullScreen, a1, 0LL, 645LL);
      return ThreadUnlock1(v9, v8, v10);
    }
  }
  return result;
}
