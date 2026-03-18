/*
 * XREFs of MiUnlockAweVadsShared @ 0x1402D79D0
 * Callers:
 *     MiGetAweVadPartition @ 0x1402D6264 (MiGetAweVadPartition.c)
 *     MiLockAweVadsShared @ 0x1402D6C3C (MiLockAweVadsShared.c)
 *     MiProtectAweRegion @ 0x1402D6EE4 (MiProtectAweRegion.c)
 *     NtAllocateUserPhysicalPages @ 0x140896680 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140897450 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140897730 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x140102360 (ExReleaseAutoExpandPushLockShared.c)
 */

__int64 __fastcall MiUnlockAweVadsShared(__int64 a1, ULONG_PTR a2)
{
  ExReleaseAutoExpandPushLockShared(a2, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
