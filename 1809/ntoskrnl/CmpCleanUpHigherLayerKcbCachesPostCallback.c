/*
 * XREFs of CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x1407FAB00
 * Callers:
 *     <none>
 * Callees:
 *     CmpCleanUpKCBCacheTable @ 0x140693CDC (CmpCleanUpKCBCacheTable.c)
 */

__int64 __fastcall CmpCleanUpHigherLayerKcbCachesPostCallback(__int64 a1)
{
  CmpCleanUpKCBCacheTable(*(_QWORD *)(a1 + 24));
  if ( *(_DWORD *)a1 == 1 )
    *(_WORD *)(a1 + 4) |= 0x20u;
  return 0LL;
}
