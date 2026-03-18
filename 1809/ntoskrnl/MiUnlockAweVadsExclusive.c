/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x1402B200C
 * Callers:
 *     MiFreePhysicalPages @ 0x1402B07E0 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x1402C8A68 (MiCloneVads.c)
 *     MiAweViewInserter @ 0x14084F654 (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14084FA2C (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140850164 (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x140850370 (MiScrubProcessPhysicalPages.c)
 *     MmSetGraphicsPtes @ 0x1408504D0 (MmSetGraphicsPtes.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140117B80 (ExReleaseAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1296LL) + 360LL, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
