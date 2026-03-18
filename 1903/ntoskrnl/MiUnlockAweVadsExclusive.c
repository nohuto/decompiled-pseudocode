/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x1402D7C9C
 * Callers:
 *     MiFreePhysicalPages @ 0x1402D6018 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x1402E2EAC (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x140889F60 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x140895FB0 (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14089638C (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140896AE4 (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x140896CF8 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140115920 (ExReleaseAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1296LL) + 408LL, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
