/*
 * XREFs of xxxBroadcastPaletteChanged @ 0x1C0221098
 * Callers:
 *     xxxRealizePalette @ 0x1C00FCE60 (xxxRealizePalette.c)
 *     xxxFlushPalette @ 0x1C0221150 (xxxFlushPalette.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxRealizeDesktop @ 0x1C01EAFF0 (xxxRealizeDesktop.c)
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
  __int64 v9; // r8
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h]

  v1 = *a1;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  v5 = DesktopWindow;
  if ( (_DWORD)v3 || v4 != DesktopWindow )
  {
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4);
    v11 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
    v12 = v5;
    HMLockObject(v5);
    xxxRealizeDesktop(v5);
    ThreadUnlock1(v8, v7, v9);
  }
  return xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x311u, v1, 0LL, 1);
}
