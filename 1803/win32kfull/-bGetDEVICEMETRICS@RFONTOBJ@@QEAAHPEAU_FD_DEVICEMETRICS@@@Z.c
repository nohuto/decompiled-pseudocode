/*
 * XREFs of ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0084F4C
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0085C94 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0080A04 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
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
  POINTL *v11; // rdx
  LONG y; // r9d
  int v13; // eax
  POINTL v16; // [rsp+40h] [rbp-18h] BYREF

  v4 = *(FD_XFORM *)&(*this)[15].x;
  a2->lNonLinearExtLeading = 0x80000000;
  a2->fdxQuantized = v4;
  a2->lNonLinearIntLeading = 0x80000000;
  a2->lNonLinearMaxCharWidth = 0x80000000;
  a2->lNonLinearAvgCharWidth = 0x80000000;
  v5 = (struct _FONTOBJ *)*this;
  v6 = (struct DHPDEV__ *)(*this)[12];
  v16 = (*this)[14];
  if ( (unsigned int)PFFOBJ::QueryFontData((PFFOBJ *)&v16, v6, v5, 3u, 0xFFFFFFFF, 0LL, a2, 0x7Cu) == -1 )
    return 0;
  v7 = 1;
  (*this)[32].y = 1;
  flRealizedType = a2->flRealizedType;
  if ( (a2->flRealizedType & 2) != 0 )
  {
    (*this)[32].y |= 0x40u;
    flRealizedType = a2->flRealizedType;
  }
  if ( (flRealizedType & 4) != 0 )
  {
    (*this)[32].y |= 0x20u;
    flRealizedType = a2->flRealizedType;
  }
  if ( (flRealizedType & 8) != 0 )
    (*this)[32].y |= 0x10u;
  (*this)[41].x = a2->cxMax;
  (*this)[33] = a2->ptlUnderline1;
  (*this)[34] = a2->ptlStrikeout;
  (*this)[35] = a2->ptlULThickness;
  (*this)[36] = a2->ptlSOThickness;
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
  (*this)[38].y = fxMaxAscender;
  (*this)[37].y = a2->fxMaxAscender;
  (*this)[38].x = -a2->fxMaxDescender;
  (*this)[41].y = ((*this)[37].y + 8) >> 4;
  (*this)[42].x = ((*this)[37].y - (*this)[38].x + 8) >> 4;
  (*this)[37].x = a2->lD;
  if ( (*this)[37].x < 0 )
  {
    return 0;
  }
  else
  {
    (*this)[42].y = a2->cyMax;
    (*this)[43].x = a2->cjGlyphMax;
    v11 = *this;
    y = (*this)[1].y;
    if ( (y & 0x10000000) != 0 )
    {
      v13 = v11[42].y * (v11[41].x + 2);
      if ( (y & 0x20000000) != 0 )
        v11[43].x = ((v13 + 4 * v13 + 3) & 0xFFFFFFFC) + 16;
      else
        v11[43].x = ((v13 + 3) & 0xFFFFFFFC) + 16;
    }
    *(FD_XFORM *)&(*this)[43].y = a2->fdxQuantized;
    (*this)[45].y = a2->lNonLinearExtLeading;
    (*this)[46].x = a2->lNonLinearIntLeading;
    (*this)[46].y = a2->lNonLinearMaxCharWidth;
    (*this)[47].x = a2->lNonLinearAvgCharWidth;
    (*this)[85].x = a2->lMinA;
    (*this)[85].y = a2->lMinC;
    (*this)[86].x = a2->lMinD;
    (*this)[1].x = (*this)[41].x;
  }
  return v7;
}
