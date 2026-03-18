/*
 * XREFs of ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0270C10
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02718A0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0273360 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02738A0 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02746E0 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02749C0 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0274D30 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02756D8 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0275BAC (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     MulDestroyBrushInternal @ 0x1C0276E50 (MulDestroyBrushInternal.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x1C023A720 (BRUSHOBJ_pvGetRbrush.c)
 */

MULTIBRUSH *__fastcall MULTIBRUSH::MULTIBRUSH(
        MULTIBRUSH *this,
        struct _BRUSHOBJ *a2,
        int a3,
        struct _VDEV *a4,
        struct _SURFOBJ *a5,
        int a6)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  void *v11; // rcx

  *((_QWORD *)this + 3) = 0LL;
  *(_DWORD *)this = 1;
  *((_QWORD *)this + 1) = a2;
  v9 = SURFOBJ_TO_SURFACE(a5);
  v10 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = -1LL;
  *((_QWORD *)this + 2) = v9;
  *((_DWORD *)this + 1) = -1;
  if ( v10 )
  {
    *((_QWORD *)this + 4) = *(_QWORD *)(v10 + 8);
    if ( a6 && *(_DWORD *)v10 == -1 )
    {
      *((_QWORD *)this + 3) = *(_QWORD *)(v10 + 88);
      if ( !*(_QWORD *)(v10 + 8) )
      {
        *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) = BRUSHOBJ_pvGetRbrush((BRUSHOBJ *)v10);
        v11 = *(void **)(*((_QWORD *)this + 1) + 8LL);
        *((_QWORD *)this + 4) = v11;
        if ( v11 )
        {
          memset(v11, 0, 16 * a3 + 8);
          **((_DWORD **)this + 4) = *((_DWORD *)a4 + 4);
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) - 8LL) = 1;
        }
        else
        {
          *(_DWORD *)this = 0;
        }
      }
    }
    else
    {
      *((_DWORD *)this + 1) = *(_DWORD *)v10;
    }
  }
  return this;
}
