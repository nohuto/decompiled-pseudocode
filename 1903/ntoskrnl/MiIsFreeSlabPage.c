/*
 * XREFs of MiIsFreeSlabPage @ 0x1402DCA5C
 * Callers:
 *     MiIsPageSecured @ 0x1400F4D44 (MiIsPageSecured.c)
 *     MiPurgeSlabEntries @ 0x1402DCA94 (MiPurgeSlabEntries.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 */

_BOOL8 __fastcall MiIsFreeSlabPage(__int64 a1)
{
  __int64 v1; // r8

  return MiIsPfnFromSlabAllocation(a1) && (*(_BYTE *)(v1 + 34) & 7) == 5 && *(_QWORD *)(v1 + 8) >= 0xFFFFFFFFFFFFFFFEuLL;
}
