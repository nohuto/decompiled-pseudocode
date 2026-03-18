/*
 * XREFs of ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00580C8
 * Callers:
 *     NtGdiEngStretchBlt @ 0x1C00579B0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C0149620 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C01498A0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C0149D70 (NtGdiEngBitBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02AB240 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngGradientFill @ 0x1C02ABBA0 (NtGdiEngGradientFill.c)
 *     NtGdiEngPlgBlt @ 0x1C02AC390 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C02ACE00 (NtGdiEngTransparentBlt.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C02AE490 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02AE5A0 (NtGdiXLATEOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02AE610 (NtGdiXLATEOBJ_iXlate.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  if ( a2 == *(_QWORD *)(a1 + 216) )
    v3 = *(_QWORD *)(a1 + 208);
  else
    v3 = 0LL;
  if ( a2 )
  {
    if ( !v3 )
    {
      ++gdwUMPDUnmatchedUMPointers;
      if ( gfUMPDDebug )
        DbgPrint(
          "internal\\onecoreuapwindows\\private\\inc\\Core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unmatched usermode pointer.\n",
          771);
    }
  }
  if ( (*(_DWORD *)(a1 + 412) & 0x100) != 0 && v3 && v3 < (unsigned __int64)MmSystemRangeStart )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "internal\\onecoreuapwindows\\private\\inc\\Core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unexpected usermode pointer.\n",
        776);
    return 0LL;
  }
  return v3;
}
