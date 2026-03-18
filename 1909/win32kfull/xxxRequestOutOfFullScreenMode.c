/*
 * XREFs of xxxRequestOutOfFullScreenMode @ 0x1C020D114
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C010DF50 (xxxRemoteDisconnect.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxSleepThread2 @ 0x1C0045060 (xxxSleepThread2.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxRequestOutOfFullScreenMode(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  unsigned int v4; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR v11; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-18h]

  v3 = gspwndFullScreen;
  v4 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( gspwndFullScreen )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
    v10 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v10;
    v11 = v3;
    HMLockObject(v3);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((__int64 *)gspwndFullScreen, 0x406u, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
    ThreadUnlock1(v7, v6, v8);
    while ( WPP_MAIN_CB.Queue.ListEntry.Blink )
      xxxSleepThread2(0, 1, 0, 0, 0LL);
    if ( gspwndFullScreen && gbFullScreen == 1 )
      return (unsigned int)-1073741823;
  }
  return v4;
}
