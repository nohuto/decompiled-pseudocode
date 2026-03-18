/*
 * XREFs of MiDereferenceCombineCrc @ 0x14085EFF4
 * Callers:
 *     MiProcessCrcList @ 0x14061F320 (MiProcessCrcList.c)
 * Callees:
 *     MiDecrementCombinedPte @ 0x14011F9D4 (MiDecrementCombinedPte.c)
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
