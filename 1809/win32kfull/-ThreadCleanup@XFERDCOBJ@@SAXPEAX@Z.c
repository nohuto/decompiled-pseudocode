/*
 * XREFs of ?ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z @ 0x1C025F850
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015F778 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall XFERDCOBJ::ThreadCleanup(XDCOBJ *a1)
{
  XDCOBJ::vUnlock(a1);
}
