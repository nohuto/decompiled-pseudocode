/*
 * XREFs of EngStrokePath @ 0x1C014BF20
 * Callers:
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C007AB84 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     EngStrokeAndFillPath @ 0x1C014B8D0 (EngStrokeAndFillPath.c)
 *     W32kCddStrokePath @ 0x1C014BE70 (W32kCddStrokePath.c)
 *     OffStrokePath @ 0x1C014FCB4 (OffStrokePath.c)
 *     ?PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0290300 (-PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?BmpDevStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0294BB0 (-BmpDevStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PE.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0297920 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C029DEB0 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     NtGdiEngStrokePath @ 0x1C02ACB30 (NtGdiEngStrokePath.c)
 * Callees:
 *     EngFillPath @ 0x1C0078A80 (EngFillPath.c)
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C0102FF0 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0118BAC (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C014C120 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C014C218 (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1C014DC40 (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngStrokePath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  SURFOBJ *v11; // rbx
  __int64 v12; // rdi
  int v14; // eax
  __int64 (__fastcall *v15)(__int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rax
  POINTL *v16; // [rsp+50h] [rbp-B0h] BYREF
  CLIPOBJ *pcoa; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v18[152]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL *v19; // [rsp+F8h] [rbp-8h]
  int v20; // [rsp+100h] [rbp+0h]

  pcoa = pco;
  v16 = pptlBrushOrg;
  BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v18, pso, &pcoa);
  v11 = 0LL;
  if ( v20 )
  {
    v12 = SURFOBJ_TO_SURFACE(pso);
    if ( (plineattrs->fl & 1) == 0 )
    {
      if ( (ppo->fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
        goto LABEL_12;
      if ( *(_WORD *)(v12 + 100) )
      {
        v15 = *(__int64 (__fastcall **)(__int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(v12 + 48) + 2800LL);
        if ( !v15 )
          goto LABEL_12;
        v14 = v15(v12 + 24, ppo, pcoa, pxo, pbo, v16, plineattrs, mix);
      }
      else
      {
        v16 = *(POINTL **)(v12 + 48);
        PDEVOBJ::vSync((PDEVOBJ *)&v16, pso, 0LL, 0);
        if ( (_BYTE)mix == 13
          && (!pcoa || pcoa->iDComplexity != 3)
          && !plineattrs->pstyle
          && (plineattrs->fl & 2) == 0
          && ((*(_DWORD *)(v12 + 112) & 0x200) == 0 || (*(_DWORD *)(*(_QWORD *)(v12 + 48) + 40LL) & 0x8000) != 0) )
        {
          vSolidLine((struct SURFACE *)v12, ppo, 0LL, pcoa, pbo->iSolidColor);
          LODWORD(v11) = 1;
          goto LABEL_12;
        }
        v14 = bStrokeCosmetic((struct SURFACE *)v12, ppo, pcoa, pbo, plineattrs, mix);
      }
LABEL_15:
      LODWORD(v11) = v14;
      goto LABEL_12;
    }
    if ( (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo) && (ppo->fl & 0x10) != 0
      || (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)ppo, (struct EPATHOBJ *)ppo, pxo, plineattrs) )
    {
      if ( v12 )
        v11 = (SURFOBJ *)(v12 + 24);
      v14 = EngFillPath(v11, ppo, pcoa, pbo, v16, mix, 2u);
      goto LABEL_15;
    }
  }
LABEL_12:
  v16 = v19;
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
  return (int)v11;
}
