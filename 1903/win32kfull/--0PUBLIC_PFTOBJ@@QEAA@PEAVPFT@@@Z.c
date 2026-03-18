/*
 * XREFs of ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C011D784
 * Callers:
 *     NtGdiFONTOBJ_pifi @ 0x1C0050D40 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiEngTextOut @ 0x1C0057310 (NtGdiEngTextOut.c)
 *     NtGdiAddEmbFontToDC @ 0x1C027A000 (NtGdiAddEmbFontToDC.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02AD160 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02AD3A0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     <none>
 */

PUBLIC_PFTOBJ *__fastcall PUBLIC_PFTOBJ::PUBLIC_PFTOBJ(PUBLIC_PFTOBJ *this, struct PFT *a2)
{
  *(_QWORD *)this = a2;
  return this;
}
