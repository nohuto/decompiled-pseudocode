/*
 * XREFs of ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CD910
 * Callers:
 *     GreRectangle @ 0x1C0126530 (GreRectangle.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0126B5C (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GrePolyPolygonInternal @ 0x1C01497C4 (GrePolyPolygonInternal.c)
 *     NtGdiFillPath @ 0x1C0149F60 (NtGdiFillPath.c)
 *     GrePolylineTo @ 0x1C014EC30 (GrePolylineTo.c)
 *     GrePolyBezierTo @ 0x1C014EE40 (GrePolyBezierTo.c)
 *     GrePolyPolylineInternal @ 0x1C0157724 (GrePolyPolylineInternal.c)
 *     NtGdiRoundRect @ 0x1C0157F40 (NtGdiRoundRect.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C0268F70 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C0269620 (GreAngleArc.c)
 *     GrePolyDraw @ 0x1C0269DF4 (GrePolyDraw.c)
 *     NtGdiEllipse @ 0x1C026A2C0 (NtGdiEllipse.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A6850 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A69E0 (NtGdiStrokePath.c)
 *     NtGdiArcInternal @ 0x1C02A9BF0 (NtGdiArcInternal.c)
 * Callees:
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00A22B4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A3D3C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00A3D64 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00A4618 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A8A00 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C00CB370 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C00CD54C (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C00CDFD4 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00CE000 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00F3B10 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C014C9B4 (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall EPATHOBJ::bStrokeAndOrFill(
        PATHOBJ *ppo,
        POINTL **this,
        LINEATTRS *a3,
        struct _XFORMOBJ *a4,
        unsigned int a5)
{
  LINEATTRS *v6; // r14
  unsigned int v9; // esi
  unsigned int v10; // r9d
  unsigned int v11; // r12d
  _DWORD *v12; // rcx
  int v13; // ebx
  int v14; // ebx
  int v15; // eax
  __int64 v16; // r11
  POINTL *v17; // r8
  __int64 v18; // rdx
  struct REGION *v19; // rax
  POINTL *v20; // r9
  struct SURFACE *v22; // r11
  POINTL v23; // rax
  POINTL v24; // rdi
  __int64 v25; // rbx
  POINTL v26; // rdx
  POINTL *v27; // r10
  int v28; // ecx
  EBRUSHOBJ *v29; // rdi
  unsigned int v30; // ebx
  POINTL *v31; // r10
  BOOL v32; // eax
  struct ECLIPOBJ *v33; // rdx
  int v34; // r10d
  BRUSHOBJ *v35; // rdi
  BRUSHOBJ *pbo; // r9
  unsigned int v37; // r12d
  unsigned int v38; // r12d
  struct SURFACE *v39; // rsi
  int v40; // edi
  XFORMOBJ *v41; // r12
  POINTL v42; // r9
  LONG x; // edx
  int v44; // r10d
  POINTL *v45; // rdx
  POINTL *v46; // rcx
  POINTL v47; // r9
  int v48; // r8d
  POINTL *v49; // r9
  unsigned int v50; // eax
  int v51; // eax
  bool v52; // zf
  unsigned int v53; // eax
  POINTL *v54; // rdx
  POINTL v55; // rcx
  BRUSHOBJ *v56; // r10
  int v57; // eax
  POINTL v58; // r8
  int v59; // ecx
  unsigned int v60; // [rsp+64h] [rbp-9Ch]
  BRUSHOBJ *v61; // [rsp+68h] [rbp-98h]
  struct SURFACE *v62; // [rsp+70h] [rbp-90h]
  int v63; // [rsp+7Ch] [rbp-84h]
  FLOAT_LONG v64; // [rsp+80h] [rbp-80h]
  _QWORD v66[2]; // [rsp+90h] [rbp-70h] BYREF
  BRUSHOBJ *v67[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v68; // [rsp+B0h] [rbp-50h]
  BRUSHOBJ *v69[2]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v70[32]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v71[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v72; // [rsp+100h] [rbp+0h]
  __int128 v73; // [rsp+120h] [rbp+20h] BYREF
  CLIPOBJ pco; // [rsp+130h] [rbp+30h] BYREF
  __int64 v75; // [rsp+180h] [rbp+80h]
  int v76; // [rsp+188h] [rbp+88h]
  int v77; // [rsp+1B0h] [rbp+B0h]
  __int64 v78; // [rsp+1C0h] [rbp+C0h]

  v6 = a3;
  v68 = 0;
  v63 = 0;
  v64.l = 0;
  v60 = 0;
  if ( !ppo->cCurves )
    return 1LL;
  v9 = 1;
  v10 = a5 & 0xFFFFFFFE;
  if ( (struct PEN *)(*this)[18] != gpPenNull )
    v10 = a5;
  v11 = v10 & 0xFFFFFFFD;
  if ( (struct BRUSH *)(*this)[17] != gpbrNull )
    v11 = v10;
  if ( (v11 & 1) == 0 || (a3->fl & 1) == 0 )
  {
LABEL_7:
    v12 = (_DWORD *)ppo[1];
    v13 = v12[12];
    HIDWORD(v67[0]) = (int)v12[13] >> 4;
    v14 = v13 >> 4;
    v15 = ((v12[15] + 15) >> 4) + 1;
    LODWORD(v67[0]) = v14;
    HIDWORD(v67[1]) = v15;
    LODWORD(v67[1]) = ((v12[14] + 15) >> 4) + 1;
    if ( ((*this)[4].y & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)this, (struct ERECTL *)v67);
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)this) )
      return v9;
    v71[1] = 0LL;
    v71[0] = v16;
    v72 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v70, (struct XDCOBJ *)this, 0);
    if ( (v70[24] & 1) != 0 )
    {
      if ( (unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)&(*this)[62]) )
      {
        v17 = *this;
        v73 = *(_OWORD *)v67;
        v18 = v17[5].x & 1;
        LODWORD(v73) = v14 + v17[v18 + 127].x;
        DWORD2(v73) = v17[v18 + 127].x + LODWORD(v67[1]);
        DWORD1(v73) = v17[v18 + 127].y + HIDWORD(v67[0]);
        HIDWORD(v73) = v17[v18 + 127].y + HIDWORD(v67[1]);
        EPATHOBJ::vOffset((EPATHOBJ *)ppo, (struct EPOINTL *)&v17[(v17[5].x & 1) + 127]);
        v19 = XDCOBJ::prgnEffRao((DC **)this);
        v75 = 0LL;
        v76 = 0;
        v78 = 0LL;
        v77 = 1;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v19, (struct ERECTL *)&v73, 0);
        v20 = *this;
        if ( (*this)[4].x == 2 || ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          if ( (v11 & 1) != 0 && (v6->pstyle && (v6->fl & 1) == 0 || (v6->fl & 2) != 0) )
            EPATHOBJ::vUpdateCosmeticStyleState((EPATHOBJ *)ppo, *(struct SURFACE **)&v20[62], v6);
          goto LABEL_15;
        }
        v22 = (struct SURFACE *)v20[62];
        v23 = v20[6];
        v66[0] = v23;
        v24 = v20[11];
        v25 = *((_QWORD *)v22 + 16);
        v62 = v22;
        v67[0] = (BRUSHOBJ *)&v20[165];
        v61 = (BRUSHOBJ *)&v20[148];
        v69[0] = (BRUSHOBJ *)&v20[165];
        if ( (v11 & 1) == 0 )
        {
LABEL_19:
          if ( (v11 & 2) != 0 )
          {
            v26 = v20[122];
            v27 = v20;
            v28 = *(_DWORD *)(*(_QWORD *)&v26 + 152LL);
            if ( (((unsigned __int8)v28 | LOBYTE(v20[39].y)) & 1) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v26 + 152LL) = v28 & 0xFFFFFFFE;
              v42 = v24;
              v29 = (EBRUSHOBJ *)v61;
              (*this)[39].y &= ~1u;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                v61,
                *this,
                *(_QWORD *)&(*this)[17],
                v42,
                v25,
                v22,
                1);
              v27 = *this;
            }
            else
            {
              v29 = (EBRUSHOBJ *)v61;
            }
            if ( (v11 & 1) == 0 || (v30 = v60, v20 = v27, v60 >> 8 == (unsigned __int8)v60) )
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
            v30 = v60;
          }
          if ( (v20[4].y & 0xE0) != 0 )
          {
            v32 = ERECTL::bEmpty((ERECTL *)&pco.rclBounds);
            v35 = v69[0];
            if ( !v32 )
            {
              if ( !(_DWORD)v33 || (v69[0][5].iSolidColor & 0x100) != 0 )
              {
                pbo = v61;
                if ( !v34 || (v61[5].iSolidColor & 0x100) != 0 )
                  goto LABEL_31;
              }
              *(RECTL *)v69 = pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)this, v33, (__m128i *)v69);
            }
          }
          else
          {
            v35 = v69[0];
          }
          pbo = v61;
LABEL_31:
          *(_QWORD *)(*(_QWORD *)&ppo[1] + 72LL) = 0LL;
          if ( !v11 )
          {
            v11 = 0;
            if ( *(_DWORD *)(v66[0] + 2140LL) != 1 )
            {
              v11 = a5;
              v6 = (LINEATTRS *)&glaSimpleStroke;
              v30 = 2827;
            }
            if ( !v11 )
            {
              v40 = 1;
              v39 = v62;
              goto LABEL_35;
            }
          }
          v37 = v11 - 1;
          if ( v37 )
          {
            v38 = v37 - 1;
            if ( !v38 )
            {
              v39 = v62;
              v40 = EPATHOBJ::bSimpleFill(
                      ppo,
                      (*this)[9].x,
                      (struct PDEVOBJ *)v66,
                      v62,
                      &pco,
                      pbo,
                      *this + 147,
                      v30,
                      *(unsigned __int8 *)(*(_QWORD *)&(*this)[122] + 214LL));
LABEL_35:
              v41 = a4;
LABEL_36:
              if ( v63 )
              {
                v6->fl ^= 4u;
                v6->elStyleState = v64;
                *(_QWORD *)(*(_QWORD *)&ppo[1] + 72LL) = 0LL;
                v40 &= EPATHOBJ::bSimpleStroke(
                         ppo,
                         (*this)[9].x,
                         (struct PDEVOBJ *)v66,
                         v39,
                         &pco,
                         v41,
                         v67[0],
                         *this + 147,
                         v6,
                         v30);
              }
              v9 = v40;
              goto LABEL_15;
            }
            v52 = v38 == 1;
            v41 = a4;
            v39 = v62;
            if ( !v52 )
            {
              v40 = v68;
              goto LABEL_36;
            }
            v51 = EPATHOBJ::bSimpleStrokeAndFill(
                    ppo,
                    (*this)[9].x,
                    (struct PDEVOBJ *)v66,
                    v62,
                    &pco,
                    a4,
                    v35,
                    v6,
                    pbo,
                    *this + 147,
                    v30,
                    *(unsigned __int8 *)(*(_QWORD *)&(*this)[122] + 214LL));
          }
          else
          {
            v41 = a4;
            v39 = v62;
            v51 = EPATHOBJ::bSimpleStroke(
                    ppo,
                    (*this)[9].x,
                    (struct PDEVOBJ *)v66,
                    v62,
                    &pco,
                    a4,
                    v35,
                    *this + 147,
                    v6,
                    v30);
          }
          v40 = v51;
          goto LABEL_36;
        }
        x = v20[165].x;
        if ( (v6->fl & 1) != 0 )
        {
          v44 = 1;
          if ( x == -1 || (v20[180].x & 0x10000) == 0 && (*(_DWORD *)(*(_QWORD *)&v23 + 1824LL) & 0x800000) == 0 )
            goto LABEL_47;
        }
        else
        {
          v44 = 0;
          if ( x != -1 )
          {
LABEL_47:
            v45 = *this;
            v46 = *this;
            v47 = (*this)[122];
            v48 = *(_DWORD *)(*(_QWORD *)&v47 + 152LL);
            if ( (((unsigned __int8)v48 | LOBYTE((*this)[39].y)) & 2) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v47 + 152LL) = v48 & 0xFFFFFFFD;
              (*this)[39].y &= ~2u;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                v67[0],
                *this,
                *(_QWORD *)&(*this)[18],
                v24,
                v25,
                v22,
                v44);
              v45 = *this;
              v22 = v62;
              v46 = *this;
            }
            v49 = v46;
            if ( v6->pstyle
              && (v67[0][5].iSolidColor & 0x800) != 0
              && *(_BYTE *)(*(_QWORD *)&v45[122] + 213LL) == 2
              && (v6->fl & 1) == 0 )
            {
              v63 = 1;
              v6->fl ^= 4u;
              v49 = *this;
              v54 = *this;
              LODWORD(v64.e) = v6->elStyleState;
              v55 = (*this)[122];
              v56 = (BRUSHOBJ *)&(*this)[199];
              v69[0] = v56;
              v57 = *(_DWORD *)(*(_QWORD *)&v55 + 152LL);
              if ( (v57 & 8) == 0 && v56->iSolidColor == -1 )
              {
                *(_DWORD *)(*(_QWORD *)&v55 + 152LL) = v57 | 8;
                v49 = *this;
                v54 = *this;
              }
              v58 = v54[122];
              v59 = *(_DWORD *)(*(_QWORD *)&v58 + 152LL);
              if ( (((unsigned __int8)v59 | LOBYTE(v54[39].y)) & 8) != 0 )
              {
                if ( (v54[9].x & 0x8000) == 0 )
                {
                  *(_DWORD *)(*(_QWORD *)&v58 + 152LL) = v59 & 0xFFFFFFF7;
                  (*this)[39].y &= ~8u;
                  v54 = *this;
                }
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                  v56,
                  v54,
                  gpbrBackground,
                  v24,
                  v25,
                  v22,
                  0);
                v49 = *this;
              }
            }
            v50 = EBRUSHOBJ::mixBest(
                    (EBRUSHOBJ *)v67[0],
                    *(_BYTE *)(*(_QWORD *)&v49[122] + 212LL),
                    *(_BYTE *)(*(_QWORD *)&v49[122] + 213LL));
            v22 = v62;
            v60 = v50;
            goto LABEL_19;
          }
        }
        *(_DWORD *)(*(_QWORD *)&v20[122] + 152LL) |= 2u;
        goto LABEL_47;
      }
      EngSetLastError(5u);
      v53 = 0;
    }
    else
    {
      v53 = XDCOBJ::bFullScreen((XDCOBJ *)this);
    }
    v9 = v53;
LABEL_15:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v70);
    if ( v71[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v71);
    return v9;
  }
  if ( (unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)ppo, (struct EPATHOBJ *)ppo, a4, a3) )
  {
    if ( v6->pstyle )
      v6->elStyleState.l = 0;
    goto LABEL_7;
  }
  EngSetLastError(0x216u);
  return 0LL;
}
