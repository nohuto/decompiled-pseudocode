/*
 * XREFs of ttfdSemQueryAdvanceWidths @ 0x1C02173A0
 * Callers:
 *     <none>
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 *     bttfdMapFontFileFD @ 0x1C0217020 (bttfdMapFontFileFD.c)
 *     vMarkFontGone @ 0x1C0217898 (vMarkFontGone.c)
 *     bQueryAdvanceWidths @ 0x1C021EA18 (bQueryAdvanceWidths.c)
 */

__int64 __fastcall ttfdSemQueryAdvanceWidths(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  int v8; // esi
  unsigned int AdvanceWidths; // ebx
  __int64 v10; // rdi

  v8 = a2;
  AdvanceWidths = -1;
  v10 = a2 + 24;
  if ( (unsigned int)bttfdMapFontFileFD(*(_QWORD *)(a2 + 24)) )
  {
    EngAcquireSemaphore(ghsemTTFD);
    AdvanceWidths = bQueryAdvanceWidths(v8, a3, a4, a5, a6);
    EngReleaseSemaphore(ghsemTTFD);
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 48LL) + 56LL));
  }
  return AdvanceWidths;
}
