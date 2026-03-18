/*
 * XREFs of ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C008F4AC
 * Callers:
 *     NtGdiEngStretchBlt @ 0x1C008ED60 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C01475B0 (NtGdiEngCopyBits.c)
 *     NtGdiEngBitBlt @ 0x1C0147840 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C0147ED0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngAlphaBlend @ 0x1C0296030 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngGradientFill @ 0x1C0296A50 (NtGdiEngGradientFill.c)
 *     NtGdiEngPlgBlt @ 0x1C02972D0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C0297DC0 (NtGdiEngTransparentBlt.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C0299600 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C0299730 (NtGdiXLATEOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02997C0 (NtGdiXLATEOBJ_iXlate.c)
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
          795);
    }
  }
  if ( (*(_DWORD *)(a1 + 412) & 0x100) != 0 && v3 && v3 < (unsigned __int64)MmSystemRangeStart )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "internal\\onecoreuapwindows\\private\\inc\\Core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unexpected usermode pointer.\n",
        800);
    return 0LL;
  }
  return v3;
}
