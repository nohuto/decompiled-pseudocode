/*
 * XREFs of EngCopyBits @ 0x1C00BF3E0
 * Callers:
 *     EngBitBlt @ 0x1C009E5C0 (EngBitBlt.c)
 *     GreStretchDIBitsInternal @ 0x1C00A2EB4 (GreStretchDIBitsInternal.c)
 *     EngStretchBlt @ 0x1C00A6F40 (EngStretchBlt.c)
 *     NtGdiAlphaBlend @ 0x1C00B4130 (NtGdiAlphaBlend.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00BCB48 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     EngHTBlt @ 0x1C00C0A94 (EngHTBlt.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00C6D50 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00D32E8 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     GreGetBitmapBits @ 0x1C00DCAC4 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C00DCDF0 (GreSetBitmapBits.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00E3444 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C01260BC (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     NtGdiEngCopyBits @ 0x1C014A3D0 (NtGdiEngCopyBits.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026BA60 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C0270484 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C027DE68 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D5048 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00D5518 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00D5CE8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z @ 0x1C0116D04 (-pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

BOOL __stdcall EngCopyBits(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  CLIPOBJ *v7; // rdi
  SURFOBJ *v8; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r13
  int v13; // edi
  int v14; // ecx
  int v15; // ebx
  int v16; // eax
  LONG lDelta; // eax
  CLIPOBJ *v18; // r10
  RECTL rclBounds; // xmm0
  ULONG v20; // ecx
  unsigned int i; // ebx
  LONG v22; // ecx
  LONG left; // r11d
  LONG v24; // r9d
  LONG right; // edx
  LONG v26; // edx
  LONG v27; // r15d
  LONG v28; // r10d
  LONG bottom; // r8d
  int v30; // r8d
  int v31; // r11d
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v36; // rbx
  RECTL *v37; // rax
  POINTL *v38; // r9
  __int64 x; // rdx
  LONG y; // r8d
  int v41; // ecx
  int v42; // ebx
  LONG top; // eax
  CLIPOBJ *v44; // r10
  int (*RLESrcCopy)(struct BLTINFO *); // r11
  int v46; // r15d
  unsigned __int64 v47; // r8
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int64 v53; // rax
  char *v54; // rdx
  char *v55; // rdx
  unsigned int j; // ebx
  LONG v57; // r9d
  LONG v58; // eax
  LONG v59; // r10d
  LONG v60; // eax
  LONG v61; // edx
  LONG v62; // eax
  int v63; // eax
  LONG v64; // r8d
  __int64 v65; // rdx
  char *v66; // rcx
  __int64 v67; // r9
  __int64 v68; // rsi
  __int64 v69; // rdi
  unsigned int v70; // [rsp+60h] [rbp-2D8h]
  int v71; // [rsp+68h] [rbp-2D0h]
  int v72; // [rsp+6Ch] [rbp-2CCh]
  POINTL *v74; // [rsp+78h] [rbp-2C0h]
  int v75; // [rsp+80h] [rbp-2B8h]
  XLATEOBJ *v76; // [rsp+88h] [rbp-2B0h] BYREF
  int v77; // [rsp+90h] [rbp-2A8h]
  int (*v78)(struct BLTINFO *); // [rsp+98h] [rbp-2A0h]
  __int64 v79; // [rsp+A0h] [rbp-298h]
  LONG v80; // [rsp+A8h] [rbp-290h] BYREF
  LONG v81; // [rsp+ACh] [rbp-28Ch]
  RECTL *v82; // [rsp+B0h] [rbp-288h]
  void (* near *v83)(struct BLTINFO *); // [rsp+B8h] [rbp-280h]
  CLIPOBJ *v84; // [rsp+C0h] [rbp-278h]
  HDEV hdev; // [rsp+C8h] [rbp-270h] BYREF
  _QWORD v86[6]; // [rsp+D0h] [rbp-268h] BYREF
  XLATEOBJ *v87; // [rsp+100h] [rbp-238h] BYREF
  char *pvScan0; // [rsp+108h] [rbp-230h]
  char *v89; // [rsp+110h] [rbp-228h]
  int v90; // [rsp+118h] [rbp-220h]
  int v91; // [rsp+11Ch] [rbp-21Ch]
  int v92; // [rsp+120h] [rbp-218h]
  int v93; // [rsp+124h] [rbp-214h]
  int v94; // [rsp+128h] [rbp-210h]
  LONG v95; // [rsp+12Ch] [rbp-20Ch]
  int v96; // [rsp+130h] [rbp-208h]
  int v97; // [rsp+134h] [rbp-204h]
  int v98; // [rsp+138h] [rbp-200h]
  LONG v99; // [rsp+13Ch] [rbp-1FCh]
  int v100; // [rsp+140h] [rbp-1F8h]
  __int64 v101; // [rsp+148h] [rbp-1F0h]
  POINTL v102; // [rsp+150h] [rbp-1E8h]
  __int128 v103; // [rsp+158h] [rbp-1E0h]
  char *v104; // [rsp+168h] [rbp-1D0h]
  char *v105; // [rsp+170h] [rbp-1C8h]
  int v106; // [rsp+178h] [rbp-1C0h]
  int v107; // [rsp+17Ch] [rbp-1BCh]
  int v108; // [rsp+180h] [rbp-1B8h]
  unsigned int v109; // [rsp+184h] [rbp-1B4h]
  int v110; // [rsp+188h] [rbp-1B0h]
  _DWORD v111[84]; // [rsp+1A0h] [rbp-198h] BYREF

  v7 = pco;
  v8 = psoSrc;
  v86[3] = psoDest;
  v86[4] = psoSrc;
  v84 = pco;
  v82 = prclDest;
  v74 = pptlSrc;
  v86[5] = pptlSrc;
  v10 = SURFOBJ_TO_SURFACE(psoDest);
  v11 = SURFOBJ_TO_SURFACE(v8);
  v12 = v11;
  if ( v8->iType )
  {
    v36 = *(_QWORD *)(v11 + 48);
    v37 = *(RECTL **)(v36 + 2840);
    v76 = 0LL;
    v38 = pptlSrc;
    x = (unsigned int)pptlSrc->x;
    v80 = pptlSrc->x;
    y = pptlSrc->y;
    v81 = y;
    v41 = *(_DWORD *)(v12 + 112);
    if ( (v41 & 0x80000) == 0 )
      goto LABEL_49;
    v67 = *(_QWORD *)(v36 + 24);
    v79 = v67;
    if ( v36 != v67 )
    {
      if ( v41 >= 0 )
      {
        v68 = v67;
      }
      else
      {
        v80 = x + *(_DWORD *)(v36 + 2584);
        v81 = y + *(_DWORD *)(v36 + 2588);
        v74 = (POINTL *)&v80;
        v68 = *(_QWORD *)(v36 + 24);
        v79 = v68;
      }
      LOBYTE(x) = 5;
      v69 = HmgShareLockCheck(*(_QWORD *)(v12 + 144), x);
      if ( v69 )
      {
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v76,
                             0LL,
                             0,
                             *(_QWORD *)(v68 + 1808),
                             *(_QWORD *)(v36 + 1808),
                             (__int64)ppalDefault,
                             (__int64)ppalDefault,
                             0,
                             0,
                             0,
                             0x2000) )
        {
          pxlo = v76;
          v8 = (SURFOBJ *)(v69 + 24);
          v82 = *(RECTL **)(v79 + 2840);
          DEC_SHARE_REF_CNT(v69);
          v37 = v82;
          v7 = pco;
          goto LABEL_100;
        }
        DEC_SHARE_REF_CNT(v69);
      }
LABEL_102:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v76);
      return 0;
    }
LABEL_100:
    v38 = v74;
LABEL_49:
    if ( v37 )
    {
      v42 = ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v37)(
              psoDest,
              v8,
              v7,
              pxlo,
              prclDest,
              v38);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v76);
      return v42;
    }
    goto LABEL_102;
  }
  if ( (*(_DWORD *)(v11 + 96) > 8u || *(_DWORD *)(v10 + 96) > 8u) && (unsigned int)bUMPDSecurityGateEx() )
  {
    if ( gfUMPDDebug )
    {
      DbgPrint("windows\\core\\ntgdi\\gre\\windows\\trivblt.cxx:%d:EngCopyBits:Invalid iFormat().\n", 470);
      return 0;
    }
    return 0;
  }
  hdev = psoDest->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
  v86[0] = v8->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)v86, v8, 0LL, 0);
  v13 = 0;
  v75 = 0;
  v100 = 0;
  v14 = 1;
  v71 = 1;
  v15 = 1;
  v72 = 1;
  if ( v8->iBitmapFormat - 7 <= 1 )
  {
    v70 = 2;
    v71 = 1;
    v15 = -1;
    v72 = -1;
    lDelta = psoDest->lDelta;
    v94 = 0;
    v75 = 1;
LABEL_56:
    lDelta = -lDelta;
    goto LABEL_10;
  }
  if ( v8->pvScan0 == psoDest->pvScan0 )
  {
    top = prclDest->top;
    if ( pptlSrc->x < prclDest->left )
    {
      v14 = -1;
      v71 = -1;
      if ( pptlSrc->y >= top )
      {
        v70 = 1;
      }
      else
      {
        v15 = -1;
        v72 = -1;
        v70 = 3;
      }
    }
    else if ( pptlSrc->y < top )
    {
      v15 = -1;
      v72 = -1;
      v70 = 2;
    }
    else
    {
      v70 = 0;
    }
  }
  else
  {
    v70 = 4;
  }
  v16 = v8->lDelta;
  if ( v15 <= 0 )
    v16 = -v16;
  v94 = v16;
  lDelta = psoDest->lDelta;
  if ( v15 <= 0 )
    goto LABEL_56;
LABEL_10:
  v95 = lDelta;
  LODWORD(v78) = v14;
  memset(v111, 0, 0x144uLL);
  v18 = pco;
  if ( pco && pco->iDComplexity )
  {
    if ( pco->iDComplexity != 1 )
    {
      if ( pco->iDComplexity == 3 )
      {
        v13 = 1;
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, v70, 0x14u);
        v18 = pco;
      }
      goto LABEL_13;
    }
    rclBounds = pco->rclBounds;
  }
  else
  {
    rclBounds = *prclDest;
  }
  v111[0] = 1;
  *(RECTL *)&v111[1] = rclBounds;
LABEL_13:
  if ( !pxlo )
    pxlo = xloIdent;
  v87 = pxlo;
  v90 = v71;
  v93 = v15;
  if ( !v75 )
  {
    v20 = 4 * (v8->iBitmapFormat | (8 * psoDest->iBitmapFormat)) + 2;
    if ( v71 >= 0 )
      v20 = 4 * (v8->iBitmapFormat | (8 * psoDest->iBitmapFormat));
    if ( (pxlo->flXlate & 1) != 0 )
    {
      ++v20;
      if ( (v8->fjBitmap & 0x20) != 0 )
        v100 = 1;
    }
    v83 = (&SrcCopyFunctionTable)[v20];
    v86[2] = v83;
    if ( v13 )
      goto LABEL_54;
    while ( 1 )
    {
      for ( i = 0; i < v111[0]; ++i )
      {
        v22 = v111[4 * i + 1];
        left = prclDest->left;
        if ( v22 < prclDest->left )
        {
          v111[4 * i + 1] = left;
          v22 = left;
        }
        v24 = v111[4 * i + 3];
        right = prclDest->right;
        if ( v24 > right )
        {
          v111[4 * i + 3] = right;
          v24 = right;
        }
        v26 = v111[4 * i + 2];
        v27 = prclDest->top;
        if ( v26 < v27 )
        {
          v111[4 * i + 2] = v27;
          v26 = v27;
        }
        v28 = v111[4 * i + 4];
        bottom = prclDest->bottom;
        if ( v28 > bottom )
        {
          v111[4 * i + 4] = bottom;
          v28 = bottom;
        }
        if ( v26 < v28 && v22 < v24 )
        {
          v30 = v22 + pptlSrc->x - left;
          v31 = v26 + pptlSrc->y - v27;
          v32 = v24 - v22;
          v91 = v24 - v22;
          v92 = v28 - v26;
          if ( v71 <= 0 )
            v30 = v32 + v30 - 1;
          v96 = v30;
          v97 = v30 + (_DWORD)v78 * v32;
          if ( v71 <= 0 )
            v98 = v24 - 1;
          else
            v98 = v22;
          v99 = v26;
          if ( v72 <= 0 )
          {
            v33 = v8->lDelta * (v28 - v26 + v31 - 1);
            v34 = psoDest->lDelta * (v28 - 1);
          }
          else
          {
            v33 = v31 * v8->lDelta;
            v34 = v26 * psoDest->lDelta;
          }
          pvScan0 = (char *)v8->pvScan0 + v33;
          v89 = (char *)psoDest->pvScan0 + v34;
          ((void (__fastcall *)(XLATEOBJ **))v83)(&v87);
        }
      }
      v18 = pco;
      if ( !v13 )
        break;
LABEL_54:
      v13 = XCLIPOBJ::bEnum((XCLIPOBJ *)v18, 0x144u, v111, 0LL);
    }
    return 1;
  }
  RLESrcCopy = pfnGetRLESrcCopy(v8->iBitmapFormat, psoDest->iBitmapFormat);
  v78 = RLESrcCopy;
  if ( !RLESrcCopy )
    return 0;
  v46 = 1;
  v77 = 1;
  v47 = HIDWORD(*(unsigned __int64 *)pptlSrc);
  v102 = *pptlSrc;
  v101 = v12;
  v48 = prclDest->top + (__int64)v8->sizlBitmap.cy;
  if ( (unsigned __int64)(v48 + 0x80000000LL) > 0xFFFFFFFF )
  {
    LODWORD(v48) = -1;
    v49 = -2147024362;
  }
  else
  {
    v49 = 0;
  }
  if ( v49 < 0 )
    return 0;
  v50 = (int)v48 - (__int64)(int)v47;
  if ( (unsigned __int64)(v50 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v51 = (int)v50 - 1LL;
  if ( (unsigned __int64)(v51 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v99 = v50 - 1;
  v98 = prclDest->left - pptlSrc->x;
  v108 = v98;
  pvScan0 = (char *)v8->pvScan0;
  v52 = (int)v51 * (__int64)psoDest->lDelta;
  if ( (unsigned __int64)(v52 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  LODWORD(v79) = v51 * psoDest->lDelta;
  if ( (int)v52 >= 0 )
  {
    v65 = (int)v52;
    v66 = (char *)psoDest->pvScan0;
    v55 = &v66[v65];
    if ( v55 < v66 )
      return 0;
  }
  else
  {
    v53 = (unsigned int)-(int)v52;
    v54 = (char *)psoDest->pvScan0;
    if ( (unsigned __int64)v54 < v53 )
      return 0;
    v55 = &v54[-v53];
  }
  v86[1] = v55;
  v89 = v55;
  v106 = 0;
  DWORD1(v103) = 0;
  if ( v13 )
    goto LABEL_109;
  while ( 2 )
  {
    for ( j = 0; j < v111[0]; ++j )
    {
      v57 = v111[4 * j + 1];
      v58 = prclDest->left;
      if ( v57 < prclDest->left )
      {
        v111[4 * j + 1] = v58;
        v57 = v58;
      }
      v59 = v111[4 * j + 3];
      v60 = prclDest->right;
      if ( v59 > v60 )
      {
        v111[4 * j + 3] = v60;
        v59 = v60;
      }
      v61 = v111[4 * j + 2];
      v62 = prclDest->top;
      if ( v61 < v62 )
      {
        v111[4 * j + 2] = v62;
        v61 = v62;
      }
      v63 = v111[4 * j + 4];
      v64 = prclDest->bottom;
      if ( v63 > v64 )
      {
        v111[4 * j + 4] = v64;
        v63 = v64;
      }
      if ( v61 < v63 && v57 < v59 )
      {
        if ( v63 > SDWORD1(v103) )
          goto LABEL_87;
        if ( v61 <= v109 )
        {
          if ( !v46 )
            return 1;
          pvScan0 = v104;
          v89 = v105;
          v99 = v109;
          v108 = v110;
          v106 = v107;
LABEL_87:
          v103 = *(_OWORD *)&v111[4 * j + 1];
          v46 = ((__int64 (__fastcall *)(XLATEOBJ **))RLESrcCopy)(&v87);
          v77 = v46;
          RLESrcCopy = v78;
          v44 = pco;
          continue;
        }
      }
      v44 = pco;
    }
    if ( v13 )
    {
LABEL_109:
      v13 = XCLIPOBJ::bEnum((XCLIPOBJ *)v44, 0x144u, v111, 0LL);
      RLESrcCopy = v78;
      v44 = pco;
      continue;
    }
    return 1;
  }
}
