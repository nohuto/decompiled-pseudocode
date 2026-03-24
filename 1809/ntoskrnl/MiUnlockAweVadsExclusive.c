/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x1402B210C
 * Callers:
 *     MiFreePhysicalPages @ 0x1402B08E0 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x1402C8B68 (MiCloneVads.c)
 *     MiAweViewInserter @ 0x14084F634 (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14084FA0C (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140850144 (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x140850350 (MiScrubProcessPhysicalPages.c)
 *     MmSetGraphicsPtes @ 0x1408504B0 (MmSetGraphicsPtes.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140117BA0 (ExReleaseAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1296LL) + 360LL, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
