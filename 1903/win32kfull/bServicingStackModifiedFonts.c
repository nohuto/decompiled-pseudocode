/*
 * XREFs of bServicingStackModifiedFonts @ 0x1C00E6AE4
 * Callers:
 *     InitFNTCache @ 0x1C00E8060 (InitFNTCache.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00E6B38 (bSetFntCacheReg.c)
 *     bQueryFntCacheReg @ 0x1C00E84C4 (bQueryFntCacheReg.c)
 */

__int64 bServicingStackModifiedFonts()
{
  bQueryFntCacheReg(ghkeyGreInitialize);
  bSetFntCacheReg(2LL, 2LL);
  return 1LL;
}
