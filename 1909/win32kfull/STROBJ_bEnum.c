/*
 * XREFs of STROBJ_bEnum @ 0x1C00A0910
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00076A8 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     EngTextOut @ 0x1C009EDE0 (EngTextOut.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C00A06A0 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     vStringBitmapTextOut @ 0x1C01669E0 (vStringBitmapTextOut.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02AA374 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B6398 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C000934C (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C00A09E0 (-cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     vGetPosInfo @ 0x1C02B7570 (vGetPosInfo.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02CD7DC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

BOOL __stdcall STROBJ_bEnum(STROBJ *pstro, ULONG *pc, PGLYPHPOS *ppgpos)
{
  int pwszOrg; // eax
  ULONG cGlyphs; // edx
  __int64 v8; // rax
  BOOL v9; // edi
  unsigned int v10; // edx
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
  v9 = 0;
  v10 = cGlyphs - v8;
  if ( !v10
    || (v11 = (struct _GLYPHPOS *)(*(_QWORD *)&pstro[1].rclBkGround.top + 24 * v8),
        (v12 = *(RFONTOBJ **)&pstro[1].ulCharInc) == 0LL)
    || ((*(_DWORD *)(*(_QWORD *)v12 + 84LL) & 1) != 0
      ? (v13 = (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside(v12, v11, *(_DWORD *)(*(_QWORD *)v12 + 88LL)) != 0)
      : (LODWORD(v13) = RFONTOBJ::cGetGlyphDataCache(v12, v10, v11)),
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
  LOBYTE(v9) = pstro[1].cGlyphs < pstro->cGlyphs;
  return v9;
}
