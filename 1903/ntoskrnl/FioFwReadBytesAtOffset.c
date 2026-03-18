/*
 * XREFs of FioFwReadBytesAtOffset @ 0x140184800
 * Callers:
 *     FioFwReadUlongAtOffset @ 0x140182C5C (FioFwReadUlongAtOffset.c)
 *     RaspLoadBearings @ 0x140184208 (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x1401843FC (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x140184430 (RaspInitializeGlyphData.c)
 *     RaspInitializeCompositeGlyphData @ 0x14034AA90 (RaspInitializeCompositeGlyphData.c)
 *     FopReadMappingTable @ 0x140A40720 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A408F4 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140A40A6C (FopReadCmapTable.c)
 *     BgpRasInitializeRasterizer @ 0x140A40BD0 (BgpRasInitializeRasterizer.c)
 *     FopReadNamingTable @ 0x140A40DC8 (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x140A40EF0 (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x140A40F60 (FopGetTableOffsetAndSize.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
