/*
 * XREFs of sfac_GetDataPtr @ 0x1C02BF6EC
 * Callers:
 *     sfac_ComputeMapping @ 0x1C02BF258 (sfac_ComputeMapping.c)
 *     sfac_CopyCVT @ 0x1C02BF498 (sfac_CopyCVT.c)
 *     sfac_CopyFontAndPrePrograms @ 0x1C02BF548 (sfac_CopyFontAndPrePrograms.c)
 *     sfac_GetGlyphIndex @ 0x1C02BF75C (sfac_GetGlyphIndex.c)
 *     sfac_GetGlyphLocation @ 0x1C02BF7D0 (sfac_GetGlyphLocation.c)
 *     sfac_GetMultiGlyphIDs @ 0x1C02BFA58 (sfac_GetMultiGlyphIDs.c)
 *     sfac_GetSbitBitmap @ 0x1C02BFB0C (sfac_GetSbitBitmap.c)
 *     sfac_GetSbitComponentInfo @ 0x1C02BFF98 (sfac_GetSbitComponentInfo.c)
 *     sfac_GetSbitMetrics @ 0x1C02C0030 (sfac_GetSbitMetrics.c)
 *     sfac_GetWinNTGlyphIDs @ 0x1C02C01A4 (sfac_GetWinNTGlyphIDs.c)
 *     sfac_LoadCriticalSfntMetrics @ 0x1C02C0278 (sfac_LoadCriticalSfntMetrics.c)
 *     sfac_ReadGlyphBbox @ 0x1C02C0798 (sfac_ReadGlyphBbox.c)
 *     sfac_ReadGlyphHeader @ 0x1C02C0868 (sfac_ReadGlyphHeader.c)
 *     sfac_ReadGlyphHorMetrics @ 0x1C02C09E4 (sfac_ReadGlyphHorMetrics.c)
 *     sfac_ReadGlyphVertMetrics @ 0x1C02C0B30 (sfac_ReadGlyphVertMetrics.c)
 *     sfac_ReadNumLongVertMetrics @ 0x1C02C0C74 (sfac_ReadNumLongVertMetrics.c)
 *     sfac_SearchForBitmap @ 0x1C02C10E8 (sfac_SearchForBitmap.c)
 *     sfac_SearchForStrike @ 0x1C02C15E4 (sfac_SearchForStrike.c)
 *     sfac_ShaveSbitMetrics @ 0x1C02C17D0 (sfac_ShaveSbitMetrics.c)
 * Callees:
 *     InvokeGetSfntFragmentPtr @ 0x1C02BEC0C (InvokeGetSfntFragmentPtr.c)
 */

__int64 __fastcall sfac_GetDataPtr(__int64 a1, int a2, int a3, int a4, int a5, __int64 *a6)
{
  int v6; // r10d
  __int64 v7; // rax

  v6 = a3;
  if ( *(_DWORD *)(a1 + 8LL * a4 + 28) )
  {
    if ( a3 == -1 )
      v6 = *(_DWORD *)(a1 + 8LL * a4 + 28);
    v7 = InvokeGetSfntFragmentPtr(*(_DWORD *)(a1 + 8), *(_QWORD *)a1, a2 + *(_DWORD *)(a1 + 8LL * a4 + 24), v6);
    *a6 = v7;
    if ( !v7 && a5 )
      return 5128LL;
  }
  else
  {
    *a6 = 0LL;
    if ( a5 )
      return 5129LL;
  }
  return 0LL;
}
