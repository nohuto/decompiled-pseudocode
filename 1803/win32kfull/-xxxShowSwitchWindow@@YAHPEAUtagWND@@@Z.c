/*
 * XREFs of ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01BC110
 * Callers:
 *     xxxNextWindow @ 0x1C01BC6C8 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01BCDF8 (xxxOldNextWindow.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00383F0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GetMonitorWorkRect @ 0x1C0066BF8 (GetMonitorWorkRect.c)
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01BB320 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxShowSwitchWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  struct tagSwitchWndInfo *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct tagSwitchWndInfo *v9; // rdi
  struct tagSwitchWndInfo *v11; // rax
  struct tagSwitchWndInfo *v12; // rax
  __int128 v13; // [rsp+40h] [rbp-18h] BYREF

  v4 = gspwndAltTab;
  v5 = *(_QWORD *)(GetDispInfo(a1, a2, a3, a4) + 96);
  v6 = Getpswi((struct tagWND *)v4);
  v9 = v6;
  if ( !v6
    || *((_DWORD *)v6 + 27) && (GetKeyState(0x12u, v7) & 0x8000u) == 0LL
    || !*((_DWORD *)v9 + 27) && (_GetAsyncKeyState(18LL, v7, v8) & 0x8000u) == 0LL )
  {
    return 0LL;
  }
  v13 = *GetMonitorWorkRect(&v13, v5);
  xxxSetWindowPos((struct tagWND *)v4, -1LL, 0LL, 0LL, 0, 0, 27);
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 0x10) == 0 )
  {
    v11 = Getpswi((struct tagWND *)v4);
    if ( !v11 )
      return 0LL;
    xxxSetWindowPos(
      (struct tagWND *)v4,
      -1LL,
      (unsigned int)(((int)v13 + DWORD2(v13) - *((_DWORD *)v11 + 19)) / 2),
      (unsigned int)((DWORD1(v13) + HIDWORD(v13) - *((_DWORD *)v11 + 20)) / 2),
      *((_DWORD *)v11 + 19),
      *((_DWORD *)v11 + 20),
      80);
  }
  xxxInternalUpdateWindow((struct tagWND *)v4, 1u);
  xxxWindowEvent(0x14u, v4, -4, 0, 1);
  v12 = Getpswi((struct tagWND *)v4);
  if ( !v12 )
    return 0LL;
  xxxWindowEvent(0x8005u, v4, -4, *((_DWORD *)v12 + 17) + 1 + *((_DWORD *)v12 + 14) * *((_DWORD *)v12 + 18), 1);
  return 1LL;
}
