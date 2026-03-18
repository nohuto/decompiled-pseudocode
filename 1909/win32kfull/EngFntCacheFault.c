/*
 * XREFs of EngFntCacheFault @ 0x1C02858B0
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0121D90 (UmfdDispatchEscape.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02D4664 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C0141A90 (bSetFntCacheReg.c)
 */

void __stdcall EngFntCacheFault(ULONG ulFastCheckSum, ULONG iFaultMode)
{
  int v2; // edx
  int v3; // edx

  if ( (dword_1C032A320 & 3) != 0 && qword_1C032A328 && iFaultMode - 1 <= 1 )
  {
    v2 = *(_DWORD *)(qword_1C032A328 + 16);
    if ( (v2 & 1) == 0 )
    {
      v3 = v2 | 1;
      *(_DWORD *)(qword_1C032A328 + 16) = v3;
      bSetFntCacheReg(1u, v3);
    }
  }
}
