/*
 * XREFs of bServicingStackModifiedFonts @ 0x1C0141A3C
 * Callers:
 *     InitFNTCache @ 0x1C0141490 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1C0141964 (bQueryFntCacheReg.c)
 *     bSetFntCacheReg @ 0x1C0141A90 (bSetFntCacheReg.c)
 */

_BOOL8 bServicingStackModifiedFonts()
{
  BOOL v0; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v0 = 1;
  if ( (unsigned int)bQueryFntCacheReg(ghkeyGreInitialize, L"ServicingStackModifiedFonts", &v2) )
    v0 = v2 != 2;
  bSetFntCacheReg(2LL, 2LL);
  return v0;
}
