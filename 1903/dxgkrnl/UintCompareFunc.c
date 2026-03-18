/*
 * XREFs of UintCompareFunc @ 0x1C01EF5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UintCompareFunc(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
