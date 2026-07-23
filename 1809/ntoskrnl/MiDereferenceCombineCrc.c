/*
 * XREFs of MiDereferenceCombineCrc @ 0x140860234
 * Callers:
 *     MiProcessCrcList @ 0x140620320 (MiProcessCrcList.c)
 * Callees:
 *     MiDecrementCombinedPte @ 0x14011FA64 (MiDecrementCombinedPte.c)
 */

__int64 __fastcall MiDereferenceCombineCrc(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  if ( (unsigned int)v1 < 0x100 || !*(_QWORD *)(v1 + 24) )
    return 0LL;
  MiDecrementCombinedPte(0LL, v1 + 48);
  return 1LL;
}
