/*
 * XREFs of DecrementCompositedCount @ 0x1C01E91D4
 * Callers:
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     ?DecComposited@@YAXPEAUtagWND@@@Z @ 0x1C023A6F0 (-DecComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 */

__int64 DecrementCompositedCount()
{
  int v0; // ecx

  v0 = g_cVisibleComposited--;
  if ( v0 == 1 )
    FindTimer(gTermIO[1], 65525LL, 2u, 1, 0LL);
  return 1LL;
}
