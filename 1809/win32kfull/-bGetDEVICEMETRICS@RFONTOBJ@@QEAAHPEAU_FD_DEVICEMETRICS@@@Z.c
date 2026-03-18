/*
 * XREFs of ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0080D04
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00855CC (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0083BC8 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 */

__int64 __fastcall RFONTOBJ::bGetDEVICEMETRICS(POINTL **this, struct _FD_DEVICEMETRICS *a2)
{
  FD_XFORM v4; // xmm0
  struct _FONTOBJ *v5; // r8
  struct DHPDEV__ *v6; // rdx
  unsigned int v7; // r8d
  FLONG flRealizedType; // eax
  FIX fxMaxAscender; // eax
  FIX fxMaxDescender; // edx
  POINTL *v11; // rcx
  LONG y; // r10d
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // edx
  unsigned __int64 v16; // r9
  POINTL v19; // [rsp+40h] [rbp-18h] BYREF

  v4 = *(FD_XFORM *)&(*this)[17].x;
  a2->lNonLinearExtLeading = 0x80000000;
  a2->fdxQuantized = v4;
  a2->lNonLinearIntLeading = 0x80000000;
  a2->lNonLinearMaxCharWidth = 0x80000000;
  a2->lNonLinearAvgCharWidth = 0x80000000;
  v5 = (struct _FONTOBJ *)*this;
  v6 = (struct DHPDEV__ *)(*this)[14];
  v19 = (*this)[16];
  if ( (unsigned int)PFFOBJ::QueryFontData((PFFOBJ *)&v19, v6, v5, 3u, 0xFFFFFFFF, 0LL, a2, 0x7Cu) == -1 )
    return 0;
  v7 = 1;
  (*this)[34].y = 1;
  flRealizedType = a2->flRealizedType;
  if ( (a2->flRealizedType & 2) != 0 )
  {
    (*this)[34].y |= 0x40u;
    flRealizedType = a2->flRealizedType;
  }
  if ( (flRealizedType & 4) != 0 )
  {
    (*this)[34].y |= 0x20u;
    flRealizedType = a2->flRealizedType;
  }
  if ( (flRealizedType & 8) != 0 )
    (*this)[34].y |= 0x10u;
  (*this)[43].x = a2->cxMax;
  (*this)[35] = a2->ptlUnderline1;
  (*this)[36] = a2->ptlStrikeout;
  (*this)[37] = a2->ptlULThickness;
  (*this)[38] = a2->ptlSOThickness;
  fxMaxAscender = a2->fxMaxAscender;
  if ( fxMaxAscender < 0 )
  {
    fxMaxAscender = a2->fxMaxDescender;
  }
  else
  {
    fxMaxDescender = a2->fxMaxDescender;
    if ( fxMaxDescender >= 0 )
      fxMaxAscender += fxMaxDescender;
  }
  (*this)[40].y = fxMaxAscender;
  (*this)[39].y = a2->fxMaxAscender;
  (*this)[40].x = -a2->fxMaxDescender;
  (*this)[44].x = ((*this)[39].y + 8) >> 4;
  (*this)[44].y = ((*this)[39].y - (*this)[40].x + 8) >> 4;
  (*this)[39].x = a2->lD;
  if ( (*this)[39].x < 0 )
    return 0;
  (*this)[43].y = a2->cyMax;
  (*this)[79].x = a2->cjGlyphMax;
  (*this)[79].y = a2->cjGlyphMax;
  v11 = *this;
  y = (*this)[1].y;
  if ( (y & 0x10000000) != 0 )
  {
    v13 = (unsigned int)v11[43].y;
    v14 = v13 * ((unsigned int)v11[43].x + 2LL);
    if ( (y & 0x20000000) != 0 )
    {
      v14 *= 5LL;
      v15 = (v11[43].x + 2) * (v13 + 1);
    }
    else
    {
      v15 = v13 * (v11[43].x + 2);
    }
    v16 = ((v14 + 3) & 0xFFFFFFFFFFFFFFFCuLL) + 16;
    if ( v16 <= 0xFFFFFFFF )
    {
      v11[79].x = ((v15 + 3) & 0xFFFFFFFC) + 16;
      (*this)[79].y = v16;
      v11 = *this;
      goto LABEL_17;
    }
    return 0;
  }
LABEL_17:
  *(FD_XFORM *)&v11[45].x = a2->fdxQuantized;
  (*this)[47].x = a2->lNonLinearExtLeading;
  (*this)[47].y = a2->lNonLinearIntLeading;
  (*this)[48].x = a2->lNonLinearMaxCharWidth;
  (*this)[48].y = a2->lNonLinearAvgCharWidth;
  (*this)[87].x = a2->lMinA;
  (*this)[87].y = a2->lMinC;
  (*this)[88].x = a2->lMinD;
  (*this)[1].x = (*this)[43].x;
  return v7;
}
