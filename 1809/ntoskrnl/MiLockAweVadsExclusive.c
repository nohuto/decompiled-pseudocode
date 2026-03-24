/*
 * XREFs of MiLockAweVadsExclusive @ 0x1402B12DC
 * Callers:
 *     MiFreePhysicalPages @ 0x1402B08E0 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x1402C8B68 (MiCloneVads.c)
 *     MiAweViewInserter @ 0x14084F634 (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14084FA0C (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140850144 (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x140850350 (MiScrubProcessPhysicalPages.c)
 *     MmSetGraphicsPtes @ 0x1408504B0 (MmSetGraphicsPtes.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140118FE0 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1296LL);
  --*(_WORD *)(a1 + 486);
  return ExAcquireAutoExpandPushLockExclusive(v2 + 360, 0LL);
}
