/*
 * XREFs of ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0287090
 * Callers:
 *     <none>
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngStretchBlt @ 0x1C0051160 (EngStretchBlt.c)
 *     OffStretchBlt @ 0x1C0150310 (OffStretchBlt.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025768C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0261A38 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C0261A64 (--1MULTISURF@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C026638C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0283FAC (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0284004 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0285238 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0289674 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C028997C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0289AC4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C028A028 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall MulStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *pxlo,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        ULONG iMode)
{
  unsigned int v11; // edi
  struct _SURFOBJ *v12; // r15
  struct _RECTL *v13; // r12
  struct _RECTL *prclSrc; // r14
  __int64 v15; // rbx
  __int64 v16; // rax
  LONG right; // eax
  __int64 *v18; // r13
  LONG v19; // eax
  LONG v20; // edx
  LONG top; // ebx
  LONG bottom; // ecx
  int v23; // r15d
  __int64 v24; // rax
  LONG v25; // eax
  LONG v26; // ecx
  LONG v27; // edx
  LONG left; // r9d
  LONG v29; // r8d
  LONG v30; // r10d
  LONG v31; // eax
  LONG v32; // ecx
  int v33; // ebx
  int Surface; // eax
  int v35; // r13d
  int v36; // ebx
  SURFOBJ *v37; // r13
  int v38; // r15d
  struct _XLATEOBJ *v39; // r14
  ULONG *pulXlate; // rbx
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct PALETTE *v43; // r9
  int v44; // r8d
  ULONG iUniq; // r14d
  int v46; // r11d
  FLONG flXlate; // r9d
  ULONG v48; // r10d
  ULONG *v49; // rdx
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rbx
  SURFOBJ *v51; // r8
  int v52; // r9d
  RECTL *v53; // rcx
  LONG *v54; // rdx
  struct _CLIPOBJ *v55; // rax
  int v56; // eax
  struct _SURFOBJ *psoSrc; // [rsp+70h] [rbp-90h]
  struct PALETTE *psoSrca; // [rsp+70h] [rbp-90h]
  SURFOBJ *psoSrcb; // [rsp+70h] [rbp-90h]
  int v61; // [rsp+78h] [rbp-88h]
  __int64 v62; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+90h] [rbp-70h]
  struct _XLATEOBJ *v66; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-58h] BYREF
  char v68; // [rsp+B0h] [rbp-50h]
  int v69; // [rsp+B4h] [rbp-4Ch]
  POINTL *pptlMask; // [rsp+B8h] [rbp-48h]
  POINTL *pptlHTOrg; // [rsp+C0h] [rbp-40h]
  COLORADJUSTMENT *pca; // [rsp+C8h] [rbp-38h]
  SURFOBJ *psoMask; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+D8h] [rbp-28h] BYREF
  char v75; // [rsp+E0h] [rbp-20h]
  int v76; // [rsp+E4h] [rbp-1Ch]
  _QWORD v77[5]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v78[56]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v79; // [rsp+148h] [rbp+48h]
  int v80[2]; // [rsp+150h] [rbp+50h]
  __int64 v81; // [rsp+158h] [rbp+58h]
  int v82[2]; // [rsp+160h] [rbp+60h]
  _BYTE v83[40]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v84; // [rsp+198h] [rbp+98h]
  char v85; // [rsp+1A0h] [rbp+A0h]
  int v86; // [rsp+1A4h] [rbp+A4h]
  SURFOBJ *v87; // [rsp+1C8h] [rbp+C8h]
  RECTL *v88; // [rsp+1D0h] [rbp+D0h]
  RECTL prclDest; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _RECTL v90; // [rsp+1F0h] [rbp+F0h] BYREF
  LONG v91; // [rsp+200h] [rbp+100h] BYREF
  LONG v92; // [rsp+204h] [rbp+104h]
  LONG v93; // [rsp+208h] [rbp+108h]
  LONG v94; // [rsp+20Ch] [rbp+10Ch]
  struct _CLIPOBJ v95; // [rsp+210h] [rbp+110h] BYREF
  __int64 v96; // [rsp+238h] [rbp+138h]
  char v97; // [rsp+240h] [rbp+140h]
  int v98; // [rsp+244h] [rbp+144h]
  __int64 v99; // [rsp+248h] [rbp+148h]
  __int64 v100; // [rsp+260h] [rbp+160h]
  SURFOBJ *psoDest; // [rsp+268h] [rbp+168h]
  RECTL *v102; // [rsp+270h] [rbp+170h]
  int v103; // [rsp+290h] [rbp+190h]
  __int64 v104; // [rsp+2A0h] [rbp+1A0h]
  int v105; // [rsp+2A8h] [rbp+1A8h]

  v11 = 0;
  v12 = a2;
  v13 = a8;
  prclSrc = a9;
  pca = a6;
  pptlHTOrg = a7;
  pptlMask = a10;
  psoMask = a3;
  psoSrc = a2;
  v74 = 0LL;
  v75 = 0;
  v76 = 0;
  v62 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
  v15 = v62;
  v16 = *(_QWORD *)(v62 + 48);
  v90 = *a9;
  if ( v12->iType != 1 || !v16 || (*(_DWORD *)(v16 + 40) & 0x20000) == 0 )
    goto LABEL_8;
  if ( (unsigned int)MulCopyDeviceToDIB(v12, (struct SURFMEM *)&v74, &v90) )
  {
    if ( !v74 )
    {
      v11 = 1;
      goto LABEL_114;
    }
    v12 = (struct _SURFOBJ *)(v74 + 24);
    psoSrc = (struct _SURFOBJ *)(v74 + 24);
    prclSrc = &v90;
    v15 = SURFOBJ_TO_SURFACE_NOT_NULL(v74 + 24);
    v62 = v15;
LABEL_8:
    right = a8->right;
    v67 = 0LL;
    v68 = 0;
    v69 = 0;
    v18 = *(__int64 **)(v15 + 128);
    if ( (a8->left >= right || a8->top >= a8->bottom) && !(unsigned int)IsMetaRedirectionBitmap(a1) )
    {
      memset(v77, 0, 0x20uLL);
      v19 = *(_DWORD *)(v15 + 56);
      prclDest = *prclSrc;
      v20 = prclDest.right;
      top = prclDest.top;
      bottom = prclDest.bottom;
      v23 = _mm_cvtsi128_si32((__m128i)prclDest);
      if ( v23 < 0 )
        v23 = 0;
      if ( prclDest.right > v19 )
        v20 = v19;
      if ( prclDest.top < 0 )
        top = 0;
      if ( prclDest.bottom > *(_DWORD *)(v62 + 60) )
        bottom = *(_DWORD *)(v62 + 60);
      if ( v20 <= v23 || bottom <= top )
      {
        v11 = 1;
        goto LABEL_113;
      }
      HIDWORD(v77[0]) = v20 - v23;
      LODWORD(v77[1]) = bottom - top;
      if ( v18 )
        v24 = *v18;
      else
        v24 = 0LL;
      v77[2] = v24;
      LODWORD(v77[0]) = *(_DWORD *)(v62 + 96);
      LODWORD(v77[3]) = *(_DWORD *)(v62 + 112) & 0x40000;
      SURFMEM::bCreateDIB((SURFMEM *)&v67, (struct _DEVBITMAPINFO *)v77, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v67 )
        goto LABEL_113;
      v25 = v90.left - v23;
      v26 = v90.right - v23;
      v27 = v90.top - top;
      left = a8->left;
      v29 = v90.bottom - top;
      v30 = a8->right;
      v90.left -= v23;
      v90.right -= v23;
      v90.top -= top;
      v90.bottom -= top;
      if ( left < v30 )
      {
        v91 = left;
        v93 = v30;
        prclDest.left = v25;
        prclDest.right = v26;
      }
      else
      {
        v91 = v30;
        v93 = left;
        prclDest.left = v26;
        prclDest.right = v25;
      }
      v31 = a8->top;
      v32 = a8->bottom;
      if ( v31 < v32 )
      {
        v92 = a8->top;
        v94 = v32;
        prclDest.top = v27;
        prclDest.bottom = v29;
      }
      else
      {
        v92 = a8->bottom;
        v94 = v31;
        prclDest.top = v29;
        prclDest.bottom = v27;
      }
      if ( !EngStretchBlt((SURFOBJ *)(v67 + 24), psoSrc, 0LL, 0LL, xloIdent, 0LL, 0LL, &prclDest, prclSrc, 0LL, 3u) )
        goto LABEL_113;
      prclSrc = &v90;
      v13 = (struct _RECTL *)&v91;
      v12 = 0LL;
      if ( v67 )
        v12 = (struct _SURFOBJ *)(v67 + 24);
      psoSrc = v12;
      v62 = SURFOBJ_TO_SURFACE_NOT_NULL(v12);
    }
    v61 = 1;
    v33 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v78, a1, a4, v13);
    v84 = 0LL;
    v85 = 0;
    v86 = 0;
    v35 = Surface;
    MULTISURF::vInit((MULTISURF *)v83, v12, prclSrc);
    if ( v33 )
    {
      v96 = 0LL;
      v97 = 0;
      v98 = 0;
      MULTISURF::vInit((MULTISURF *)&v95, a1, v13);
      v61 = EngStretchBlt(psoDest, v87, psoMask, a4, pxlo, pca, pptlHTOrg, v102, v88, pptlMask, iMode);
      v36 = v61;
      MULTISURF::~MULTISURF((MULTISURF *)&v95);
    }
    else
    {
      v36 = 1;
    }
    if ( v35 )
    {
      v37 = psoSrc;
      while ( 1 )
      {
        v66 = 0LL;
        v64 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v80);
        if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v83, v79) )
        {
LABEL_42:
          v38 = 1;
          v39 = pxlo;
          goto LABEL_81;
        }
        v38 = 0;
        v39 = pxlo;
        v62 = SURFOBJ_TO_SURFACE_NOT_NULL(v87);
        pulXlate = *(ULONG **)(v62 + 128);
        if ( *((_DWORD *)v79 + 6) )
          break;
LABEL_81:
        if ( !v38 )
        {
          v103 = 1;
          psoSrcb = (SURFOBJ *)v81;
          v100 = 0LL;
          LODWORD(psoDest) = 0;
          v104 = 0LL;
          v99 = 0LL;
          v105 = 0;
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v80) + 112) & 2) != 0 )
            v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*((_QWORD *)v79 + 7) + 2848LL);
          else
            v50 = EngStretchBlt;
          v51 = v87;
          if ( v87->iType == 1 && *(_QWORD *)(v62 + 48) != *(_QWORD *)(v64 + 48) )
            v50 = EngStretchBlt;
          v52 = iMode;
          if ( iMode == 4 && (*(_BYTE *)(*(_QWORD *)(v64 + 48) + 1824LL) & 0x10) == 0 )
            v50 = EngStretchBlt;
          v53 = v88;
          if ( v88->left < 0 || v88->top < 0 || v88->right > v87->sizlBitmap.cx || v88->bottom > v87->sizlBitmap.cy )
            v50 = EngStretchBlt;
          if ( v50 == EngStretchBlt && iMode == 4 && a4 && a4->iDComplexity )
          {
            v54 = *(LONG **)v82;
            if ( **(_DWORD **)v82 || *(_DWORD *)(*(_QWORD *)v82 + 4LL) )
            {
              ECLIPOBJTMPIFNEEDED::vSetup(
                (ECLIPOBJTMPIFNEEDED *)&v95,
                1,
                *(struct REGION **)(v81 + 56),
                (struct ERECTL *)(v81 + 4),
                1);
              if ( !v99 )
              {
                v38 = 1;
LABEL_108:
                ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((REGION **)&v95);
                goto LABEL_109;
              }
              v54 = *(LONG **)v82;
              v55 = &v95;
              v53 = v88;
              v38 = 0;
              v51 = v87;
              v52 = iMode;
LABEL_107:
              v61 &= OffStretchBlt(
                       (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, _DWORD *, _DWORD *, _DWORD *, __int64, int))v50,
                       v54,
                       *(__int64 *)v80,
                       (__int64)pptlMask,
                       (__int64)v51,
                       (__int64)psoMask,
                       v55,
                       (__int64)v39,
                       (__int64)pca,
                       pptlHTOrg,
                       v13,
                       v53,
                       (__int64)pptlMask,
                       v52);
              goto LABEL_108;
            }
          }
          else
          {
            v54 = *(LONG **)v82;
          }
          v55 = (struct _CLIPOBJ *)psoSrcb;
          goto LABEL_107;
        }
LABEL_109:
        v56 = 0;
        if ( !v38 )
          v56 = v61;
        v36 = v56;
        v61 = v56;
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v66);
        if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v78) )
          goto LABEL_112;
      }
      v41 = *((_QWORD *)v79 + 6);
      psoSrca = ppalDefault;
      if ( (*(_DWORD *)(v41 + 2172) & 0x100) != 0 )
        psoSrca = DrvRealizeHalftonePalette((_QWORD *)v41, 0);
      if ( !pulXlate )
      {
        if ( pxlo && pxlo[1].pulXlate )
        {
          pulXlate = pxlo[1].pulXlate;
LABEL_59:
          v43 = psoSrca;
LABEL_60:
          v44 = 0;
          if ( pulXlate )
          {
            if ( (pulXlate[6] & 0x800) != 0 )
            {
              v44 = 0x4000;
              if ( v43 == ppalDefault )
                v44 = 0x2000;
            }
          }
          if ( pxlo )
            iUniq = pxlo[1].iUniq;
          else
            iUniq = 0;
          if ( pxlo )
            v46 = *(_DWORD *)&pxlo[1].iSrcType;
          else
            v46 = 0;
          if ( pxlo )
            flXlate = pxlo[1].flXlate;
          else
            flXlate = 0;
          if ( pxlo )
            v48 = pxlo[3].iUniq;
          else
            v48 = 0;
          if ( pxlo )
            v49 = pxlo[2].pulXlate;
          else
            v49 = 0LL;
          if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                (__int64 *)&v66,
                                (__int64)v49,
                                v48,
                                (__int64)pulXlate,
                                *(_QWORD *)(v64 + 128),
                                (__int64)ppalDefault,
                                (__int64)psoSrca,
                                flXlate,
                                v46,
                                iUniq,
                                v44) )
            goto LABEL_42;
          v39 = v66;
          goto LABEL_81;
        }
        v42 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
        if ( !pxlo || (pxlo->flXlate & 1) != 0 )
        {
          if ( v87 == v37 )
            pulXlate = *(ULONG **)(v42 + 128);
        }
        else
        {
          if ( *(_QWORD *)&pxlo[2].iSrcType )
          {
            v43 = *(struct PALETTE **)&pxlo[2].iSrcType;
            psoSrca = v43;
            if ( *(_DWORD *)(v62 + 96) == *(_DWORD *)(v42 + 96) )
              pulXlate = *(ULONG **)(v42 + 128);
            goto LABEL_60;
          }
          v38 = 1;
        }
      }
      if ( v38 )
        goto LABEL_109;
      goto LABEL_59;
    }
LABEL_112:
    v11 = v36;
    MULTISURF::~MULTISURF((MULTISURF *)v83);
LABEL_113:
    SURFMEM::~SURFMEM((SURFMEM *)&v67);
  }
LABEL_114:
  SURFMEM::~SURFMEM((SURFMEM *)&v74);
  return v11;
}
