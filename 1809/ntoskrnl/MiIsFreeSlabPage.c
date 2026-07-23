/*
 * XREFs of MiIsFreeSlabPage @ 0x1401B5A80
 * Callers:
 *     MiIsPageSecured @ 0x1400EA860 (MiIsPageSecured.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 */

_BOOL8 __fastcall MiIsFreeSlabPage(__int64 a1)
{
  __int64 v1; // r8

  return MiIsPfnFromSlabAllocation(a1) && (*(_BYTE *)(v1 + 34) & 7) == 5 && *(_QWORD *)(v1 + 8) >= 0xFFFFFFFFFFFFFFFEuLL;
}
