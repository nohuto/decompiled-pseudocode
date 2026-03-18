/*
 * XREFs of EngFntCacheFault @ 0x1C0285F70
 * Callers:
 *     UmfdDispatchEscape @ 0x1C007CF40 (UmfdDispatchEscape.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02D4B14 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00E6B38 (bSetFntCacheReg.c)
 */

void __stdcall EngFntCacheFault(ULONG ulFastCheckSum, ULONG iFaultMode)
{
  int v2; // edx
  int v3; // edx

  if ( (dword_1C032C330 & 3) != 0 && qword_1C032C338 && iFaultMode - 1 <= 1 )
  {
    v2 = *(_DWORD *)(qword_1C032C338 + 16);
    if ( (v2 & 1) == 0 )
    {
      v3 = v2 | 1;
      *(_DWORD *)(qword_1C032C338 + 16) = v3;
      bSetFntCacheReg(1u, v3);
    }
  }
}
