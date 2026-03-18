/*
 * XREFs of EngStrokeAndFillPath @ 0x1C014C680
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C00CB370 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     OffStrokeAndFillPath @ 0x1C0150628 (OffStrokeAndFillPath.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C028FB40 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0294400 (-BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0297110 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C029D5F0 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02AC350 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00AAE4C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     EngFillPath @ 0x1C00CE1A0 (EngFillPath.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00CF1C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D5048 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00F2BBC (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00F3B10 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     EngPaint @ 0x1C0148550 (EngPaint.c)
 *     EngStrokePath @ 0x1C014CCD0 (EngStrokePath.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C014CEEC (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C01502E4 (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0155548 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
  MIX mix; // r12d
  BOOL v16; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  PATHOBJ *v21; // rdx
  struct _CLIPOBJ *v22; // r14
  __int128 v23; // xmm0
  POINTL *v24; // r15
  BRUSHOBJ *v25; // r8
  __int128 v26; // xmm0
  BRUSHOBJ *v27; // r8
  MIX v28; // [rsp+20h] [rbp-E0h]
  BRUSHOBJ *pbo; // [rsp+40h] [rbp-C0h] BYREF
  FLONG v30; // [rsp+48h] [rbp-B8h]
  XFORMOBJ *pxoa; // [rsp+50h] [rbp-B0h]
  CLIPOBJ *pcoa[2]; // [rsp+58h] [rbp-A8h] BYREF
  POINTL *v33; // [rsp+68h] [rbp-98h]
  LINEATTRS *v34; // [rsp+70h] [rbp-90h]
  BRUSHOBJ *v35; // [rsp+78h] [rbp-88h]
  _QWORD v36[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _CLIPOBJ *v37; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+98h] [rbp-68h]
  _QWORD v39[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v40[3]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v41[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-28h]
  __int128 v43; // [rsp+150h] [rbp+50h] BYREF
  CLIPOBJ v44; // [rsp+160h] [rbp+60h] BYREF
  __int64 v45; // [rsp+1B0h] [rbp+B0h]
  int v46; // [rsp+1B8h] [rbp+B8h]
  int v47; // [rsp+1E0h] [rbp+E0h]
  __int64 v48; // [rsp+1F0h] [rbp+F0h]
  _BYTE v49[152]; // [rsp+200h] [rbp+100h] BYREF
  BRUSHOBJ *v50; // [rsp+298h] [rbp+198h]
  int v51; // [rsp+2A0h] [rbp+1A0h]

  pcoa[0] = pco;
  v10 = 0;
  v37 = pco;
  v35 = pboStroke;
  v13 = 0;
  pbo = pboFill;
  v33 = pptlBrushOrg;
  v30 = flOptions;
  pxoa = pxo;
  v34 = plineattrs;
  v14 = mixFill;
  mix = mixFill;
  v38 = SURFOBJ_TO_SURFACE(pso);
  if ( (pboFill[5].iSolidColor & 0x8000) == 0 )
    mix = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( (v35[5].iSolidColor & 0x8000) == 0 )
    v14 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  v16 = 1;
  if ( (plineattrs->fl & 1) != 0 && (unsigned __int8)mixFill != 13 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v41);
    if ( !*(_QWORD *)&ppo[5] )
    {
      if ( bUMPDSecurityGateEx(v19, v18, v20) && !pxoa )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\fillddi.cxx:%d:EngStrokeAndFillPath:pxo == NULL\n", 279);
        goto LABEL_46;
      }
      if ( !v42
        || !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v41, (struct EPATHOBJ *)ppo, pxoa, v34)
        || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v41, (struct EPATHOBJ *)ppo, pxoa, v34) )
      {
        EngSetLastError(8u);
LABEL_46:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v41);
        return v10;
      }
    }
    if ( (ppo->fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
      goto LABEL_46;
    v21 = (PATHOBJ *)v41;
    if ( ppo[5] )
      v21 = ppo;
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED(v39, v21, 0LL, 2LL, 0LL);
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED(v40, ppo, 1LL, v30, 0LL);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v36);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v36);
    if ( !v40[0]
      || !v39[0]
      || !v36[0]
      || !RGNOBJ::bMerge((RGNOBJ *)v36, (struct RGNOBJ *)v40, (struct RGNOBJ *)v39, BYTE4(gafjRgnOp)) )
    {
      goto LABEL_44;
    }
    BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v49, pso, &v37);
    if ( !v51 )
    {
      pbo = v50;
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&pbo);
LABEL_45:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v36);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v40);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v39);
      goto LABEL_46;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)pcoa);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)pcoa);
    if ( pcoa[0] )
    {
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v39) != 1 )
      {
        v22 = v37;
        if ( RGNOBJ::bMerge(
               (RGNOBJ *)pcoa,
               (struct RGNOBJ *)v39,
               (struct RGNOBJ *)&v37[2].rclBounds.top,
               BYTE1(gafjRgnOp)) )
        {
          v23 = *(_OWORD *)&pcoa[0][3].rclBounds.bottom;
          v45 = 0LL;
          v46 = 0;
          v43 = v23;
          v47 = 1;
          v48 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&v44, (struct REGION *)pcoa[0], (struct ERECTL *)&v43, 0);
          if ( ERECTL::bEmpty((ERECTL *)&v44.rclBounds) )
          {
            v24 = v33;
            v13 = 1;
            goto LABEL_37;
          }
          v25 = v35;
          v28 = v14;
          v24 = v33;
          ++*(_DWORD *)(v38 + 92);
          v13 = EngPaint(pso, &v44, v25, v24, v28);
          if ( v13 )
          {
LABEL_37:
            if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v36) != 1 )
            {
              if ( RGNOBJ::bMerge(
                     (RGNOBJ *)pcoa,
                     (struct RGNOBJ *)v36,
                     (struct RGNOBJ *)&v22[2].rclBounds.top,
                     BYTE1(gafjRgnOp)) )
              {
                v26 = *(_OWORD *)&pcoa[0][3].rclBounds.bottom;
                v45 = 0LL;
                v46 = 0;
                v43 = v26;
                v47 = 1;
                v48 = 0LL;
                XCLIPOBJ::vSetup((XCLIPOBJ *)&v44, (struct REGION *)pcoa[0], (struct ERECTL *)&v43, 0);
                if ( ERECTL::bEmpty((ERECTL *)&v44.rclBounds) )
                {
                  v13 = 1;
                }
                else
                {
                  v27 = pbo;
                  ++*(_DWORD *)(v38 + 92);
                  v13 = EngPaint(pso, &v44, v27, v24, mix);
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
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)pcoa);
    pbo = v50;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&pbo);
LABEL_44:
    v10 = v13;
    goto LABEL_45;
  }
  if ( !EngFillPath(pso, ppo, pcoa[0], pbo, v33, mix, v30)
    || !EngStrokePath(pso, ppo, pcoa[0], pxoa, v35, v33, v34, v14) )
  {
    return 0;
  }
  return v16;
}
