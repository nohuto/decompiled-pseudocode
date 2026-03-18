/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x14002BDF0
 * Callers:
 *     MiGetPagesToZero @ 0x140029C50 (MiGetPagesToZero.c)
 *     MiFillSystemPtes @ 0x14002FC70 (MiFillSystemPtes.c)
 *     MiCopySinglePage @ 0x1400F4B8C (MiCopySinglePage.c)
 *     MiPrivateFixup @ 0x140101BD0 (MiPrivateFixup.c)
 *     MiInsertPhysicalPteMapping @ 0x14011915C (MiInsertPhysicalPteMapping.c)
 *     MiZeroInParallelWorker @ 0x140123300 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x14012910C (MiZeroLargePage.c)
 *     MiGetPteFromCopyList @ 0x1401379BC (MiGetPteFromCopyList.c)
 *     MiMapSinglePage @ 0x140154AD0 (MiMapSinglePage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140155448 (MiUpdateImagePfnImportRelocations.c)
 *     MmMapMemoryDumpMdlEx @ 0x14015F264 (MmMapMemoryDumpMdlEx.c)
 *     MiMapMdlCommon @ 0x1401988A4 (MiMapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1402C15B0 (MmProtectMdlSystemAddress.c)
 *     MiInitializeSlowPte @ 0x1402C7178 (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402D115C (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubPage @ 0x1402ECD28 (MiScrubPage.c)
 *     MiRelocateImagePfn @ 0x140605680 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x14065C928 (MiValidateImagePfn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionPfnCompatible(char a1, __int64 a2)
{
  unsigned __int8 v2; // al
  unsigned int v3; // ecx

  v2 = *(_BYTE *)(a2 + 34);
  v3 = a1 & 7;
  if ( v2 < 0x40u )
    return v3 | 8;
  if ( v2 >> 6 == 2 )
    v3 |= 0x18u;
  return v3;
}
