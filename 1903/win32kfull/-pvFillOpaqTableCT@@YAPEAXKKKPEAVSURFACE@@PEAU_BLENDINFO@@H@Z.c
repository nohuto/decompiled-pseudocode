/*
 * XREFs of ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00D6330
 * Callers:
 *     vSrcTranCopyS8D32 @ 0x1C00D6020 (vSrcTranCopyS8D32.c)
 *     ?vSrcTranCopyS8D16New@@YAXPEAEJJ0JJJJKKPEAVSURFACE@@P6AXPEBE00JPEAPEAG@Z0@Z @ 0x1C0276184 (-vSrcTranCopyS8D16New@@YAXPEAEJJ0JJJJKKPEAVSURFACE@@P6AXPEBE00JPEAPEAG@Z0@Z.c)
 *     vSrcOpaqCopyS8D16 @ 0x1C0276C90 (vSrcOpaqCopyS8D16.c)
 *     vSrcOpaqCopyS8D24 @ 0x1C0276DF0 (vSrcOpaqCopyS8D24.c)
 *     vSrcTranCopyS8D24 @ 0x1C0278700 (vSrcTranCopyS8D24.c)
 * Callees:
 *     ?vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAU_BLENDINFO@@@Z @ 0x1C00D63E4 (-vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAU_BLENDINFO@@@Z.c)
 *     ?vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAU_BLENDINFO@@KK@Z @ 0x1C00D6600 (-vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAU_BLENDINFO@@KK@Z.c)
 */

unsigned int near **__fastcall pvFillOpaqTableCT(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        struct SURFACE *a4,
        struct _BLENDINFO *a5,
        int a6)
{
  char v10; // di

  if ( *(void **)a4 == hCacheCT && a3 == uBCacheCT && a2 == uFCacheCT && gulGamma == uGammaCacheCT )
  {
    v10 = 1;
    if ( !a6 )
      return &aulCacheCT;
  }
  else
  {
    v10 = 0;
  }
  vGetBlendInfo(a1, a4, a2, a5);
  if ( !v10 )
    vClearTypeLookupTableLoop(a1, a4, a5, a2, a3);
  return &aulCacheCT;
}
