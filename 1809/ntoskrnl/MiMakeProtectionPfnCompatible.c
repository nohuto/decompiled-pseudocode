/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x14002DDB4
 * Callers:
 *     MiFillSystemPtes @ 0x14005C300 (MiFillSystemPtes.c)
 *     MiCopySinglePage @ 0x1400EA608 (MiCopySinglePage.c)
 *     MiInsertPhysicalPteMapping @ 0x14010FE60 (MiInsertPhysicalPteMapping.c)
 *     MiZeroLargePage @ 0x140118D5C (MiZeroLargePage.c)
 *     MiMapSinglePage @ 0x14012185C (MiMapSinglePage.c)
 *     MiPrivateFixup @ 0x140125E20 (MiPrivateFixup.c)
 *     MiGetPteFromCopyList @ 0x14012D7E8 (MiGetPteFromCopyList.c)
 *     MiZeroInParallelWorker @ 0x14013C6A0 (MiZeroInParallelWorker.c)
 *     MmMapMemoryDumpMdlEx @ 0x140144400 (MmMapMemoryDumpMdlEx.c)
 *     MiMapMdlCommon @ 0x14018EAD4 (MiMapMdlCommon.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1401B518C (MiUpdateImagePfnImportRelocations.c)
 *     MmProtectMdlSystemAddress @ 0x1402A9B70 (MmProtectMdlSystemAddress.c)
 *     MiInitializeSlowPte @ 0x1402AF214 (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402BADF8 (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubPage @ 0x1402CF850 (MiScrubPage.c)
 *     MiValidateImagePfn @ 0x1405A8854 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1405DF930 (MiRelocateImagePfn.c)
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
  {
    v3 |= 8u;
  }
  else if ( v2 >> 6 == 2 )
  {
    v3 |= 0x18u;
  }
  return v3;
}
