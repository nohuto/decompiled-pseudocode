/*
 * XREFs of FioFwReadBytesAtOffset @ 0x140184DB0
 * Callers:
 *     FioFwReadUlongAtOffset @ 0x14018320C (FioFwReadUlongAtOffset.c)
 *     RaspLoadBearings @ 0x1401847B8 (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x1401849AC (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x1401849E0 (RaspInitializeGlyphData.c)
 *     RaspInitializeCompositeGlyphData @ 0x14034A4F0 (RaspInitializeCompositeGlyphData.c)
 *     FopReadMappingTable @ 0x140A404F0 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A406C4 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140A4083C (FopReadCmapTable.c)
 *     BgpRasInitializeRasterizer @ 0x140A409A0 (BgpRasInitializeRasterizer.c)
 *     FopReadNamingTable @ 0x140A40B98 (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x140A40CC0 (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x140A40D30 (FopGetTableOffsetAndSize.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
