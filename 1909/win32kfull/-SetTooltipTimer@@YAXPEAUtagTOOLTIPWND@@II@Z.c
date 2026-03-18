/*
 * XREFs of ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00E9C8C
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00200FC (xxxTrackMouseMove.c)
 *     xxxTooltipWndProc @ 0x1C00E96D0 (xxxTooltipWndProc.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C023F8E0 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00EA334 (_SetSystemTimer.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00EA478 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 */

void __fastcall SetTooltipTimer(struct tagTOOLTIPWND *a1, int a2, int a3)
{
  __int64 v6; // rcx

  KillTooltipTimer(a1);
  v6 = *(_QWORD *)a1;
  *((_DWORD *)a1 + 9) = a2;
  SetSystemTimer(v6, a2, a3, 0, 1);
}
