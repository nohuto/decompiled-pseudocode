/*
 * XREFs of ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0228A8C
 * Callers:
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C02289A0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0228E20 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C02296AC (xxxDoScrollMenu.c)
 *     xxxEndScroll @ 0x1C02298D0 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C0229BD0 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 *     xxxTrackBox @ 0x1C022A9E0 (xxxTrackBox.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxDoScroll(struct tagWND *a1, struct tagWND *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  v9[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v9;
  v9[1] = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  xxxSendMessage((ULONG_PTR)a2);
  xxxWindowEvent(0x800Eu, (__int64)a2, (a5 != 0) - 6, 0, 1u);
  ThreadUnlock1(v8, v7);
}
