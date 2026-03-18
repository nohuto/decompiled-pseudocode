/*
 * XREFs of EngStrokeAndFillPath @ 0x1C014B8D0
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0135B04 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     OffStrokeAndFillPath @ 0x1C014F868 (OffStrokeAndFillPath.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0290170 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02949B0 (-BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02976C0 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C029DBA0 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02AC800 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00610E8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     EngFillPath @ 0x1C0078A80 (EngFillPath.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EE7C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00F4F58 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0118BAC (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0119B00 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     EngPaint @ 0x1C01477A0 (EngPaint.c)
 *     EngStrokePath @ 0x1C014BF20 (EngStrokePath.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C014C120 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C014F524 (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0154788 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
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
  __int64 v21; // r9
  PATHOBJ *v22; // rdx
  struct _CLIPOBJ *v23; // r14
  __int128 v24; // xmm0
  POINTL *v25; // r15
  BRUSHOBJ *v26; // r8
  __int128 v27; // xmm0
  BRUSHOBJ *v28; // r8
  MIX v29; // [rsp+20h] [rbp-E0h]
  BRUSHOBJ *pbo; // [rsp+40h] [rbp-C0h] BYREF
  FLONG v31; // [rsp+48h] [rbp-B8h]
  XFORMOBJ *pxoa; // [rsp+50h] [rbp-B0h]
  CLIPOBJ *pcoa[2]; // [rsp+58h] [rbp-A8h] BYREF
  POINTL *v34; // [rsp+68h] [rbp-98h]
  LINEATTRS *v35; // [rsp+70h] [rbp-90h]
  BRUSHOBJ *v36; // [rsp+78h] [rbp-88h]
  _QWORD v37[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _CLIPOBJ *v38; // [rsp+90h] [rbp-70h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h]
  _QWORD v40[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v41[3]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v42[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-28h]
  __int128 v44; // [rsp+150h] [rbp+50h] BYREF
  CLIPOBJ v45; // [rsp+160h] [rbp+60h] BYREF
  __int64 v46; // [rsp+1B0h] [rbp+B0h]
  int v47; // [rsp+1B8h] [rbp+B8h]
  int v48; // [rsp+1E0h] [rbp+E0h]
  __int64 v49; // [rsp+1F0h] [rbp+F0h]
  _BYTE v50[152]; // [rsp+200h] [rbp+100h] BYREF
  BRUSHOBJ *v51; // [rsp+298h] [rbp+198h]
  int v52; // [rsp+2A0h] [rbp+1A0h]

  pcoa[0] = pco;
  v10 = 0;
  v38 = pco;
  v36 = pboStroke;
  v13 = 0;
  pbo = pboFill;
  v34 = pptlBrushOrg;
  v31 = flOptions;
  pxoa = pxo;
  v35 = plineattrs;
  v14 = mixFill;
  mix = mixFill;
  v39 = SURFOBJ_TO_SURFACE(pso);
  if ( (pboFill[5].iSolidColor & 0x8000) == 0 )
    mix = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( (v36[5].iSolidColor & 0x8000) == 0 )
    v14 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  v16 = 1;
  if ( (plineattrs->fl & 1) != 0 && (unsigned __int8)mixFill != 13 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v42);
    if ( !*(_QWORD *)&ppo[5] )
    {
      if ( bUMPDSecurityGateEx(v19, v18, v20, v21) && !pxoa )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\fillddi.cxx:%d:EngStrokeAndFillPath:pxo == NULL\n", 279);
        goto LABEL_46;
      }
      if ( !v43
        || !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v42, (struct EPATHOBJ *)ppo, pxoa, v35)
        || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v42, (struct EPATHOBJ *)ppo, pxoa, v35) )
      {
        EngSetLastError(8u);
LABEL_46:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v42);
        return v10;
      }
    }
    if ( (ppo->fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
      goto LABEL_46;
    v22 = (PATHOBJ *)v42;
    if ( ppo[5] )
      v22 = ppo;
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED(v40, v22, 0LL, 2LL, 0LL);
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED(v41, ppo, 1LL, v31, 0LL);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v37);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v37);
    if ( !v41[0]
      || !v40[0]
      || !v37[0]
      || !RGNOBJ::bMerge((RGNOBJ *)v37, (struct RGNOBJ *)v41, (struct RGNOBJ *)v40, BYTE4(gafjRgnOp)) )
    {
      goto LABEL_44;
    }
    BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v50, pso, &v38);
    if ( !v52 )
    {
      pbo = v51;
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&pbo);
LABEL_45:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v37);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v41);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v40);
      goto LABEL_46;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)pcoa);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)pcoa);
    if ( pcoa[0] )
    {
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v40) != 1 )
      {
        v23 = v38;
        if ( RGNOBJ::bMerge(
               (RGNOBJ *)pcoa,
               (struct RGNOBJ *)v40,
               (struct RGNOBJ *)&v38[2].rclBounds.top,
               BYTE1(gafjRgnOp)) )
        {
          v24 = *(_OWORD *)&pcoa[0][3].rclBounds.bottom;
          v46 = 0LL;
          v47 = 0;
          v44 = v24;
          v48 = 1;
          v49 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&v45, (struct REGION *)pcoa[0], (struct ERECTL *)&v44, 0);
          if ( ERECTL::bEmpty((ERECTL *)&v45.rclBounds) )
          {
            v25 = v34;
            v13 = 1;
            goto LABEL_37;
          }
          v26 = v36;
          v29 = v14;
          v25 = v34;
          ++*(_DWORD *)(v39 + 92);
          v13 = EngPaint(pso, &v45, v26, v25, v29);
          if ( v13 )
          {
LABEL_37:
            if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v37) != 1 )
            {
              if ( RGNOBJ::bMerge(
                     (RGNOBJ *)pcoa,
                     (struct RGNOBJ *)v37,
                     (struct RGNOBJ *)&v23[2].rclBounds.top,
                     BYTE1(gafjRgnOp)) )
              {
                v27 = *(_OWORD *)&pcoa[0][3].rclBounds.bottom;
                v46 = 0LL;
                v47 = 0;
                v44 = v27;
                v48 = 1;
                v49 = 0LL;
                XCLIPOBJ::vSetup((XCLIPOBJ *)&v45, (struct REGION *)pcoa[0], (struct ERECTL *)&v44, 0);
                if ( ERECTL::bEmpty((ERECTL *)&v45.rclBounds) )
                {
                  v13 = 1;
                }
                else
                {
                  v28 = pbo;
                  ++*(_DWORD *)(v39 + 92);
                  v13 = EngPaint(pso, &v45, v28, v25, mix);
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
    pbo = v51;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&pbo);
LABEL_44:
    v10 = v13;
    goto LABEL_45;
  }
  if ( !EngFillPath(pso, ppo, pcoa[0], pbo, v34, mix, v31)
    || !EngStrokePath(pso, ppo, pcoa[0], pxoa, v36, v34, v35, v14) )
  {
    return 0;
  }
  return v16;
}
