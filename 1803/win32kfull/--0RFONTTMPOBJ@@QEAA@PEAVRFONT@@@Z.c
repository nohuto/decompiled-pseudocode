/*
 * XREFs of ??0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C007777C
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C0076F24 (GreGetGlyphOutlineInternal.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C011E850 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiEngTextOut @ 0x1C011EBB0 (NtGdiEngTextOut.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C0284940 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C0284B80 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     <none>
 */

RFONTTMPOBJ *__fastcall RFONTTMPOBJ::RFONTTMPOBJ(RFONTTMPOBJ *this, struct RFONT *a2)
{
  RFONTTMPOBJ *result; // rax

  *((_DWORD *)this + 2) = 0;
  result = this;
  *(_QWORD *)this = a2;
  return result;
}
