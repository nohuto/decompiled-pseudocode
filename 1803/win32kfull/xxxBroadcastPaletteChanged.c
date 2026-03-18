/*
 * XREFs of xxxBroadcastPaletteChanged @ 0x1C01E3C9C
 * Callers:
 *     xxxRealizePalette @ 0x1C00FD560 (xxxRealizePalette.c)
 *     xxxFlushPalette @ 0x1C01E3D30 (xxxFlushPalette.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     xxxRealizeDesktop @ 0x1C01B32AC (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxBroadcastPaletteChanged(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdi
  __int64 DesktopWindow; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *a1;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  v5 = DesktopWindow;
  if ( (_DWORD)v3 || v4 != DesktopWindow )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
    v11[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v11;
    v11[1] = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    xxxRealizeDesktop(v5);
    ThreadUnlock1(v8, v7, v9);
  }
  return xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x311u, v1, 0LL, 1);
}
