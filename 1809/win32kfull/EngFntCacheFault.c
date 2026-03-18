/*
 * XREFs of EngFntCacheFault @ 0x1C026D6F0
 * Callers:
 *     UmfdDispatchEscape @ 0x1C008C040 (UmfdDispatchEscape.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02C1A44 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00C15D0 (bSetFntCacheReg.c)
 */

void __stdcall EngFntCacheFault(ULONG ulFastCheckSum, ULONG iFaultMode)
{
  int v2; // edx
  int v3; // edx

  if ( (dword_1C0317300 & 3) != 0 && qword_1C0317308 && iFaultMode - 1 <= 1 )
  {
    v2 = *(_DWORD *)(qword_1C0317308 + 16);
    if ( (v2 & 1) == 0 )
    {
      v3 = v2 | 1;
      *(_DWORD *)(qword_1C0317308 + 16) = v3;
      bSetFntCacheReg(1u, v3);
    }
  }
}
