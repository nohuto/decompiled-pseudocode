/*
 * XREFs of MiLockAweVadsExclusive @ 0x1402D6EA4
 * Callers:
 *     MiFreePhysicalPages @ 0x1402D6018 (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x1402E2EAC (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x140889F60 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x140895FB0 (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14089638C (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140896AE4 (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x140896CF8 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140115F50 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1296LL);
  --*(_WORD *)(a1 + 486);
  return ExAcquireAutoExpandPushLockExclusive(v2 + 408, 0LL);
}
