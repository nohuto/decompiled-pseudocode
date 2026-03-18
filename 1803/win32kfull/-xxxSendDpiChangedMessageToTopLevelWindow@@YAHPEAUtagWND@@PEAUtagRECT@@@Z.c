/*
 * XREFs of ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C00F9920
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00F97E4 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToTopLevelWindow(struct tagWND *a1, struct tagRECT *a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  v8[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v8;
  v8[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
  xxxSendMessage((ULONG_PTR)a1);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  ThreadUnlock1(v5, v4, v6);
  return 1LL;
}
