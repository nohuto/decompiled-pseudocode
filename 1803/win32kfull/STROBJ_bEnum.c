/*
 * XREFs of STROBJ_bEnum @ 0x1C00AC810
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00024CC (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     EngTextOut @ 0x1C00AA120 (EngTextOut.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C00AC8E0 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     vStringBitmapTextOut @ 0x1C013BA00 (vStringBitmapTextOut.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C0281F90 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C028C34C (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C0006E38 (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C00864F8 (-cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     vGetPosInfo @ 0x1C028D7B0 (vGetPosInfo.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02A6038 (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

BOOL __stdcall STROBJ_bEnum(STROBJ *pstro, ULONG *pc, PGLYPHPOS *ppgpos)
{
  int pwszOrg; // eax
  ULONG cGlyphs; // edx
  __int64 v8; // rax
  unsigned int v9; // edx
  BOOL v10; // edi
  struct _GLYPHPOS *v11; // rbp
  RFONTOBJ *v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rdx
  ULONG v15; // eax

  pwszOrg = (int)pstro[4].pwszOrg;
  if ( (pwszOrg & 0x1400) != 0 )
    return STROBJ_bEnumLinked((struct ESTROBJ *)pstro, pc, ppgpos);
  cGlyphs = pstro->cGlyphs;
  if ( (pwszOrg & 2) != 0 )
  {
    *pc = cGlyphs;
    *ppgpos = *(PGLYPHPOS *)&pstro[1].rclBkGround.top;
    return 0;
  }
  v8 = pstro[1].cGlyphs;
  v9 = cGlyphs - v8;
  if ( !v9
    || (v10 = 0,
        v11 = (struct _GLYPHPOS *)(*(_QWORD *)&pstro[1].rclBkGround.top + 24 * v8),
        (v12 = *(RFONTOBJ **)&pstro[1].ulCharInc) == 0LL)
    || ((*(_DWORD *)(*(_QWORD *)v12 + 68LL) & 1) != 0
      ? (v13 = (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside(v12, v11, *(_DWORD *)(*(_QWORD *)v12 + 72LL)) != 0)
      : (LODWORD(v13) = RFONTOBJ::cGetGlyphDataCache(v12, v9, v11)),
        !(_DWORD)v13) )
  {
    *pc = 0;
    return 0;
  }
  v14 = pstro[1].cGlyphs;
  v15 = v14;
  if ( (_DWORD)v14 )
  {
    if ( pstro->ulCharInc )
    {
      vGetPosInfo(pstro, v14, &v11->ptl);
      v15 = pstro[1].cGlyphs;
    }
  }
  pstro[1].cGlyphs = v15 + v13;
  *pc = v13;
  *ppgpos = v11;
  LOBYTE(v10) = pstro[1].cGlyphs < pstro->cGlyphs;
  return v10;
}
