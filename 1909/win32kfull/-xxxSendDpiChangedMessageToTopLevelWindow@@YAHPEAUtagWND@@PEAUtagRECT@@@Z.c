/*
 * XREFs of ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C00EFD8C
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00EFC34 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToTopLevelWindow(struct tagWND *a1, struct tagRECT *a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF
  struct tagWND *v10; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3);
  v9 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v9;
  v10 = a1;
  HMLockObject(a1);
  xxxSendMessage((ULONG_PTR)a1);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  ThreadUnlock1(v6, v5, v7);
  return 1LL;
}
