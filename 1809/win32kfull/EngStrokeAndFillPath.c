/*
 * XREFs of EngStrokeAndFillPath @ 0x1C026CAE0
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C026A288 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0279E30 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C027E6A0 (-BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02810A0 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0287950 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02976F0 (NtGdiEngStrokeAndFillPath.c)
 *     OffStrokeAndFillPath @ 0x1C02AACA0 (OffStrokeAndFillPath.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0056B74 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C008FDD0 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngStrokePath @ 0x1C013BB90 (EngStrokePath.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C013BDAC (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     EngPaint @ 0x1C013E320 (EngPaint.c)
 *     EngFillPath @ 0x1C013EBE0 (EngFillPath.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C013F18C (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C013F1CC (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C014349C (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C014F120 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
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
  struct _CLIPOBJ *v20; // r14
  __int128 v21; // xmm0
  POINTL *v22; // r15
  BRUSHOBJ *v23; // r8
  __int128 v24; // xmm0
  BRUSHOBJ *v25; // r8
  MIX mix; // [rsp+20h] [rbp-E0h]
  BRUSHOBJ *v28; // [rsp+40h] [rbp-C0h] BYREF
  FLONG v29; // [rsp+48h] [rbp-B8h]
  XFORMOBJ *pxoa; // [rsp+50h] [rbp-B0h]
  CLIPOBJ *v31[2]; // [rsp+58h] [rbp-A8h] BYREF
  POINTL *v32; // [rsp+68h] [rbp-98h]
  LINEATTRS *v33; // [rsp+70h] [rbp-90h]
  BRUSHOBJ *pbo; // [rsp+78h] [rbp-88h]
  _QWORD v35[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _CLIPOBJ *v36; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+98h] [rbp-68h]
  _QWORD v38[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v39[3]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v40[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-28h]
  __int128 v42; // [rsp+150h] [rbp+50h] BYREF
  CLIPOBJ pcoa; // [rsp+160h] [rbp+60h] BYREF
  __int64 v44; // [rsp+198h] [rbp+98h]
  __int64 v45; // [rsp+1B0h] [rbp+B0h]
  int v46; // [rsp+1B8h] [rbp+B8h]
  int v47; // [rsp+1E0h] [rbp+E0h]
  __int64 v48; // [rsp+1F0h] [rbp+F0h]
  _BYTE v49[152]; // [rsp+200h] [rbp+100h] BYREF
  BRUSHOBJ *v50; // [rsp+298h] [rbp+198h]
  int v51; // [rsp+2A0h] [rbp+1A0h]

  v31[0] = pco;
  v10 = 0;
  v36 = pco;
  pbo = pboStroke;
  v13 = 0;
  v28 = pboFill;
  v32 = pptlBrushOrg;
  v29 = flOptions;
  pxoa = pxo;
  v33 = plineattrs;
  v14 = mixFill;
  v15 = mixFill;
  v37 = SURFOBJ_TO_SURFACE(pso);
  if ( (pboFill[5].iSolidColor & 0x8000) == 0 )
    v15 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( (pbo[5].iSolidColor & 0x8000) == 0 )
    v14 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  v16 = 1;
  if ( (plineattrs->fl & 1) != 0 && (unsigned __int8)mixFill != 13 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v40);
    if ( !*(_QWORD *)&ppo[5] )
    {
      if ( bUMPDSecurityGateEx(v18, v17) && !pxoa )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\fillddi.cxx:%d:EngStrokeAndFillPath:pxo == NULL\n", 279);
        goto LABEL_41;
      }
      if ( !v41
        || !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v40, (struct EPATHOBJ *)ppo, pxoa, v33)
        || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v40, (struct EPATHOBJ *)ppo, pxoa, v33) )
      {
        EngSetLastError(8u);
LABEL_41:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v40);
        return v10;
      }
    }
    if ( (ppo->fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
      goto LABEL_41;
    v19 = (PATHOBJ *)v40;
    if ( ppo[5] )
      v19 = ppo;
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v38, (struct EPATHOBJ *)v19, 0, 2u, 0LL);
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v39, (struct EPATHOBJ *)ppo, 1, v29, 0LL);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v35);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v35);
    if ( !v39[0]
      || !v38[0]
      || !v35[0]
      || !RGNOBJ::bMerge((RGNOBJ *)v35, (struct RGNOBJ *)v39, (struct RGNOBJ *)v38, BYTE4(gafjRgnOp)) )
    {
      goto LABEL_39;
    }
    BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v49, pso, &v36);
    if ( !v51 )
    {
      v28 = v50;
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v28);
LABEL_40:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v35);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v39);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v38);
      goto LABEL_41;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v31);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v31);
    if ( v31[0] )
    {
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v38) != 1 )
      {
        v20 = v36;
        if ( RGNOBJ::bMerge(
               (RGNOBJ *)v31,
               (struct RGNOBJ *)v38,
               (struct RGNOBJ *)&v36[2].rclBounds.top,
               BYTE1(gafjRgnOp)) )
        {
          v21 = *(_OWORD *)&v31[0][3].rclBounds.bottom;
          v44 = 0LL;
          v45 = 0LL;
          v42 = v21;
          v46 = 0;
          v47 = 1;
          v48 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, (struct REGION *)v31[0], (struct ERECTL *)&v42, 0);
          if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
          {
            v22 = v32;
            v13 = 1;
            goto LABEL_32;
          }
          v23 = pbo;
          mix = v14;
          v22 = v32;
          ++*(_DWORD *)(v37 + 92);
          v13 = EngPaint(pso, &pcoa, v23, v22, mix);
          if ( v13 )
          {
LABEL_32:
            if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v35) != 1 )
            {
              if ( RGNOBJ::bMerge(
                     (RGNOBJ *)v31,
                     (struct RGNOBJ *)v35,
                     (struct RGNOBJ *)&v20[2].rclBounds.top,
                     BYTE1(gafjRgnOp)) )
              {
                v24 = *(_OWORD *)&v31[0][3].rclBounds.bottom;
                v44 = 0LL;
                v45 = 0LL;
                v42 = v24;
                v46 = 0;
                v47 = 1;
                v48 = 0LL;
                XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, (struct REGION *)v31[0], (struct ERECTL *)&v42, 0);
                if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
                {
                  v13 = 1;
                }
                else
                {
                  v25 = v28;
                  ++*(_DWORD *)(v37 + 92);
                  v13 = EngPaint(pso, &pcoa, v25, v22, v15);
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
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v31);
    v28 = v50;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v28);
LABEL_39:
    v10 = v13;
    goto LABEL_40;
  }
  if ( !EngFillPath(pso, ppo, v31[0], v28, v32, v15, v29) || !EngStrokePath(pso, ppo, v31[0], pxoa, pbo, v32, v33, v14) )
    return 0;
  return v16;
}
