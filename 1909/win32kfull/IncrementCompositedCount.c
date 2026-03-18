/*
 * XREFs of IncrementCompositedCount @ 0x1C01E9400
 * Callers:
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     SetRedirectedWindow @ 0x1C0032388 (SetRedirectedWindow.c)
 *     ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1C023A710 (-IncComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00EA334 (_SetSystemTimer.c)
 */

__int64 __fastcall IncrementCompositedCount(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
  {
    if ( !g_cVisibleComposited++ )
      SetSystemTimer(gTermIO[1], 65525LL, 0x64u, (__int64)xxxSystemTimerProc, 1);
    return 1;
  }
  return v1;
}
