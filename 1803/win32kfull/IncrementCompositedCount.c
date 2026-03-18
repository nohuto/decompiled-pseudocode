/*
 * XREFs of IncrementCompositedCount @ 0x1C01B17B0
 * Callers:
 *     SetRedirectedWindow @ 0x1C0075334 (SetRedirectedWindow.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1C01F9F90 (-IncComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00647F0 (_SetSystemTimer.c)
 */

__int64 __fastcall IncrementCompositedCount(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
  {
    if ( !g_cVisibleComposited++ )
      SetSystemTimer(*((_QWORD *)&gTermIO + 1), 65525LL, 0x64u, (__int64)xxxSystemTimerProc, 1);
    return 1;
  }
  return v1;
}
