/*
 * XREFs of ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C014172C
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C4BD0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0172A20 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C020D658 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x1C020D7C8 (-DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z.c)
 */

__int64 __fastcall DxgkpBlitA8R8R8G8(
        unsigned __int8 *a1,
        int a2,
        int a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5,
        unsigned __int8 *a6,
        int a7,
        const struct tagRECT *a8,
        struct tagRECT *a9,
        struct tagRECT *a10)
{
  int v11; // r11d
  int v13; // ebx
  LONG left; // r15d
  LONG right; // r14d
  LONG top; // edi
  LONG bottom; // r10d
  LONG v18; // esi
  LONG v19; // r12d
  int v20; // edi
  LONG v21; // r8d
  int v22; // esi
  int v23; // r9d
  int v24; // eax
  int v25; // r10d
  LONG v26; // ecx
  LONG v27; // r9d
  unsigned __int8 *v28; // r12
  int v29; // ecx
  unsigned __int8 *v30; // rbx
  __int64 v31; // rdi
  size_t v32; // rsi
  __int64 v33; // r13
  int v35; // eax
  int v36; // r10d
  unsigned __int8 *v37; // rax
  int v38; // eax
  unsigned __int8 *v39; // rax
  __int64 v40; // r14
  int v41; // r9d
  SIZE_T v42; // rax
  struct _UFIXPOINT_PIXEL *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // edi
  struct _UFIXPOINT_PIXEL *v48; // rdx
  __int64 v49; // rax
  int v50; // ecx
  __int64 v51; // rax
  struct _UFIXPOINT_PIXEL *v52; // r12
  __int64 v53; // rax
  unsigned __int8 *v54; // rcx
  int v55; // r12d
  struct _UFIXPOINT_PIXEL *v56; // r9
  unsigned int v57; // r8d
  int v58; // r10d
  unsigned int v59; // edx
  signed __int64 v60; // r9
  unsigned int *v61; // r11
  _BYTE *v62; // r8
  unsigned int v63; // ecx
  unsigned int v64; // eax
  int v65; // r11d
  int *v66; // r8
  _BYTE *v67; // rdx
  int v68; // eax
  struct _UFIXPOINT_PIXEL *v69; // r8
  int v70; // eax
  bool v71; // cc
  unsigned int v72; // r9d
  _BYTE *v73; // r11
  unsigned int v74; // r10d
  unsigned int v75; // r9d
  unsigned int *v76; // rdx
  signed __int64 v77; // r8
  unsigned int v78; // ecx
  unsigned int v79; // eax
  int v80; // r15d
  int v81; // r14d
  int v82; // r9d
  int v83; // r8d
  _DWORD *v84; // rdx
  unsigned int v85; // eax
  int v86; // r11d
  int v87; // ecx
  int v88; // edx
  int v89; // ecx
  int v90; // r8d
  struct _UFIXPOINT_PIXEL *v91; // r8
  _DWORD *v92; // rdx
  unsigned int v93; // r9d
  signed __int64 v94; // r10
  int v95; // r11d
  unsigned int v96; // eax
  unsigned int v97; // eax
  _DWORD *v98; // rdx
  int v99; // r11d
  unsigned int v100; // r14d
  unsigned int v101; // r9d
  signed __int64 v102; // r10
  _BYTE *v103; // r12
  unsigned int v104; // eax
  int v105; // eax
  _DWORD *v106; // rdx
  _BYTE *v107; // r10
  int v108; // r9d
  signed __int64 v109; // r8
  int v110; // ecx
  LONG v111; // [rsp+48h] [rbp-79h]
  unsigned int v112; // [rsp+48h] [rbp-79h]
  int v113; // [rsp+48h] [rbp-79h]
  int v114; // [rsp+50h] [rbp-71h]
  int v115; // [rsp+54h] [rbp-6Dh]
  LONG v116; // [rsp+58h] [rbp-69h]
  int v117; // [rsp+58h] [rbp-69h]
  int v118; // [rsp+5Ch] [rbp-65h]
  unsigned __int8 *v119; // [rsp+60h] [rbp-61h]
  unsigned __int8 *v120; // [rsp+60h] [rbp-61h]
  unsigned __int8 *v121; // [rsp+60h] [rbp-61h]
  int v122; // [rsp+68h] [rbp-59h]
  LONG v123; // [rsp+6Ch] [rbp-55h]
  unsigned int v124; // [rsp+6Ch] [rbp-55h]
  struct _UFIXPOINT_PIXEL *v125; // [rsp+70h] [rbp-51h]
  struct _UFIXPOINT_PIXEL *v126; // [rsp+70h] [rbp-51h]
  unsigned __int8 *v127; // [rsp+78h] [rbp-49h]
  unsigned __int8 *v128; // [rsp+80h] [rbp-41h]
  struct _UFIXPOINT_PIXEL *v129; // [rsp+88h] [rbp-39h]
  struct tagRECT v130; // [rsp+90h] [rbp-31h]
  LONG v131; // [rsp+90h] [rbp-31h]
  int v132; // [rsp+A0h] [rbp-21h]
  struct _UFIXPOINT_PIXEL *v133; // [rsp+A8h] [rbp-19h]
  LONG v134; // [rsp+148h] [rbp+87h]
  int v135; // [rsp+148h] [rbp+87h]

  v11 = a4;
  v13 = a3;
  left = a9->left;
  right = a9->right;
  v134 = left;
  if ( left == right
    || (top = a9->top, bottom = a9->bottom, top == bottom)
    || (v18 = a8->right, v111 = a8->left, a8->left == v18)
    || (v19 = a8->bottom, v116 = a8->top, v116 == v19) )
  {
    DxgkpConvertRects(a2, a3, a5, a8, 1u, a9, a10);
    return 0LL;
  }
  switch ( a5 )
  {
    case D3DKMDT_VPPR_IDENTITY:
      break;
    case D3DKMDT_VPPR_ROTATE90:
      v38 = a2;
      v131 = a9->top;
      left = a2 - right;
      v21 = v131;
      v20 = a4;
      right = a2 - v134;
      a2 = v13;
      v13 = v38;
      v11 = -4;
      v37 = &a1[4 * v38 - 4];
      goto LABEL_20;
    case D3DKMDT_VPPR_ROTATE180:
      v21 = a2 - right;
      left = v13 - bottom;
      right = v13 - top;
      bottom = a2 - v134;
      v11 = -a4;
      v20 = -4;
      v37 = &a1[4 * a2 - 4 + a4 * (v13 - 1)];
      goto LABEL_20;
    case D3DKMDT_VPPR_ROTATE270:
      v35 = a2;
      v21 = a3 - bottom;
      a2 = v13;
      v36 = v13;
      v13 = v35;
      bottom = v36 - top;
      v20 = -a4;
      v11 = 4;
      v37 = &a1[a4 * (a2 - 1)];
LABEL_20:
      v130.top = left;
      *(_QWORD *)&v130.right = __PAIR64__(right, bottom);
      v127 = v37;
      goto LABEL_7;
  }
  v127 = a1;
  v20 = 4;
  v130 = *a9;
  right = HIDWORD(*(unsigned __int128 *)a9);
  bottom = *(_QWORD *)&a9->right;
  left = HIDWORD(*(_QWORD *)&a9->left);
  v21 = (LONG)*a9;
LABEL_7:
  v22 = v18 - v111;
  v23 = bottom * v22;
  v122 = v19 - v116;
  v118 = v11;
  v135 = v20;
  v114 = (v21 * v22 - v21 * v22 % a2 + v22 - 1) / v22;
  v24 = (bottom * v22 - 1 - (bottom * v22 - 1) % a2 + a2) / v22;
  v25 = v24;
  v115 = v24;
  v123 = v21 * v22 / a2 + v111;
  a10->left = v123;
  v26 = (v19 - v116) * v130.top / v13 + v116;
  a10->top = v26;
  v27 = (a2 + v23 - 1) / a2 + v111;
  a10->right = v27;
  a10->bottom = v116 + (v13 + (v19 - v116) * v130.bottom - 1) / v13;
  v28 = &a6[4 * v123 + a7 * v26];
  v29 = v22;
  v128 = v28;
  if ( a5 == D3DKMDT_VPPR_IDENTITY && v22 == a2 )
  {
    if ( v122 == v13 )
    {
      v30 = &v127[v11 * v130.top + v20 * v114];
      if ( v130.top < v130.bottom )
      {
        v31 = (unsigned int)(right - v130.top);
        v32 = (unsigned int)(4 * (v24 - v114));
        v33 = v11;
        do
        {
          memmove(v28, v30, v32);
          v28 += a7;
          v30 += v33;
          --v31;
        }
        while ( v31 );
      }
      return 0LL;
    }
  }
  else if ( v122 == v13 )
  {
    v39 = &v127[v11 * left];
    v119 = v39;
    if ( left < right )
    {
      v40 = (unsigned int)(right - left);
      v125 = (struct _UFIXPOINT_PIXEL *)v11;
      do
      {
        DxgkpGetBilinearLineFromSource(v39, v20, a2, (struct _PIXEL *)v28, 0LL, v29, v114, v25);
        v28 += a7;
        v39 = &v119[(_QWORD)v125];
        v25 = v115;
        v29 = v22;
        v119 = &v119[(_QWORD)v125];
        --v40;
      }
      while ( v40 );
    }
    return 0LL;
  }
  v41 = v27 - v123;
  v42 = 16LL * (2 * v41 + 2);
  if ( !is_mul_ok(2 * v41 + 2, 0x10uLL) )
    v42 = -1LL;
  v43 = (struct _UFIXPOINT_PIXEL *)operator new[](v42, 0x4B677844u, PagedPool);
  v47 = 0;
  v129 = v43;
  v48 = v43;
  if ( v43 )
  {
    v50 = a10->right - a10->left;
    v133 = v43;
    v51 = 2LL * v50;
    v52 = (struct _UFIXPOINT_PIXEL *)((char *)v48 + 16 * v50 + 16);
    v126 = v52;
    *((_QWORD *)v48 + v51) = 0LL;
    *((_QWORD *)v48 + v51 + 1) = 0LL;
    v53 = 2LL * (a10->right - a10->left);
    *((_QWORD *)v52 + v53) = 0LL;
    *((_QWORD *)v52 + v53 + 1) = 0LL;
    v54 = &v127[v118 * left];
    v120 = v54;
    if ( v122 <= v13 )
    {
      v124 = (unsigned __int16)((v122 << 16) / v13);
      v113 = (left * v122 - left * v122 % v13 + v122 - 1) / v122;
      v121 = &v127[v118 * v113];
      v117 = (v13 + right * v122 - 1 - (right * v122 - 1) % v13) / v122;
      v80 = v122 * v113 % v13;
      if ( v80 <= 0 )
      {
        memset(v52, 0, 16LL * (a10->right - a10->left));
        v81 = v135;
      }
      else
      {
        v81 = v135;
        DxgkpGetBilinearLineFromSource(&v121[-v118], v135, a2, 0LL, v52, v22, v114, v115);
        v82 = 0;
        if ( a10->right - a10->left > 0 )
        {
          v83 = (unsigned __int16)((v80 << 16) / v13) >> 8;
          v84 = (_DWORD *)((char *)v52 + 8);
          do
          {
            ++v82;
            v84[1] = v83 * (v84[1] >> 8);
            *v84 = v83 * (*v84 >> 8);
            v85 = *(v84 - 1);
            v84 += 4;
            *(v84 - 5) = v83 * (v85 >> 8);
            *(v84 - 6) = v83 * (*(v84 - 6) >> 8);
          }
          while ( v82 < a10->right - a10->left );
        }
      }
      DxgkpGetBilinearLineFromSource(v121, v81, a2, 0LL, v129, v22, v114, v115);
      v86 = v113;
      if ( v113 < v117 )
      {
        v87 = v80 << 16;
        v88 = v13 << 16;
        do
        {
          v89 = (v122 << 16) + v87;
          v90 = a10->right - a10->left;
          v80 += v122;
          v132 = v89;
          if ( v80 >= v13 )
          {
            v80 -= v13;
            v132 = v89 - v88;
            v71 = v90 <= 0;
            v91 = v129;
            v97 = (unsigned __int16)((v89 - v88) / v13);
            if ( !v71 )
            {
              v98 = (_DWORD *)((char *)v52 + 12);
              v99 = 0;
              v100 = v97 >> 8;
              v101 = (v124 - v97) >> 8;
              v102 = v129 - v52;
              v103 = v128 + 2;
              do
              {
                ++v99;
                v103[1] = (*v98 + 0x8000 + v101 * (*(_DWORD *)((char *)v98 + v102) >> 8)) >> 16;
                *v103 = (*(v98 - 1) + 0x8000 + v101 * (*(_DWORD *)((char *)v98 + v102 - 4) >> 8)) >> 16;
                v103 += 4;
                *(v103 - 5) = (*(v98 - 2) + 0x8000 + v101 * (*(_DWORD *)((char *)v98 + v102 - 8) >> 8)) >> 16;
                *(v103 - 6) = (*(v98 - 3) + 0x8000 + v101 * (*(_DWORD *)((char *)v98 + v102 - 12) >> 8)) >> 16;
                *v98 = v100 * (*(_DWORD *)((char *)v98 + v102) >> 8);
                v104 = *(_DWORD *)((char *)v98 + v102 - 4);
                v98 += 4;
                *(v98 - 5) = v100 * (v104 >> 8);
                *(v98 - 6) = v100 * (*(_DWORD *)((char *)v98 + v102 - 24) >> 8);
                *(v98 - 7) = v100 * (*(_DWORD *)((char *)v98 + v102 - 28) >> 8);
              }
              while ( v99 < a10->right - a10->left );
              v52 = v126;
              v81 = v135;
              v86 = v113;
            }
            v128 += a7;
          }
          else
          {
            v71 = v90 <= 0;
            v91 = v129;
            if ( !v71 )
            {
              v92 = (_DWORD *)((char *)v52 + 12);
              v93 = v124 >> 8;
              v94 = v129 - v52;
              v95 = 0;
              do
              {
                ++v95;
                *v92 += v93 * (*(_DWORD *)((char *)v92 + v94) >> 8);
                v96 = *(_DWORD *)((char *)v92 + v94 - 4);
                v92 += 4;
                *(v92 - 5) += v93 * (v96 >> 8);
                *(v92 - 6) += v93 * (*(_DWORD *)((char *)v92 + v94 - 24) >> 8);
                *(v92 - 7) += v93 * (*(_DWORD *)((char *)v92 + v94 - 28) >> 8);
              }
              while ( v95 < a10->right - a10->left );
              v86 = v113;
            }
          }
          v105 = v117;
          v113 = ++v86;
          if ( v86 < v117 || v80 )
          {
            v121 += v118;
            DxgkpGetBilinearLineFromSource(v121, v81, a2, 0LL, v91, v22, v114, v115);
            v86 = v113;
            v105 = v117;
          }
          v87 = v132;
          v88 = v13 << 16;
        }
        while ( v86 < v105 );
      }
      if ( v80 && a10->right - a10->left > 0 )
      {
        v106 = (_DWORD *)((char *)v52 + 12);
        v107 = v128 + 2;
        v108 = (unsigned __int16)(((v13 - v80) << 16) / v13) >> 8;
        v109 = v129 - v52;
        do
        {
          ++v47;
          v110 = *v106 + v108 * (*(_DWORD *)((char *)v106 + v109) >> 8) + 0x8000;
          v106 += 4;
          v107[1] = BYTE2(v110);
          *v107 = (unsigned int)(*(v106 - 5) + v108 * (*(_DWORD *)((char *)v106 + v109 - 20) >> 8) + 0x8000) >> 16;
          v107 += 4;
          *(v107 - 5) = (unsigned int)(*(v106 - 6) + v108 * (*(_DWORD *)((char *)v106 + v109 - 24) >> 8) + 0x8000) >> 16;
          *(v107 - 6) = (unsigned int)(*(v106 - 7) + v108 * (*(_DWORD *)((char *)v106 + v109 - 28) >> 8) + 0x8000) >> 16;
        }
        while ( v47 < a10->right - a10->left );
      }
    }
    else
    {
      v55 = left * v122 % v13;
      if ( v55 )
      {
        DxgkpGetBilinearLineFromSource(&v54[-v118], v135, a2, 0LL, v126, v22, v114, v115);
        v54 = &v127[v118 * left];
      }
      DxgkpGetBilinearLineFromSource(v54, v135, a2, 0LL, v129, v22, v114, v115);
      if ( left < right )
      {
        v56 = v133;
        do
        {
          if ( v55 && v55 < v13 )
          {
            v57 = (unsigned __int16)((v55 << 16) / (unsigned int)v13);
            if ( a10->right - a10->left > 0 )
            {
              v58 = 0;
              v112 = v57 >> 8;
              v59 = (0x10000 - v57) >> 8;
              v60 = v56 - v126;
              v61 = (unsigned int *)((char *)v126 + 12);
              v62 = v128 + 2;
              do
              {
                v63 = *(unsigned int *)((char *)v61 + v60);
                ++v58;
                v64 = *v61;
                v61 += 4;
                v62[1] = (v59 * (v63 >> 8) + 0x8000 + v112 * (v64 >> 8)) >> 16;
                *v62 = (v59 * (*(unsigned int *)((char *)v61 + v60 - 20) >> 8) + 0x8000 + v112 * (*(v61 - 5) >> 8)) >> 16;
                v62 += 4;
                *(v62 - 5) = (v59 * (*(unsigned int *)((char *)v61 + v60 - 24) >> 8) + 0x8000 + v112 * (*(v61 - 6) >> 8)) >> 16;
                *(v62 - 6) = (v59 * (*(unsigned int *)((char *)v61 + v60 - 28) >> 8) + 0x8000 + v112 * (*(v61 - 7) >> 8)) >> 16;
              }
              while ( v58 < a10->right - a10->left );
              v56 = v133;
            }
          }
          else
          {
            v65 = 0;
            if ( a10->right - a10->left > 0 )
            {
              v66 = (int *)((char *)v56 + 8);
              v67 = v128 + 2;
              do
              {
                ++v65;
                v67[1] = (unsigned int)(v66[1] + 0x8000) >> 16;
                v68 = *v66;
                v66 += 4;
                *v67 = (unsigned int)(v68 + 0x8000) >> 16;
                v67 += 4;
                *(v67 - 5) = (unsigned int)(*(v66 - 5) + 0x8000) >> 16;
                *(v67 - 6) = (unsigned int)(*(v66 - 6) + 0x8000) >> 16;
              }
              while ( v65 < a10->right - a10->left );
            }
          }
          v128 += a7;
          v69 = v126;
          v70 = v55 - v13 + v122;
          v71 = v55 < v13;
          v55 -= v13;
          if ( v71 )
            v55 = v70;
          if ( v55 < v13 )
          {
            ++left;
            v126 = v56;
            v133 = v69;
            if ( left < right || v55 )
            {
              v120 += v118;
              DxgkpGetBilinearLineFromSource(v120, v135, a2, 0LL, v69, v22, v114, v115);
              v56 = v133;
            }
            else
            {
              v56 = v69;
            }
          }
        }
        while ( left < right );
      }
      if ( v55 )
      {
        v72 = (unsigned __int16)((v55 << 16) / v13);
        if ( a10->right - a10->left > 0 )
        {
          v73 = v128 + 2;
          v74 = (0x10000 - v72) >> 8;
          v75 = v72 >> 8;
          v76 = (unsigned int *)((char *)v126 + 12);
          v77 = v133 - v126;
          do
          {
            v78 = *(unsigned int *)((char *)v76 + v77);
            ++v47;
            v79 = *v76;
            v76 += 4;
            v73[1] = (v74 * (v78 >> 8) + 0x8000 + v75 * (v79 >> 8)) >> 16;
            *v73 = (v74 * (*(unsigned int *)((char *)v76 + v77 - 20) >> 8) + 0x8000 + v75 * (*(v76 - 5) >> 8)) >> 16;
            v73 += 4;
            *(v73 - 5) = (v74 * (*(unsigned int *)((char *)v76 + v77 - 24) >> 8) + 0x8000 + v75 * (*(v76 - 6) >> 8)) >> 16;
            *(v73 - 6) = (v74 * (*(unsigned int *)((char *)v76 + v77 - 28) >> 8) + 0x8000 + v75 * (*(v76 - 7) >> 8)) >> 16;
          }
          while ( v47 < a10->right - a10->left );
        }
      }
    }
    operator delete[](v129);
    return 0LL;
  }
  v49 = WdLogNewEntry5_WdLowResource(v44, 0LL, v45, v46);
  *(_QWORD *)(v49 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v49);
  return 3221225626LL;
}
