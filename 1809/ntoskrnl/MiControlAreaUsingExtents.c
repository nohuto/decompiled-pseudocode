/*
 * XREFs of MiControlAreaUsingExtents @ 0x1400321B0
 * Callers:
 *     MiReferenceDataSubsections @ 0x140026658 (MiReferenceDataSubsections.c)
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiInsertUnusedSubsection @ 0x14007B7DC (MiInsertUnusedSubsection.c)
 *     MiGatherMappedPages @ 0x14007E6B0 (MiGatherMappedPages.c)
 *     MiSectionCreated @ 0x140092720 (MiSectionCreated.c)
 *     MiAppendSubsectionChain @ 0x140092AA4 (MiAppendSubsectionChain.c)
 *     MmCheckCachedPageStates @ 0x1400B02B0 (MmCheckCachedPageStates.c)
 *     MmPurgeSection @ 0x1400E7D00 (MmPurgeSection.c)
 *     MiPfPrepareReadList @ 0x1405DFDE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405EBA20 (MiPfPrepareSequentialReadList.c)
 *     MiExtendSection @ 0x14061C4C8 (MiExtendSection.c)
 *     MmExtendSection @ 0x14061C8CC (MmExtendSection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaUsingExtents(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x40000000) != 0;
}
