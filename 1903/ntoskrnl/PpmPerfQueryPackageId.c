/*
 * XREFs of PpmPerfQueryPackageId @ 0x1402F6FD0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(ULONG a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 24888);
}
