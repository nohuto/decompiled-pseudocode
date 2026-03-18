/*
 * XREFs of ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C007BE98
 * Callers:
 *     GrePolyPolygonInternal @ 0x1C007BA9C (GrePolyPolygonInternal.c)
 *     GreRectangle @ 0x1C00F6F20 (GreRectangle.c)
 *     NtGdiFillPath @ 0x1C011B600 (NtGdiFillPath.c)
 *     GrePolylineTo @ 0x1C011B6E0 (GrePolylineTo.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C011B9EC (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GrePolyBezierTo @ 0x1C011C660 (GrePolyBezierTo.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C026EF74 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C026F194 (GreAngleArc.c)
 *     GrePolyDraw @ 0x1C026F8F8 (GrePolyDraw.c)
 *     GrePolyPolylineInternal @ 0x1C026FE74 (GrePolyPolylineInternal.c)
 *     NtGdiEllipse @ 0x1C0270080 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C02702C0 (NtGdiRoundRect.c)
 *     NtGdiStrokeAndFillPath @ 0x1C027DFA0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C027E100 (NtGdiStrokePath.c)
 *     NtGdiArcInternal @ 0x1C02818C0 (NtGdiArcInternal.c)
 * Callees:
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C007C3CC (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C007C62C (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008F930 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009D44C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C00FE8D8 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C011D214 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0257204 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C029ECB4 (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 */

__int64 __fastcall EPATHOBJ::bStrokeAndOrFill(
        PATHOBJ *this,
        POINTL **a2,
        LINEATTRS *a3,
        struct _XFORMOBJ *a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  LINEATTRS *v7; // r15
  unsigned int v10; // r14d
  unsigned int v11; // r9d
  unsigned int v12; // r13d
  _DWORD *v13; // rcx
  int v14; // edi
  int v15; // edi
  int v16; // eax
  POINTL *v17; // r8
  __int64 v18; // rdx
  struct REGION *v19; // rax
  POINTL *v20; // r9
  struct SURFACE *v22; // r11
  POINTL v23; // rax
  POINTL v24; // rdi
  CLIPOBJ *v25; // rbx
  POINTL v26; // rdx
  POINTL *v27; // r10
  int v28; // eax
  EBRUSHOBJ *v29; // rbx
  MIX v30; // edi
  POINTL *v31; // r10
  BRUSHOBJ *pbo; // r9
  PATHOBJ *v33; // rbx
  unsigned int v34; // r13d
  unsigned int v35; // r13d
  struct SURFACE *v36; // r13
  unsigned int v37; // eax
  LONG x; // edx
  int v39; // r10d
  POINTL *v40; // rdx
  POINTL *v41; // rcx
  POINTL v42; // r9
  int v43; // r8d
  POINTL *v44; // r9
  unsigned int v45; // eax
  struct ECLIPOBJ *v46; // rdx
  int v47; // r10d
  POINTL *v49; // rdx
  POINTL v50; // rcx
  BRUSHOBJ *v51; // r10
  int v52; // eax
  POINTL v53; // r8
  int v54; // ecx
  bool v55; // zf
  CLIPOBJ *pco; // [rsp+20h] [rbp-E0h]
  MIX v57; // [rsp+64h] [rbp-9Ch]
  BRUSHOBJ *v58; // [rsp+68h] [rbp-98h]
  struct SURFACE *v59; // [rsp+70h] [rbp-90h]
  int v60; // [rsp+7Ch] [rbp-84h]
  FLOAT_LONG v61; // [rsp+80h] [rbp-80h]
  POINTL v62; // [rsp+88h] [rbp-78h] BYREF
  BRUSHOBJ *v63[2]; // [rsp+90h] [rbp-70h] BYREF
  BRUSHOBJ *v64; // [rsp+A0h] [rbp-60h]
  XFORMOBJ *pxo; // [rsp+B0h] [rbp-50h]
  PATHOBJ *ppo; // [rsp+B8h] [rbp-48h]
  RECTL rclBounds; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v68[32]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  __int128 v71; // [rsp+120h] [rbp+20h] BYREF
  CLIPOBJ v72; // [rsp+130h] [rbp+30h] BYREF
  __int64 v73; // [rsp+180h] [rbp+80h]
  int v74; // [rsp+188h] [rbp+88h]
  int v75; // [rsp+1B0h] [rbp+B0h]
  __int64 v76; // [rsp+1C0h] [rbp+C0h]

  v5 = 0;
  pxo = a4;
  v7 = a3;
  ppo = this;
  v60 = 0;
  v61.l = 0;
  v57 = 0;
  if ( !this->cCurves )
    return 1LL;
  v10 = 1;
  v11 = a5 & 0xFFFFFFFE;
  if ( (struct PEN *)(*a2)[19] != gpPenNull )
    v11 = a5;
  v12 = v11 & 0xFFFFFFFD;
  if ( (struct BRUSH *)(*a2)[18] != gpbrNull )
    v12 = v11;
  if ( (v12 & 1) == 0 || (a3->fl & 1) == 0 )
  {
LABEL_7:
    v13 = (_DWORD *)this[1];
    v14 = v13[12];
    HIDWORD(v63[0]) = (int)v13[13] >> 4;
    v15 = v14 >> 4;
    v16 = ((v13[15] + 15) >> 4) + 1;
    LODWORD(v63[0]) = v15;
    HIDWORD(v63[1]) = v16;
    LODWORD(v63[1]) = ((v13[14] + 15) >> 4) + 1;
    if ( ((*a2)[4].y & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)a2, (struct ERECTL *)v63);
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)a2) )
      return v10;
    v69 = 0LL;
    v70 = 0LL;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v68, (struct XDCOBJ *)a2, 0);
    if ( (v68[24] & 1) != 0 )
    {
      if ( (unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)&(*a2)[63]) )
      {
        v17 = *a2;
        v71 = *(_OWORD *)v63;
        v18 = v17[5].x & 1LL;
        LODWORD(v71) = v15 + v17[v18 + 178].x;
        DWORD2(v71) = v17[v18 + 178].x + LODWORD(v63[1]);
        DWORD1(v71) = v17[v18 + 178].y + HIDWORD(v63[0]);
        HIDWORD(v71) = v17[v18 + 178].y + HIDWORD(v63[1]);
        EPATHOBJ::vOffset((EPATHOBJ *)this, (struct EPOINTL *)&v17[(v17[5].x & 1LL) + 178]);
        v19 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
        v73 = 0LL;
        v74 = 0;
        v75 = 1;
        v76 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&v72, v19, (struct ERECTL *)&v71, 0);
        v20 = *a2;
        if ( (*a2)[4].x == 2 || (unsigned int)ERECTL::bEmpty((ERECTL *)&v72.rclBounds) )
        {
          if ( (v12 & 1) != 0 && (v7->pstyle && (v7->fl & 1) == 0 || (v7->fl & 2) != 0) )
            EPATHOBJ::vUpdateCosmeticStyleState((EPATHOBJ *)this, *(struct SURFACE **)&v20[63], v7);
          goto LABEL_15;
        }
        v22 = (struct SURFACE *)v20[63];
        v23 = v20[6];
        v62 = v23;
        v24 = v20[12];
        v25 = (CLIPOBJ *)*((_QWORD *)v22 + 16);
        v59 = v22;
        v63[0] = (BRUSHOBJ *)&v20[216];
        v58 = (BRUSHOBJ *)&v20[199];
        v64 = (BRUSHOBJ *)&v20[216];
        if ( (v12 & 1) == 0 )
        {
LABEL_18:
          if ( (v12 & 2) != 0 )
          {
            v26 = v20[10];
            v27 = v20;
            v28 = *(_DWORD *)(*(_QWORD *)&v26 + 8LL);
            if ( (((unsigned __int8)v28 | LOBYTE(v20[40].y)) & 1) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v26 + 8LL) = v28 & 0xFFFFFFFE;
              pco = v25;
              v29 = (EBRUSHOBJ *)v58;
              (*a2)[40].y &= ~1u;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                v58,
                *a2,
                *(_QWORD *)&(*a2)[18],
                v24,
                pco,
                v22,
                1);
              v27 = *a2;
            }
            else
            {
              v29 = (EBRUSHOBJ *)v58;
            }
            if ( (v12 & 1) == 0 || (v30 = v57, v20 = v27, v57 >> 8 == (unsigned __int8)v57) )
            {
              v30 = EBRUSHOBJ::mixBest(
                      v29,
                      *(_BYTE *)(*(_QWORD *)&v27[10] + 72LL),
                      *(_BYTE *)(*(_QWORD *)&v27[10] + 73LL));
              v20 = v31;
            }
          }
          else
          {
            v30 = v57;
          }
          if ( (v20[4].y & 0xE0) != 0 && !(unsigned int)ERECTL::bEmpty((ERECTL *)&v72.rclBounds) )
          {
            if ( !(_DWORD)v46 || (v64[5].iSolidColor & 0x100) != 0 )
            {
              pbo = v58;
              if ( !v47 || (v58[5].iSolidColor & 0x100) != 0 )
                goto LABEL_25;
            }
            rclBounds = v72.rclBounds;
            XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v46, (struct ERECTL *)&rclBounds);
          }
          pbo = v58;
LABEL_25:
          v33 = ppo;
          *(_QWORD *)(*(_QWORD *)&ppo[1] + 72LL) = 0LL;
          if ( !v12 )
          {
            v12 = 0;
            if ( *(_DWORD *)(*(_QWORD *)&v62 + 2132LL) != 1 )
            {
              v12 = a5;
              v7 = (LINEATTRS *)&glaSimpleStroke;
              v30 = 2827;
            }
            if ( !v12 )
            {
              v36 = v59;
              goto LABEL_30;
            }
          }
          v34 = v12 - 1;
          if ( v34 )
          {
            v35 = v34 - 1;
            if ( v35 )
            {
              v55 = v35 == 1;
              v36 = v59;
              if ( !v55 )
              {
                v10 = 0;
LABEL_30:
                if ( v60 )
                {
                  v7->fl ^= 4u;
                  v7->elStyleState = v61;
                  *(_QWORD *)(*(_QWORD *)&v33[1] + 72LL) = 0LL;
                  v10 &= EPATHOBJ::bSimpleStroke(
                           v33,
                           (*a2)[9].x,
                           (struct PDEVOBJ *)&v62,
                           v36,
                           &v72,
                           pxo,
                           v63[0],
                           *a2 + 198,
                           v7,
                           v30);
                }
                goto LABEL_15;
              }
              v37 = EPATHOBJ::bSimpleStrokeAndFill(
                      v33,
                      (*a2)[9].x,
                      (struct PDEVOBJ *)&v62,
                      v59,
                      &v72,
                      pxo,
                      v64,
                      v7,
                      pbo,
                      *a2 + 198,
                      v30,
                      *(unsigned __int8 *)(*(_QWORD *)&(*a2)[10] + 74LL));
            }
            else
            {
              v36 = v59;
              v37 = EPATHOBJ::bSimpleFill(
                      v33,
                      (*a2)[9].x,
                      (struct PDEVOBJ *)&v62,
                      v59,
                      &v72,
                      pbo,
                      *a2 + 198,
                      v30,
                      *(unsigned __int8 *)(*(_QWORD *)&(*a2)[10] + 74LL));
            }
          }
          else
          {
            v36 = v59;
            v37 = EPATHOBJ::bSimpleStroke(
                    v33,
                    (*a2)[9].x,
                    (struct PDEVOBJ *)&v62,
                    v59,
                    &v72,
                    pxo,
                    v64,
                    *a2 + 198,
                    v7,
                    v30);
          }
          v10 = v37;
          goto LABEL_30;
        }
        x = v20[216].x;
        if ( (v7->fl & 1) != 0 )
        {
          v39 = 1;
          if ( x == -1 || (v20[231].x & 0x10000) == 0 && (*(_DWORD *)(*(_QWORD *)&v23 + 1816LL) & 0x800000) == 0 )
            goto LABEL_36;
        }
        else
        {
          v39 = 0;
          if ( x != -1 )
          {
LABEL_36:
            v40 = *a2;
            v41 = *a2;
            v42 = (*a2)[10];
            v43 = *(_DWORD *)(*(_QWORD *)&v42 + 8LL);
            if ( (((unsigned __int8)v43 | LOBYTE((*a2)[40].y)) & 2) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v42 + 8LL) = v43 & 0xFFFFFFFD;
              (*a2)[40].y &= ~2u;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                v63[0],
                *a2,
                *(_QWORD *)&(*a2)[19],
                v24,
                v25,
                v22,
                v39);
              v40 = *a2;
              v22 = v59;
              v41 = *a2;
            }
            v44 = v41;
            if ( v7->pstyle
              && (v63[0][5].iSolidColor & 0x800) != 0
              && *(_BYTE *)(*(_QWORD *)&v40[10] + 73LL) == 2
              && (v7->fl & 1) == 0 )
            {
              v60 = 1;
              v7->fl ^= 4u;
              v44 = *a2;
              v49 = *a2;
              LODWORD(v61.e) = v7->elStyleState;
              v50 = (*a2)[10];
              v51 = (BRUSHOBJ *)&(*a2)[250];
              v64 = v51;
              v52 = *(_DWORD *)(*(_QWORD *)&v50 + 8LL);
              if ( (v52 & 8) == 0 && v51->iSolidColor == -1 )
              {
                *(_DWORD *)(*(_QWORD *)&v50 + 8LL) = v52 | 8;
                v44 = *a2;
                v49 = *a2;
              }
              v53 = v49[10];
              v54 = *(_DWORD *)(*(_QWORD *)&v53 + 8LL);
              if ( (((unsigned __int8)v54 | LOBYTE(v49[40].y)) & 8) != 0 )
              {
                if ( (v49[9].x & 0x8000) == 0 )
                {
                  *(_DWORD *)(*(_QWORD *)&v53 + 8LL) = v54 & 0xFFFFFFF7;
                  (*a2)[40].y &= ~8u;
                  v49 = *a2;
                }
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                  v51,
                  v49,
                  gpbrBackground,
                  v24,
                  v25,
                  v22,
                  0);
                v44 = *a2;
              }
            }
            v45 = EBRUSHOBJ::mixBest(
                    (EBRUSHOBJ *)v63[0],
                    *(_BYTE *)(*(_QWORD *)&v44[10] + 72LL),
                    *(_BYTE *)(*(_QWORD *)&v44[10] + 73LL));
            v22 = v59;
            v57 = v45;
            goto LABEL_18;
          }
        }
        *(_DWORD *)(*(_QWORD *)&v20[10] + 8LL) |= 2u;
        goto LABEL_36;
      }
      EngSetLastError(5u);
    }
    else
    {
      v5 = XDCOBJ::bFullScreen((XDCOBJ *)a2);
    }
    v10 = v5;
LABEL_15:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v68);
    return v10;
  }
  if ( (unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)this, (struct EPATHOBJ *)this, a4, a3) )
  {
    if ( v7->pstyle )
      v7->elStyleState.l = 0;
    goto LABEL_7;
  }
  EngSetLastError(0x216u);
  return 0LL;
}
