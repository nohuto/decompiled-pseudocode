/*
 * XREFs of ttfdSemQueryFontTree @ 0x1C0217550
 * Callers:
 *     <none>
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 *     bttfdMapFontFileFD @ 0x1C0217020 (bttfdMapFontFileFD.c)
 *     ttfdQueryFontTree @ 0x1C02209FC (ttfdQueryFontTree.c)
 */

__int64 __fastcall ttfdSemQueryFontTree(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 FontTree; // rbx
  int v9; // ecx

  FontTree = 0LL;
  if ( (unsigned int)bttfdMapFontFileFD(a2) )
  {
    EngAcquireSemaphore(ghsemTTFD);
    FontTree = ttfdQueryFontTree(v9, a2, a3, a4, a5);
    EngReleaseSemaphore(ghsemTTFD);
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 56LL));
  }
  return FontTree;
}
