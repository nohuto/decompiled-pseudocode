/*
 * XREFs of ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01DECD4
 * Callers:
 *     xxxNextWindow @ 0x1C01DF29C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     GetMonitorWorkRect @ 0x1C00B7058 (GetMonitorWorkRect.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F7460 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     _GetKeyState @ 0x1C0107788 (_GetKeyState.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01DDE24 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxShowSwitchWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  struct tagSwitchWndInfo *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagSwitchWndInfo *v8; // rdi
  struct tagSwitchWndInfo *v9; // rax
  struct tagSwitchWndInfo *v10; // rax
  __m128i v12; // [rsp+40h] [rbp-18h] BYREF

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
      (unsigned int)((v12.m128i_i32[0] + v12.m128i_i32[2] - *((_DWORD *)v9 + 19)) / 2),
      (unsigned int)((v12.m128i_i32[1] + v12.m128i_i32[3] - *((_DWORD *)v9 + 20)) / 2),
      *((_DWORD *)v9 + 19),
      *((_DWORD *)v9 + 20),
      80);
  }
  xxxInternalUpdateWindow((struct tagWND *)v2, 1u);
  xxxWindowEvent(0x14u, v2, -4, 0, 1u);
  v10 = Getpswi((struct tagWND *)v2);
  if ( v10 )
  {
    xxxWindowEvent(0x8005u, v2, -4, *((_DWORD *)v10 + 17) + 1 + *((_DWORD *)v10 + 14) * *((_DWORD *)v10 + 18), 1u);
    return 1LL;
  }
  return 0LL;
}
