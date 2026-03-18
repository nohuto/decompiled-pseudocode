/*
 * XREFs of ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C008F8E0
 * Callers:
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00AD8D4 (GreMaskBlt.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00F2E58 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     NtGdiStartPage @ 0x1C011AF50 (NtGdiStartPage.c)
 *     NtGdiExtFloodFill @ 0x1C0122B80 (NtGdiExtFloodFill.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C012AF0C (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C012BF70 (-GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C013B460 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiEndPage @ 0x1C0248C70 (NtGdiEndPage.c)
 *     GrePlgBlt @ 0x1C025E594 (GrePlgBlt.c)
 *     NtGdiUpdateColors @ 0x1C0288210 (NtGdiUpdateColors.c)
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
    if ( *(_QWORD *)(v1 + 504) )
    {
      v3 = *(_DWORD *)(v1 + 36);
      if ( (v3 & 0x1000) == 0 || (v3 & 0x4000) != 0 )
        return 1LL;
    }
  }
  return result;
}
