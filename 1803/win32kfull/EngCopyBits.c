/*
 * XREFs of EngCopyBits @ 0x1C008FEE0
 * Callers:
 *     GreSetBitmapBits @ 0x1C0076A30 (GreSetBitmapBits.c)
 *     EngBitBlt @ 0x1C0091510 (EngBitBlt.c)
 *     NtGdiAlphaBlend @ 0x1C0095810 (NtGdiAlphaBlend.c)
 *     GreStretchDIBitsInternal @ 0x1C00A06E8 (GreStretchDIBitsInternal.c)
 *     EngStretchBlt @ 0x1C00A2F70 (EngStretchBlt.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00A6594 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00ADDE0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00AE604 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     EngHTBlt @ 0x1C00CD750 (EngHTBlt.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00DCEE8 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     GreGetBitmapBits @ 0x1C0102420 (GreGetBitmapBits.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C01365DC (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C023B814 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C023FD80 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C024E528 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 *     NtGdiEngCopyBits @ 0x1C0282D50 (NtGdiEngCopyBits.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0090AA4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B1040 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ULongLongAdd @ 0x1C012208C (ULongLongAdd.c)
 *     ?pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z @ 0x1C01354A0 (-pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     LongMult @ 0x1C013B718 (LongMult.c)
 *     ULongLongSub @ 0x1C013B74C (ULongLongSub.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C0197054 (--1EXLATEOBJ@@QEAA@XZ.c)
 *     LongAdd @ 0x1C023D4D4 (LongAdd.c)
 *     LongSub @ 0x1C023D508 (LongSub.c)
 */

BOOL __stdcall EngCopyBits(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  SURFOBJ *v8; // r14
  POINTL *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, struct PALETTE *, int, int, int, int); // r15
  __int64 x; // rdx
  LONG y; // r8d
  int v17; // ecx
  __int64 v18; // r14
  __int64 v19; // rdi
  SURFOBJ *v20; // rbx
  int v22; // ebx
  int v23; // edi
  int v24; // r9d
  int v25; // r8d
  LONG v26; // ecx
  LONG top; // edx
  int v28; // ebx
  LONG v29; // eax
  int lDelta; // eax
  unsigned int v31; // r9d
  XCLIPOBJ *v32; // rbx
  int v33; // edx
  RECTL v34; // xmm0
  unsigned int iBitmapFormat; // eax
  ULONG v36; // ecx
  int (*RLESrcCopy)(struct BLTINFO *); // r14
  int v38; // edi
  unsigned int v39; // r10d
  int v40; // r11d
  __int64 v41; // r10
  ULONGLONG v42; // rcx
  unsigned int j; // ebx
  LONG v44; // r9d
  LONG v45; // r8d
  LONG v46; // eax
  LONG v47; // edx
  int v48; // r10d
  LONG v49; // r11d
  int v50; // eax
  int v51; // ecx
  int v52; // r12d
  unsigned int i; // ebx
  LONG v54; // r8d
  LONG left; // r11d
  LONG right; // edx
  LONG v57; // ecx
  LONG v58; // r10d
  LONG v59; // r9d
  LONG v60; // r14d
  LONG bottom; // edi
  int v62; // ecx
  int v63; // r11d
  int v64; // eax
  LONG v65; // ecx
  char *pvScan0; // r8
  LONG v67; // edx
  PVOID v68; // r10
  struct PALETTE *v69; // [rsp+30h] [rbp-318h]
  int v70; // [rsp+38h] [rbp-310h]
  int v71; // [rsp+40h] [rbp-308h]
  int v72; // [rsp+48h] [rbp-300h]
  int v73; // [rsp+50h] [rbp-2F8h]
  int v74; // [rsp+60h] [rbp-2E8h]
  int v75; // [rsp+64h] [rbp-2E4h]
  unsigned int v76; // [rsp+68h] [rbp-2E0h] BYREF
  int v77; // [rsp+6Ch] [rbp-2DCh]
  unsigned int v78; // [rsp+70h] [rbp-2D8h]
  XCLIPOBJ *v79; // [rsp+78h] [rbp-2D0h]
  XLATEOBJ *v80; // [rsp+80h] [rbp-2C8h] BYREF
  POINTL *v81; // [rsp+88h] [rbp-2C0h]
  int v82; // [rsp+90h] [rbp-2B8h]
  SURFOBJ *v83; // [rsp+98h] [rbp-2B0h]
  SURFOBJ *v84; // [rsp+A0h] [rbp-2A8h]
  LONG v85; // [rsp+A8h] [rbp-2A0h] BYREF
  LONG v86; // [rsp+ACh] [rbp-29Ch]
  void (* near *v87)(struct BLTINFO *); // [rsp+B0h] [rbp-298h]
  int v88; // [rsp+B8h] [rbp-290h] BYREF
  ULONGLONG pullResult[3]; // [rsp+C0h] [rbp-288h] BYREF
  HDEV hdev; // [rsp+D8h] [rbp-270h] BYREF
  _QWORD v91[6]; // [rsp+E0h] [rbp-268h] BYREF
  XLATEOBJ *v92; // [rsp+110h] [rbp-238h] BYREF
  char *v93; // [rsp+118h] [rbp-230h]
  ULONGLONG v94; // [rsp+120h] [rbp-228h]
  int v95; // [rsp+128h] [rbp-220h]
  int v96; // [rsp+12Ch] [rbp-21Ch]
  int v97; // [rsp+130h] [rbp-218h]
  int v98; // [rsp+134h] [rbp-214h]
  LONG v99; // [rsp+138h] [rbp-210h]
  int v100; // [rsp+13Ch] [rbp-20Ch]
  int v101; // [rsp+140h] [rbp-208h]
  int v102; // [rsp+144h] [rbp-204h]
  LONG v103; // [rsp+148h] [rbp-200h]
  LONG v104; // [rsp+14Ch] [rbp-1FCh]
  BOOL v105; // [rsp+150h] [rbp-1F8h]
  __int64 v106; // [rsp+158h] [rbp-1F0h]
  POINTL v107; // [rsp+160h] [rbp-1E8h]
  __int128 v108; // [rsp+168h] [rbp-1E0h]
  char *v109; // [rsp+178h] [rbp-1D0h]
  ULONGLONG v110; // [rsp+180h] [rbp-1C8h]
  int v111; // [rsp+188h] [rbp-1C0h]
  int v112; // [rsp+18Ch] [rbp-1BCh]
  LONG v113; // [rsp+190h] [rbp-1B8h]
  unsigned int v114; // [rsp+194h] [rbp-1B4h]
  LONG v115; // [rsp+198h] [rbp-1B0h]
  _DWORD v116[84]; // [rsp+1B0h] [rbp-198h] BYREF

  v79 = (XCLIPOBJ *)pco;
  v84 = psoSrc;
  v8 = psoDest;
  v83 = psoDest;
  v91[1] = psoDest;
  v91[2] = psoSrc;
  pullResult[1] = (ULONGLONG)pco;
  pullResult[2] = (ULONGLONG)prclDest;
  v9 = pptlSrc;
  v81 = pptlSrc;
  v91[4] = pptlSrc;
  v10 = SURFOBJ_TO_SURFACE(psoDest);
  v11 = SURFOBJ_TO_SURFACE(psoSrc);
  v12 = v11;
  if ( psoSrc->iType )
  {
    v13 = *(_QWORD *)(v11 + 48);
    v14 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, struct PALETTE *, int, int, int, int))(v13 + 2832);
    v80 = 0LL;
    x = (unsigned int)pptlSrc->x;
    v85 = pptlSrc->x;
    y = pptlSrc->y;
    v86 = y;
    v17 = *(_DWORD *)(v11 + 112);
    if ( (v17 & 0x80000) != 0 )
    {
      v18 = *(_QWORD *)(v13 + 24);
      if ( v13 != v18 )
      {
        if ( v17 < 0 )
        {
          v85 = x + *(_DWORD *)(v13 + 2576);
          v86 = y + *(_DWORD *)(v13 + 2580);
          v81 = (POINTL *)&v85;
          v18 = *(_QWORD *)(v13 + 24);
        }
        LOBYTE(x) = 5;
        v19 = HmgShareLockCheck(*(_QWORD *)(v11 + 144), x);
        if ( v19 )
        {
          v73 = 0x2000;
          v72 = 0;
          v71 = 0;
          v70 = 0;
          v69 = ppalDefault;
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(&v80, 0LL, 0LL) )
          {
            pxlo = v80;
            v20 = (SURFOBJ *)(v19 + 24);
            v14 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, struct PALETTE *, int, int, int, int))(v18 + 2832);
            DEC_SHARE_REF_CNT(v19);
            v8 = v83;
            v9 = v81;
            goto LABEL_14;
          }
          DEC_SHARE_REF_CNT(v19);
        }
LABEL_10:
        EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v80);
        return 0;
      }
      v8 = v83;
    }
    v20 = v84;
LABEL_14:
    if ( v14 )
    {
      v22 = v14(v8, v20, v79, pxlo, prclDest, v9, v69, v70, v71, v72, v73);
      EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v80);
      return v22;
    }
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v11 + 96) <= 8u && *(_DWORD *)(v10 + 96) <= 8u || !(unsigned int)bUMPDSecurityGateEx() )
  {
    hdev = v8->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, v8, 0LL, 0);
    v91[0] = psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)v91, psoSrc, 0LL, 0);
    v74 = 0;
    v23 = 0;
    v105 = 0;
    v24 = 1;
    v77 = 1;
    v25 = 1;
    v75 = 1;
    if ( psoSrc->iBitmapFormat - 7 <= 1 )
    {
      v28 = 2;
      v77 = 1;
      v75 = -1;
      lDelta = v8->lDelta;
      v99 = 0;
      v23 = 1;
    }
    else
    {
      if ( psoSrc->pvScan0 == v8->pvScan0 )
      {
        v26 = v81->y;
        top = prclDest->top;
        if ( v81->x >= prclDest->left )
        {
          if ( v26 >= top )
          {
            v28 = 0;
          }
          else
          {
            v25 = -1;
            v75 = -1;
            v28 = 2;
          }
        }
        else
        {
          v25 = -1;
          v24 = -1;
          v77 = -1;
          if ( v26 >= top )
            v25 = 1;
          v75 = v25;
          v28 = 3;
          if ( v26 >= top )
            v28 = 1;
        }
      }
      else
      {
        v28 = 4;
      }
      v29 = psoSrc->lDelta;
      if ( v25 <= 0 )
        v29 = -v29;
      v99 = v29;
      lDelta = v8->lDelta;
      if ( v25 > 0 )
      {
LABEL_39:
        v100 = lDelta;
        LODWORD(v84) = v24;
        memset(v116, 0, 0x144uLL);
        if ( v79 )
        {
          if ( *((_BYTE *)v79 + 20) )
          {
            if ( *((_BYTE *)v79 + 20) != 1 )
            {
              if ( *((_BYTE *)v79 + 20) == 3 )
              {
                v74 = 1;
                v31 = v28;
                v32 = v79;
                XCLIPOBJ::cEnumStart(v79, 0, 0, v31, 0x14u);
                v33 = 1;
              }
              else
              {
                v33 = 0;
                v32 = v79;
              }
              goto LABEL_50;
            }
            v32 = v79;
            v34 = *(RECTL *)((char *)v79 + 4);
LABEL_49:
            v33 = 0;
            v74 = 0;
            v116[0] = 1;
            *(RECTL *)&v116[1] = v34;
LABEL_50:
            if ( !pxlo )
              pxlo = xloIdent;
            v92 = pxlo;
            v95 = v77;
            v98 = v75;
            iBitmapFormat = v8->iBitmapFormat;
            v36 = psoSrc->iBitmapFormat;
            if ( !v23 )
            {
              v50 = 4 * (v36 | (8 * iBitmapFormat));
              v51 = v50 + 2;
              v52 = v77;
              if ( v77 >= 0 )
                v51 = v50;
              if ( (pxlo->flXlate & 1) != 0 )
              {
                ++v51;
                v105 = (psoSrc->fjBitmap & 0x20) != 0;
              }
              v87 = (&SrcCopyFunctionTable)[v51];
              v91[3] = v87;
              if ( !v33 )
                goto LABEL_93;
              do
              {
                v74 = XCLIPOBJ::bEnum(v79, 0x144u, v116, 0LL);
LABEL_93:
                for ( i = 0; ; ++i )
                {
                  v78 = i;
                  if ( i >= v116[0] )
                    break;
                  v54 = v116[4 * i + 1];
                  left = prclDest->left;
                  if ( v54 < prclDest->left )
                  {
                    v116[4 * i + 1] = left;
                    v54 = left;
                  }
                  right = prclDest->right;
                  if ( v116[4 * i + 3] <= right )
                    right = v116[4 * i + 3];
                  else
                    v116[4 * i + 3] = right;
                  v57 = v116[4 * i + 2];
                  v58 = prclDest->top;
                  if ( v57 >= v58 )
                  {
                    v59 = v116[4 * i + 2];
                  }
                  else
                  {
                    v116[4 * i + 2] = v58;
                    v57 = v58;
                    v59 = v58;
                  }
                  v60 = v116[4 * i + 4];
                  bottom = prclDest->bottom;
                  if ( v60 > bottom )
                  {
                    v116[4 * i + 4] = bottom;
                    v60 = bottom;
                  }
                  if ( v57 < v60 && v54 < right )
                  {
                    v62 = v54 + v81->x - left;
                    v63 = v59 + v81->y - v58;
                    v64 = right - v54;
                    v96 = right - v54;
                    v97 = v60 - v59;
                    if ( v52 <= 0 )
                      v62 = v64 + v62 - 1;
                    v101 = v62;
                    v102 = v62 + (_DWORD)v84 * v64;
                    if ( v52 <= 0 )
                      v103 = right - 1;
                    else
                      v103 = v54;
                    v104 = v59;
                    v65 = psoSrc->lDelta;
                    pvScan0 = (char *)psoSrc->pvScan0;
                    v67 = v83->lDelta;
                    v68 = v83->pvScan0;
                    if ( v75 <= 0 )
                    {
                      v93 = &pvScan0[v65 * (v60 - v59 + v63 - 1)];
                      v94 = (ULONGLONG)v68 + v67 * (v60 - 1);
                    }
                    else
                    {
                      v93 = &pvScan0[v63 * v65];
                      v94 = (ULONGLONG)v68 + v59 * v67;
                    }
                    ((void (__fastcall *)(XLATEOBJ **))v87)(&v92);
                  }
                }
              }
              while ( v74 );
              return 1;
            }
            RLESrcCopy = pfnGetRLESrcCopy(v36, iBitmapFormat);
            v87 = (void (* near *)(struct BLTINFO *))RLESrcCopy;
            if ( !RLESrcCopy )
              return 0;
            v38 = 1;
            v82 = 1;
            v107 = *v81;
            v106 = v12;
            if ( (int)LongAdd((unsigned int)prclDest->top, (unsigned int)psoSrc->sizlBitmap.cy, &v76) < 0 )
              return 0;
            if ( (int)LongSub(v76, v39, &v76) < 0 )
              return 0;
            if ( (int)LongSub(v76, 1LL, &v76) < 0 )
              return 0;
            v104 = v76;
            v103 = prclDest->left - v40;
            v113 = v103;
            v93 = (char *)psoSrc->pvScan0;
            if ( (int)LongMult(v76, (unsigned int)v83->lDelta, &v88) < 0 )
              return 0;
            v42 = *(_QWORD *)(v41 + 56);
            if ( v88 < 0 )
            {
              if ( ULongLongSub(v42, (unsigned int)-v88, pullResult) < 0 )
                return 0;
            }
            else if ( ULongLongAdd(v42, v88, pullResult) < 0 )
            {
              return 0;
            }
            v94 = pullResult[0];
            v111 = 0;
            DWORD1(v108) = 0;
            if ( v74 )
              goto LABEL_63;
LABEL_64:
            for ( j = 0; ; ++j )
            {
              v78 = j;
              if ( j >= v116[0] )
              {
                v32 = v79;
                if ( !v74 )
                  return 1;
LABEL_63:
                v74 = XCLIPOBJ::bEnum(v32, 0x144u, v116, 0LL);
                goto LABEL_64;
              }
              v44 = prclDest->left;
              if ( v116[4 * j + 1] >= prclDest->left )
                v44 = v116[4 * j + 1];
              else
                v116[4 * j + 1] = v44;
              v45 = prclDest->right;
              if ( v116[4 * j + 3] <= v45 )
                v45 = v116[4 * j + 3];
              else
                v116[4 * j + 3] = v45;
              v46 = v116[4 * j + 2];
              v47 = prclDest->top;
              if ( v46 >= v47 )
              {
                v47 = v116[4 * j + 2];
              }
              else
              {
                v116[4 * j + 2] = v47;
                v46 = v47;
              }
              v48 = v116[4 * j + 4];
              v49 = prclDest->bottom;
              if ( v48 > v49 )
              {
                v116[4 * j + 4] = v49;
                v48 = v49;
              }
              if ( v47 < v48 && v44 < v45 )
              {
                if ( v48 <= SDWORD1(v108) )
                {
                  if ( v46 > v114 )
                    continue;
                  if ( !v38 )
                    return 1;
                  v93 = v109;
                  v94 = v110;
                  v104 = v114;
                  v113 = v115;
                  v111 = v112;
                }
                v108 = *(_OWORD *)&v116[4 * j + 1];
                v38 = ((__int64 (__fastcall *)(XLATEOBJ **))RLESrcCopy)(&v92);
                v82 = v38;
              }
            }
          }
          v32 = v79;
        }
        else
        {
          v32 = 0LL;
        }
        v34 = *prclDest;
        goto LABEL_49;
      }
    }
    lDelta = -lDelta;
    goto LABEL_39;
  }
  if ( !gfUMPDDebug )
    return 0;
  DbgPrint("windows\\core\\ntgdi\\gre\\windows\\trivblt.cxx:%d:EngCopyBits:Invalid iFormat().\n", 471);
  return 0;
}
