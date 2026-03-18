/*
 * XREFs of FioFwReadBytesAtOffset @ 0x14017BC28
 * Callers:
 *     FioFwReadUlongAtOffset @ 0x140179E68 (FioFwReadUlongAtOffset.c)
 *     RaspLoadBearings @ 0x14017B628 (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x14017B818 (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x14017B84C (RaspInitializeGlyphData.c)
 *     RaspInitializeCompositeGlyphData @ 0x140329108 (RaspInitializeCompositeGlyphData.c)
 *     FopReadMappingTable @ 0x1409FAAAC (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x1409FAC7C (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x1409FAE10 (FopReadCmapTable.c)
 *     BgpRasInitializeRasterizer @ 0x1409FAF70 (BgpRasInitializeRasterizer.c)
 *     FopReadNamingTable @ 0x1409FB144 (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x1409FB268 (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x1409FB2D8 (FopGetTableOffsetAndSize.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
