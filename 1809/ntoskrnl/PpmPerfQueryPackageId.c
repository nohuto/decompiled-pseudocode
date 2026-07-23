/*
 * XREFs of PpmPerfQueryPackageId @ 0x1401B5BC0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(ULONG a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 24888);
}
