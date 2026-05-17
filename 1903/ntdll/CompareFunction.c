/*
 * XREFs of CompareFunction @ 0x180067C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareFunction(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > *a2;
}
