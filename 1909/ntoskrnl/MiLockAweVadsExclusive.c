/*
 * XREFs of MiLockAweVadsExclusive @ 0x1402D6C04
 * Callers:
 *     MiFreePhysicalPages @ 0x1402D5D78 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x1402E2C0C (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x140889780 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x1408957D0 (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140895BAC (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140896304 (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x140896518 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1401175E0 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1296LL);
  --*(_WORD *)(a1 + 486);
  return ExAcquireAutoExpandPushLockExclusive(v2 + 408, 0LL);
}
