/*
 * XREFs of ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C00506F0
 * Callers:
 *     EngAlphaBlend @ 0x1C004FC70 (EngAlphaBlend.c)
 *     EngTransparentBlt @ 0x1C0093A50 (EngTransparentBlt.c)
 * Callees:
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C004FC38 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     EngStretchBlt @ 0x1C0051160 (EngStretchBlt.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C015EC40 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C015F7F0 (--0RGNMEMOBJTMP@@QEAA@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  struct SURFACE *v9; // rsi
  LONG right; // edi
  LONG left; // ecx
  LONG v12; // r13d
  LONG v13; // r8d
  bool v14; // al
  LONG v15; // eax
  LONG v16; // eax
  LONG bottom; // ecx
  LONG v18; // eax
  LONG v19; // ecx
  LONG v20; // eax
  LONG v21; // eax
  LONG v22; // r13d
  LONG v23; // eax
  LONG v24; // eax
  _QWORD *v26; // rax
  LONG v27; // r9d
  int v28; // r8d
  LONG v29; // r11d
  int v30; // r10d
  BOOL v31; // edi
  int v32; // r9d
  int v33; // r11d
  int v34; // r8d
  int v35; // r10d
  int DIB; // r13d
  LONG v37; // edi
  CLIPOBJ *v38; // r13
  int v39; // edx
  int v40; // edx
  int v41; // edi
  int v42; // r8d
  __int64 v43; // rcx
  LONG v44; // edx
  LONG v45; // ecx
  _DWORD *v46; // r8
  unsigned __int64 v47; // rdx
  __int64 v48; // rdi
  size_t v49; // r8
  _DWORD *v50; // rdx
  unsigned int j; // ecx
  _BYTE *v52; // r8
  _BYTE *v53; // r9
  _BYTE *v54; // rdx
  __int64 v55; // rcx
  _BYTE *v56; // rdx
  _WORD *v57; // rdx
  unsigned int i; // ecx
  void *v59; // rcx
  unsigned int v60; // edx
  __int64 v61; // rdi
  XLATEOBJ *v62; // rdx
  XLATEOBJ *v63; // r8
  XLATEOBJ *v64; // rcx
  struct SURFMEM *v65; // rax
  __int64 v66; // rdi
  _QWORD *v67; // rax
  LONG v68; // r13d
  LONG top; // [rsp+60h] [rbp-258h]
  int v70; // [rsp+64h] [rbp-254h]
  int v71; // [rsp+64h] [rbp-254h]
  int v72; // [rsp+68h] [rbp-250h]
  LONG v73; // [rsp+68h] [rbp-250h]
  LONG v74; // [rsp+6Ch] [rbp-24Ch]
  unsigned int v75; // [rsp+6Ch] [rbp-24Ch]
  LONG v76; // [rsp+70h] [rbp-248h]
  int IsSourceBGRA; // [rsp+78h] [rbp-240h]
  _DWORD v78[2]; // [rsp+90h] [rbp-228h] BYREF
  POINTL pptlHTOrg; // [rsp+98h] [rbp-220h] BYREF
  struct _RECTL v80; // [rsp+A0h] [rbp-218h]
  _BYTE *v81; // [rsp+B0h] [rbp-208h]
  struct SURFACE *v82; // [rsp+B8h] [rbp-200h]
  struct SURFMEM *v83; // [rsp+C0h] [rbp-1F8h]
  struct SURFMEM *v84; // [rsp+C8h] [rbp-1F0h]
  XLATEOBJ *pxlo; // [rsp+D0h] [rbp-1E8h]
  _QWORD v86[4]; // [rsp+D8h] [rbp-1E0h] BYREF
  void *v87; // [rsp+F8h] [rbp-1C0h]
  _DWORD *v88; // [rsp+100h] [rbp-1B8h]
  unsigned __int64 v89; // [rsp+108h] [rbp-1B0h]
  struct SURFACE *v90; // [rsp+110h] [rbp-1A8h]
  struct _RECTL *v91; // [rsp+118h] [rbp-1A0h]
  struct REGION *v92[2]; // [rsp+120h] [rbp-198h] BYREF
  _DWORD *v93; // [rsp+130h] [rbp-188h]
  _DWORD *v94; // [rsp+138h] [rbp-180h]
  _BYTE *v95; // [rsp+140h] [rbp-178h]
  _WORD *v96; // [rsp+148h] [rbp-170h]
  _QWORD v97[8]; // [rsp+150h] [rbp-168h] BYREF
  RECTL prclDest; // [rsp+190h] [rbp-128h] BYREF
  RECTL v99; // [rsp+1A0h] [rbp-118h] BYREF
  struct _RECTL v100; // [rsp+1B0h] [rbp-108h] BYREF
  RECTL v101; // [rsp+1C0h] [rbp-F8h] BYREF
  _BYTE v102[160]; // [rsp+1D0h] [rbp-E8h] BYREF

  *(_QWORD *)&prclDest.left = a2;
  v9 = a1;
  v90 = a1;
  v82 = a1;
  v91 = a3;
  pxlo = a4;
  v83 = a6;
  v84 = a6;
  right = a3->right;
  left = a3->left;
  v70 = left;
  v72 = right - a3->left;
  LODWORD(v87) = a3->bottom;
  top = a3->top;
  v12 = prclSrc->right;
  v13 = prclSrc->left;
  LODWORD(v88) = v13;
  pptlHTOrg.x = prclSrc->bottom;
  v78[0] = prclSrc->top;
  v14 = right - left != v12 - v13 || (_DWORD)v87 - top != pptlHTOrg.x - v78[0];
  IsSourceBGRA = 0;
  if ( v9 && a2 )
  {
    if ( !v14 )
    {
      if ( v13 < 0 )
      {
        a3->left = left - v13;
        prclSrc->left = 0;
        v12 = prclSrc->right;
        right = a3->right;
      }
      v15 = *((_DWORD *)v9 + 14);
      if ( v12 > v15 )
      {
        a3->right = v15 + right - v12;
        prclSrc->right = *((_DWORD *)v9 + 14);
      }
      v16 = prclSrc->top;
      if ( v16 < 0 )
      {
        a3->top -= v16;
        prclSrc->top = 0;
      }
      bottom = prclSrc->bottom;
      v18 = *((_DWORD *)v9 + 15);
      if ( bottom > v18 )
      {
        a3->bottom += v18 - bottom;
        prclSrc->bottom = *((_DWORD *)v9 + 15);
      }
      if ( a3->left < 0 )
      {
        prclSrc->left -= a3->left;
        a3->left = 0;
      }
      v19 = a3->right;
      v20 = *((_DWORD *)a2 + 14);
      if ( v19 > v20 )
      {
        prclSrc->right += v20 - v19;
        a3->right = *((_DWORD *)a2 + 14);
      }
      v21 = a3->top;
      if ( v21 < 0 )
      {
        prclSrc->top -= v21;
        a3->top = 0;
      }
      v22 = a3->bottom;
      v23 = *((_DWORD *)a2 + 15);
      if ( v22 > v23 )
      {
        prclSrc->bottom += v23 - v22;
        v22 = *((_DWORD *)a2 + 15);
        a3->bottom = v22;
      }
      v73 = a3->left;
      v24 = a3->right;
      v74 = v24;
      if ( a3->left >= v24 || (v76 = a3->top, v76 >= v22) )
      {
        a3->left = v24;
        return v9;
      }
      if ( !*((_WORD *)v9 + 50) )
        return v9;
      memset(v97, 0, 0x20uLL);
      v66 = *((_QWORD *)v9 + 6);
      v67 = (_QWORD *)*((_QWORD *)v9 + 16);
      v68 = v22 - v76;
      HIDWORD(v97[0]) = v74 - v73;
      LODWORD(v97[1]) = v68;
      LODWORD(v97[0]) = *((_DWORD *)v9 + 24);
      LODWORD(v97[3]) = *((_DWORD *)v9 + 28) & 0x40000;
      v97[2] = 0LL;
      if ( v67 )
        v97[2] = *v67;
      if ( SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v97, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        *(_QWORD *)&v99.left = 0LL;
        v99.right = v74 - v73;
        v99.bottom = v68;
        *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *((_QWORD *)v9 + 6);
        v78[0] = prclSrc->left;
        v78[1] = prclSrc->top;
        if ( (*((_DWORD *)v9 + 28) & 0x400) != 0 )
          (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, RECTL *, _DWORD *))(v66 + 2840))(
            (*(_QWORD *)a6 + 24LL) & -(__int64)(*(_QWORD *)a6 != 0LL),
            ((unsigned __int64)v9 + 24) & -(__int64)(v9 != 0LL),
            0LL,
            0LL,
            &v99,
            v78);
        else
          ((void (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD, RECTL *, _DWORD *))EngCopyBits)(
            (*(_QWORD *)a6 + 24LL) & -(__int64)(*(_QWORD *)a6 != 0LL),
            ((unsigned __int64)v9 + 24) & -(__int64)(v9 != 0LL),
            0LL,
            0LL,
            &v99,
            v78);
        *prclSrc = v99;
        return *(struct SURFACE **)a6;
      }
      return 0LL;
    }
    memset(v86, 0, sizeof(v86));
    v26 = (_QWORD *)*((_QWORD *)v9 + 16);
    v97[4] = v26;
    v27 = *(_DWORD *)(*(_QWORD *)&prclDest.left + 56LL);
    v28 = *(_DWORD *)(*(_QWORD *)&prclDest.left + 60LL);
    v29 = 0;
    if ( v70 > 0 )
      v29 = v70;
    prclDest.left = v29;
    v80.left = v29;
    v30 = 0;
    if ( top > 0 )
      v30 = top;
    v71 = v30;
    v80.top = v30;
    if ( v27 > right )
      v27 = right;
    v80.right = v27;
    if ( v28 > (int)v87 )
      v28 = (int)v87;
    v80.bottom = v28;
    if ( v29 >= v27 || v30 >= v28 )
      return 0LL;
    v31 = (int)v88 < 0 || v12 > *((_DWORD *)v9 + 14) || v78[0] < 0 || pptlHTOrg.x > *((_DWORD *)v9 + 15);
    if ( !a7 )
    {
      IsSourceBGRA = bIsSourceBGRA(v9);
      HIDWORD(v86[0]) = v32 - v33;
      LODWORD(v86[1]) = v34 - v35;
      LODWORD(v86[0]) = 6;
      LODWORD(v86[3]) = *((_DWORD *)v9 + 28) & 0x40000;
      v86[2] = *(_QWORD *)gppalRGB;
      DIB = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v86, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !DIB || !v31 || IsSourceBGRA )
      {
        v37 = prclDest.left;
        goto LABEL_47;
      }
      v75 = *(_DWORD *)(*(_QWORD *)a6 + 64LL);
      v46 = *(_DWORD **)(*(_QWORD *)a6 + 72LL);
      v88 = v46;
      v93 = v46;
      v47 = (unsigned __int64)v75 >> 2;
      v89 = v47;
      if ( !v47 )
        goto LABEL_66;
      if ( ((unsigned __int8)v46 & 4) != 0 )
      {
        *v46 = -16777216;
        v89 = --v47;
        if ( !v47 )
        {
LABEL_66:
          v37 = prclDest.left;
          goto LABEL_47;
        }
        v93 = ++v46;
      }
      memset64(v46, 0xFF000000FF000000uLL, v47 >> 1);
      if ( (v47 & 1) != 0 )
        v46[v47 - 1] = -16777216;
      goto LABEL_66;
    }
    HIDWORD(v86[0]) = v72;
    LODWORD(v86[1]) = (_DWORD)v87 - top;
    LODWORD(v86[0]) = *((_DWORD *)v9 + 24);
    LODWORD(v86[3]) = *((_DWORD *)v9 + 28) & 0x40000;
    v86[2] = 0LL;
    if ( v26 )
      v86[2] = *v26;
    DIB = SURFMEM::bCreateDIB(a6, (struct _DEVBITMAPINFO *)v86, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( DIB && v31 )
    {
      v48 = *(_QWORD *)a6;
      v49 = *(unsigned int *)(*(_QWORD *)a6 + 64LL);
      switch ( *((_DWORD *)v9 + 24) )
      {
        case 1:
          v59 = *(void **)(v48 + 72);
          if ( a8 )
          {
            v97[6] = *(_QWORD *)(v48 + 72);
            v60 = 255;
          }
          else
          {
            v97[7] = *(_QWORD *)(v48 + 72);
            v60 = 0;
          }
          break;
        case 2:
          v60 = a8 | (16 * a8);
          v59 = *(void **)(v48 + 72);
          v97[5] = v59;
          break;
        case 3:
          v59 = *(void **)(v48 + 72);
          v87 = v59;
          v60 = a8;
          break;
        default:
          switch ( *((_DWORD *)v9 + 24) )
          {
            case 4:
              v57 = *(_WORD **)(v48 + 72);
              v96 = v57;
              for ( i = 0; i < (unsigned int)v49 >> 1; ++i )
              {
                *v57++ = a8;
                v96 = v57;
              }
              break;
            case 5:
              v52 = *(_BYTE **)(v48 + 80);
              v95 = v52;
              v53 = &v52[*(_DWORD *)(v48 + 88) * *(_DWORD *)(v48 + 60)];
              while ( v52 != v53 )
              {
                v54 = v52;
                v81 = v52;
                v55 = 3 * *(_DWORD *)(v48 + 56) - 2LL;
                while ( v54 < &v52[v55] )
                {
                  *v54 = a8;
                  v56 = v54 + 1;
                  *v56++ = BYTE1(a8);
                  *v56 = BYTE2(a8);
                  v54 = v56 + 1;
                  v81 = v54;
                }
                v48 = *(_QWORD *)a6;
                v52 += *(int *)(*(_QWORD *)a6 + 88LL);
                v95 = v52;
              }
              break;
            case 6:
              v50 = *(_DWORD **)(v48 + 72);
              v94 = v50;
              for ( j = 0; j < (unsigned int)v49 >> 2; ++j )
              {
                *v50++ = a8;
                v94 = v50;
              }
              break;
          }
          goto LABEL_95;
      }
      memset(v59, v60, v49);
    }
LABEL_95:
    v37 = prclDest.left;
LABEL_47:
    if ( DIB )
    {
      pptlHTOrg = 0LL;
      prclDest = *a3;
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v102);
      v38 = 0LL;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v92, v39);
      if ( !v92[0] )
        goto LABEL_103;
      prclDest.left -= v37;
      v40 = prclDest.right - v37;
      prclDest.right -= v37;
      v41 = prclDest.top - v71;
      prclDest.top -= v71;
      v42 = prclDest.bottom - v71;
      prclDest.bottom -= v71;
      if ( prclDest.left < 0
        || (v43 = *(_QWORD *)a6, v40 > *(_DWORD *)(*(_QWORD *)a6 + 56LL))
        || v41 < 0
        || v42 > *(_DWORD *)(v43 + 60) )
      {
        v44 = *(_DWORD *)(*(_QWORD *)a6 + 60LL);
        v45 = *(_DWORD *)(*(_QWORD *)a6 + 56LL);
        *(_QWORD *)&v100.left = 0LL;
        v100.right = v45;
        v100.bottom = v44;
        RGNOBJ::vSet((RGNOBJ *)v92, &v100);
        v38 = (CLIPOBJ *)v102;
        v101 = prclDest;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v102, v92[0], (struct ERECTL *)&v101, 0);
        v43 = *(_QWORD *)v84;
      }
      *(_QWORD *)(v43 + 48) = *((_QWORD *)v9 + 6);
      if ( EngStretchBlt(
             (SURFOBJ *)((*(_QWORD *)a6 + 24LL) & -(__int64)(*(_QWORD *)a6 != 0LL)),
             (SURFOBJ *)(((unsigned __int64)v82 + 24) & -(__int64)(v82 != 0LL)),
             0LL,
             v38,
             pxlo,
             0LL,
             &pptlHTOrg,
             &prclDest,
             prclSrc,
             0LL,
             3u) )
      {
        *(_QWORD *)&prclSrc->left = 0LL;
        prclSrc->right = HIDWORD(v86[0]);
        prclSrc->bottom = v86[1];
        *a3 = v80;
        if ( !IsSourceBGRA && !a7 )
        {
          v61 = *(_QWORD *)a6;
          v62 = *(XLATEOBJ **)(*(_QWORD *)a6 + 80LL);
          v63 = (XLATEOBJ *)((char *)v62 + *(_DWORD *)(*(_QWORD *)a6 + 88LL) * *(_DWORD *)(*(_QWORD *)a6 + 60LL));
          pxlo = v63;
          while ( v62 != v63 )
          {
            v64 = v62;
            v65 = (struct SURFMEM *)(&v62->iUniq + *(int *)(v61 + 56));
            v84 = v65;
            while ( v64 != (XLATEOBJ *)v65 )
            {
              v64->iUniq ^= 0xFF000000;
              v64 = (XLATEOBJ *)((char *)v64 + 4);
            }
            v61 = *(_QWORD *)a6;
            v62 = (XLATEOBJ *)((char *)v62 + *(int *)(*(_QWORD *)a6 + 88LL));
          }
        }
        v9 = *(struct SURFACE **)a6;
      }
      else
      {
LABEL_103:
        v9 = 0LL;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v92);
      return v9;
    }
    return 0LL;
  }
  return 0LL;
}
