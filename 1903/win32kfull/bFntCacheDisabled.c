/*
 * XREFs of bFntCacheDisabled @ 0x1C00E8454
 * Callers:
 *     InitFNTCache @ 0x1C00E8060 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1C00E84C4 (bQueryFntCacheReg.c)
 */

__int64 bFntCacheDisabled()
{
  unsigned int v0; // ebx

  v0 = 0;
  bQueryFntCacheReg(ghkeyGreInitialize);
  if ( !G_fConsole )
    return (unsigned int)bQueryFntCacheReg(ghkeyGreInitialize) == 0;
  return v0;
}
