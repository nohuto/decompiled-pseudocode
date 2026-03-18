/*
 * XREFs of ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0078E34
 * Callers:
 *     EngFillPath @ 0x1C0078A80 (EngFillPath.c)
 * Callees:
 *     ?bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z @ 0x1C007A8C4 (-bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00F468C (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02C7FC0 (-bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02C8138 (-bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 */

__int64 __fastcall EngFastFill(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v11; // ebp
  unsigned int *v12; // rsi
  int v14; // edx
  ULONG iSolidColor; // r9d
  unsigned int v17; // ecx
  _DWORD *pvRbrush; // rax

  v11 = -1;
  v12 = (unsigned int *)SURFOBJ_TO_SURFACE(a1);
  if ( a1->iType )
    return v11;
  v14 = gaMix[a6 & 0xF] | (gaMix[(a6 >> 8) & 0xF] << 8);
  switch ( v14 )
  {
    case 0:
      iSolidColor = 0;
      return (unsigned int)bPaintPath((struct SURFACE *)v12, a2, a3, iSolidColor, 0, a7);
    case 0xF0F0:
      iSolidColor = a4->iSolidColor;
      if ( a4->iSolidColor != -1 )
        return (unsigned int)bPaintPath((struct SURFACE *)v12, a2, a3, iSolidColor, 0, a7);
      v17 = v12[24];
      if ( v17 - 2 <= 1 )
      {
        if ( !pvGetEngRbrush(a4) )
          return v11;
        pvRbrush = a4[1].pvRbrush;
        if ( pvRbrush[5] != 8 || pvRbrush[6] != 8 )
          return v11;
        return (unsigned int)bBrushPathN_8x8((struct SURFACE *)v12, a2, a3, a4, a5, v12[24], a7);
      }
      else
      {
        if ( v17 < 3 || !pvGetEngRbrush(a4) || *((_DWORD *)a4[1].pvRbrush + 5) < 4u )
          return v11;
        return (unsigned int)bBrushPath((struct SURFACE *)v12, a2, a3, a4, a5, 0, a7);
      }
    case 0xF0F:
      if ( a4->iSolidColor != -1 )
      {
        iSolidColor = ~a4->iSolidColor;
        return (unsigned int)bPaintPath((struct SURFACE *)v12, a2, a3, iSolidColor, 0, a7);
      }
      if ( v12[24] < 3 || !pvGetEngRbrush(a4) || *((_DWORD *)a4[1].pvRbrush + 5) < 4u )
        return v11;
      return (unsigned int)bBrushPath((struct SURFACE *)v12, a2, a3, a4, a5, 1u, a7);
    case 0x5555:
      return (unsigned int)bPaintPath((struct SURFACE *)v12, a2, a3, 0xFFFFFFFF, 1, a7);
    case 0x5A5A:
      if ( a4->iSolidColor == -1 )
      {
        if ( v12[24] < 3 || !pvGetEngRbrush(a4) || *((_DWORD *)a4[1].pvRbrush + 5) < 4u )
          return v11;
        return (unsigned int)bBrushPath((struct SURFACE *)v12, a2, a3, a4, a5, 2u, a7);
      }
      else
      {
        return (unsigned int)bPaintPath((struct SURFACE *)v12, a2, a3, a4->iSolidColor, 1, a7);
      }
    case 0xAAAA:
      return 1;
    case 0xFFFF:
      iSolidColor = -1;
      return (unsigned int)bPaintPath((struct SURFACE *)v12, a2, a3, iSolidColor, 0, a7);
  }
  return v11;
}
