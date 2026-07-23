/*
 * XREFs of MiMakeDemandZeroPte @ 0x140097E20
 * Callers:
 *     MiBuildImageControlArea @ 0x14061EA70 (MiBuildImageControlArea.c)
 *     MiChargeSegmentCommit @ 0x14061F0D0 (MiChargeSegmentCommit.c)
 *     MiParseImageSectionHeaders @ 0x14061F300 (MiParseImageSectionHeaders.c)
 *     MiCreatePagingFileMap @ 0x14061FB18 (MiCreatePagingFileMap.c)
 *     MiInitializePrototypePtes @ 0x140620030 (MiInitializePrototypePtes.c)
 *     MiPrefetchDriverPages @ 0x140620120 (MiPrefetchDriverPages.c)
 *     MiSessionCreate @ 0x1407162A8 (MiSessionCreate.c)
 *     MmFreeNonCachedMemory @ 0x14084F080 (MmFreeNonCachedMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1)
{
  return MiSwizzleInvalidPte(32LL * (a1 & 0x1F));
}
