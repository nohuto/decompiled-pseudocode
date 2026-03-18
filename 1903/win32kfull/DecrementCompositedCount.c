/*
 * XREFs of DecrementCompositedCount @ 0x1C01E9354
 * Callers:
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     ?DecComposited@@YAXPEAUtagWND@@@Z @ 0x1C023AD10 (-DecComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 */

__int64 DecrementCompositedCount()
{
  int v0; // ecx

  v0 = g_cVisibleComposited--;
  if ( v0 == 1 )
    FindTimer(gTermIO[1], 65525LL, 2u, 1, 0LL);
  return 1LL;
}
