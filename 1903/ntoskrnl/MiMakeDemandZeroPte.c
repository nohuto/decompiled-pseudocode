/*
 * XREFs of MiMakeDemandZeroPte @ 0x140076358
 * Callers:
 *     MiChargeSegmentCommit @ 0x14066ED20 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x140688794 (MiCreatePagingFileMap.c)
 *     MiInitializePrototypePtes @ 0x140689274 (MiInitializePrototypePtes.c)
 *     MiParseImageSectionHeaders @ 0x140689390 (MiParseImageSectionHeaders.c)
 *     MiBuildImageControlArea @ 0x14068BB74 (MiBuildImageControlArea.c)
 *     MiPrefetchDriverPages @ 0x1406A5C90 (MiPrefetchDriverPages.c)
 *     MiSessionCreate @ 0x14073FA18 (MiSessionCreate.c)
 *     MmFreeNonCachedMemory @ 0x1408897F0 (MmFreeNonCachedMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  return MiSwizzleInvalidPte(32LL * (a1 & 0x1F), a2, a3, a4);
}
