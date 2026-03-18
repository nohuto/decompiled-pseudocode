/*
 * XREFs of EngCopyBits @ 0x1C0045EE0
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00110F0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngHTBlt @ 0x1C0012AA4 (EngHTBlt.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0046908 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     GreStretchDIBitsInternal @ 0x1C004DABC (GreStretchDIBitsInternal.c)
 *     EngStretchBlt @ 0x1C0051160 (EngStretchBlt.c)
 *     GreGetBitmapBits @ 0x1C0076A08 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C0076E50 (GreSetBitmapBits.c)
 *     EngBitBlt @ 0x1C00890E0 (EngBitBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0089C94 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00A3AB8 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00FB264 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     NtGdiEngCopyBits @ 0x1C01475B0 (NtGdiEngCopyBits.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C0252950 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C02573E4 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C0265308 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B104 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C008FDD0 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ULongLongAdd @ 0x1C00E2D70 (ULongLongAdd.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F22E4 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z @ 0x1C01324B4 (-pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     LongMult @ 0x1C015FB34 (LongMult.c)
 *     ULongLongSub @ 0x1C015FB68 (ULongLongSub.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     LongAdd @ 0x1C0250D5C (LongAdd.c)
 *     LongSub @ 0x1C0250D90 (LongSub.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C0251328 (--1EXLATEOBJ@@QEAA@XZ.c)
 */

BOOL __stdcall EngCopyBits(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  SURFOBJ *v7; // r12
  SURFOBJ *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r14
  POINTL *v14; // rax
  LONG x; // edx
  LONG y; // r8d
  int v17; // ecx
  __int64 v18; // rsi
  int v20; // ebx
  int v21; // r14d
  int v22; // esi
  int v23; // r10d
  int v24; // r9d
  LONG v25; // ecx
  LONG top; // edx
  unsigned int v27; // ebx
  int v28; // eax
  int lDelta; // eax
  RECTL v30; // xmm0
  SURFOBJ *v31; // rbx
  unsigned int iBitmapFormat; // eax
  unsigned int v33; // ecx
  int (*RLESrcCopy)(struct BLTINFO *); // r14
  int v35; // esi
  unsigned int v36; // r10d
  int v37; // r11d
  ULONGLONG v38; // rcx
  unsigned int j; // ebx
  LONG v40; // r9d
  LONG v41; // eax
  LONG v42; // r10d
  LONG v43; // eax
  LONG v44; // edx
  LONG v45; // eax
  int v46; // eax
  LONG v47; // r8d
  int v48; // eax
  int v49; // ecx
  int v50; // r13d
  unsigned int i; // ebx
  LONG v52; // r8d
  LONG left; // r10d
  LONG v54; // r9d
  LONG right; // ecx
  LONG v56; // edx
  LONG v57; // r11d
  LONG v58; // esi
  LONG bottom; // ecx
  int v60; // ecx
  int v61; // r14d
  int v62; // eax
  LONG v63; // ecx
  char *pvScan0; // r9
  LONG v65; // r8d
  PVOID v66; // r10
  int v67; // [rsp+60h] [rbp-308h]
  int v68; // [rsp+64h] [rbp-304h]
  unsigned int v69; // [rsp+68h] [rbp-300h] BYREF
  int v70; // [rsp+6Ch] [rbp-2FCh]
  unsigned int v71; // [rsp+70h] [rbp-2F8h]
  SURFOBJ *v72; // [rsp+78h] [rbp-2F0h]
  POINTL *v73; // [rsp+80h] [rbp-2E8h]
  XLATEOBJ *v74; // [rsp+88h] [rbp-2E0h] BYREF
  XCLIPOBJ *v75; // [rsp+90h] [rbp-2D8h]
  int v76; // [rsp+98h] [rbp-2D0h]
  LONG v77; // [rsp+A0h] [rbp-2C8h] BYREF
  LONG v78; // [rsp+A4h] [rbp-2C4h]
  void (* near *v79)(struct BLTINFO *); // [rsp+A8h] [rbp-2C0h]
  int v80; // [rsp+B0h] [rbp-2B8h] BYREF
  int v81; // [rsp+B4h] [rbp-2B4h]
  ULONGLONG pullResult[3]; // [rsp+B8h] [rbp-2B0h] BYREF
  HDEV hdev; // [rsp+D0h] [rbp-298h] BYREF
  _QWORD v84[5]; // [rsp+D8h] [rbp-290h] BYREF
  _BYTE v85[32]; // [rsp+100h] [rbp-268h] BYREF
  __int64 v86; // [rsp+120h] [rbp-248h]
  XLATEOBJ *v87; // [rsp+130h] [rbp-238h] BYREF
  char *v88; // [rsp+138h] [rbp-230h]
  ULONGLONG v89; // [rsp+140h] [rbp-228h]
  int v90; // [rsp+148h] [rbp-220h]
  int v91; // [rsp+14Ch] [rbp-21Ch]
  int v92; // [rsp+150h] [rbp-218h]
  int v93; // [rsp+154h] [rbp-214h]
  int v94; // [rsp+158h] [rbp-210h]
  int v95; // [rsp+15Ch] [rbp-20Ch]
  int v96; // [rsp+160h] [rbp-208h]
  int v97; // [rsp+164h] [rbp-204h]
  LONG v98; // [rsp+168h] [rbp-200h]
  LONG v99; // [rsp+16Ch] [rbp-1FCh]
  BOOL v100; // [rsp+170h] [rbp-1F8h]
  __int64 v101; // [rsp+178h] [rbp-1F0h]
  POINTL v102; // [rsp+180h] [rbp-1E8h]
  __int128 v103; // [rsp+188h] [rbp-1E0h]
  char *v104; // [rsp+198h] [rbp-1D0h]
  ULONGLONG v105; // [rsp+1A0h] [rbp-1C8h]
  int v106; // [rsp+1A8h] [rbp-1C0h]
  int v107; // [rsp+1ACh] [rbp-1BCh]
  LONG v108; // [rsp+1B0h] [rbp-1B8h]
  unsigned int v109; // [rsp+1B4h] [rbp-1B4h]
  LONG v110; // [rsp+1B8h] [rbp-1B0h]
  _DWORD v111[84]; // [rsp+1D0h] [rbp-198h] BYREF

  v75 = (XCLIPOBJ *)pco;
  v7 = psoSrc;
  v8 = psoDest;
  v72 = psoDest;
  v84[1] = psoDest;
  v84[2] = psoSrc;
  pullResult[1] = (ULONGLONG)pco;
  pullResult[2] = (ULONGLONG)prclDest;
  v73 = pptlSrc;
  v84[4] = pptlSrc;
  v9 = SURFOBJ_TO_SURFACE(psoDest);
  v10 = SURFOBJ_TO_SURFACE(v7);
  v11 = v10;
  if ( v7->iType )
  {
    v12 = *(_QWORD *)(v10 + 48);
    v13 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v12 + 2840);
    v74 = 0LL;
    v14 = v73;
    x = v73->x;
    v77 = v73->x;
    y = v73->y;
    v78 = y;
    v17 = *(_DWORD *)(v11 + 112);
    if ( (v17 & 0x80000) != 0 )
    {
      v18 = *(_QWORD *)(v12 + 24);
      if ( v12 != v18 )
      {
        if ( v17 < 0 )
        {
          v77 = x + *(_DWORD *)(v12 + 2584);
          v78 = y + *(_DWORD *)(v12 + 2588);
          v73 = (POINTL *)&v77;
          v18 = *(_QWORD *)(v12 + 24);
        }
        SURFREF::SURFREF((SURFREF *)v85, *(HSURF *)(v11 + 144));
        if ( !v86
          || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                              &v74,
                              0LL,
                              0LL,
                              *(_QWORD *)(v18 + 1808),
                              *(_QWORD *)(v12 + 1808),
                              ppalDefault,
                              ppalDefault,
                              0,
                              0,
                              0,
                              0x2000) )
        {
          SURFREF::~SURFREF((SURFREF *)v85);
LABEL_8:
          EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v74);
          return 0;
        }
        pxlo = v74;
        v7 = 0LL;
        if ( v86 )
          v7 = (SURFOBJ *)(v86 + 24);
        v13 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v18 + 2840);
        SURFREF::~SURFREF((SURFREF *)v85);
        v14 = v73;
      }
      v8 = v72;
    }
    if ( v13 )
    {
      v20 = v13(v8, v7, v75, pxlo, prclDest, v14);
      EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v74);
      return v20;
    }
    goto LABEL_8;
  }
  if ( *(_DWORD *)(v10 + 96) <= 8u && *(_DWORD *)(v9 + 96) <= 8u || !(unsigned int)bUMPDSecurityGateEx() )
  {
    hdev = v8->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, v8, 0LL, 0);
    v84[0] = v7->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)v84, v7, 0LL, 0);
    v21 = 0;
    v67 = 0;
    v22 = 0;
    v100 = 0;
    v23 = 1;
    v70 = 1;
    v24 = 1;
    v68 = 1;
    if ( v7->iBitmapFormat - 7 <= 1 )
    {
      v27 = 2;
      v70 = 1;
      v68 = -1;
      lDelta = v72->lDelta;
      v94 = 0;
      v22 = 1;
    }
    else
    {
      if ( v7->pvScan0 == v72->pvScan0 )
      {
        v25 = v73->y;
        top = prclDest->top;
        if ( v73->x >= prclDest->left )
        {
          if ( v25 >= top )
          {
            v27 = 0;
          }
          else
          {
            v24 = -1;
            v68 = -1;
            v27 = 2;
          }
        }
        else
        {
          v24 = -1;
          v23 = -1;
          v70 = -1;
          if ( v25 >= top )
            v24 = 1;
          v68 = v24;
          v27 = 3;
          if ( v25 >= top )
            v27 = 1;
        }
      }
      else
      {
        v27 = 4;
      }
      v28 = v7->lDelta;
      if ( v24 <= 0 )
        v28 = -v28;
      v94 = v28;
      lDelta = v72->lDelta;
      if ( v24 > 0 )
      {
LABEL_40:
        v95 = lDelta;
        v81 = v23;
        memset(v111, 0, 0x144uLL);
        if ( v75 && *((_BYTE *)v75 + 20) )
        {
          if ( *((_BYTE *)v75 + 20) != 1 )
          {
            if ( *((_BYTE *)v75 + 20) == 3 )
            {
              v21 = 1;
              v67 = 1;
              XCLIPOBJ::cEnumStart(v75, 0, 0, v27, 0x14u);
            }
            goto LABEL_48;
          }
          v30 = *(RECTL *)((char *)v75 + 4);
        }
        else
        {
          v30 = *prclDest;
        }
        v67 = 0;
        v111[0] = 1;
        *(RECTL *)&v111[1] = v30;
LABEL_48:
        if ( !pxlo )
          pxlo = xloIdent;
        v87 = pxlo;
        v90 = v70;
        v93 = v68;
        v31 = v72;
        iBitmapFormat = v72->iBitmapFormat;
        v33 = v7->iBitmapFormat;
        if ( !v22 )
        {
          v48 = 4 * (v33 | (8 * iBitmapFormat));
          v49 = v48 + 2;
          v50 = v70;
          if ( v70 >= 0 )
            v49 = v48;
          if ( (pxlo->flXlate & 1) != 0 )
          {
            ++v49;
            v100 = (v7->fjBitmap & 0x20) != 0;
          }
          v79 = (&SrcCopyFunctionTable)[v49];
          v84[3] = v79;
          if ( !v21 )
            goto LABEL_88;
          do
          {
            v67 = XCLIPOBJ::bEnum(v75, 0x144u, v111, 0LL);
LABEL_88:
            for ( i = 0; ; ++i )
            {
              v71 = i;
              if ( i >= v111[0] )
                break;
              v52 = v111[4 * i + 1];
              left = prclDest->left;
              if ( v52 < prclDest->left )
              {
                v111[4 * i + 1] = left;
                v52 = left;
              }
              v54 = v111[4 * i + 3];
              right = prclDest->right;
              if ( v54 > right )
              {
                v111[4 * i + 3] = right;
                v54 = right;
              }
              v56 = v111[4 * i + 2];
              v57 = prclDest->top;
              if ( v56 < v57 )
              {
                v111[4 * i + 2] = v57;
                v56 = v57;
              }
              v58 = v111[4 * i + 4];
              bottom = prclDest->bottom;
              if ( v58 > bottom )
              {
                v111[4 * i + 4] = bottom;
                v58 = bottom;
              }
              if ( v56 < v58 && v52 < v54 )
              {
                v60 = v52 + v73->x - left;
                v61 = v56 + v73->y - v57;
                v62 = v54 - v52;
                v91 = v54 - v52;
                v92 = v58 - v56;
                if ( v50 <= 0 )
                  v60 = v62 + v60 - 1;
                v96 = v60;
                v97 = v60 + v81 * v62;
                if ( v50 <= 0 )
                  v98 = v54 - 1;
                else
                  v98 = v52;
                v99 = v56;
                v63 = v7->lDelta;
                pvScan0 = (char *)v7->pvScan0;
                v65 = v72->lDelta;
                v66 = v72->pvScan0;
                if ( v68 <= 0 )
                {
                  v88 = &pvScan0[v63 * (v58 - v56 + v61 - 1)];
                  v89 = (ULONGLONG)v66 + v65 * (v58 - 1);
                }
                else
                {
                  v88 = &pvScan0[v61 * v63];
                  v89 = (ULONGLONG)v66 + v56 * v65;
                }
                ((void (__fastcall *)(XLATEOBJ **))v79)(&v87);
              }
            }
          }
          while ( v67 );
          return 1;
        }
        RLESrcCopy = pfnGetRLESrcCopy(v33, iBitmapFormat);
        v79 = (void (* near *)(struct BLTINFO *))RLESrcCopy;
        if ( !RLESrcCopy )
          return 0;
        v35 = 1;
        v76 = 1;
        v102 = *v73;
        v101 = v11;
        if ( (int)LongAdd((unsigned int)prclDest->top, (unsigned int)v7->sizlBitmap.cy, &v69) < 0 )
          return 0;
        if ( (int)LongSub(v69, v36, &v69) < 0 )
          return 0;
        if ( (int)LongSub(v69, 1LL, &v69) < 0 )
          return 0;
        v99 = v69;
        v98 = prclDest->left - v37;
        v108 = v98;
        v88 = (char *)v7->pvScan0;
        if ( (int)LongMult(v69, (unsigned int)v31->lDelta, &v80) < 0 )
          return 0;
        v38 = (ULONGLONG)v31->pvScan0;
        if ( v80 < 0 )
        {
          if ( ULongLongSub(v38, (unsigned int)-v80, pullResult) < 0 )
            return 0;
        }
        else if ( ULongLongAdd(v38, v80, pullResult) < 0 )
        {
          return 0;
        }
        v89 = pullResult[0];
        v106 = 0;
        DWORD1(v103) = 0;
        if ( v67 )
          goto LABEL_61;
LABEL_62:
        for ( j = 0; ; ++j )
        {
          v71 = j;
          if ( j >= v111[0] )
          {
            if ( !v67 )
              return 1;
LABEL_61:
            v67 = XCLIPOBJ::bEnum(v75, 0x144u, v111, 0LL);
            goto LABEL_62;
          }
          v40 = v111[4 * j + 1];
          v41 = prclDest->left;
          if ( v40 < prclDest->left )
          {
            v111[4 * j + 1] = v41;
            v40 = v41;
          }
          v42 = v111[4 * j + 3];
          v43 = prclDest->right;
          if ( v42 > v43 )
          {
            v111[4 * j + 3] = v43;
            v42 = v43;
          }
          v44 = v111[4 * j + 2];
          v45 = prclDest->top;
          if ( v44 < v45 )
          {
            v111[4 * j + 2] = v45;
            v44 = v45;
          }
          v46 = v111[4 * j + 4];
          v47 = prclDest->bottom;
          if ( v46 > v47 )
          {
            v111[4 * j + 4] = v47;
            v46 = v47;
          }
          if ( v44 < v46 && v40 < v42 )
          {
            if ( v46 <= SDWORD1(v103) )
            {
              if ( v44 > v109 )
                continue;
              if ( !v35 )
                return 1;
              v88 = v104;
              v89 = v105;
              v99 = v109;
              v108 = v110;
              v106 = v107;
            }
            v103 = *(_OWORD *)&v111[4 * j + 1];
            v35 = ((__int64 (__fastcall *)(XLATEOBJ **))RLESrcCopy)(&v87);
            v76 = v35;
          }
        }
      }
    }
    lDelta = -lDelta;
    goto LABEL_40;
  }
  if ( !gfUMPDDebug )
    return 0;
  DbgPrint("windows\\core\\ntgdi\\gre\\windows\\trivblt.cxx:%d:EngCopyBits:Invalid iFormat().\n", 470);
  return 0;
}
