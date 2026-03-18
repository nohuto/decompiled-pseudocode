/*
 * XREFs of ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00024CC
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00922E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C0002A08 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000471C (-PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0004744 (-PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C0004838 (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C007C3CC (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C007C62C (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     STROBJ_bEnum @ 0x1C00AC810 (STROBJ_bEnum.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00E1AE4 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C01202A0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C0120454 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C0277568 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C028C34C (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall bProxyDrvTextOut(
        struct XDCOBJ *a1,
        struct SURFACE *a2,
        struct ESTROBJ *a3,
        CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        struct RFONTOBJ *a10,
        struct PDEVOBJ *a11,
        unsigned int a12,
        struct _RECTL *a13)
{
  int v13; // r15d
  struct RFONTOBJ *v14; // rbx
  CLIPOBJ *v15; // rsi
  _WORD *v16; // r11
  struct _RECTL *v18; // r14
  struct SURFACE *v19; // r12
  POINTL *v20; // r10
  __int64 v21; // rax
  unsigned int v22; // r13d
  struct _SURFOBJ *v23; // r9
  _DWORD *v24; // r8
  _BOOL8 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 result; // rax
  RFONTOBJ *v30; // r13
  _DWORD *v31; // rdx
  unsigned __int64 v32; // r8
  _WORD *v33; // rcx
  unsigned __int64 v34; // r10
  __int64 v35; // rcx
  __int128 v36; // xmm0
  __int64 v37; // rcx
  float v38; // xmm0_4
  int v39; // r14d
  BOOL (__stdcall *v40)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rsi
  int v41; // edx
  struct XDCOBJ *v42; // rbx
  PGLYPHPOS v43; // rbx
  unsigned int v44; // r14d
  int v45; // r15d
  struct _RECTL *v46; // r9
  int v47; // eax
  unsigned int v48; // edx
  __int64 v49; // r9
  int *v50; // rcx
  int v51; // edx
  LONG right; // edx
  unsigned __int64 left; // r8
  LONG v54; // eax
  __int64 v55; // rax
  LONG top; // ecx
  LONG bottom; // ecx
  __int64 v58; // rbx
  unsigned int v59; // r14d
  unsigned int v60; // r15d
  PGLYPHPOS v61; // rsi
  int v62; // r12d
  bool v63; // zf
  struct RFONTOBJ *v64; // rbx
  int v65; // eax
  BOOL v66; // eax
  int v67; // r10d
  GLYPHBITS *pgb; // rdx
  int v69; // ecx
  int v70; // r8d
  int v71; // eax
  BRUSHOBJ *pbo; // [rsp+28h] [rbp-D8h]
  POINTL *v73; // [rsp+38h] [rbp-C8h]
  POINTL *v74; // [rsp+40h] [rbp-C0h]
  unsigned int v75; // [rsp+58h] [rbp-A8h]
  int v76; // [rsp+60h] [rbp-A0h]
  int v77; // [rsp+64h] [rbp-9Ch]
  unsigned int v78; // [rsp+68h] [rbp-98h] BYREF
  struct _RECTL *v79; // [rsp+70h] [rbp-90h]
  PGLYPHPOS ppgpos; // [rsp+78h] [rbp-88h] BYREF
  __int64 v81; // [rsp+80h] [rbp-80h] BYREF
  int v82; // [rsp+88h] [rbp-78h]
  int v83; // [rsp+90h] [rbp-70h]
  unsigned int v84; // [rsp+94h] [rbp-6Ch]
  struct SURFACE *v85; // [rsp+98h] [rbp-68h]
  struct XDCOBJ *v86; // [rsp+A0h] [rbp-60h]
  unsigned int v87; // [rsp+A8h] [rbp-58h] BYREF
  struct RFONTOBJ *v88; // [rsp+B0h] [rbp-50h]
  CLIPOBJ *pco; // [rsp+B8h] [rbp-48h]
  POINTL *v90; // [rsp+C0h] [rbp-40h]
  ULONG pc; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v92; // [rsp+CCh] [rbp-34h] BYREF
  BRUSHOBJ *v93; // [rsp+D0h] [rbp-30h]
  struct _SURFOBJ *v94; // [rsp+D8h] [rbp-28h]
  struct PDEVOBJ *v95; // [rsp+E0h] [rbp-20h]
  struct _BRUSHOBJ *v96; // [rsp+E8h] [rbp-18h]
  struct _POINTL v97; // [rsp+F0h] [rbp-10h] BYREF
  struct _RECTL *v98; // [rsp+F8h] [rbp-8h]
  _BOOL8 v99; // [rsp+100h] [rbp+0h]
  _WORD *v100; // [rsp+108h] [rbp+8h]
  __int64 v101; // [rsp+110h] [rbp+10h]
  LINEATTRS v102; // [rsp+118h] [rbp+18h] BYREF
  PATHOBJ ppo; // [rsp+140h] [rbp+40h] BYREF
  __int64 v104; // [rsp+148h] [rbp+48h]
  int v105[10]; // [rsp+1C0h] [rbp+C0h] BYREF
  int v106[10]; // [rsp+1E8h] [rbp+E8h] BYREF

  v13 = 0;
  v14 = a10;
  v15 = a4;
  v16 = (_WORD *)*((_QWORD *)a3 + 25);
  v18 = a6;
  v19 = a2;
  v20 = a9;
  v98 = a5;
  v93 = a7;
  v96 = a8;
  v95 = a11;
  v84 = *(_DWORD *)a3;
  v21 = *((_QWORD *)a3 + 7);
  *((_QWORD *)a3 + 4) = 0LL;
  v101 = v21;
  pco = a4;
  v22 = 1;
  v23 = (struct _SURFOBJ *)*((_QWORD *)a3 + 5);
  v24 = *(_DWORD **)a10;
  v77 = 1;
  v85 = a2;
  v86 = a1;
  LODWORD(v21) = v24[115];
  v79 = a6;
  v90 = a9;
  v88 = a10;
  v83 = 0;
  v25 = 0LL;
  v100 = v16;
  v94 = v23;
  if ( (v21 & 4) != 0 && v24[48] == 1 )
    v25 = *(_DWORD *)(*(_QWORD *)a1 + 2148LL) != v24[95];
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  v26 = *(_QWORD *)a10;
  v76 = 0;
  if ( *(_DWORD *)(*(_QWORD *)a10 + 824LL) + 4 > 0 )
  {
    v99 = v25;
    while ( 1 )
    {
      v82 = 0;
      v81 = 0LL;
      if ( v13 )
        break;
      v47 = *((_DWORD *)a3 + 62) + *((_DWORD *)a3 + 63) + *((_DWORD *)a3 + 64);
      v48 = *(_DWORD *)(v26 + 824);
      if ( v48 )
      {
        v49 = v48;
        v50 = (int *)*((_QWORD *)a3 + 33);
        do
        {
          if ( *((_QWORD *)a3 + 33) )
            v51 = *v50;
          else
            v51 = 0;
          v47 += v51;
          ++v50;
          --v49;
        }
        while ( v49 );
        v23 = v94;
      }
      if ( v47 == v84 )
      {
        if ( v18 )
        {
          left = (unsigned int)a13->left;
          if ( (int)left <= v18->left )
            left = (unsigned int)v18->left;
          v15->rclBounds.left = left;
          right = a13->right;
          if ( right >= v18->right )
            right = v18->right;
          v15->rclBounds.right = right;
          top = a13->top;
          if ( top <= v18->top )
            top = v18->top;
          v15->rclBounds.top = top;
          bottom = a13->bottom;
          if ( bottom >= v18->bottom )
            bottom = v18->bottom;
          v15->rclBounds.bottom = bottom;
        }
        else
        {
          right = v15->rclBounds.right;
          left = (unsigned int)v15->rclBounds.left;
        }
        if ( (int)left < right && v15->rclBounds.top < v15->rclBounds.bottom && v18 )
        {
          ++*((_DWORD *)v19 + 23);
          TextOutBitBlt(
            v19,
            v14,
            (struct _SURFOBJ *)left,
            v23,
            v15,
            (struct _XLATEOBJ *)pbo,
            v18,
            v73,
            v74,
            v96,
            v20,
            v75);
        }
        v15->rclBounds.left = a13->left;
        v15->rclBounds.top = a13->top;
        v15->rclBounds.right = a13->right;
        v54 = a13->bottom;
        v18 = 0LL;
        v79 = 0LL;
        v15->rclBounds.bottom = v54;
        goto LABEL_12;
      }
      v30 = v14;
LABEL_17:
      v31 = (_DWORD *)*((_QWORD *)a3 + 26);
      v32 = v84;
      v33 = v16;
      v34 = 0LL;
      if ( v31 > &v31[v84] )
        v32 = 0LL;
      if ( v32 )
      {
        do
        {
          if ( *v31 == v13 )
            *v33++ = v23->dhsurf;
          v23 = (struct _SURFOBJ *)((char *)v23 + 2);
          ++v31;
          ++v34;
        }
        while ( v34 < v32 );
      }
      *((_QWORD *)a3 + 5) = v16;
      v35 = v33 - v16;
      v83 += v35;
      *(_DWORD *)a3 = v35;
      *((_DWORD *)a3 + 59) = v13;
      *((_DWORD *)a3 + 12) = 0;
      if ( v13 && (unsigned int)bAdjusBaseLine(v14, (struct RFONTOBJ *)&v81, &v97) )
        ESTROBJ::ptlBaseLineAdjustSet(a3, &v97);
      v36 = *(_OWORD *)((char *)a3 + 12);
      *((_QWORD *)a3 + 7) = v30;
      *(_OWORD *)((char *)a3 + 180) = v36;
      v37 = *(_QWORD *)v30;
      if ( (*(_DWORD *)(*(_QWORD *)v30 + 72LL) & 2) != 0 )
      {
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
        if ( v104 )
        {
          v58 = *((_QWORD *)v19 + 6);
          v87 = 0;
          v59 = 0;
          v78 = 0;
          v60 = 0;
          v61 = (PGLYPHPOS)v105;
          v62 = 0;
          ppgpos = (PGLYPHPOS)v105;
          v77 = ESTROBJ::bTextToPathWorkhorse((STROBJ *)a3, (struct EPATHOBJ *)&ppo);
          if ( v77 )
          {
            v63 = (*(_DWORD *)(v58 + 40) & 0x8000) == 0;
            v64 = v88;
            if ( !v63 )
            {
              v65 = UMPDReleaseRFONTSem(v88, 0LL, &v87, &v78, (int **)&ppgpos);
              v59 = v87;
              v62 = v65;
              v60 = v78;
              v61 = ppgpos;
            }
            if ( (*(_DWORD *)(*(_QWORD *)v30 + 460LL) & 0x8000) != 0 )
            {
              if ( ppo.cCurves > 1 )
                v77 = EPATHOBJ::bSimpleFill(&ppo, a12, v95, v85, pco, v93, v90, 0xD0Du, 2u);
            }
            else
            {
              v102 = glaSimpleStroke;
              v77 = EPATHOBJ::bSimpleStroke(&ppo, a12, v95, v85, pco, 0LL, v93, v90, &v102, 0xD0Du);
            }
            if ( v62 )
            {
              UMPDAcquireRFONTSem(v64, 0LL, v59, v60, (int *)v61);
              if ( v61 )
              {
                if ( v61 != (PGLYPHPOS)v105 )
                  Win32FreePool(v61);
              }
            }
          }
          v19 = v85;
          v13 = v76;
          v18 = v79;
        }
        else
        {
          EngSetLastError(8u);
          v77 = 0;
        }
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
        goto LABEL_48;
      }
      v38 = *(float *)(v37 + 124);
      v39 = 0;
      ppgpos = 0LL;
      if ( v38 == 0.0 && *(float *)(v37 + 128) == 0.0 )
        goto LABEL_29;
      do
      {
        v66 = STROBJ_bEnum((STROBJ *)a3, &pc, &ppgpos);
        if ( pc )
        {
          v67 = 0;
          while ( 1 )
          {
            pgb = ppgpos[v67].pgdf->pgb;
            if ( pgb )
            {
              v69 = pgb->ptlOrigin.x + ppgpos[v67].ptl.x;
              v70 = ppgpos[v67].ptl.y + pgb->ptlOrigin.y;
              if ( v69 < *((_DWORD *)a3 + 3)
                || pgb->sizlBitmap.cx + v69 > *((_DWORD *)a3 + 5)
                || v70 < *((_DWORD *)a3 + 4)
                || v70 + pgb->sizlBitmap.cy > *((_DWORD *)a3 + 6) )
              {
                break;
              }
            }
            if ( ++v67 >= pc )
              goto LABEL_113;
          }
          v39 = 1;
        }
LABEL_113:
        ;
      }
      while ( v66 );
      *((_QWORD *)a3 + 6) = 0LL;
      if ( !v39 )
      {
LABEL_29:
        if ( (*((_DWORD *)v19 + 28) & 8) != 0 )
          v40 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*((_QWORD *)v19 + 6) + 2864LL);
        else
          v40 = EngTextOut;
        if ( (char *)v40 == (char *)SpTextOut
          || (char *)v40 == (char *)MulTextOut
          || (char *)v40 == (char *)BmpDevTextOut )
        {
          if ( (*(_DWORD *)(*(_QWORD *)v30 + 12LL) & 0x10010000) == 0 )
            goto LABEL_39;
          v42 = v86;
          SURFACE::pdcoAA(v19, v86);
        }
        else
        {
          v41 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
          if ( (v41 & 0x10000) == 0 )
            goto LABEL_39;
          if ( (*(_DWORD *)(*(_QWORD *)v86 + 72LL) & 0x1000000) != 0 && (v41 & 0x10000000) == 0 )
          {
            v42 = v86;
          }
          else
          {
            if ( v40 != EngTextOut )
              SURFACE::pdcoAA(v19, v86);
            v40 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
LABEL_39:
            v42 = v86;
          }
        }
        RFONTOBJ::PreTextOut(v30, v42);
        v43 = (PGLYPHPOS)v106;
        ppgpos = (PGLYPHPOS)v106;
        v78 = 0;
        v44 = 0;
        v45 = 0;
        if ( v30 != v88 && (*(_DWORD *)(*((_QWORD *)v19 + 6) + 40LL) & 0x8080) == 0x8080 )
        {
          v71 = UMPDReleaseRFONTSem(v88, 0LL, &v92, &v78, (int **)&ppgpos);
          v44 = v78;
          v45 = v71;
          v43 = ppgpos;
        }
        v46 = v98;
        if ( v83 != v84 )
          v46 = 0LL;
        v74 = v90;
        v73 = (POINTL *)v96;
        pbo = (BRUSHOBJ *)v79;
        v77 = ((unsigned int (__fastcall *)(unsigned __int64, struct ESTROBJ *, _QWORD, CLIPOBJ *, struct _RECTL *))v40)(
                ((unsigned __int64)v19 + 24) & -(__int64)(v19 != 0LL),
                a3,
                *(_QWORD *)v30,
                pco,
                v46) != 0
            ? v77
            : 0;
        if ( v45 )
        {
          UMPDAcquireRFONTSem(v88, 0LL, v92, v44, (int *)v43);
          if ( v43 )
          {
            if ( v43 != (PGLYPHPOS)v106 )
              Win32FreePool(v43);
          }
        }
        RFONTOBJ::PostTextOut(v30, v86);
        SURFACE::pdcoAA(v19, 0LL);
        v13 = v76;
      }
      v18 = 0LL;
      v79 = 0LL;
LABEL_48:
      v14 = v88;
      v15 = pco;
      *(_OWORD *)((char *)a3 + 12) = *(_OWORD *)((char *)a3 + 180);
LABEL_12:
      v81 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v81);
      v26 = *(_QWORD *)v14;
      ++v13;
      v25 = v99;
      v23 = v94;
      v20 = v90;
      v16 = v100;
      v76 = v13;
      if ( v13 >= *(_DWORD *)(*(_QWORD *)v14 + 824LL) + 4 )
      {
        v22 = v77;
        goto LABEL_14;
      }
    }
    switch ( v13 )
    {
      case 1:
        if ( v25 || !*((_DWORD *)a3 + 62) )
          goto LABEL_12;
        v55 = *(_QWORD *)(v26 + 704);
        break;
      case 2:
        if ( v25 || !*((_DWORD *)a3 + 63) )
          goto LABEL_12;
        v55 = *(_QWORD *)(v26 + 712);
        break;
      case 3:
        if ( v25 || !*((_DWORD *)a3 + 64) )
          goto LABEL_12;
        v55 = *(_QWORD *)(v26 + 720);
        break;
      default:
        if ( v25 )
          goto LABEL_12;
        v27 = *((_QWORD *)a3 + 33);
        if ( !(v27 ? *(_DWORD *)(v27 + 4LL * (unsigned int)(v13 - 4)) : 0) )
          goto LABEL_12;
        v81 = *(_QWORD *)(*(_QWORD *)(v26 + 728) + 8LL * (unsigned int)(v13 - 4));
        goto LABEL_16;
    }
    v81 = v55;
LABEL_16:
    v30 = (RFONTOBJ *)&v81;
    goto LABEL_17;
  }
LABEL_14:
  *((_QWORD *)a3 + 7) = v101;
  result = v22;
  *((_QWORD *)a3 + 5) = v23;
  return result;
}
