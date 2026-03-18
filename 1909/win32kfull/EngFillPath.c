/*
 * XREFs of EngFillPath @ 0x1C00CE1A0
 * Callers:
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00CE000 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     EngStrokeAndFillPath @ 0x1C014C680 (EngStrokeAndFillPath.c)
 *     EngStrokePath @ 0x1C014CCD0 (EngStrokePath.c)
 *     ?BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02936E0 (-BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0295F10 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C029C120 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     NtGdiEngFillPath @ 0x1C02AB4E0 (NtGdiEngFillPath.c)
 *     OffFillPath @ 0x1C02C1050 (OffFillPath.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A9DD4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00AAE4C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00CE554 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00CF1C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngPaint @ 0x1C0148550 (EngPaint.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1C014EA0C (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C01502E4 (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0155548 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

BOOL __stdcall EngFillPath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  BOOL v10; // edi
  __int64 v11; // r13
  BOOL v12; // esi
  RECTL *p_rclBounds; // r15
  RECTL *v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  __int64 *v18; // rax
  BYTE v19; // al
  struct REGION *v21; // rbx
  BYTE iDComplexity; // al
  ULONG cCurves; // ebx
  bool v24; // cf
  _QWORD v26[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  struct REGION *v28[3]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v29; // [rsp+88h] [rbp-78h]
  __int64 v30; // [rsp+98h] [rbp-68h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-60h]
  _DWORD v32[4]; // [rsp+A8h] [rbp-58h] BYREF
  int v33[6]; // [rsp+B8h] [rbp-48h] BYREF
  CLIPOBJ pcoa; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v35; // [rsp+120h] [rbp+20h]
  int v36; // [rsp+128h] [rbp+28h]
  int v37; // [rsp+150h] [rbp+50h]
  __int64 v38; // [rsp+160h] [rbp+60h]
  CLIPOBJ v39; // [rsp+170h] [rbp+70h] BYREF
  __int64 v40; // [rsp+1C0h] [rbp+C0h]
  int v41; // [rsp+1C8h] [rbp+C8h]
  int v42; // [rsp+1F0h] [rbp+F0h]
  __int64 v43; // [rsp+200h] [rbp+100h]

  v10 = 0;
  v11 = SURFOBJ_TO_SURFACE(pso);
  v27 = *(_QWORD *)(v11 + 48);
  v12 = 1;
  if ( (ppo->fl & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
  {
    p_rclBounds = &pco->rclBounds;
    PDEVOBJ::vSync((PDEVOBJ *)&v27, pso, &pco->rclBounds, 0);
    if ( ((ppo->fl & 0x4000) == 0 || !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo))
      && pco->iDComplexity != 3 )
    {
      v14 = 0LL;
      v15 = *(_QWORD *)(*(_QWORD *)&ppo[1] + 48LL);
      v16 = (int)*(_OWORD *)(*(_QWORD *)&ppo[1] + 48LL) >> 4;
      v29 = *(_OWORD *)(*(_QWORD *)&ppo[1] + 48LL);
      if ( p_rclBounds->left > v16
        || pco->rclBounds.right < (DWORD2(v29) + 15) >> 4
        || pco->rclBounds.top > SHIDWORD(v15) >> 4
        || pco->rclBounds.bottom < (HIDWORD(v29) + 15) >> 4 )
      {
        v14 = &pco->rclBounds;
      }
      v17 = EngFastFill(pso, ppo, v14, pbo, pptlBrushOrg, mix, flOptions);
      if ( v17 >= 0 )
        return v17;
    }
    v18 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    if ( pco->iDComplexity )
    {
      HIDWORD(v30) = 16 * pco->rclBounds.top;
      HIDWORD(v31) = 16 * pco->rclBounds.bottom;
      v18 = &v30;
    }
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED(v28, ppo, 1LL, flOptions, v18);
    if ( !v28[0] )
    {
      cCurves = ppo->cCurves;
      v24 = cCurves < 2;
      if ( cCurves >= 2 )
      {
        EngSetLastError(8u);
        v24 = cCurves < 2;
      }
      LOBYTE(v10) = v24;
      goto LABEL_21;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v28) != 1 )
    {
      v32[0] = p_rclBounds->left;
      v32[1] = pco->rclBounds.top;
      v32[2] = pco->rclBounds.right;
      v32[3] = pco->rclBounds.bottom;
      if ( (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo) || pco->iDComplexity )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v26);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v26);
        if ( v26[0] )
        {
          if ( RGNOBJ::bMerge(
                 (RGNOBJ *)v26,
                 (struct RGNOBJ *)v28,
                 (struct RGNOBJ *)&pco[2].rclBounds.top,
                 BYTE1(gafjRgnOp)) )
          {
            v21 = (struct REGION *)v26[0];
            *(_OWORD *)v33 = *(_OWORD *)(v26[0] + 88LL);
            ERECTL::operator*=(v33, &p_rclBounds->left);
            v40 = 0LL;
            v41 = 0;
            v42 = 1;
            v43 = 0LL;
            XCLIPOBJ::vSetup((XCLIPOBJ *)&v39, v21, (struct ERECTL *)v33, 0);
            if ( ERECTL::bEmpty((ERECTL *)&v39.rclBounds) )
            {
              v10 = 1;
            }
            else
            {
              iDComplexity = v39.iDComplexity;
              if ( !v39.iDComplexity )
                iDComplexity = 1;
              v39.iDComplexity = iDComplexity;
              ++*(_DWORD *)(v11 + 92);
              v10 = EngPaint(pso, &v39, pbo, pptlBrushOrg, mix);
            }
          }
        }
        else
        {
          EngSetLastError(8u);
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v26);
        goto LABEL_21;
      }
      v35 = 0LL;
      v36 = 0;
      v37 = 1;
      v38 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, v28[0], (struct ERECTL *)v32, 0);
      if ( !ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
      {
        v19 = pcoa.iDComplexity;
        if ( !pcoa.iDComplexity )
          v19 = 1;
        ++*(_DWORD *)(v11 + 92);
        pcoa.iDComplexity = v19;
        v12 = EngPaint(pso, &pcoa, pbo, pptlBrushOrg, mix);
      }
    }
    v10 = v12;
LABEL_21:
    RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v28);
  }
  return v10;
}
