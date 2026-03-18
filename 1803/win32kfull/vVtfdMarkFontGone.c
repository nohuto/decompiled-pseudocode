/*
 * XREFs of vVtfdMarkFontGone @ 0x1C0228980
 * Callers:
 *     vtfdQueryAdvanceWidthsTE @ 0x1C0228A60 (vtfdQueryAdvanceWidthsTE.c)
 *     vtfdQueryFontDataTE @ 0x1C0228B20 (vtfdQueryFontDataTE.c)
 *     vtfdQueryFontFileTE @ 0x1C0228BF0 (vtfdQueryFontFileTE.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 */

void __fastcall vVtfdMarkFontGone(int *a1, int a2)
{
  int v2; // eax

  if ( a2 == -1073741818 )
  {
    v2 = *a1;
    a1[7] |= 1u;
    if ( (unsigned int)(v2 - 1) <= 1 )
      EngUnmapFontFileFD(*((_QWORD *)a1 + 1));
  }
}
