/*
 * XREFs of ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C029CD40
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C00A6F40 (EngStretchBlt.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     OffStretchBlt @ 0x1C0156624 (OffStretchBlt.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0162AFC (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0162BD0 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C02708AC (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027AA50 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0299C60 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0299CB8 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C029AEE8 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C029F374 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C029F67C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C029F7C4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C029FD20 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall MulStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        RECTL *a9,
        struct _POINTL *a10,
        ULONG iMode)
{
  unsigned int v11; // edi
  struct _SURFOBJ *v12; // r15
  struct _RECTL *v13; // r13
  RECTL *prclSrc; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  LONG right; // eax
  __int64 *v19; // r12
  __m128i v20; // xmm0
  int v21; // edx
  int v22; // eax
  __int32 v23; // ebx
  __int32 v24; // ecx
  int v25; // r15d
  __int64 v26; // rax
  LONG v27; // eax
  LONG v28; // ecx
  LONG v29; // edx
  LONG left; // r9d
  LONG v31; // r8d
  LONG v32; // r10d
  LONG top; // eax
  LONG bottom; // ecx
  struct _SURFOBJ *v35; // rax
  int v36; // r12d
  int v37; // ebx
  int Surface; // eax
  int v39; // r15d
  int v40; // r15d
  XLATEOBJ *v41; // r14
  ULONG *pulXlate; // rbx
  __int64 v43; // rcx
  __int64 v44; // rcx
  struct PALETTE *v45; // r8
  int v46; // r9d
  ULONG iUniq; // r14d
  int v48; // r11d
  FLONG flXlate; // r10d
  ULONG v50; // r8d
  ULONG *v51; // rdx
  BOOL (__stdcall *v52)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rbx
  SURFOBJ *v53; // r8
  int v54; // r9d
  RECTL *v55; // rcx
  LONG *v56; // rdx
  struct _CLIPOBJ *v57; // rax
  int v58; // eax
  struct PALETTE *v60; // [rsp+70h] [rbp-90h]
  struct _CLIPOBJ *v61; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *psoSrc; // [rsp+78h] [rbp-88h]
  __int64 v63; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+90h] [rbp-70h]
  XLATEOBJ *v67; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-58h] BYREF
  char v69; // [rsp+B0h] [rbp-50h]
  int v70; // [rsp+B4h] [rbp-4Ch]
  POINTL *pptlMask; // [rsp+B8h] [rbp-48h]
  POINTL *pptlHTOrg; // [rsp+C0h] [rbp-40h]
  COLORADJUSTMENT *pca; // [rsp+C8h] [rbp-38h]
  SURFOBJ *psoMask; // [rsp+D0h] [rbp-30h]
  __int64 v75; // [rsp+D8h] [rbp-28h] BYREF
  char v76; // [rsp+E0h] [rbp-20h]
  int v77; // [rsp+E4h] [rbp-1Ch]
  _DWORD v78[4]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v79; // [rsp+F8h] [rbp-8h]
  int v80; // [rsp+100h] [rbp+0h]
  int v81; // [rsp+104h] [rbp+4h]
  _BYTE v82[56]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v83; // [rsp+148h] [rbp+48h]
  int v84[2]; // [rsp+150h] [rbp+50h]
  __int64 v85; // [rsp+158h] [rbp+58h]
  int v86[2]; // [rsp+160h] [rbp+60h]
  _BYTE v87[40]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v88; // [rsp+198h] [rbp+98h]
  char v89; // [rsp+1A0h] [rbp+A0h]
  int v90; // [rsp+1A4h] [rbp+A4h]
  SURFOBJ *v91; // [rsp+1C8h] [rbp+C8h]
  RECTL *v92; // [rsp+1D0h] [rbp+D0h]
  RECTL prclDest; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _RECTL v94; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v95; // [rsp+200h] [rbp+100h] BYREF
  __int64 v96; // [rsp+208h] [rbp+108h]
  struct _CLIPOBJ v97; // [rsp+210h] [rbp+110h] BYREF
  __int64 v98; // [rsp+238h] [rbp+138h]
  char v99; // [rsp+240h] [rbp+140h]
  int v100; // [rsp+244h] [rbp+144h]
  __int64 v101; // [rsp+248h] [rbp+148h]
  __int64 v102; // [rsp+260h] [rbp+160h]
  SURFOBJ *psoDest; // [rsp+268h] [rbp+168h]
  RECTL *v104; // [rsp+270h] [rbp+170h]
  int v105; // [rsp+290h] [rbp+190h]
  __int64 v106; // [rsp+2A0h] [rbp+1A0h]
  int v107; // [rsp+2A8h] [rbp+1A8h]

  v11 = 0;
  v12 = a1;
  v13 = a8;
  prclSrc = a9;
  pca = a6;
  pptlHTOrg = a7;
  pptlMask = a10;
  psoMask = a3;
  psoSrc = a2;
  v75 = 0LL;
  v76 = 0;
  v77 = 0;
  v63 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
  v16 = v63;
  v17 = *(_QWORD *)(v63 + 48);
  v94 = *a9;
  if ( a2->iType != 1 || !v17 || (*(_DWORD *)(v17 + 40) & 0x20000) == 0 )
    goto LABEL_8;
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v75, &v94) )
  {
    if ( !v75 )
    {
      v11 = 1;
      goto LABEL_113;
    }
    prclSrc = &v94;
    psoSrc = (struct _SURFOBJ *)(v75 + 24);
    v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v75 + 24);
    v63 = v16;
LABEL_8:
    v68 = 0LL;
    v95 = 0LL;
    v96 = 0LL;
    right = a8->right;
    v69 = 0;
    v70 = 0;
    v19 = *(__int64 **)(v16 + 128);
    if ( (a8->left >= right || a8->top >= a8->bottom) && !(unsigned int)IsMetaRedirectionBitmap(v12) )
    {
      v20 = *(__m128i *)prclSrc;
      v78[3] = 0;
      prclDest = (RECTL)v20;
      v21 = v20.m128i_i32[2];
      v22 = *(_DWORD *)(v63 + 56);
      v23 = v20.m128i_i32[1];
      v24 = v20.m128i_i32[3];
      v25 = _mm_cvtsi128_si32(v20);
      v81 = 0;
      if ( v25 < 0 )
        v25 = 0;
      if ( v20.m128i_i32[2] > v22 )
        v21 = v22;
      if ( v20.m128i_i32[1] < 0 )
        v23 = 0;
      if ( v20.m128i_i32[3] > *(_DWORD *)(v63 + 60) )
        v24 = *(_DWORD *)(v63 + 60);
      if ( v21 <= v25 || v24 <= v23 )
      {
        v11 = 1;
        goto LABEL_112;
      }
      v78[1] = v21 - v25;
      v78[2] = v24 - v23;
      if ( v19 )
        v26 = *v19;
      else
        v26 = 0LL;
      v79 = v26;
      v78[0] = *(_DWORD *)(v63 + 96);
      v80 = *(_DWORD *)(v63 + 112) & 0x40000;
      SURFMEM::bCreateDIB((SURFMEM *)&v68, (struct _DEVBITMAPINFO *)v78, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v68 )
        goto LABEL_112;
      v27 = v94.left - v25;
      v28 = v94.right - v25;
      v29 = v94.top - v23;
      left = a8->left;
      v31 = v94.bottom - v23;
      v32 = a8->right;
      v94.left -= v25;
      v94.right -= v25;
      v94.top -= v23;
      v94.bottom -= v23;
      if ( left < v32 )
      {
        LODWORD(v95) = left;
        LODWORD(v96) = v32;
        prclDest.left = v27;
        prclDest.right = v28;
      }
      else
      {
        LODWORD(v95) = v32;
        LODWORD(v96) = left;
        prclDest.left = v28;
        prclDest.right = v27;
      }
      top = a8->top;
      bottom = a8->bottom;
      if ( top < bottom )
      {
        HIDWORD(v95) = a8->top;
        HIDWORD(v96) = bottom;
        prclDest.top = v29;
        prclDest.bottom = v31;
      }
      else
      {
        HIDWORD(v95) = a8->bottom;
        HIDWORD(v96) = top;
        prclDest.top = v31;
        prclDest.bottom = v29;
      }
      if ( !EngStretchBlt((SURFOBJ *)(v68 + 24), psoSrc, 0LL, 0LL, xloIdent, 0LL, 0LL, &prclDest, prclSrc, 0LL, 3u) )
        goto LABEL_112;
      prclSrc = &v94;
      v13 = (struct _RECTL *)&v95;
      if ( v68 )
        v35 = (struct _SURFOBJ *)(v68 + 24);
      else
        v35 = 0LL;
      psoSrc = v35;
      v12 = a1;
      v63 = SURFOBJ_TO_SURFACE_NOT_NULL(v35);
    }
    v36 = 1;
    v37 = IsMetaDevBitmapForMirroring(v12);
    Surface = MSURF::bFindSurface((MSURF *)v82, v12, a4, v13);
    v88 = 0LL;
    v39 = Surface;
    v89 = 0;
    v90 = 0;
    MULTISURF::vInit((MULTISURF *)v87, psoSrc, prclSrc);
    if ( v37 )
    {
      v98 = 0LL;
      v99 = 0;
      v100 = 0;
      MULTISURF::vInit((MULTISURF *)&v97, a1, v13);
      v36 = EngStretchBlt(psoDest, v91, psoMask, a4, pxlo, pca, pptlHTOrg, v104, v92, pptlMask, iMode);
      MULTISURF::~MULTISURF((MULTISURF *)&v97);
    }
    if ( v39 )
    {
      while ( 1 )
      {
        v67 = 0LL;
        v65 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v84);
        if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v87, v83) )
        {
LABEL_40:
          v40 = 1;
          v41 = pxlo;
          goto LABEL_80;
        }
        v40 = 0;
        v41 = pxlo;
        v63 = SURFOBJ_TO_SURFACE_NOT_NULL(v91);
        pulXlate = *(ULONG **)(v63 + 128);
        if ( *((_DWORD *)v83 + 6) )
          break;
LABEL_80:
        if ( !v40 )
        {
          v105 = 1;
          v61 = (struct _CLIPOBJ *)v85;
          v102 = 0LL;
          LODWORD(psoDest) = 0;
          v106 = 0LL;
          v101 = 0LL;
          v107 = 0;
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)v84) + 112) & 2) != 0 )
            v52 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*((_QWORD *)v83 + 7) + 2848LL);
          else
            v52 = EngStretchBlt;
          v53 = v91;
          if ( v91->iType == 1 && *(_QWORD *)(v63 + 48) != *(_QWORD *)(v65 + 48) )
            v52 = EngStretchBlt;
          v54 = iMode;
          if ( iMode == 4 && (*(_BYTE *)(*(_QWORD *)(v65 + 48) + 1824LL) & 0x10) == 0 )
            v52 = EngStretchBlt;
          v55 = v92;
          if ( v92->left < 0 || v92->top < 0 || v92->right > v91->sizlBitmap.cx || v92->bottom > v91->sizlBitmap.cy )
            v52 = EngStretchBlt;
          if ( v52 == EngStretchBlt && iMode == 4 && a4 && a4->iDComplexity )
          {
            v56 = *(LONG **)v86;
            if ( **(_DWORD **)v86 || *(_DWORD *)(*(_QWORD *)v86 + 4LL) )
            {
              ECLIPOBJTMPIFNEEDED::vSetup(
                (ECLIPOBJTMPIFNEEDED *)&v97,
                1,
                *(struct REGION **)(v85 + 56),
                (struct ERECTL *)(v85 + 4),
                1);
              if ( !v101 )
              {
                v40 = 1;
LABEL_107:
                ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((REGION **)&v97);
                goto LABEL_108;
              }
              v56 = *(LONG **)v86;
              v57 = &v97;
              v55 = v92;
              v40 = 0;
              v53 = v91;
              v54 = iMode;
LABEL_106:
              v36 &= OffStretchBlt(
                       (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, __int64 *, _DWORD *, _DWORD *, __int64, int))v52,
                       v56,
                       *(__int64 *)v84,
                       (__int64)pptlMask,
                       (__int64)v53,
                       (__int64)psoMask,
                       v57,
                       (__int64)v41,
                       (__int64)pca,
                       (__int64 *)pptlHTOrg,
                       &v13->left,
                       v55,
                       (__int64)pptlMask,
                       v54);
              goto LABEL_107;
            }
          }
          else
          {
            v56 = *(LONG **)v86;
          }
          v57 = v61;
          goto LABEL_106;
        }
LABEL_108:
        v58 = 0;
        if ( !v40 )
          v58 = v36;
        v36 = v58;
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v67);
        if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v82) )
          goto LABEL_111;
      }
      v43 = *((_QWORD *)v83 + 6);
      v60 = ppalDefault;
      if ( (*(_DWORD *)(v43 + 2172) & 0x100) != 0 )
        v60 = DrvRealizeHalftonePalette((_QWORD *)v43, 0);
      if ( !pulXlate )
      {
        if ( pxlo && pxlo[1].pulXlate )
        {
          pulXlate = pxlo[1].pulXlate;
LABEL_58:
          v45 = v60;
LABEL_59:
          v46 = 0;
          if ( pulXlate )
          {
            if ( (pulXlate[6] & 0x800) != 0 )
            {
              v46 = 0x4000;
              if ( v45 == ppalDefault )
                v46 = 0x2000;
            }
          }
          if ( pxlo )
            iUniq = pxlo[1].iUniq;
          else
            iUniq = 0;
          if ( pxlo )
            v48 = *(_DWORD *)&pxlo[1].iSrcType;
          else
            v48 = 0;
          if ( pxlo )
            flXlate = pxlo[1].flXlate;
          else
            flXlate = 0;
          if ( pxlo )
            v50 = pxlo[3].iUniq;
          else
            v50 = 0;
          if ( pxlo )
            v51 = pxlo[2].pulXlate;
          else
            v51 = 0LL;
          if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                (__int64 *)&v67,
                                (__int64)v51,
                                v50,
                                (__int64)pulXlate,
                                *(_QWORD *)(v65 + 128),
                                (__int64)ppalDefault,
                                (__int64)v60,
                                flXlate,
                                v48,
                                iUniq,
                                v46) )
            goto LABEL_40;
          v41 = v67;
          goto LABEL_80;
        }
        v44 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
        if ( !pxlo || (pxlo->flXlate & 1) != 0 )
        {
          if ( v91 == psoSrc )
            pulXlate = *(ULONG **)(v44 + 128);
        }
        else
        {
          if ( *(_QWORD *)&pxlo[2].iSrcType )
          {
            v45 = *(struct PALETTE **)&pxlo[2].iSrcType;
            v60 = v45;
            if ( *(_DWORD *)(v63 + 96) == *(_DWORD *)(v44 + 96) )
              pulXlate = *(ULONG **)(v44 + 128);
            goto LABEL_59;
          }
          v40 = 1;
        }
      }
      if ( v40 )
        goto LABEL_108;
      goto LABEL_58;
    }
LABEL_111:
    v11 = v36;
    MULTISURF::~MULTISURF((MULTISURF *)v87);
LABEL_112:
    SURFMEM::~SURFMEM((SURFMEM *)&v68);
  }
LABEL_113:
  SURFMEM::~SURFMEM((SURFMEM *)&v75);
  return v11;
}
