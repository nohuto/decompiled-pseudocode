/*
 * XREFs of ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C024150C
 * Callers:
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0241420 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C02418CC (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C0242160 (xxxDoScrollMenu.c)
 *     xxxEndScroll @ 0x1C024239C (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C0242698 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C0242BA0 (xxxSBWndProc.c)
 *     xxxTrackBox @ 0x1C0243620 (xxxTrackBox.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 */

void __fastcall xxxDoScroll(struct tagWND *a1, struct tagWND *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  struct tagWND *v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  v10 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v10;
  v11 = a2;
  if ( a2 )
    HMLockObject(a2);
  xxxSendMessage((ULONG_PTR)a2);
  xxxWindowEvent(0x800Eu, a2, (unsigned int)(a5 != 0) - 6, 0LL, 1);
  ThreadUnlock1(v8, v7, v9);
}
