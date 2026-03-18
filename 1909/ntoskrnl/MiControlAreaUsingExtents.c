/*
 * XREFs of MiControlAreaUsingExtents @ 0x14006EFE0
 * Callers:
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MmCopyToCachedPage @ 0x14006EAA0 (MmCopyToCachedPage.c)
 *     MiInsertUnusedSubsection @ 0x14006FF30 (MiInsertUnusedSubsection.c)
 *     MiGatherMappedPages @ 0x14007B5D8 (MiGatherMappedPages.c)
 *     MiAppendSubsectionChain @ 0x140089058 (MiAppendSubsectionChain.c)
 *     MiResolveMappedFileFault @ 0x1400931C0 (MiResolveMappedFileFault.c)
 *     MiReferenceDataSubsections @ 0x1400960E8 (MiReferenceDataSubsections.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MmPurgeSection @ 0x1400BCD50 (MmPurgeSection.c)
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 *     MmExtendSection @ 0x140624DB0 (MmExtendSection.c)
 *     MiExtendSection @ 0x140625080 (MiExtendSection.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaUsingExtents(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x40000000) != 0;
}
