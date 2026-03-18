/*
 * XREFs of ttfdSemQueryTrueTypeTable @ 0x1C0217770
 * Callers:
 *     <none>
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 *     bttfdMapFontFileFD @ 0x1C0217020 (bttfdMapFontFileFD.c)
 *     vMarkFontGone @ 0x1C0217898 (vMarkFontGone.c)
 *     ttfdQueryTrueTypeTable @ 0x1C0220B5C (ttfdQueryTrueTypeTable.c)
 */

__int64 __fastcall ttfdSemQueryTrueTypeTable(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        void *a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int TrueTypeTable; // edi

  TrueTypeTable = -1;
  if ( (unsigned int)bttfdMapFontFileFD(a1) )
  {
    EngAcquireSemaphore(ghsemTTFD);
    TrueTypeTable = ttfdQueryTrueTypeTable(a1, a2, a3, a4, a5, a6, a7, a8);
    EngReleaseSemaphore(ghsemTTFD);
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 56LL));
  }
  return TrueTypeTable;
}
