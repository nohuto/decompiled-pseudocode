/*
 * XREFs of vtfdQueryFontDataTE @ 0x1C0228B20
 * Callers:
 *     <none>
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 *     bvtfdMapFontFileFD @ 0x1C0228950 (bvtfdMapFontFileFD.c)
 *     vVtfdMarkFontGone @ 0x1C0228980 (vVtfdMarkFontGone.c)
 *     vtfdQueryFontData @ 0x1C022A290 (vtfdQueryFontData.c)
 */

__int64 __fastcall vtfdQueryFontDataTE(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int v8; // esi
  unsigned int FontData; // ebx
  __int64 v10; // rdi

  v8 = a2;
  FontData = -1;
  v10 = a2 + 24;
  if ( (unsigned int)bvtfdMapFontFileFD(*(_QWORD *)(a2 + 24)) )
  {
    EngAcquireSemaphore(ghsemVTFD);
    FontData = vtfdQueryFontData(v8, a3, a4, a5, a6);
    EngReleaseSemaphore(ghsemVTFD);
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)v10 + 8LL));
  }
  return FontData;
}
