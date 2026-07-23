/*
 * XREFs of MiDereferenceCombineBlock @ 0x14011FA1C
 * Callers:
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 * Callees:
 *     MiDecrementCombinedPte @ 0x14011FA64 (MiDecrementCombinedPte.c)
 */

void __fastcall MiDereferenceCombineBlock(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    if ( a2[3] )
    {
      MiDecrementCombinedPte(0LL, a2 + 6);
    }
    else
    {
      v2 = *a1;
      if ( *(__int64 **)(*a1 + 8) != a1 )
        __fastfail(3u);
      *a2 = v2;
      a2[1] = a1;
      *(_QWORD *)(v2 + 8) = a2;
      *a1 = (__int64)a2;
    }
  }
}
