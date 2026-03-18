/*
 * XREFs of EngFntCacheFault @ 0x1C025A100
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0082100 (UmfdDispatchEscape.c)
 *     bLoadTTF_Cache @ 0x1C0219E58 (bLoadTTF_Cache.c)
 *     vFontFileCache @ 0x1C021CF54 (vFontFileCache.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02AF9E4 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00554CC (bSetFntCacheReg.c)
 */

void __stdcall EngFntCacheFault(ULONG ulFastCheckSum, ULONG iFaultMode)
{
  int v2; // edx
  int v3; // edx

  if ( (dword_1C0326C50 & 3) != 0 && qword_1C0326C58 && iFaultMode - 1 <= 1 )
  {
    v2 = *(_DWORD *)(qword_1C0326C58 + 16);
    if ( (v2 & 1) == 0 )
    {
      v3 = v2 | 1;
      *(_DWORD *)(qword_1C0326C58 + 16) = v3;
      bSetFntCacheReg(1u, v3);
    }
  }
}
