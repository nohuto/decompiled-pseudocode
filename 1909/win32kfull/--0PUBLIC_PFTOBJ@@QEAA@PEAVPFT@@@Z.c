/*
 * XREFs of ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C00F7214
 * Callers:
 *     NtGdiFONTOBJ_pifi @ 0x1C009A5A0 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiEngTextOut @ 0x1C00A0BA0 (NtGdiEngTextOut.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C0102DE8 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     NtGdiAddEmbFontToDC @ 0x1C0279940 (NtGdiAddEmbFontToDC.c)
 *     vUnlinkEudcRFONTs @ 0x1C0292640 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C0292738 (vUnlinkEudcRFONTsAndPFEs.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02ACCB0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02ACEF0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     <none>
 */

PUBLIC_PFTOBJ *__fastcall PUBLIC_PFTOBJ::PUBLIC_PFTOBJ(PUBLIC_PFTOBJ *this, struct PFT *a2)
{
  *(_QWORD *)this = a2;
  return this;
}
