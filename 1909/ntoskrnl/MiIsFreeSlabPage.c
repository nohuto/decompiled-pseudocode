/*
 * XREFs of MiIsFreeSlabPage @ 0x1402DC7BC
 * Callers:
 *     MiIsPageSecured @ 0x1400C7BE4 (MiIsPageSecured.c)
 *     MiPurgeSlabEntries @ 0x1402DC7F4 (MiPurgeSlabEntries.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x1400B9B40 (MiIsPfnFromSlabAllocation.c)
 */

_BOOL8 __fastcall MiIsFreeSlabPage(__int64 a1)
{
  __int64 v1; // r8

  return MiIsPfnFromSlabAllocation(a1) && (*(_BYTE *)(v1 + 34) & 7) == 5 && *(_QWORD *)(v1 + 8) >= 0xFFFFFFFFFFFFFFFEuLL;
}
