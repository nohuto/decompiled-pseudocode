/*
 * XREFs of bServicingStackModifiedFonts @ 0x1C00C157C
 * Callers:
 *     InitFNTCache @ 0x1C00C2290 (InitFNTCache.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00C15D0 (bSetFntCacheReg.c)
 *     bQueryFntCacheReg @ 0x1C00C26BC (bQueryFntCacheReg.c)
 */

__int64 bServicingStackModifiedFonts()
{
  bQueryFntCacheReg(ghkeyGreInitialize);
  bSetFntCacheReg(2LL, 2LL);
  return 1LL;
}
