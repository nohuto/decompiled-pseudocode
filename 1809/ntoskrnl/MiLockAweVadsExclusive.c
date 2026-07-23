/*
 * XREFs of MiLockAweVadsExclusive @ 0x1402B14CC
 * Callers:
 *     MiFreePhysicalPages @ 0x1402B0AD0 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 *     MiAweViewInserter @ 0x140850894 (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140850C6C (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408513A4 (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x1408515B0 (MiScrubProcessPhysicalPages.c)
 *     MmSetGraphicsPtes @ 0x140851710 (MmSetGraphicsPtes.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140119050 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1296LL);
  --*(_WORD *)(a1 + 486);
  return ExAcquireAutoExpandPushLockExclusive(v2 + 360, 0LL);
}
