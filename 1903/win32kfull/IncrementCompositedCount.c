/*
 * XREFs of IncrementCompositedCount @ 0x1C01E9580
 * Callers:
 *     SetRedirectedWindow @ 0x1C002BF18 (SetRedirectedWindow.c)
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1C023AD30 (-IncComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C008C7D4 (_SetSystemTimer.c)
 */

__int64 __fastcall IncrementCompositedCount(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
  {
    if ( !g_cVisibleComposited++ )
      SetSystemTimer(gTermIO[1], 65525, 100, (int)xxxSystemTimerProc, 1);
    return 1;
  }
  return v1;
}
