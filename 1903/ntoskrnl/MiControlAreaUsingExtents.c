/*
 * XREFs of MiControlAreaUsingExtents @ 0x14006ED70
 * Callers:
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MmCopyToCachedPage @ 0x14006E830 (MmCopyToCachedPage.c)
 *     MiInsertUnusedSubsection @ 0x14006FCC0 (MiInsertUnusedSubsection.c)
 *     MiGatherMappedPages @ 0x14007B1D8 (MiGatherMappedPages.c)
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 *     MiReferenceDataSubsections @ 0x1400A8B68 (MiReferenceDataSubsections.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MmPurgeSection @ 0x1400DCED0 (MmPurgeSection.c)
 *     MiAppendSubsectionChain @ 0x1400EAEF8 (MiAppendSubsectionChain.c)
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140687EA0 (MiPfPrepareReadList.c)
 *     MmExtendSection @ 0x14069C8C0 (MmExtendSection.c)
 *     MiExtendSection @ 0x14069CB90 (MiExtendSection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaUsingExtents(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x40000000) != 0;
}
