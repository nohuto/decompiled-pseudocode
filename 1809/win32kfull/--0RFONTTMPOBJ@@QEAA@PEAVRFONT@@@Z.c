/*
 * XREFs of ??0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C00C5D50
 * Callers:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C000359C (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C00879A0 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiEngTextOut @ 0x1C008E9B0 (NtGdiEngTextOut.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00C5440 (GreGetGlyphOutlineInternal.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C0298150 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02983B0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
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
