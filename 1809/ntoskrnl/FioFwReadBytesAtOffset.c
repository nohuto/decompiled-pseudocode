/*
 * XREFs of FioFwReadBytesAtOffset @ 0x14017BC48
 * Callers:
 *     FioFwReadUlongAtOffset @ 0x140179E88 (FioFwReadUlongAtOffset.c)
 *     RaspLoadBearings @ 0x14017B648 (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x14017B838 (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x14017B86C (RaspInitializeGlyphData.c)
 *     RaspInitializeCompositeGlyphData @ 0x140329208 (RaspInitializeCompositeGlyphData.c)
 *     FopReadMappingTable @ 0x1409FAABC (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x1409FAC8C (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x1409FAE20 (FopReadCmapTable.c)
 *     BgpRasInitializeRasterizer @ 0x1409FAF80 (BgpRasInitializeRasterizer.c)
 *     FopReadNamingTable @ 0x1409FB154 (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x1409FB278 (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x1409FB2E8 (FopGetTableOffsetAndSize.c)
 * Callees:
 *     memmove @ 0x1401D1540 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
