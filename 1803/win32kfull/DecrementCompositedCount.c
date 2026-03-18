/*
 * XREFs of DecrementCompositedCount @ 0x1C01B1598
 * Callers:
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     ?DecComposited@@YAXPEAUtagWND@@@Z @ 0x1C01F9F70 (-DecComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 */

__int64 DecrementCompositedCount()
{
  int v0; // ecx

  v0 = g_cVisibleComposited--;
  if ( v0 == 1 )
    FindTimer(*((_QWORD *)&gTermIO + 1), 65525LL, 2u, 1, 0LL);
  return 1LL;
}
