/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x1402B22FC
 * Callers:
 *     MiFreePhysicalPages @ 0x1402B0AD0 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 *     MiAweViewInserter @ 0x140850894 (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140850C6C (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408513A4 (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x1408515B0 (MiScrubProcessPhysicalPages.c)
 *     MmSetGraphicsPtes @ 0x140851710 (MmSetGraphicsPtes.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140117C10 (ExReleaseAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1296LL) + 360LL, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
