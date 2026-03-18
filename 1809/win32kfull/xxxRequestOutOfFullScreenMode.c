/*
 * XREFs of xxxRequestOutOfFullScreenMode @ 0x1C01F7098
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00E9E60 (xxxRemoteDisconnect.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     xxxSleepThread2 @ 0x1C0030BEC (xxxSleepThread2.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxRequestOutOfFullScreenMode(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  unsigned int v3; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[5]; // [rsp+50h] [rbp-28h] BYREF

  v2 = gspwndFullScreen;
  v3 = 0;
  if ( gspwndFullScreen )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    v8[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v8;
    v8[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout((__int64 *)gspwndFullScreen, 0x406u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v6, v5);
    while ( ghSwitcher )
      xxxSleepThread2(0, 1u, 0, 0, 0LL);
    if ( gspwndFullScreen && gbFullScreen == 1 )
      return (unsigned int)-1073741823;
  }
  return v3;
}
