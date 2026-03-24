/*
 * XREFs of MiMakeDemandZeroPte @ 0x140097EE0
 * Callers:
 *     MiBuildImageControlArea @ 0x14061DA70 (MiBuildImageControlArea.c)
 *     MiChargeSegmentCommit @ 0x14061E0D0 (MiChargeSegmentCommit.c)
 *     MiParseImageSectionHeaders @ 0x14061E300 (MiParseImageSectionHeaders.c)
 *     MiCreatePagingFileMap @ 0x14061EB18 (MiCreatePagingFileMap.c)
 *     MiInitializePrototypePtes @ 0x14061F030 (MiInitializePrototypePtes.c)
 *     MiPrefetchDriverPages @ 0x14061F120 (MiPrefetchDriverPages.c)
 *     MiSessionCreate @ 0x140715008 (MiSessionCreate.c)
 *     MmFreeNonCachedMemory @ 0x14084DE20 (MmFreeNonCachedMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1)
{
  return MiSwizzleInvalidPte(32LL * (a1 & 0x1F));
}
