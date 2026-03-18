/*
 * XREFs of ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C00EE73C
 * Callers:
 *     NtGdiEngTextOut @ 0x1C00A0BA0 (NtGdiEngTextOut.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02AA374 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02ADB70 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x1C02ADC90 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiSTROBJ_vEnumStart @ 0x1C02ADD00 (NtGdiSTROBJ_vEnumStart.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_STROBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  if ( a2 == *(_QWORD *)(a1 + 200) )
    v3 = *(_QWORD *)(a1 + 192);
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
          767);
    }
  }
  if ( (*(_DWORD *)(a1 + 412) & 0x100) != 0 && v3 && v3 < (unsigned __int64)MmSystemRangeStart )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "internal\\onecoreuapwindows\\private\\inc\\Core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unexpected usermode pointer.\n",
        772);
    return 0LL;
  }
  return v3;
}
