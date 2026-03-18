/*
 * XREFs of bServicingStackModifiedFonts @ 0x1C0055478
 * Callers:
 *     InitFNTCache @ 0x1C0056070 (InitFNTCache.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00554CC (bSetFntCacheReg.c)
 *     bQueryFntCacheReg @ 0x1C0056458 (bQueryFntCacheReg.c)
 */

__int64 bServicingStackModifiedFonts()
{
  bQueryFntCacheReg(ghkeyGreInitialize);
  bSetFntCacheReg(2LL, 2LL);
  return 1LL;
}
