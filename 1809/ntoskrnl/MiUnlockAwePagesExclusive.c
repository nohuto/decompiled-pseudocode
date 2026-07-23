/*
 * XREFs of MiUnlockAwePagesExclusive @ 0x1402B22A8
 * Callers:
 *     MiDeleteAweInfoPages @ 0x140850F98 (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x140851454 (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x1408515B0 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140117C10 (ExReleaseAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiUnlockAwePagesExclusive(__int64 a1, __int64 a2)
{
  ExReleaseAutoExpandPushLockExclusive(a1 + 56, 0LL);
  return KiLeaveGuardedRegionUnsafe(a2);
}
