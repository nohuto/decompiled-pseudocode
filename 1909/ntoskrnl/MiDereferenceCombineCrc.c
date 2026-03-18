/*
 * XREFs of MiDereferenceCombineCrc @ 0x1406F7104
 * Callers:
 *     MiProcessCrcList @ 0x1406F56E0 (MiProcessCrcList.c)
 * Callees:
 *     MiDecrementCombinedPte @ 0x140140D8C (MiDecrementCombinedPte.c)
 */

__int64 __fastcall MiDereferenceCombineCrc(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 < 0x100 )
    return 0LL;
  MiDecrementCombinedPte(0LL, v1 + 48);
  return 1LL;
}
