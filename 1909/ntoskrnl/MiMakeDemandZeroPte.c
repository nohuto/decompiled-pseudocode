/*
 * XREFs of MiMakeDemandZeroPte @ 0x1400765C8
 * Callers:
 *     MiBuildImageControlArea @ 0x1406457E8 (MiBuildImageControlArea.c)
 *     MiChargeSegmentCommit @ 0x140648780 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x14064E964 (MiCreatePagingFileMap.c)
 *     MiInitializePrototypePtes @ 0x14064F444 (MiInitializePrototypePtes.c)
 *     MiParseImageSectionHeaders @ 0x14064F560 (MiParseImageSectionHeaders.c)
 *     MiPrefetchDriverPages @ 0x1406A5520 (MiPrefetchDriverPages.c)
 *     MiSessionCreate @ 0x140741918 (MiSessionCreate.c)
 *     MmFreeNonCachedMemory @ 0x140889010 (MmFreeNonCachedMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  return MiSwizzleInvalidPte(32LL * (a1 & 0x1F), a2, a3, a4);
}
