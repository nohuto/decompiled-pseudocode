/*
 * XREFs of ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0240EEC
 * Callers:
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0240E00 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C02412AC (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C0241B40 (xxxDoScrollMenu.c)
 *     xxxEndScroll @ 0x1C0241D7C (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C0242078 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 *     xxxTrackBox @ 0x1C0242EE0 (xxxTrackBox.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
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
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3);
  v10 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v10;
  v11 = a2;
  if ( a2 )
    HMLockObject(a2);
  xxxSendMessage((ULONG_PTR)a2);
  xxxWindowEvent(0x800Eu, a2, (unsigned int)(a5 != 0) - 6, 0, 1);
  ThreadUnlock1(v8, v7, v9);
}
