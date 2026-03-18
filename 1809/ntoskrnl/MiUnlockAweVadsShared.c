/*
 * XREFs of MiUnlockAweVadsShared @ 0x1402B1FE0
 * Callers:
 *     MiLockAweVadsShared @ 0x1402B1214 (MiLockAweVadsShared.c)
 *     MiProtectAweRegion @ 0x1402B14BC (MiProtectAweRegion.c)
 *     NtAllocateUserPhysicalPages @ 0x1408506B0 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408513E0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408516D0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1401073F0 (ExReleaseAutoExpandPushLockShared.c)
 */

__int64 __fastcall MiUnlockAweVadsShared(__int64 a1, ULONG_PTR a2)
{
  ExReleaseAutoExpandPushLockShared(a2, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
