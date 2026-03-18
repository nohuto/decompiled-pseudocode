/*
 * XREFs of ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C004CA70
 * Callers:
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0098F00 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     NtGdiStartPage @ 0x1C00E3160 (NtGdiStartPage.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C011B3C8 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C011D808 (-GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z.c)
 *     NtGdiExtFloodFill @ 0x1C0141900 (NtGdiExtFloodFill.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C015F82C (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiEndPage @ 0x1C0260D10 (NtGdiEndPage.c)
 *     GrePlgBlt @ 0x1C0272010 (GrePlgBlt.c)
 *     NtGdiUpdateColors @ 0x1C029BF50 (NtGdiUpdateColors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bValidSurf(XDCOBJ *this)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // ecx

  v1 = *(_QWORD *)this;
  result = 0LL;
  if ( *(_QWORD *)this )
  {
    if ( *(_QWORD *)(v1 + 496) )
    {
      v3 = *(_DWORD *)(v1 + 36);
      if ( (v3 & 0x1000) == 0 || (v3 & 0x4000) != 0 )
        return 1LL;
    }
  }
  return result;
}
