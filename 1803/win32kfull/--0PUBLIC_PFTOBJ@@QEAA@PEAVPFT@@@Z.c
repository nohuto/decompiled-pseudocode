/*
 * XREFs of ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C0139518
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C00FF55C (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     NtGdiAddEmbFontToDC @ 0x1C0248900 (NtGdiAddEmbFontToDC.c)
 *     vUnlinkEudcRFONTs @ 0x1C02689D4 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C0268AC0 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     <none>
 */

PUBLIC_PFTOBJ *__fastcall PUBLIC_PFTOBJ::PUBLIC_PFTOBJ(PUBLIC_PFTOBJ *this, struct PFT *a2)
{
  *(_QWORD *)this = a2;
  return this;
}
