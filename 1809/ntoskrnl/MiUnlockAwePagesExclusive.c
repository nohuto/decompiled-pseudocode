/*
 * XREFs of MiUnlockAwePagesExclusive @ 0x1402B1FB8
 * Callers:
 *     MiDeleteAweInfoPages @ 0x14084FD58 (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x140850214 (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x140850370 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140117B80 (ExReleaseAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiUnlockAwePagesExclusive(__int64 a1, __int64 a2)
{
  ExReleaseAutoExpandPushLockExclusive(a1 + 56, 0LL);
  return KiLeaveGuardedRegionUnsafe(a2);
}
