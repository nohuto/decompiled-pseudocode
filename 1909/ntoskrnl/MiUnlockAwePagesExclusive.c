/*
 * XREFs of MiUnlockAwePagesExclusive @ 0x1402D79A8
 * Callers:
 *     MiDeleteAweInfoPages @ 0x140895ED0 (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1408963BC (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x140896518 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140116F90 (ExReleaseAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiUnlockAwePagesExclusive(__int64 a1, __int64 a2)
{
  ExReleaseAutoExpandPushLockExclusive(a1 + 56, 0LL);
  return KiLeaveGuardedRegionUnsafe(a2);
}
