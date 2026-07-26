/*
 * XREFs of operator_ @ 0x1C0104D74
 * Callers:
 *     ndisLwfSortPredicate @ 0x1C0106388 (ndisLwfSortPredicate.c)
 * Callees:
 *     memcmp @ 0x1C0026D30 (memcmp.c)
 */

bool __fastcall operator_(__int64 a1, __int64 a2)
{
  bool v2; // cf
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // r8

  v2 = *(_DWORD *)a1 < *(_DWORD *)a2;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2
    && (v4 = *(_WORD *)(a1 + 4), v5 = *(_WORD *)(a2 + 4), v2 = v4 < v5, v4 == v5)
    && (v6 = *(_WORD *)(a1 + 6), v7 = *(_WORD *)(a2 + 6), v2 = v6 < v7, v6 == v7) )
  {
    return memcmp((const void *)(a1 + 8), (const void *)(a2 + 8), 8uLL) < 0;
  }
  else
  {
    return v2;
  }
}
