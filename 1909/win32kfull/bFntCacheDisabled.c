/*
 * XREFs of bFntCacheDisabled @ 0x1C01418F4
 * Callers:
 *     InitFNTCache @ 0x1C0141490 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1C0141964 (bQueryFntCacheReg.c)
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
