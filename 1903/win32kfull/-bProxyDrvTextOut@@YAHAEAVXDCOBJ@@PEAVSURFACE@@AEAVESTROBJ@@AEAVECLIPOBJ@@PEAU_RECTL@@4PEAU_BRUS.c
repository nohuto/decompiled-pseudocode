/*
 * XREFs of ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00076A8
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0065250 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C0007BE4 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0007C18 (-PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0007C40 (-PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C0007C68 (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00549BC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C0054B94 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     STROBJ_bEnum @ 0x1C0057080 (STROBJ_bEnum.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00788E0 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C007AB84 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0106AB4 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C02A0AE4 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B6848 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
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
  struct SURFACE *v15; // r12
  _WORD *v16; // r11
  CLIPOBJ *v17; // rsi
  struct _RECTL *v18; // r14
  POINTL *v20; // r10
  __int64 v21; // rax
  unsigned int v22; // r13d
  _DWORD *v23; // rdx
  struct _SURFOBJ *v24; // r9
  _BOOL8 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
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
  unsigned int v48; // r8d
  __int64 v49; // r10
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
  __int64 v78; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v79; // [rsp+70h] [rbp-90h] BYREF
  struct _RECTL *v80; // [rsp+78h] [rbp-88h]
  PGLYPHPOS ppgpos; // [rsp+80h] [rbp-80h] BYREF
  int v82; // [rsp+88h] [rbp-78h]
  unsigned int v83; // [rsp+8Ch] [rbp-74h]
  struct SURFACE *v84; // [rsp+90h] [rbp-70h]
  struct XDCOBJ *v85; // [rsp+98h] [rbp-68h]
  unsigned int v86; // [rsp+A0h] [rbp-60h] BYREF
  struct RFONTOBJ *v87; // [rsp+A8h] [rbp-58h]
  POINTL *v88; // [rsp+B0h] [rbp-50h]
  CLIPOBJ *pco; // [rsp+B8h] [rbp-48h]
  ULONG pc; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v91; // [rsp+C4h] [rbp-3Ch] BYREF
  BRUSHOBJ *v92; // [rsp+C8h] [rbp-38h]
  _BOOL8 v93; // [rsp+D0h] [rbp-30h]
  struct _SURFOBJ *v94; // [rsp+D8h] [rbp-28h]
  struct _POINTL v95; // [rsp+E0h] [rbp-20h] BYREF
  struct PDEVOBJ *v96; // [rsp+E8h] [rbp-18h]
  struct _BRUSHOBJ *v97; // [rsp+F0h] [rbp-10h]
  struct _RECTL *v98; // [rsp+F8h] [rbp-8h]
  _WORD *v99; // [rsp+100h] [rbp+0h]
  __int64 v100; // [rsp+108h] [rbp+8h]
  LINEATTRS v101; // [rsp+110h] [rbp+10h] BYREF
  PATHOBJ ppo; // [rsp+140h] [rbp+40h] BYREF
  __int64 v103; // [rsp+148h] [rbp+48h]
  int v104[10]; // [rsp+1C0h] [rbp+C0h] BYREF
  int v105[10]; // [rsp+1E8h] [rbp+E8h] BYREF

  v13 = 0;
  v14 = a10;
  v15 = a2;
  v16 = (_WORD *)*((_QWORD *)a3 + 25);
  v17 = a4;
  v18 = a6;
  v20 = a9;
  v98 = a5;
  v92 = a7;
  v97 = a8;
  v96 = a11;
  v83 = *(_DWORD *)a3;
  v21 = *((_QWORD *)a3 + 7);
  *((_QWORD *)a3 + 4) = 0LL;
  v100 = v21;
  v84 = a2;
  v22 = 1;
  v23 = *(_DWORD **)a10;
  v77 = 1;
  pco = a4;
  v24 = (struct _SURFOBJ *)*((_QWORD *)a3 + 5);
  v25 = 0LL;
  LODWORD(v21) = v23[179];
  v85 = a1;
  v80 = a6;
  v88 = a9;
  v87 = a10;
  v82 = 0;
  v95 = 0LL;
  v99 = v16;
  v94 = v24;
  v93 = 0LL;
  if ( (v21 & 4) != 0 )
  {
    v93 = 0LL;
    if ( v23[52] == 1 )
    {
      v25 = *(_DWORD *)(*(_QWORD *)a1 + 1740LL) != v23[98];
      v93 = v25;
    }
  }
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  v26 = *(_QWORD *)a10;
  v76 = 0;
  if ( *(_DWORD *)(*(_QWORD *)a10 + 840LL) + 4 > 0 )
  {
    while ( 1 )
    {
      v78 = 0LL;
      if ( v13 )
        break;
      v47 = *((_DWORD *)a3 + 62) + *((_DWORD *)a3 + 63) + *((_DWORD *)a3 + 64);
      v48 = *(_DWORD *)(v26 + 840);
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
        v24 = v94;
        v20 = v88;
      }
      if ( v47 == v83 )
      {
        if ( v18 )
        {
          left = (unsigned int)a13->left;
          if ( (int)left <= v18->left )
            left = (unsigned int)v18->left;
          v17->rclBounds.left = left;
          right = a13->right;
          if ( right >= v18->right )
            right = v18->right;
          v17->rclBounds.right = right;
          top = a13->top;
          if ( top <= v18->top )
            top = v18->top;
          v17->rclBounds.top = top;
          bottom = a13->bottom;
          if ( bottom >= v18->bottom )
            bottom = v18->bottom;
          v17->rclBounds.bottom = bottom;
        }
        else
        {
          right = v17->rclBounds.right;
          left = (unsigned int)v17->rclBounds.left;
        }
        if ( (int)left < right && v17->rclBounds.top < v17->rclBounds.bottom && v18 )
        {
          ++*((_DWORD *)v15 + 23);
          TextOutBitBlt(
            v15,
            v14,
            (struct _SURFOBJ *)left,
            v24,
            v17,
            (struct _XLATEOBJ *)pbo,
            v18,
            v73,
            v74,
            v97,
            v20,
            v75);
        }
        v17->rclBounds.left = a13->left;
        v17->rclBounds.top = a13->top;
        v17->rclBounds.right = a13->right;
        v54 = a13->bottom;
        v18 = 0LL;
        v80 = 0LL;
        v17->rclBounds.bottom = v54;
        goto LABEL_49;
      }
      v30 = v14;
LABEL_16:
      v31 = (_DWORD *)*((_QWORD *)a3 + 26);
      v32 = v83;
      v33 = v16;
      v34 = 0LL;
      if ( v31 > &v31[v83] )
        v32 = 0LL;
      if ( v32 )
      {
        do
        {
          if ( *v31 == v13 )
            *v33++ = v24->dhsurf;
          v24 = (struct _SURFOBJ *)((char *)v24 + 2);
          ++v31;
          ++v34;
        }
        while ( v34 < v32 );
      }
      *((_QWORD *)a3 + 5) = v16;
      v35 = v33 - v16;
      v82 += v35;
      *(_DWORD *)a3 = v35;
      *((_DWORD *)a3 + 59) = v13;
      *((_DWORD *)a3 + 12) = 0;
      if ( v13 && (unsigned int)bAdjusBaseLine(v14, (struct RFONTOBJ *)&v78, &v95) )
        ESTROBJ::ptlBaseLineAdjustSet(a3, &v95);
      v36 = *(_OWORD *)((char *)a3 + 12);
      *((_QWORD *)a3 + 7) = v30;
      *(_OWORD *)((char *)a3 + 180) = v36;
      v37 = *(_QWORD *)v30;
      if ( (*(_DWORD *)(*(_QWORD *)v30 + 88LL) & 2) != 0 )
      {
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
        if ( v103 )
        {
          v58 = *((_QWORD *)v15 + 6);
          v86 = 0;
          v59 = 0;
          v79 = 0;
          v60 = 0;
          v61 = (PGLYPHPOS)v104;
          v62 = 0;
          ppgpos = (PGLYPHPOS)v104;
          v77 = ESTROBJ::bTextToPathWorkhorse((STROBJ *)a3, (struct EPATHOBJ *)&ppo);
          if ( v77 )
          {
            v63 = (*(_DWORD *)(v58 + 40) & 0x8000) == 0;
            v64 = v87;
            if ( !v63 )
            {
              v65 = UMPDReleaseRFONTSem(v87, 0LL, &v86, &v79, (int **)&ppgpos);
              v59 = v86;
              v62 = v65;
              v60 = v79;
              v61 = ppgpos;
            }
            if ( (*(_DWORD *)(*(_QWORD *)v30 + 716LL) & 0x8000) != 0 )
            {
              if ( ppo.cCurves > 1 )
                v77 = EPATHOBJ::bSimpleFill(&ppo, a12, v96, v84, pco, v92, v88, 0xD0Du, 2u);
            }
            else
            {
              v101 = glaSimpleStroke;
              v77 = EPATHOBJ::bSimpleStroke(&ppo, a12, v96, v84, pco, 0LL, v92, v88, &v101, 0xD0Du);
            }
            if ( v62 )
            {
              UMPDAcquireRFONTSem(v64, 0LL, v59, v60, (const int *)v61);
              if ( v61 )
              {
                if ( v61 != (PGLYPHPOS)v104 )
                  Win32FreePool(v61);
              }
            }
          }
          v15 = v84;
          v13 = v76;
          v18 = v80;
        }
        else
        {
          EngSetLastError(8u);
          v77 = 0;
        }
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
        goto LABEL_48;
      }
      v38 = *(float *)(v37 + 140);
      v39 = 0;
      ppgpos = 0LL;
      if ( v38 == 0.0 && *(float *)(v37 + 144) == 0.0 )
        goto LABEL_28;
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
LABEL_28:
        if ( (*((_DWORD *)v15 + 28) & 8) != 0 )
          v40 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*((_QWORD *)v15 + 6) + 2872LL);
        else
          v40 = EngTextOut;
        if ( (char *)v40 == (char *)SpTextOut
          || (char *)v40 == (char *)MulTextOut
          || (char *)v40 == (char *)BmpDevTextOut )
        {
          if ( (*(_DWORD *)(*(_QWORD *)v30 + 12LL) & 0x10010000) == 0 )
            goto LABEL_38;
          v42 = v85;
          SURFACE::pdcoAA(v15, v85);
        }
        else
        {
          v41 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
          if ( (v41 & 0x10000) == 0 )
            goto LABEL_38;
          if ( (*(_DWORD *)(*(_QWORD *)v85 + 72LL) & 0x1000000) != 0 && (v41 & 0x10000000) == 0 )
          {
            v42 = v85;
          }
          else
          {
            if ( v40 != EngTextOut )
              SURFACE::pdcoAA(v15, v85);
            v40 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
LABEL_38:
            v42 = v85;
          }
        }
        RFONTOBJ::PreTextOut(v30, v42);
        v43 = (PGLYPHPOS)v105;
        ppgpos = (PGLYPHPOS)v105;
        v79 = 0;
        v44 = 0;
        v45 = 0;
        if ( v30 != v87 && (*(_DWORD *)(*((_QWORD *)v15 + 6) + 40LL) & 0x8080) == 0x8080 )
        {
          v71 = UMPDReleaseRFONTSem(v87, 0LL, &v91, &v79, (int **)&ppgpos);
          v44 = v79;
          v45 = v71;
          v43 = ppgpos;
        }
        v46 = v98;
        if ( v82 != v83 )
          v46 = 0LL;
        v74 = v88;
        v73 = (POINTL *)v97;
        pbo = (BRUSHOBJ *)v80;
        v77 = ((unsigned int (__fastcall *)(unsigned __int64, struct ESTROBJ *, _QWORD, CLIPOBJ *, struct _RECTL *))v40)(
                ((unsigned __int64)v15 + 24) & -(__int64)(v15 != 0LL),
                a3,
                *(_QWORD *)v30,
                pco,
                v46) != 0
            ? v77
            : 0;
        if ( v45 )
        {
          UMPDAcquireRFONTSem(v87, 0LL, v91, v44, (const int *)v43);
          if ( v43 )
          {
            if ( v43 != (PGLYPHPOS)v105 )
              Win32FreePool(v43);
          }
        }
        RFONTOBJ::PostTextOut(v30, v85);
        SURFACE::pdcoAA(v15, 0LL);
        v13 = v76;
      }
      v18 = 0LL;
      v80 = 0LL;
LABEL_48:
      v14 = v87;
      v17 = pco;
      *(_OWORD *)((char *)a3 + 12) = *(_OWORD *)((char *)a3 + 180);
LABEL_49:
      v78 = 0LL;
LABEL_11:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v78);
      v26 = *(_QWORD *)v14;
      ++v13;
      v25 = v93;
      v24 = v94;
      v20 = v88;
      v16 = v99;
      v76 = v13;
      if ( v13 >= *(_DWORD *)(*(_QWORD *)v14 + 840LL) + 4 )
      {
        v22 = v77;
        goto LABEL_13;
      }
    }
    switch ( v13 )
    {
      case 1:
        if ( v25 || !*((_DWORD *)a3 + 62) )
          goto LABEL_11;
        v55 = *(_QWORD *)(v26 + 720);
        break;
      case 2:
        if ( v25 || !*((_DWORD *)a3 + 63) )
          goto LABEL_11;
        v55 = *(_QWORD *)(v26 + 728);
        break;
      case 3:
        if ( v25 || !*((_DWORD *)a3 + 64) )
          goto LABEL_11;
        v55 = *(_QWORD *)(v26 + 736);
        break;
      default:
        if ( v25 )
          goto LABEL_11;
        v27 = *((_QWORD *)a3 + 33);
        if ( !(v27 ? *(_DWORD *)(v27 + 4LL * (unsigned int)(v13 - 4)) : 0) )
          goto LABEL_11;
        v78 = *(_QWORD *)(*(_QWORD *)(v26 + 744) + 8LL * (unsigned int)(v13 - 4));
        goto LABEL_15;
    }
    v78 = v55;
LABEL_15:
    v30 = (RFONTOBJ *)&v78;
    goto LABEL_16;
  }
LABEL_13:
  *((_QWORD *)a3 + 7) = v100;
  result = v22;
  *((_QWORD *)a3 + 5) = v24;
  return result;
}
