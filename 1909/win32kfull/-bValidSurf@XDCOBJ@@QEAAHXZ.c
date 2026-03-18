/*
 * XREFs of ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00BC8F0
 * Callers:
 *     GrePlgBlt @ 0x1C0008764 (GrePlgBlt.c)
 *     GreStretchBltInternal @ 0x1C00BB5E8 (GreStretchBltInternal.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C00F703C (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     NtGdiStartPage @ 0x1C00F8470 (NtGdiStartPage.c)
 *     ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C00FC268 (-GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0123D78 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     GreMaskBlt @ 0x1C0124474 (GreMaskBlt.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C01661E4 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiEndPage @ 0x1C0279D00 (NtGdiEndPage.c)
 *     NtGdiUpdateColors @ 0x1C02B0950 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02B2100 (NtGdiExtFloodFill.c)
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
