/*
 * XREFs of ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C015F158
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C011EA1C (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     NtGdiAddEmbFontToDC @ 0x1C0260960 (NtGdiAddEmbFontToDC.c)
 *     vUnlinkEudcRFONTs @ 0x1C027C8C0 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C027C9B8 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     <none>
 */

PUBLIC_PFTOBJ *__fastcall PUBLIC_PFTOBJ::PUBLIC_PFTOBJ(PUBLIC_PFTOBJ *this, struct PFT *a2)
{
  *(_QWORD *)this = a2;
  return this;
}
