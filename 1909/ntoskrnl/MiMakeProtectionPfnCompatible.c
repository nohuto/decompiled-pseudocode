/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x14002C1E0
 * Callers:
 *     MiGetPagesToZero @ 0x14002A040 (MiGetPagesToZero.c)
 *     MiFillSystemPtes @ 0x140030060 (MiFillSystemPtes.c)
 *     MiCopySinglePage @ 0x1400C7A2C (MiCopySinglePage.c)
 *     MiInsertPhysicalPteMapping @ 0x1400F727C (MiInsertPhysicalPteMapping.c)
 *     MiZeroInParallelWorker @ 0x1400F8EC0 (MiZeroInParallelWorker.c)
 *     MiPrivateFixup @ 0x140126D84 (MiPrivateFixup.c)
 *     MiZeroLargePage @ 0x140129B2C (MiZeroLargePage.c)
 *     MiGetPteFromCopyList @ 0x140138004 (MiGetPteFromCopyList.c)
 *     MiMapSinglePage @ 0x140155170 (MiMapSinglePage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140155AE8 (MiUpdateImagePfnImportRelocations.c)
 *     MmMapMemoryDumpMdlEx @ 0x14015F904 (MmMapMemoryDumpMdlEx.c)
 *     MiMapMdlCommon @ 0x140198F04 (MiMapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1402C1310 (MmProtectMdlSystemAddress.c)
 *     MiInitializeSlowPte @ 0x1402C6ED8 (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402D0EBC (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubPage @ 0x1402ECA88 (MiScrubPage.c)
 *     MiRelocateImagePfn @ 0x140607190 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140641E24 (MiValidateImagePfn.c)
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
