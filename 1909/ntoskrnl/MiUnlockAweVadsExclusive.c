/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x1402D79FC
 * Callers:
 *     MiFreePhysicalPages @ 0x1402D5D78 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x1402E2C0C (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x140889780 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x1408957D0 (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140895BAC (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140896304 (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x140896518 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140116F90 (ExReleaseAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1296LL) + 408LL, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
