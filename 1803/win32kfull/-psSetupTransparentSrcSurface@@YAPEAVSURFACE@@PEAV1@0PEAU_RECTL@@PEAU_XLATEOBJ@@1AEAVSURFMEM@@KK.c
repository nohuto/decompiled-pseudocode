/*
 * XREFs of ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C00A212C
 * Callers:
 *     EngAlphaBlend @ 0x1C00A15D0 (EngAlphaBlend.c)
 *     EngTransparentBlt @ 0x1C00B1C40 (EngTransparentBlt.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C00A159C (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     EngStretchBlt @ 0x1C00A2F70 (EngStretchBlt.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C0139028 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C01392E4 (--0RGNMEMOBJTMP@@QEAA@H@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

struct SURFACE *__fastcall psSetupTransparentSrcSurface(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct _RECTL *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclSrc,
        struct SURFMEM *a6,
        unsigned int a7,
        unsigned int a8)
{
  struct SURFACE *v10; // rsi
  LONG right; // r8d
  LONG left; // ecx
  LONG v13; // r13d
  LONG v14; // edx
  bool v15; // al
  LONG v16; // eax
  LONG v17; // eax
  LONG v18; // ecx
  LONG v19; // eax
  LONG v20; // ecx
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // r13d
  LONG v24; // eax
  LONG v25; // eax
  _QWORD *v27; // rax
  int v28; // r8d
  int v29; // edi
  LONG v30; // r10d
  int v31; // r9d
  int v32; // r8d
  int v33; // r10d
  int v34; // r9d
  int DIB; // r13d
  LONG v36; // edi
  CLIPOBJ *v37; // r13
  int v38; // edx
  int v39; // edx
  int v40; // edi
  int v41; // r8d
  __int64 v42; // rcx
  LONG v43; // edx
  LONG v44; // ecx
  _DWORD *v45; // r8
  unsigned __int64 v46; // rdx
  __int64 v47; // rdi
  size_t v48; // r8
  _DWORD *v49; // rdx
  unsigned int j; // ecx
  _BYTE *v51; // r8
  _BYTE *v52; // r9
  _BYTE *v53; // rdx
  __int64 v54; // rcx
  _BYTE *v55; // rdx
  _WORD *v56; // rdx
  unsigned int i; // ecx
  void *v58; // rcx
  unsigned int v59; // edx
  __int64 v60; // rdi
  XLATEOBJ *v61; // rdx
  XLATEOBJ *v62; // r8
  XLATEOBJ *v63; // rcx
  struct SURFMEM *v64; // rax
  _QWORD *v65; // rax
  LONG v66; // r13d
  LONG top; // [rsp+60h] [rbp-258h]
  int v68; // [rsp+64h] [rbp-254h]
  int v69; // [rsp+64h] [rbp-254h]
  LONG bottom; // [rsp+68h] [rbp-250h]
  LONG v71; // [rsp+68h] [rbp-250h]
  int v72; // [rsp+6Ch] [rbp-24Ch]
  LONG v73; // [rsp+6Ch] [rbp-24Ch]
  LONG v74; // [rsp+70h] [rbp-248h]
  unsigned int v75; // [rsp+70h] [rbp-248h]
  LONG v76; // [rsp+78h] [rbp-240h]
  int IsSourceBGRA; // [rsp+7Ch] [rbp-23Ch]
  POINTL pptlHTOrg; // [rsp+90h] [rbp-228h] BYREF
  void *v79; // [rsp+98h] [rbp-220h]
  LONG v80; // [rsp+A0h] [rbp-218h]
  LONG v81; // [rsp+A4h] [rbp-214h]
  struct _RECTL v82; // [rsp+A8h] [rbp-210h]
  _BYTE *v83; // [rsp+B8h] [rbp-200h]
  struct SURFACE *v84; // [rsp+C0h] [rbp-1F8h]
  struct SURFMEM *v85; // [rsp+C8h] [rbp-1F0h]
  struct SURFMEM *v86; // [rsp+D0h] [rbp-1E8h]
  XLATEOBJ *pxlo; // [rsp+D8h] [rbp-1E0h]
  _QWORD v88[4]; // [rsp+E0h] [rbp-1D8h] BYREF
  void *v89; // [rsp+100h] [rbp-1B8h]
  _DWORD *v90; // [rsp+108h] [rbp-1B0h]
  unsigned __int64 v91; // [rsp+110h] [rbp-1A8h]
  struct SURFACE *v92; // [rsp+118h] [rbp-1A0h]
  struct _RECTL *v93; // [rsp+120h] [rbp-198h]
  struct REGION *v94[2]; // [rsp+128h] [rbp-190h] BYREF
  _DWORD *v95; // [rsp+138h] [rbp-180h]
  _DWORD *v96; // [rsp+140h] [rbp-178h]
  _BYTE *v97; // [rsp+148h] [rbp-170h]
  _WORD *v98; // [rsp+150h] [rbp-168h]
  _QWORD v99[7]; // [rsp+158h] [rbp-160h] BYREF
  RECTL prclDest; // [rsp+190h] [rbp-128h] BYREF
  RECTL v101; // [rsp+1A0h] [rbp-118h]
  struct _RECTL v102; // [rsp+1B0h] [rbp-108h] BYREF
  RECTL v103; // [rsp+1C0h] [rbp-F8h] BYREF
  _BYTE v104[160]; // [rsp+1D0h] [rbp-E8h] BYREF

  v10 = a1;
  v92 = a1;
  v84 = a1;
  v93 = a3;
  pxlo = a4;
  v85 = a6;
  v86 = a6;
  right = a3->right;
  LODWORD(v89) = right;
  left = a3->left;
  v68 = left;
  v72 = right - a3->left;
  LODWORD(v90) = a3->bottom;
  top = a3->top;
  v13 = prclSrc->right;
  v14 = prclSrc->left;
  v80 = v14;
  bottom = prclSrc->bottom;
  pptlHTOrg.x = prclSrc->top;
  v15 = right - left != v13 - v14 || (_DWORD)v90 - top != bottom - pptlHTOrg.x;
  IsSourceBGRA = 0;
  LODWORD(v79) = 0;
  if ( v10 && a2 )
  {
    if ( !v15 )
    {
      if ( v14 < 0 )
      {
        a3->left = left - v14;
        prclSrc->left = 0;
        v13 = prclSrc->right;
        right = a3->right;
      }
      v16 = *((_DWORD *)v10 + 14);
      if ( v13 > v16 )
      {
        a3->right = right + v16 - v13;
        prclSrc->right = *((_DWORD *)v10 + 14);
      }
      v17 = prclSrc->top;
      if ( v17 < 0 )
      {
        a3->top -= v17;
        prclSrc->top = 0;
      }
      v18 = prclSrc->bottom;
      v19 = *((_DWORD *)v10 + 15);
      if ( v18 > v19 )
      {
        a3->bottom += v19 - v18;
        prclSrc->bottom = *((_DWORD *)v10 + 15);
      }
      if ( a3->left < 0 )
      {
        prclSrc->left -= a3->left;
        a3->left = 0;
      }
      v20 = a3->right;
      v21 = *((_DWORD *)a2 + 14);
      if ( v20 > v21 )
      {
        prclSrc->right += v21 - v20;
        a3->right = *((_DWORD *)a2 + 14);
      }
      v22 = a3->top;
      if ( v22 < 0 )
      {
        prclSrc->top -= v22;
        a3->top = 0;
      }
      v23 = a3->bottom;
      v24 = *((_DWORD *)a2 + 15);
      if ( v23 > v24 )
      {
        prclSrc->bottom += v24 - v23;
        v23 = *((_DWORD *)a2 + 15);
        a3->bottom = v23;
      }
      v73 = a3->left;
      v25 = a3->right;
      v74 = v25;
      if ( a3->left >= v25 || (v71 = a3->top, v71 >= v23) )
      {
        a3->left = v25;
        return v10;
      }
      if ( !*((_WORD *)v10 + 50) )
        return v10;
      memset(v99, 0, 0x20uLL);
      v65 = (_QWORD *)*((_QWORD *)v10 + 16);
      v66 = v23 - v71;
      HIDWORD(v99[0]) = v74 - v73;
      LODWORD(v99[1]) = v66;
      LODWORD(v99[0]) = *((_DWORD *)v10 + 24);
      LODWORD(v99[3]) = *((_DWORD *)v10 + 28) & 0x40000;
      v99[2] = 0LL;
      if ( v65 )
        v99[2] = *v65;
      if ( SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v99, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        *(_QWORD *)&v101.left = 0LL;
        v101.right = v74 - v73;
        v101.bottom = v66;
        *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *((_QWORD *)v10 + 6);
        v80 = prclSrc->left;
        v81 = prclSrc->top;
        _guard_dispatch_icall_fptr();
        *prclSrc = v101;
        return *(struct SURFACE **)a6;
      }
      return 0LL;
    }
    memset(v88, 0, sizeof(v88));
    v27 = (_QWORD *)*((_QWORD *)v10 + 16);
    v99[4] = v27;
    v28 = *((_DWORD *)a2 + 14);
    v29 = *((_DWORD *)a2 + 15);
    v30 = 0;
    if ( v68 > 0 )
      v30 = v68;
    v76 = v30;
    v82.left = v30;
    v31 = 0;
    if ( top > 0 )
      v31 = top;
    v69 = v31;
    v82.top = v31;
    if ( v28 > (int)v89 )
      v28 = (int)v89;
    v82.right = v28;
    if ( v29 > (int)v90 )
      v29 = (int)v90;
    v82.bottom = v29;
    if ( v30 >= v28 || v31 >= v29 )
      return 0LL;
    if ( v80 < 0 || v13 > *((_DWORD *)v10 + 14) || pptlHTOrg.x < 0 || bottom > *((_DWORD *)v10 + 15) )
      LODWORD(v79) = 1;
    if ( !a7 )
    {
      IsSourceBGRA = bIsSourceBGRA(v10);
      HIDWORD(v88[0]) = v32 - v33;
      LODWORD(v88[1]) = v29 - v34;
      LODWORD(v88[0]) = 6;
      LODWORD(v88[3]) = *((_DWORD *)v10 + 28) & 0x40000;
      v88[2] = *(_QWORD *)gppalRGB;
      DIB = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v88, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !DIB || !(_DWORD)v79 || IsSourceBGRA )
      {
        v36 = v76;
        goto LABEL_46;
      }
      v75 = *(_DWORD *)(*(_QWORD *)a6 + 64LL);
      v45 = *(_DWORD **)(*(_QWORD *)a6 + 72LL);
      v90 = v45;
      v95 = v45;
      v46 = (unsigned __int64)v75 >> 2;
      v91 = v46;
      if ( !v46 )
        goto LABEL_65;
      if ( ((unsigned __int8)v45 & 4) != 0 )
      {
        *v45 = -16777216;
        v91 = --v46;
        if ( !v46 )
        {
LABEL_65:
          v36 = v76;
          goto LABEL_46;
        }
        v95 = ++v45;
      }
      memset64(v45, 0xFF000000FF000000uLL, v46 >> 1);
      if ( (v46 & 1) != 0 )
        v45[v46 - 1] = -16777216;
      goto LABEL_65;
    }
    HIDWORD(v88[0]) = v72;
    LODWORD(v88[1]) = (_DWORD)v90 - top;
    LODWORD(v88[0]) = *((_DWORD *)v10 + 24);
    LODWORD(v88[3]) = *((_DWORD *)v10 + 28) & 0x40000;
    v88[2] = 0LL;
    if ( v27 )
      v88[2] = *v27;
    DIB = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v88, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( DIB && (_DWORD)v79 )
    {
      v47 = *(_QWORD *)a6;
      v48 = *(unsigned int *)(*(_QWORD *)a6 + 64LL);
      switch ( *((_DWORD *)v10 + 24) )
      {
        case 1:
          v58 = *(void **)(v47 + 72);
          if ( a8 )
          {
            v99[5] = *(_QWORD *)(v47 + 72);
            v59 = 255;
          }
          else
          {
            v99[6] = *(_QWORD *)(v47 + 72);
            v59 = 0;
          }
          break;
        case 2:
          v59 = a8 | (16 * a8);
          v58 = *(void **)(v47 + 72);
          v79 = v58;
          break;
        case 3:
          v58 = *(void **)(v47 + 72);
          v89 = v58;
          v59 = a8;
          break;
        default:
          switch ( *((_DWORD *)v10 + 24) )
          {
            case 4:
              v56 = *(_WORD **)(v47 + 72);
              v98 = v56;
              for ( i = 0; i < (unsigned int)v48 >> 1; ++i )
              {
                *v56++ = a8;
                v98 = v56;
              }
              break;
            case 5:
              v51 = *(_BYTE **)(v47 + 80);
              v97 = v51;
              v52 = &v51[*(_DWORD *)(v47 + 88) * *(_DWORD *)(v47 + 60)];
              while ( v51 != v52 )
              {
                v53 = v51;
                v83 = v51;
                v54 = 3 * *(_DWORD *)(v47 + 56) - 2LL;
                while ( v53 < &v51[v54] )
                {
                  *v53 = a8;
                  v55 = v53 + 1;
                  *v55++ = BYTE1(a8);
                  *v55 = BYTE2(a8);
                  v53 = v55 + 1;
                  v83 = v53;
                }
                v47 = *(_QWORD *)a6;
                v51 += *(int *)(*(_QWORD *)a6 + 88LL);
                v97 = v51;
              }
              break;
            case 6:
              v49 = *(_DWORD **)(v47 + 72);
              v96 = v49;
              for ( j = 0; j < (unsigned int)v48 >> 2; ++j )
              {
                *v49++ = a8;
                v96 = v49;
              }
              break;
          }
          goto LABEL_94;
      }
      memset(v58, v59, v48);
    }
LABEL_94:
    v36 = v76;
LABEL_46:
    if ( DIB )
    {
      pptlHTOrg = 0LL;
      prclDest = *a3;
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v104);
      v37 = 0LL;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v94, v38);
      if ( !v94[0] )
        goto LABEL_102;
      prclDest.left -= v36;
      v39 = prclDest.right - v36;
      prclDest.right -= v36;
      v40 = prclDest.top - v69;
      prclDest.top -= v69;
      v41 = prclDest.bottom - v69;
      prclDest.bottom -= v69;
      if ( prclDest.left < 0
        || (v42 = *(_QWORD *)a6, v39 > *(_DWORD *)(*(_QWORD *)a6 + 56LL))
        || v40 < 0
        || v41 > *(_DWORD *)(v42 + 60) )
      {
        v43 = *(_DWORD *)(*(_QWORD *)a6 + 60LL);
        v44 = *(_DWORD *)(*(_QWORD *)a6 + 56LL);
        *(_QWORD *)&v102.left = 0LL;
        v102.right = v44;
        v102.bottom = v43;
        RGNOBJ::vSet((RGNOBJ *)v94, &v102);
        v37 = (CLIPOBJ *)v104;
        v103 = prclDest;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v104, v94[0], (struct ERECTL *)&v103, 0);
        v42 = *(_QWORD *)v86;
      }
      *(_QWORD *)(v42 + 48) = *((_QWORD *)v10 + 6);
      if ( EngStretchBlt(
             (SURFOBJ *)((*(_QWORD *)a6 + 24LL) & -(__int64)(*(_QWORD *)a6 != 0LL)),
             (SURFOBJ *)(((unsigned __int64)v84 + 24) & -(__int64)(v84 != 0LL)),
             0LL,
             v37,
             pxlo,
             0LL,
             &pptlHTOrg,
             &prclDest,
             prclSrc,
             0LL,
             3u) )
      {
        *(_QWORD *)&prclSrc->left = 0LL;
        prclSrc->right = HIDWORD(v88[0]);
        prclSrc->bottom = v88[1];
        *a3 = v82;
        if ( !IsSourceBGRA && !a7 )
        {
          v60 = *(_QWORD *)a6;
          v61 = *(XLATEOBJ **)(*(_QWORD *)a6 + 80LL);
          v62 = (XLATEOBJ *)((char *)v61 + *(_DWORD *)(*(_QWORD *)a6 + 88LL) * *(_DWORD *)(*(_QWORD *)a6 + 60LL));
          pxlo = v62;
          while ( v61 != v62 )
          {
            v63 = v61;
            v64 = (struct SURFMEM *)(&v61->iUniq + *(int *)(v60 + 56));
            v86 = v64;
            while ( v63 != (XLATEOBJ *)v64 )
            {
              v63->iUniq ^= 0xFF000000;
              v63 = (XLATEOBJ *)((char *)v63 + 4);
            }
            v60 = *(_QWORD *)a6;
            v61 = (XLATEOBJ *)((char *)v61 + *(int *)(*(_QWORD *)a6 + 88LL));
          }
        }
        v10 = *(struct SURFACE **)a6;
      }
      else
      {
LABEL_102:
        v10 = 0LL;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v94);
      return v10;
    }
    return 0LL;
  }
  return 0LL;
}
