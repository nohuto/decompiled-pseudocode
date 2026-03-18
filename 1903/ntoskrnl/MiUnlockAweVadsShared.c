/*
 * XREFs of MiUnlockAweVadsShared @ 0x1402D7C70
 * Callers:
 *     MiGetAweVadPartition @ 0x1402D6504 (MiGetAweVadPartition.c)
 *     MiLockAweVadsShared @ 0x1402D6EDC (MiLockAweVadsShared.c)
 *     MiProtectAweRegion @ 0x1402D7184 (MiProtectAweRegion.c)
 *     NtAllocateUserPhysicalPages @ 0x140896E60 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140897C30 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140897F10 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1400FF960 (ExReleaseAutoExpandPushLockShared.c)
 */

__int64 __fastcall MiUnlockAweVadsShared(__int64 a1, ULONG_PTR a2)
{
  ExReleaseAutoExpandPushLockShared(a2, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
