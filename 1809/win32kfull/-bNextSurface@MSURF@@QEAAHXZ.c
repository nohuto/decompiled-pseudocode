/*
 * XREFs of ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0289AC4
 * Callers:
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0284250 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02848C0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C0284F40 (-MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C0285CA0 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 *     ?MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C0286340 (-MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02864A0 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0286750 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0286AA0 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0287090 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0287950 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0287C50 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0287FE0 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0288320 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02889D8 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MSURF::bNextSurface(MSURF *this)
{
  __int64 ***v2; // rax
  __int64 **v3; // rdx
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 *v6; // rax
  POINTL *v7; // rax
  __int64 **v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // rcx
  char v12; // cl

  if ( !*((_QWORD *)this + 3) )
  {
    v9 = (__int64 **)*((_QWORD *)this + 7);
    v10 = *v9;
    for ( *((_QWORD *)this + 7) = *v9; ; *((_QWORD *)this + 7) = v10 )
    {
      if ( !v10 )
      {
        *(_OWORD *)(*((_QWORD *)this + 9) + 4LL) = *(_OWORD *)((char *)this + 8);
        *(_BYTE *)(*((_QWORD *)this + 9) + 20LL) = *((_BYTE *)this + 88);
        goto LABEL_26;
      }
      if ( (*(_DWORD *)(v10[7] + 40) & 0x400) == 0 )
      {
        if ( !*((_BYTE *)this + 88)
          && *((_DWORD *)this + 8) >= *((_DWORD *)v10 + 7)
          && *((_DWORD *)this + 9) >= *((_DWORD *)v10 + 8)
          && *((_DWORD *)this + 10) <= *((_DWORD *)v10 + 9)
          && *((_DWORD *)this + 11) <= *((_DWORD *)v10 + 10) )
        {
          *(_BYTE *)(*((_QWORD *)this + 9) + 20LL) = 0;
          *(_OWORD *)(*((_QWORD *)this + 9) + 4LL) = *((_OWORD *)this + 2);
          goto LABEL_30;
        }
        if ( bIntersect(
               (const struct _RECTL *)this + 2,
               (const struct _RECTL *)((char *)v10 + 28),
               (struct _RECTL *)(*((_QWORD *)this + 9) + 4LL)) )
        {
          v12 = 1;
          if ( *((_BYTE *)this + 88) )
            v12 = *((_BYTE *)this + 88);
          *(_BYTE *)(*((_QWORD *)this + 9) + 20LL) = v12;
LABEL_30:
          v11 = *((_QWORD *)this + 7);
          *((_QWORD *)this + 8) = *(_QWORD *)(v11 + 64);
          v7 = (POINTL *)(v11 + 72);
LABEL_13:
          *((_QWORD *)this + 10) = v7;
          return 1LL;
        }
        *(_OWORD *)(*((_QWORD *)this + 9) + 4LL) = *(_OWORD *)((char *)this + 8);
        v10 = (__int64 *)*((_QWORD *)this + 7);
      }
      v10 = (__int64 *)*v10;
    }
  }
  if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)this + 8)) + 116) & 4) != 0
    && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 7) + 56LL) + 2128LL) & 0x8000) == 0 )
  {
    *((_DWORD *)this + 12) |= 1u;
  }
  v2 = (__int64 ***)*((_QWORD *)this + 7);
  v3 = *v2;
  *((_QWORD *)this + 7) = *v2;
  if ( v3 )
  {
    v4 = *((_QWORD *)this + 3);
    while ( 1 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 8LL * *((unsigned int *)v3 + 4));
      if ( v5 )
      {
        if ( (v3[7][266] & 0x8000) != 0 || (*((_DWORD *)this + 12) & 1) == 0 )
          break;
      }
      v6 = *v3;
      *((_QWORD *)this + 7) = *v3;
      v3 = (__int64 **)v6;
      if ( !v6 )
        goto LABEL_26;
    }
    *((_QWORD *)this + 8) = v5;
    v7 = &gptlZero;
    goto LABEL_13;
  }
LABEL_26:
  if ( *((_DWORD *)this + 13) == 1 )
    EngDeleteClip(*((CLIPOBJ **)this + 9));
  return 0LL;
}
