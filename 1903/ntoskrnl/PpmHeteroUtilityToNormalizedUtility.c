/*
 * XREFs of PpmHeteroUtilityToNormalizedUtility @ 0x1403012A0
 * Callers:
 *     PpmParkDistributeUtility @ 0x1400BD830 (PpmParkDistributeUtility.c)
 *     PpmCheckComputeHeteroResponse @ 0x140300AB0 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmHeteroUtilityToNormalizedUtility(__int64 a1, unsigned int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 432);
  if ( v2 )
    return (v2 * a2) >> 16;
  return a2;
}
