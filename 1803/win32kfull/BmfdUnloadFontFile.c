/*
 * XREFs of BmfdUnloadFontFile @ 0x1C0225B08
 * Callers:
 *     BmfdUnloadFontFileTE @ 0x1C0224BB0 (BmfdUnloadFontFileTE.c)
 * Callees:
 *     vUnloadGlyphset @ 0x1C02ADC40 (vUnloadGlyphset.c)
 */

__int64 __fastcall BmfdUnloadFontFile(char *pv)
{
  char *v1; // rbx
  char *v3; // rdi

  v1 = pv + 40;
  v3 = &pv[88 * *((unsigned int *)pv + 7) + 40];
  EngAcquireSemaphore(ghsemBMFD);
  while ( v1 < v3 )
  {
    vUnloadGlyphset(&gpcpGlyphsets, *((_QWORD *)v1 + 9));
    v1 += 88;
  }
  EngReleaseSemaphore(ghsemBMFD);
  EngFreeMem(pv);
  return 1LL;
}
