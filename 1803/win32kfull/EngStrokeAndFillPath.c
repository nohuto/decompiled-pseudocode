/*
 * XREFs of EngStrokeAndFillPath @ 0x1C02597B0
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0257204 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02661A0 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C026A6D0 (-BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C026D080 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02746E0 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C0284090 (NtGdiEngStrokeAndFillPath.c)
 *     OffStrokeAndFillPath @ 0x1C0296FC4 (OffStrokeAndFillPath.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0078C9C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B1040 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     EngStrokePath @ 0x1C00E3150 (EngStrokePath.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00E3384 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     EngFillPath @ 0x1C00EF100 (EngFillPath.c)
 *     EngPaint @ 0x1C011CCC0 (EngPaint.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C011D180 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C011D214 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C012E5A8 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C012E5DC (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

BOOL __stdcall EngStrokeAndFillPath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  BOOL v10; // ebx
  BOOL v13; // esi
  MIX v14; // r15d
  MIX v15; // r12d
  BOOL v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  PATHOBJ *v19; // rdx
  SURFOBJ *v20; // r13
  struct _CLIPOBJ *v21; // r14
  struct RGNOBJ *p_top; // r8
  __int128 v23; // xmm0
  POINTL *v24; // r15
  BRUSHOBJ *v25; // r8
  struct RGNOBJ *v26; // r8
  __int128 v27; // xmm0
  BRUSHOBJ *v28; // r8
  MIX mix; // [rsp+20h] [rbp-E0h]
  SURFOBJ *psoa; // [rsp+40h] [rbp-C0h] BYREF
  FLONG v32; // [rsp+48h] [rbp-B8h]
  POINTL *v33; // [rsp+50h] [rbp-B0h]
  CLIPOBJ *v34[2]; // [rsp+58h] [rbp-A8h] BYREF
  LINEATTRS *v35; // [rsp+68h] [rbp-98h]
  BRUSHOBJ *pbo; // [rsp+70h] [rbp-90h]
  _QWORD v37[2]; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v38; // [rsp+88h] [rbp-78h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h]
  BRUSHOBJ *v40; // [rsp+98h] [rbp-68h]
  _QWORD v41[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v42[3]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v43[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v44; // [rsp+D8h] [rbp-28h]
  __int128 v45; // [rsp+150h] [rbp+50h] BYREF
  CLIPOBJ pcoa; // [rsp+160h] [rbp+60h] BYREF
  __int64 v47; // [rsp+1B0h] [rbp+B0h]
  int v48; // [rsp+1B8h] [rbp+B8h]
  int v49; // [rsp+1E0h] [rbp+E0h]
  __int64 v50; // [rsp+1F0h] [rbp+F0h]
  _BYTE v51[152]; // [rsp+200h] [rbp+100h] BYREF
  SURFOBJ *v52; // [rsp+298h] [rbp+198h]
  int v53; // [rsp+2A0h] [rbp+1A0h]

  psoa = pso;
  v10 = 0;
  pbo = pboStroke;
  v13 = 0;
  v40 = pboFill;
  v33 = pptlBrushOrg;
  v32 = flOptions;
  v34[0] = pco;
  v38 = pco;
  v35 = plineattrs;
  v14 = mixFill;
  v15 = mixFill;
  v39 = SURFOBJ_TO_SURFACE(pso);
  if ( (pboFill[5].iSolidColor & 0x8000) == 0 )
    v15 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( (pbo[5].iSolidColor & 0x8000) == 0 )
    v14 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  v16 = 1;
  if ( (plineattrs->fl & 1) != 0 && (unsigned __int8)mixFill != 13 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v43);
    if ( !*(_QWORD *)&ppo[5] )
    {
      if ( bUMPDSecurityGateEx(v18, v17) && !pxo )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\fillddi.cxx:%d:EngStrokeAndFillPath:pxo == NULL\n", 279);
        goto LABEL_45;
      }
      if ( !v44
        || !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v43, (struct EPATHOBJ *)ppo, pxo, v35)
        || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v43, (struct EPATHOBJ *)ppo, pxo, v35) )
      {
        EngSetLastError(8u);
LABEL_45:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v43);
        return v10;
      }
    }
    if ( (ppo->fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
      goto LABEL_45;
    v19 = (PATHOBJ *)v43;
    if ( ppo[5] )
      v19 = ppo;
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v41, (struct EPATHOBJ *)v19, 0, 2u, 0LL);
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v42, (struct EPATHOBJ *)ppo, 1, v32, 0LL);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v37);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v37);
    if ( !v42[0]
      || !v41[0]
      || !v37[0]
      || !RGNOBJ::bMerge((RGNOBJ *)v37, (struct RGNOBJ *)v42, (struct RGNOBJ *)v41, BYTE4(gafjRgnOp)) )
    {
      goto LABEL_43;
    }
    v20 = psoa;
    BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v51, psoa, &v38);
    if ( !v53 )
    {
      psoa = v52;
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&psoa);
LABEL_44:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v37);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v42);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v41);
      goto LABEL_45;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v34);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v34);
    if ( v34[0] && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v41) != 1 )
    {
      v21 = v38;
      p_top = (struct RGNOBJ *)&v38[2].rclBounds.top;
      if ( !v38 )
        p_top = 0LL;
      if ( RGNOBJ::bMerge((RGNOBJ *)v34, (struct RGNOBJ *)v41, p_top, BYTE1(gafjRgnOp)) )
      {
        v23 = *(_OWORD *)&v34[0][3].rclBounds.bottom;
        v47 = 0LL;
        v48 = 0;
        v45 = v23;
        v49 = 1;
        v50 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, (struct REGION *)v34[0], (struct ERECTL *)&v45, 0);
        if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
        {
          v24 = v33;
          v13 = 1;
          goto LABEL_34;
        }
        v25 = pbo;
        mix = v14;
        v24 = v33;
        ++*(_DWORD *)(v39 + 92);
        v13 = EngPaint(v20, &pcoa, v25, v24, mix);
        if ( v13 )
        {
LABEL_34:
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v37) != 1 )
          {
            v26 = (struct RGNOBJ *)&v21[2].rclBounds.top;
            if ( !v21 )
              v26 = 0LL;
            if ( RGNOBJ::bMerge((RGNOBJ *)v34, (struct RGNOBJ *)v37, v26, BYTE1(gafjRgnOp)) )
            {
              v27 = *(_OWORD *)&v34[0][3].rclBounds.bottom;
              v47 = 0LL;
              v48 = 0;
              v45 = v27;
              v49 = 1;
              v50 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, (struct REGION *)v34[0], (struct ERECTL *)&v45, 0);
              if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
              {
                v13 = 1;
              }
              else
              {
                v28 = v40;
                ++*(_DWORD *)(v39 + 92);
                v13 = EngPaint(v20, &pcoa, v28, v24, v15);
              }
            }
            else
            {
              v13 = 0;
            }
          }
        }
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v34);
    psoa = v52;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&psoa);
LABEL_43:
    v10 = v13;
    goto LABEL_44;
  }
  if ( !EngFillPath(psoa, ppo, v34[0], v40, v33, v15, v32) || !EngStrokePath(psoa, ppo, v34[0], pxo, pbo, v33, v35, v14) )
    return 0;
  return v16;
}
