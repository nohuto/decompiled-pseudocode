/*
 * XREFs of InvokeReleaseSfntFrag @ 0x1C02BED34
 * Callers:
 *     sfac_ComputeMapping @ 0x1C02BF258 (sfac_ComputeMapping.c)
 *     sfac_CopyCVT @ 0x1C02BF498 (sfac_CopyCVT.c)
 *     sfac_CopyFontAndPrePrograms @ 0x1C02BF548 (sfac_CopyFontAndPrePrograms.c)
 *     sfac_DoOffsetTableMap @ 0x1C02BF614 (sfac_DoOffsetTableMap.c)
 *     sfac_GetGlyphIndex @ 0x1C02BF75C (sfac_GetGlyphIndex.c)
 *     sfac_GetGlyphLocation @ 0x1C02BF7D0 (sfac_GetGlyphLocation.c)
 *     sfac_GetMultiGlyphIDs @ 0x1C02BFA58 (sfac_GetMultiGlyphIDs.c)
 *     sfac_GetSbitBitmap @ 0x1C02BFB0C (sfac_GetSbitBitmap.c)
 *     sfac_GetSbitComponentInfo @ 0x1C02BFF98 (sfac_GetSbitComponentInfo.c)
 *     sfac_GetSbitMetrics @ 0x1C02C0030 (sfac_GetSbitMetrics.c)
 *     sfac_GetWinNTGlyphIDs @ 0x1C02C01A4 (sfac_GetWinNTGlyphIDs.c)
 *     sfac_LoadCriticalSfntMetrics @ 0x1C02C0278 (sfac_LoadCriticalSfntMetrics.c)
 *     sfac_ReadGlyphBbox @ 0x1C02C0798 (sfac_ReadGlyphBbox.c)
 *     sfac_ReadGlyphHorMetrics @ 0x1C02C09E4 (sfac_ReadGlyphHorMetrics.c)
 *     sfac_ReadGlyphVertMetrics @ 0x1C02C0B30 (sfac_ReadGlyphVertMetrics.c)
 *     sfac_ReadNumLongVertMetrics @ 0x1C02C0C74 (sfac_ReadNumLongVertMetrics.c)
 *     sfac_ReleaseGlyph @ 0x1C02C10B8 (sfac_ReleaseGlyph.c)
 *     sfac_SearchForBitmap @ 0x1C02C10E8 (sfac_SearchForBitmap.c)
 *     sfac_SearchForStrike @ 0x1C02C15E4 (sfac_SearchForStrike.c)
 *     sfac_ShaveSbitMetrics @ 0x1C02C17D0 (sfac_ShaveSbitMetrics.c)
 * Callees:
 *     <none>
 */

void __fastcall InvokeReleaseSfntFrag(int a1)
{
  if ( (unsigned int)(a1 - 1) >= 2 )
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
}
