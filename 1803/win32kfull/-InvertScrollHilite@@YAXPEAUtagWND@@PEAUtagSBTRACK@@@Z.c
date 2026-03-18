/*
 * XREFs of ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C01FFE00
 * Callers:
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02007D0 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C01FFE90 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall InvertScrollHilite(struct tagWND *a1, const struct tagRECT *a2)
{
  const struct tagRECT *v2; // rdi
  struct tagSBTRACK *v5; // rdx
  HDC DCEx; // rbx

  v2 = a2 + 2;
  if ( !IsRectEmptyInl(a2 + 2) )
  {
    if ( (*(_DWORD *)v5 & 8) != 0 )
    {
      RecalcTrackRect(v5);
      a2->left &= ~8u;
    }
    DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
    NtGdiPatBlt(DCEx, (unsigned int)v2->left, v2->top, v2->right - v2->left, v2->bottom - v2->top, 5570569);
    _ReleaseDC(DCEx);
  }
}
