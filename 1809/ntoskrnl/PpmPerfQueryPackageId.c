/*
 * XREFs of PpmPerfQueryPackageId @ 0x1401B5A80
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1400A62C4 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(ULONG a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 24888);
}
