/*
 * XREFs of ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00648E8
 * Callers:
 *     xxxTrackMouseMove @ 0x1C005CF1C (xxxTrackMouseMove.c)
 *     xxxTooltipWndProc @ 0x1C01044C0 (xxxTooltipWndProc.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C01FF21C (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00647F0 (_SetSystemTimer.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0064988 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 */

void __fastcall SetTooltipTimer(struct tagTOOLTIPWND *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v6; // rcx

  KillTooltipTimer(a1);
  v6 = *(_QWORD *)a1;
  *((_DWORD *)a1 + 9) = a2;
  SetSystemTimer(v6, a2, a3, 0LL, 1);
}
