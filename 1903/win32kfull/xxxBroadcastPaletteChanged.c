/*
 * XREFs of xxxBroadcastPaletteChanged @ 0x1C02215D8
 * Callers:
 *     xxxRealizePalette @ 0x1C0121E60 (xxxRealizePalette.c)
 *     xxxFlushPalette @ 0x1C0221690 (xxxFlushPalette.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     xxxRealizeDesktop @ 0x1C01EB170 (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxBroadcastPaletteChanged(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdi
  __int64 DesktopWindow; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  v1 = *a1;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  v6 = DesktopWindow;
  if ( (_DWORD)v3 || v4 != DesktopWindow )
  {
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4, v5);
    v12 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v12;
    v13 = v6;
    HMLockObject(v6);
    xxxRealizeDesktop(v6);
    ThreadUnlock1(v9, v8, v10);
  }
  return xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x311u, v1, 0LL, 1);
}
