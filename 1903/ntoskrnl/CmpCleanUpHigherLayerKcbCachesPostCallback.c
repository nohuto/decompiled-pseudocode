/*
 * XREFs of CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x140832DA0
 * Callers:
 *     <none>
 * Callees:
 *     CmpCleanUpKCBCacheTable @ 0x14069B610 (CmpCleanUpKCBCacheTable.c)
 */

__int64 __fastcall CmpCleanUpHigherLayerKcbCachesPostCallback(__int64 a1)
{
  CmpCleanUpKCBCacheTable(*(_QWORD *)(a1 + 32));
  if ( *(_QWORD *)a1 == 1LL )
    *(_WORD *)(a1 + 8) |= 0x20u;
  return 0LL;
}
