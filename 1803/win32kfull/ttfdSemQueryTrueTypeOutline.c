/*
 * XREFs of ttfdSemQueryTrueTypeOutline @ 0x1C0217690
 * Callers:
 *     <none>
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 *     bttfdMapFontFileFD @ 0x1C0217020 (bttfdMapFontFileFD.c)
 *     vMarkFontGone @ 0x1C0217898 (vMarkFontGone.c)
 *     ttfdQueryTrueTypeOutline @ 0x1C021E074 (ttfdQueryTrueTypeOutline.c)
 */

__int64 __fastcall ttfdSemQueryTrueTypeOutline(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  int v9; // esi
  unsigned int TrueTypeOutline; // ebx
  __int64 v11; // rdi

  v9 = a2;
  TrueTypeOutline = -1;
  v11 = a2 + 24;
  if ( (unsigned int)bttfdMapFontFileFD(*(_QWORD *)(a2 + 24)) )
  {
    EngAcquireSemaphore(ghsemTTFD);
    TrueTypeOutline = ttfdQueryTrueTypeOutline(v9, a3, a4, a5, a6, a7);
    EngReleaseSemaphore(ghsemTTFD);
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 48LL) + 56LL));
  }
  return TrueTypeOutline;
}
