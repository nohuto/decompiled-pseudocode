/*
 * XREFs of PpmHeteroUtilityToNormalizedUtility @ 0x1402E4470
 * Callers:
 *     PpmParkDistributeUtility @ 0x140103720 (PpmParkDistributeUtility.c)
 *     PpmCheckComputeHeteroResponse @ 0x1402E3CB0 (PpmCheckComputeHeteroResponse.c)
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
