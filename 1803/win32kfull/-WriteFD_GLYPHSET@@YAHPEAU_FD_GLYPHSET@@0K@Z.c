/*
 * XREFs of ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C00DEC38
 * Callers:
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00DE6D0 (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C0282C80 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C0284CD0 (NtGdiFONTOBJ_pfdg.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall WriteFD_GLYPHSET(struct _FD_GLYPHSET *a1, struct _FD_GLYPHSET *a2, ULONG a3)
{
  ULONG cRuns; // r14d
  ULONG i; // ebx
  __int64 v7; // rdx
  HGLYPH *phg; // rax
  HGLYPH *v9; // rcx

  cRuns = a2->cRuns;
  a1->cjThis = a3;
  a1->flAccel = a2->flAccel;
  a1->cGlyphsSupported = a2->cGlyphsSupported;
  a1->cRuns = a2->cRuns;
  for ( i = 0; i < cRuns; ++i )
  {
    v7 = i;
    a1->awcrun[v7].wcLow = a2->awcrun[i].wcLow;
    a1->awcrun[v7].cGlyphs = a2->awcrun[i].cGlyphs;
    phg = a2->awcrun[i].phg;
    if ( phg )
    {
      v9 = (ULONG *)((char *)&a1->cjThis + (unsigned int)((_DWORD)phg - (_DWORD)a2));
      a1->awcrun[i].phg = v9;
      memmove(v9, a2->awcrun[i].phg, 4LL * a2->awcrun[i].cGlyphs);
    }
    else
    {
      a1->awcrun[i].phg = 0LL;
    }
  }
  return 1LL;
}
