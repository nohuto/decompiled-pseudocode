/*
 * XREFs of FioFwReadBytesAtOffset @ 0x14017BD48
 * Callers:
 *     FioFwReadUlongAtOffset @ 0x140179F88 (FioFwReadUlongAtOffset.c)
 *     RaspLoadBearings @ 0x14017B748 (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x14017B938 (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x14017B96C (RaspInitializeGlyphData.c)
 *     RaspInitializeCompositeGlyphData @ 0x1403293F8 (RaspInitializeCompositeGlyphData.c)
 *     FopReadMappingTable @ 0x1409FBABC (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x1409FBC8C (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x1409FBE20 (FopReadCmapTable.c)
 *     BgpRasInitializeRasterizer @ 0x1409FBF80 (BgpRasInitializeRasterizer.c)
 *     FopReadNamingTable @ 0x1409FC154 (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x1409FC278 (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x1409FC2E8 (FopGetTableOffsetAndSize.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
