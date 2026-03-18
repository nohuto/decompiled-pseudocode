/*
 * XREFs of ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4A50
 * Callers:
 *     xxxNextWindow @ 0x1C01F5018 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F5898 (xxxOldNextWindow.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C001461C (GetMonitorWorkRect.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C003B1B0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     _GetKeyState @ 0x1C00EBC40 (_GetKeyState.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F3BBC (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxShowSwitchWindow(struct tagWND *a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  __int64 v3; // rsi
  struct tagSwitchWndInfo *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagSwitchWndInfo *v8; // rdi
  struct tagSwitchWndInfo *v9; // rax
  struct tagSwitchWndInfo *v10; // rax
  __int128 v12; // [rsp+40h] [rbp-18h] BYREF

  v2 = gspwndAltTab;
  v3 = *(_QWORD *)(GetDispInfo(a1, a2) + 96);
  v4 = Getpswi((struct tagWND *)v2);
  v8 = v4;
  if ( !v4
    || *((_DWORD *)v4 + 27) && GetKeyState(0x12u, v5, v6, v7) >= 0
    || !*((_DWORD *)v8 + 27) && (_GetAsyncKeyState(18LL, v5, v6) & 0x8000u) == 0LL )
  {
    return 0LL;
  }
  v12 = *GetMonitorWorkRect(&v12, v3);
  xxxSetWindowPos((struct tagWND *)v2, -1LL, 0LL, 0LL, 0, 0, 27);
  if ( (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 31LL) & 0x10) == 0 )
  {
    v9 = Getpswi((struct tagWND *)v2);
    if ( !v9 )
      return 0LL;
    xxxSetWindowPos(
      (struct tagWND *)v2,
      -1LL,
      (unsigned int)(((int)v12 + DWORD2(v12) - *((_DWORD *)v9 + 19)) / 2),
      (unsigned int)((DWORD1(v12) + HIDWORD(v12) - *((_DWORD *)v9 + 20)) / 2),
      *((_DWORD *)v9 + 19),
      *((_DWORD *)v9 + 20),
      80);
  }
  xxxInternalUpdateWindow((struct tagWND *)v2, 1u);
  xxxWindowEvent(0x14u, (struct tagWND *)v2, 4294967292LL, 0, 1);
  v10 = Getpswi((struct tagWND *)v2);
  if ( v10 )
  {
    xxxWindowEvent(
      0x8005u,
      (struct tagWND *)v2,
      4294967292LL,
      *((_DWORD *)v10 + 17) + 1 + *((_DWORD *)v10 + 14) * *((_DWORD *)v10 + 18),
      1);
    return 1LL;
  }
  return 0LL;
}
