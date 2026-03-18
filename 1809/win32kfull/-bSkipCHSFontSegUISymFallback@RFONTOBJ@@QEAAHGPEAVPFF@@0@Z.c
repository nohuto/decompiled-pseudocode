/*
 * XREFs of ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C0161770
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C00C5440 (GreGetGlyphOutlineInternal.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C00C5D64 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::bSkipCHSFontSegUISymFallback(RFONTOBJ *this, __int16 a2, struct PFF *a3, struct PFF *a4)
{
  __int64 result; // rax

  if ( gbAllowSCPUAFontFallback
    || (unsigned __int16)(a2 + 0x2000) > 0x18FFu
    || (*((_DWORD *)a4 + 13) & 0x4000) == 0
    || (*((_DWORD *)a3 + 13) & 0x8000) == 0 )
  {
    return 0LL;
  }
  result = 1LL;
  ++*((_DWORD *)this + 2);
  return result;
}
