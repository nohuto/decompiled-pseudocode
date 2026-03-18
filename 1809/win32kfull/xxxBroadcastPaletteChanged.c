/*
 * XREFs of xxxBroadcastPaletteChanged @ 0x1C0209B64
 * Callers:
 *     xxxRealizePalette @ 0x1C0098390 (xxxRealizePalette.c)
 *     xxxFlushPalette @ 0x1C0209C00 (xxxFlushPalette.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     xxxRealizeDesktop @ 0x1C01D5A68 (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxBroadcastPaletteChanged(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 DesktopWindow; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *a1;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  v5 = DesktopWindow;
  if ( (_DWORD)v3 || v4 != DesktopWindow )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v10;
    v10[1] = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    xxxRealizeDesktop(v5);
    ThreadUnlock1(v8, v7);
  }
  return xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x311u, v1, 0LL, 1);
}
