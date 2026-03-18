/*
 * XREFs of ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC
 * Callers:
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00A0A94 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreRectangle @ 0x1C00A3F7C (GreRectangle.c)
 *     NtGdiFillPath @ 0x1C0140390 (NtGdiFillPath.c)
 *     GrePolylineTo @ 0x1C01404E0 (GrePolylineTo.c)
 *     GrePolyBezierTo @ 0x1C01407D0 (GrePolyBezierTo.c)
 *     GrePolyPolygonInternal @ 0x1C0140DE0 (GrePolyPolygonInternal.c)
 *     GrePolyPolylineInternal @ 0x1C0141584 (GrePolyPolylineInternal.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C024FA1C (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C02500CC (GreAngleArc.c)
 *     GrePolyDraw @ 0x1C0250898 (GrePolyDraw.c)
 *     NtGdiEllipse @ 0x1C0250DD0 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C0251040 (NtGdiRoundRect.c)
 *     NtGdiStrokeAndFillPath @ 0x1C0291100 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02912A0 (NtGdiStrokePath.c)
 *     NtGdiArcInternal @ 0x1C0294C80 (NtGdiArcInternal.c)
 * Callees:
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C004CBF8 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C013A20C (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C013D880 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C013EA14 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C013EA40 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C014F120 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C026A288 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
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
  int v37; // eax
  struct ECLIPOBJ *v38; // rdx
  int v39; // r10d
  LONG x; // edx
  int v41; // r10d
  POINTL *v42; // rdx
  POINTL *v43; // rcx
  POINTL v44; // r9
  int v45; // r8d
  POINTL *v46; // r9
  unsigned int v47; // eax
  POINTL *v48; // rdx
  POINTL v49; // rcx
  BRUSHOBJ *v50; // r10
  int v51; // eax
  POINTL v52; // r8
  int v53; // ecx
  bool v54; // zf
  CLIPOBJ *pco; // [rsp+20h] [rbp-E0h]
  MIX v56; // [rsp+64h] [rbp-9Ch]
  BRUSHOBJ *v57; // [rsp+68h] [rbp-98h]
  struct SURFACE *v58; // [rsp+70h] [rbp-90h]
  int v59; // [rsp+7Ch] [rbp-84h]
  FLOAT_LONG v60; // [rsp+80h] [rbp-80h]
  POINTL v61; // [rsp+88h] [rbp-78h] BYREF
  BRUSHOBJ *v62[2]; // [rsp+90h] [rbp-70h] BYREF
  BRUSHOBJ *v63; // [rsp+A0h] [rbp-60h]
  XFORMOBJ *pxo; // [rsp+B0h] [rbp-50h]
  PATHOBJ *ppo; // [rsp+B8h] [rbp-48h]
  __m128i rclBounds; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v67[32]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v68[80]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v69; // [rsp+140h] [rbp+40h] BYREF
  CLIPOBJ v70; // [rsp+150h] [rbp+50h] BYREF
  __int64 v71; // [rsp+188h] [rbp+88h]
  __int64 v72; // [rsp+1A0h] [rbp+A0h]
  int v73; // [rsp+1A8h] [rbp+A8h]
  int v74; // [rsp+1D0h] [rbp+D0h]
  __int64 v75; // [rsp+1E0h] [rbp+E0h]

  v5 = 0;
  pxo = a4;
  v7 = a3;
  ppo = this;
  v59 = 0;
  v60.l = 0;
  v56 = 0;
  if ( !this->cCurves )
    return 1LL;
  v10 = 1;
  v11 = a5 & 0xFFFFFFFE;
  if ( (struct PEN *)(*a2)[18] != gpPenNull )
    v11 = a5;
  v12 = v11 & 0xFFFFFFFD;
  if ( (struct BRUSH *)(*a2)[17] != gpbrNull )
    v12 = v11;
  if ( (v12 & 1) == 0 || (a3->fl & 1) == 0 )
  {
LABEL_7:
    v13 = (_DWORD *)this[1];
    v14 = v13[12];
    HIDWORD(v62[0]) = (int)v13[13] >> 4;
    v15 = v14 >> 4;
    v16 = ((v13[15] + 15) >> 4) + 1;
    LODWORD(v62[0]) = v15;
    HIDWORD(v62[1]) = v16;
    LODWORD(v62[1]) = ((v13[14] + 15) >> 4) + 1;
    if ( ((*a2)[4].y & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)a2, (struct ERECTL *)v62);
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)a2) )
      return v10;
    DCOBJ::DCOBJ((DCOBJ *)v68);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v67, (struct XDCOBJ *)a2, 0);
    if ( (v67[24] & 1) != 0 )
    {
      if ( (unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)&(*a2)[62]) )
      {
        v17 = *a2;
        v69 = *(_OWORD *)v62;
        v18 = v17[5].x & 1;
        LODWORD(v69) = v15 + v17[v18 + 127].x;
        DWORD2(v69) = v17[v18 + 127].x + LODWORD(v62[1]);
        DWORD1(v69) = v17[v18 + 127].y + HIDWORD(v62[0]);
        HIDWORD(v69) = v17[v18 + 127].y + HIDWORD(v62[1]);
        EPATHOBJ::vOffset((EPATHOBJ *)this, (struct EPOINTL *)&v17[(v17[5].x & 1) + 127]);
        v19 = XDCOBJ::prgnEffRao((DC **)a2);
        v71 = 0LL;
        v72 = 0LL;
        v73 = 0;
        v74 = 1;
        v75 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&v70, v19, (struct ERECTL *)&v69, 0);
        v20 = *a2;
        if ( (*a2)[4].x == 2 || ERECTL::bEmpty((ERECTL *)&v70.rclBounds) )
        {
          if ( (v12 & 1) != 0 && (v7->pstyle && (v7->fl & 1) == 0 || (v7->fl & 2) != 0) )
            EPATHOBJ::vUpdateCosmeticStyleState((EPATHOBJ *)this, *(struct SURFACE **)&v20[62], v7);
          goto LABEL_15;
        }
        v22 = (struct SURFACE *)v20[62];
        v23 = v20[6];
        v61 = v23;
        v24 = v20[11];
        v25 = (CLIPOBJ *)*((_QWORD *)v22 + 16);
        v58 = v22;
        v62[0] = (BRUSHOBJ *)&v20[168];
        v57 = (BRUSHOBJ *)&v20[151];
        v63 = (BRUSHOBJ *)&v20[168];
        if ( (v12 & 1) == 0 )
        {
LABEL_18:
          if ( (v12 & 2) != 0 )
          {
            v26 = v20[122];
            v27 = v20;
            v28 = *(_DWORD *)(*(_QWORD *)&v26 + 152LL);
            if ( (((unsigned __int8)v28 | LOBYTE(v20[39].y)) & 1) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v26 + 152LL) = v28 & 0xFFFFFFFE;
              pco = v25;
              v29 = (EBRUSHOBJ *)v57;
              (*a2)[39].y &= ~1u;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                v57,
                *a2,
                *(_QWORD *)&(*a2)[17],
                v24,
                pco,
                v22,
                1);
              v27 = *a2;
            }
            else
            {
              v29 = (EBRUSHOBJ *)v57;
            }
            if ( (v12 & 1) == 0 || (v30 = v56, v20 = v27, v56 >> 8 == (unsigned __int8)v56) )
            {
              v30 = EBRUSHOBJ::mixBest(
                      v29,
                      *(_BYTE *)(*(_QWORD *)&v27[122] + 212LL),
                      *(_BYTE *)(*(_QWORD *)&v27[122] + 213LL));
              v20 = v31;
            }
          }
          else
          {
            v30 = v56;
          }
          if ( (v20[4].y & 0xE0) != 0 && !ERECTL::bEmpty((ERECTL *)&v70.rclBounds) )
          {
            if ( !(_DWORD)v38 || (v63[5].iSolidColor & 0x100) != 0 )
            {
              pbo = v57;
              if ( !v39 || (v57[5].iSolidColor & 0x100) != 0 )
                goto LABEL_25;
            }
            rclBounds = (__m128i)v70.rclBounds;
            XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v38, &rclBounds);
          }
          pbo = v57;
LABEL_25:
          v33 = ppo;
          *(_QWORD *)(*(_QWORD *)&ppo[1] + 72LL) = 0LL;
          if ( !v12 )
          {
            v12 = 0;
            if ( *(_DWORD *)(*(_QWORD *)&v61 + 2140LL) != 1 )
            {
              v12 = a5;
              v7 = (LINEATTRS *)&glaSimpleStroke;
              v30 = 2827;
            }
            if ( !v12 )
            {
              v36 = v58;
              goto LABEL_30;
            }
          }
          v34 = v12 - 1;
          if ( v34 )
          {
            v35 = v34 - 1;
            if ( v35 )
            {
              v54 = v35 == 1;
              v36 = v58;
              if ( !v54 )
              {
                v10 = 0;
LABEL_30:
                if ( v59 )
                {
                  v7->fl ^= 4u;
                  v7->elStyleState = v60;
                  *(_QWORD *)(*(_QWORD *)&v33[1] + 72LL) = 0LL;
                  v10 &= EPATHOBJ::bSimpleStroke(
                           v33,
                           (*a2)[9].x,
                           (struct PDEVOBJ *)&v61,
                           v36,
                           &v70,
                           pxo,
                           v62[0],
                           *a2 + 150,
                           v7,
                           v30);
                }
                goto LABEL_15;
              }
              v37 = EPATHOBJ::bSimpleStrokeAndFill(
                      v33,
                      (*a2)[9].x,
                      (struct PDEVOBJ *)&v61,
                      v58,
                      &v70,
                      pxo,
                      v63,
                      v7,
                      pbo,
                      *a2 + 150,
                      v30,
                      *(unsigned __int8 *)(*(_QWORD *)&(*a2)[122] + 214LL));
            }
            else
            {
              v36 = v58;
              v37 = EPATHOBJ::bSimpleFill(
                      v33,
                      (*a2)[9].x,
                      (struct PDEVOBJ *)&v61,
                      v58,
                      &v70,
                      pbo,
                      *a2 + 150,
                      v30,
                      *(unsigned __int8 *)(*(_QWORD *)&(*a2)[122] + 214LL));
            }
          }
          else
          {
            v36 = v58;
            v37 = EPATHOBJ::bSimpleStroke(
                    v33,
                    (*a2)[9].x,
                    (struct PDEVOBJ *)&v61,
                    v58,
                    &v70,
                    pxo,
                    v63,
                    *a2 + 150,
                    v7,
                    v30);
          }
          v10 = v37;
          goto LABEL_30;
        }
        x = v20[168].x;
        if ( (v7->fl & 1) != 0 )
        {
          v41 = 1;
          if ( x == -1 || (v20[183].x & 0x10000) == 0 && (*(_DWORD *)(*(_QWORD *)&v23 + 1824LL) & 0x800000) == 0 )
            goto LABEL_44;
        }
        else
        {
          v41 = 0;
          if ( x != -1 )
          {
LABEL_44:
            v42 = *a2;
            v43 = *a2;
            v44 = (*a2)[122];
            v45 = *(_DWORD *)(*(_QWORD *)&v44 + 152LL);
            if ( (((unsigned __int8)v45 | LOBYTE((*a2)[39].y)) & 2) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v44 + 152LL) = v45 & 0xFFFFFFFD;
              (*a2)[39].y &= ~2u;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                v62[0],
                *a2,
                *(_QWORD *)&(*a2)[18],
                v24,
                v25,
                v22,
                v41);
              v42 = *a2;
              v22 = v58;
              v43 = *a2;
            }
            v46 = v43;
            if ( v7->pstyle
              && (v62[0][5].iSolidColor & 0x800) != 0
              && *(_BYTE *)(*(_QWORD *)&v42[122] + 213LL) == 2
              && (v7->fl & 1) == 0 )
            {
              v59 = 1;
              v7->fl ^= 4u;
              v46 = *a2;
              v48 = *a2;
              LODWORD(v60.e) = v7->elStyleState;
              v49 = (*a2)[122];
              v50 = (BRUSHOBJ *)&(*a2)[202];
              v63 = v50;
              v51 = *(_DWORD *)(*(_QWORD *)&v49 + 152LL);
              if ( (v51 & 8) == 0 && v50->iSolidColor == -1 )
              {
                *(_DWORD *)(*(_QWORD *)&v49 + 152LL) = v51 | 8;
                v46 = *a2;
                v48 = *a2;
              }
              v52 = v48[122];
              v53 = *(_DWORD *)(*(_QWORD *)&v52 + 152LL);
              if ( (((unsigned __int8)v53 | LOBYTE(v48[39].y)) & 8) != 0 )
              {
                if ( (v48[9].x & 0x8000) == 0 )
                {
                  *(_DWORD *)(*(_QWORD *)&v52 + 152LL) = v53 & 0xFFFFFFF7;
                  (*a2)[39].y &= ~8u;
                  v48 = *a2;
                }
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                  v50,
                  v48,
                  gpbrBackground,
                  v24,
                  v25,
                  v22,
                  0);
                v46 = *a2;
              }
            }
            v47 = EBRUSHOBJ::mixBest(
                    (EBRUSHOBJ *)v62[0],
                    *(_BYTE *)(*(_QWORD *)&v46[122] + 212LL),
                    *(_BYTE *)(*(_QWORD *)&v46[122] + 213LL));
            v22 = v58;
            v56 = v47;
            goto LABEL_18;
          }
        }
        *(_DWORD *)(*(_QWORD *)&v20[122] + 152LL) |= 2u;
        goto LABEL_44;
      }
      EngSetLastError(5u);
    }
    else
    {
      v5 = XDCOBJ::bFullScreen((XDCOBJ *)a2);
    }
    v10 = v5;
LABEL_15:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v67);
    DCOBJ::~DCOBJ((DCOBJ *)v68);
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
