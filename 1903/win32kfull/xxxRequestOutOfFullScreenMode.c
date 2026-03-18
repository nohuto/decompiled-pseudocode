/*
 * XREFs of xxxRequestOutOfFullScreenMode @ 0x1C020D3C4
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C0133450 (xxxRemoteDisconnect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxSleepThread2 @ 0x1C00A4280 (xxxSleepThread2.c)
 */

__int64 __fastcall xxxRequestOutOfFullScreenMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  unsigned int v5; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-18h]

  v4 = gspwndFullScreen;
  v5 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( gspwndFullScreen )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
    v11 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
    v12 = v4;
    HMLockObject(v4);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((__int64 *)gspwndFullScreen, 0x406u, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
    ThreadUnlock1(v8, v7, v9);
    while ( WPP_MAIN_CB.Queue.ListEntry.Blink )
      xxxSleepThread2(0, 1, 0, 0, 0LL);
    if ( gspwndFullScreen && gbFullScreen == 1 )
      return (unsigned int)-1073741823;
  }
  return v5;
}
