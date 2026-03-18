/*
 * XREFs of ttfdSemQueryFontData @ 0x1C0217470
 * Callers:
 *     <none>
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 *     bttfdMapFontFileFD @ 0x1C0217020 (bttfdMapFontFileFD.c)
 *     vMarkFontGone @ 0x1C0217898 (vMarkFontGone.c)
 *     ttfdQueryFontData @ 0x1C02205F4 (ttfdQueryFontData.c)
 */

__int64 __fastcall ttfdSemQueryFontData(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  int v9; // esi
  unsigned int FontData; // ebx
  __int64 v11; // rdi

  v9 = a2;
  FontData = -1;
  v11 = a2 + 24;
  if ( (unsigned int)bttfdMapFontFileFD(*(_QWORD *)(a2 + 24)) )
  {
    EngAcquireSemaphore(ghsemTTFD);
    FontData = ttfdQueryFontData(v9, a3, a4, a5, a6, a7);
    EngReleaseSemaphore(ghsemTTFD);
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 48LL) + 56LL));
  }
  return FontData;
}
