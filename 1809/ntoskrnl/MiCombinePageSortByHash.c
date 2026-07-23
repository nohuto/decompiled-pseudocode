/*
 * XREFs of MiCombinePageSortByHash @ 0x140692D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCombinePageSortByHash(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > *a2;
}
