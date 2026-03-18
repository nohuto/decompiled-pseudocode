/*
 * XREFs of ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00DE190
 * Callers:
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00DE06C (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxResetTooltip @ 0x1C00DE0BC (xxxResetTooltip.c)
 * Callees:
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 */

void __fastcall KillTooltipTimer(struct tagTOOLTIPWND *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 9);
  if ( v1 )
  {
    *((_DWORD *)a1 + 9) = 0;
    FindTimer(*(_QWORD *)a1, v1, 2, 1, 0LL);
  }
}
