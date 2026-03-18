/*
 * XREFs of ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00D477C
 * Callers:
 *     EngBitBlt @ 0x1C009E5C0 (EngBitBlt.c)
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00CE554 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00D32E8 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 * Callees:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00D51B4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x1C00D5420 (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z.c)
 */

PVOID __fastcall pvGetEngRbrush(struct _BRUSHOBJ *a1)
{
  PVOID result; // rax
  __int64 v2; // rbx
  int RealizedBrush; // eax
  struct RBRUSH *pvRbrush; // rdx

  result = a1[1].pvRbrush;
  v2 = 0LL;
  if ( !result )
  {
    RealizedBrush = bGetRealizedBrush(
                      *(struct BRUSH **)&a1[4].flColorType,
                      (struct EBRUSHOBJ *)a1,
                      (int (*)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))EngRealizeBrush);
    pvRbrush = (struct RBRUSH *)a1[1].pvRbrush;
    if ( RealizedBrush )
    {
      vTryToCacheRealization((struct EBRUSHOBJ *)a1, pvRbrush, *(struct BRUSH **)&a1[4].flColorType, 1);
      return a1[1].pvRbrush;
    }
    else if ( pvRbrush )
    {
      Win32FreePool(a1[1].pvRbrush);
      a1[1].pvRbrush = 0LL;
    }
    return (PVOID)v2;
  }
  return result;
}
