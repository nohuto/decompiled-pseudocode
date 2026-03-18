/*
 * XREFs of ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C012ECD8
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00B2690 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C01576BC (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C01DDF48 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x1C01DE0B8 (-DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z.c)
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
  int v45; // edi
  struct _UFIXPOINT_PIXEL *v46; // rdx
  __int64 v47; // rax
  int v48; // ecx
  __int64 v49; // rax
  struct _UFIXPOINT_PIXEL *v50; // r12
  __int64 v51; // rax
  unsigned __int8 *v52; // rcx
  int v53; // r12d
  struct _UFIXPOINT_PIXEL *v54; // r9
  unsigned int v55; // r8d
  int v56; // r10d
  unsigned int v57; // edx
  signed __int64 v58; // r9
  unsigned int *v59; // r11
  _BYTE *v60; // r8
  unsigned int v61; // ecx
  unsigned int v62; // eax
  int v63; // r11d
  int *v64; // r8
  _BYTE *v65; // rdx
  int v66; // eax
  struct _UFIXPOINT_PIXEL *v67; // r8
  int v68; // eax
  bool v69; // cc
  unsigned int v70; // r9d
  _BYTE *v71; // r11
  unsigned int v72; // r10d
  unsigned int v73; // r9d
  unsigned int *v74; // rdx
  signed __int64 v75; // r8
  unsigned int v76; // ecx
  unsigned int v77; // eax
  int v78; // r15d
  int v79; // r14d
  int v80; // r9d
  int v81; // r8d
  _DWORD *v82; // rdx
  unsigned int v83; // eax
  int v84; // r11d
  int v85; // ecx
  int v86; // edx
  int v87; // ecx
  int v88; // r8d
  struct _UFIXPOINT_PIXEL *v89; // r8
  _DWORD *v90; // rdx
  unsigned int v91; // r9d
  signed __int64 v92; // r10
  int v93; // r11d
  unsigned int v94; // eax
  unsigned int v95; // eax
  _DWORD *v96; // rdx
  int v97; // r11d
  unsigned int v98; // r14d
  unsigned int v99; // r9d
  signed __int64 v100; // r10
  _BYTE *v101; // r12
  unsigned int v102; // eax
  int v103; // eax
  _DWORD *v104; // rdx
  _BYTE *v105; // r10
  int v106; // r9d
  signed __int64 v107; // r8
  int v108; // ecx
  LONG v109; // [rsp+48h] [rbp-79h]
  unsigned int v110; // [rsp+48h] [rbp-79h]
  int v111; // [rsp+48h] [rbp-79h]
  int v112; // [rsp+50h] [rbp-71h]
  int v113; // [rsp+54h] [rbp-6Dh]
  LONG v114; // [rsp+58h] [rbp-69h]
  int v115; // [rsp+58h] [rbp-69h]
  int v116; // [rsp+5Ch] [rbp-65h]
  unsigned __int8 *v117; // [rsp+60h] [rbp-61h]
  unsigned __int8 *v118; // [rsp+60h] [rbp-61h]
  unsigned __int8 *v119; // [rsp+60h] [rbp-61h]
  int v120; // [rsp+68h] [rbp-59h]
  LONG v121; // [rsp+6Ch] [rbp-55h]
  unsigned int v122; // [rsp+6Ch] [rbp-55h]
  struct _UFIXPOINT_PIXEL *v123; // [rsp+70h] [rbp-51h]
  struct _UFIXPOINT_PIXEL *v124; // [rsp+70h] [rbp-51h]
  unsigned __int8 *v125; // [rsp+78h] [rbp-49h]
  unsigned __int8 *v126; // [rsp+80h] [rbp-41h]
  struct _UFIXPOINT_PIXEL *v127; // [rsp+88h] [rbp-39h]
  struct tagRECT v128; // [rsp+90h] [rbp-31h]
  LONG v129; // [rsp+90h] [rbp-31h]
  int v130; // [rsp+A0h] [rbp-21h]
  struct _UFIXPOINT_PIXEL *v131; // [rsp+A8h] [rbp-19h]
  LONG v132; // [rsp+148h] [rbp+87h]
  int v133; // [rsp+148h] [rbp+87h]

  v11 = a4;
  v13 = a3;
  left = a9->left;
  right = a9->right;
  v132 = left;
  if ( left == right
    || (top = a9->top, bottom = a9->bottom, top == bottom)
    || (v18 = a8->right, v109 = a8->left, a8->left == v18)
    || (v19 = a8->bottom, v114 = a8->top, v114 == v19) )
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
      v129 = a9->top;
      left = a2 - right;
      v21 = v129;
      v20 = a4;
      right = a2 - v132;
      a2 = v13;
      v13 = v38;
      v11 = -4;
      v37 = &a1[4 * v38 - 4];
      goto LABEL_20;
    case D3DKMDT_VPPR_ROTATE180:
      v21 = a2 - right;
      left = v13 - bottom;
      right = v13 - top;
      bottom = a2 - v132;
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
      v128.top = left;
      *(_QWORD *)&v128.right = __PAIR64__(right, bottom);
      v125 = v37;
      goto LABEL_7;
  }
  v125 = a1;
  v20 = 4;
  v128 = *a9;
  right = HIDWORD(*(unsigned __int128 *)a9);
  bottom = *(_QWORD *)&a9->right;
  left = HIDWORD(*(_QWORD *)&a9->left);
  v21 = (LONG)*a9;
LABEL_7:
  v22 = v18 - v109;
  v23 = bottom * v22;
  v120 = v19 - v114;
  v116 = v11;
  v133 = v20;
  v112 = (v21 * v22 - v21 * v22 % a2 + v22 - 1) / v22;
  v24 = (bottom * v22 - 1 - (bottom * v22 - 1) % a2 + a2) / v22;
  v25 = v24;
  v113 = v24;
  v121 = v21 * v22 / a2 + v109;
  a10->left = v121;
  v26 = (v19 - v114) * v128.top / v13 + v114;
  a10->top = v26;
  v27 = (a2 + v23 - 1) / a2 + v109;
  a10->right = v27;
  a10->bottom = v114 + (v13 + (v19 - v114) * v128.bottom - 1) / v13;
  v28 = &a6[4 * v121 + a7 * v26];
  v29 = v22;
  v126 = v28;
  if ( a5 == D3DKMDT_VPPR_IDENTITY && v22 == a2 )
  {
    if ( v120 == v13 )
    {
      v30 = &v125[v11 * v128.top + v20 * v112];
      if ( v128.top < v128.bottom )
      {
        v31 = (unsigned int)(right - v128.top);
        v32 = (unsigned int)(4 * (v24 - v112));
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
  else if ( v120 == v13 )
  {
    v39 = &v125[v11 * left];
    v117 = v39;
    if ( left < right )
    {
      v40 = (unsigned int)(right - left);
      v123 = (struct _UFIXPOINT_PIXEL *)v11;
      do
      {
        DxgkpGetBilinearLineFromSource(v39, v20, a2, (struct _PIXEL *)v28, 0LL, v29, v112, v25);
        v28 += a7;
        v39 = &v117[(_QWORD)v123];
        v25 = v113;
        v29 = v22;
        v117 = &v117[(_QWORD)v123];
        --v40;
      }
      while ( v40 );
    }
    return 0LL;
  }
  v41 = v27 - v121;
  v42 = 16LL * (2 * v41 + 2);
  if ( !is_mul_ok(2 * v41 + 2, 0x10uLL) )
    v42 = -1LL;
  v43 = (struct _UFIXPOINT_PIXEL *)operator new(v42, 0x4B677844u, PagedPool);
  v45 = 0;
  v127 = v43;
  v46 = v43;
  if ( v43 )
  {
    v48 = a10->right - a10->left;
    v131 = v43;
    v49 = 2LL * v48;
    v50 = (struct _UFIXPOINT_PIXEL *)((char *)v46 + 16 * v48 + 16);
    v124 = v50;
    *((_QWORD *)v46 + v49) = 0LL;
    *((_QWORD *)v46 + v49 + 1) = 0LL;
    v51 = 2LL * (a10->right - a10->left);
    *((_QWORD *)v50 + v51) = 0LL;
    *((_QWORD *)v50 + v51 + 1) = 0LL;
    v52 = &v125[v116 * left];
    v118 = v52;
    if ( v120 <= v13 )
    {
      v122 = (unsigned __int16)((v120 << 16) / v13);
      v111 = (left * v120 - left * v120 % v13 + v120 - 1) / v120;
      v119 = &v125[v116 * v111];
      v115 = (v13 + right * v120 - 1 - (right * v120 - 1) % v13) / v120;
      v78 = v120 * v111 % v13;
      if ( v78 <= 0 )
      {
        memset(v50, 0, 16LL * (a10->right - a10->left));
        v79 = v133;
      }
      else
      {
        v79 = v133;
        DxgkpGetBilinearLineFromSource(&v119[-v116], v133, a2, 0LL, v50, v22, v112, v113);
        v80 = 0;
        if ( a10->right - a10->left > 0 )
        {
          v81 = (unsigned __int16)((v78 << 16) / v13) >> 8;
          v82 = (_DWORD *)((char *)v50 + 8);
          do
          {
            ++v80;
            v82[1] = v81 * (v82[1] >> 8);
            *v82 = v81 * (*v82 >> 8);
            v83 = *(v82 - 1);
            v82 += 4;
            *(v82 - 5) = v81 * (v83 >> 8);
            *(v82 - 6) = v81 * (*(v82 - 6) >> 8);
          }
          while ( v80 < a10->right - a10->left );
        }
      }
      DxgkpGetBilinearLineFromSource(v119, v79, a2, 0LL, v127, v22, v112, v113);
      v84 = v111;
      if ( v111 < v115 )
      {
        v85 = v78 << 16;
        v86 = v13 << 16;
        do
        {
          v87 = (v120 << 16) + v85;
          v88 = a10->right - a10->left;
          v78 += v120;
          v130 = v87;
          if ( v78 >= v13 )
          {
            v78 -= v13;
            v130 = v87 - v86;
            v69 = v88 <= 0;
            v89 = v127;
            v95 = (unsigned __int16)((v87 - v86) / v13);
            if ( !v69 )
            {
              v96 = (_DWORD *)((char *)v50 + 12);
              v97 = 0;
              v98 = v95 >> 8;
              v99 = (v122 - v95) >> 8;
              v100 = v127 - v50;
              v101 = v126 + 2;
              do
              {
                ++v97;
                v101[1] = (*v96 + 0x8000 + v99 * (*(_DWORD *)((char *)v96 + v100) >> 8)) >> 16;
                *v101 = (*(v96 - 1) + 0x8000 + v99 * (*(_DWORD *)((char *)v96 + v100 - 4) >> 8)) >> 16;
                v101 += 4;
                *(v101 - 5) = (*(v96 - 2) + 0x8000 + v99 * (*(_DWORD *)((char *)v96 + v100 - 8) >> 8)) >> 16;
                *(v101 - 6) = (*(v96 - 3) + 0x8000 + v99 * (*(_DWORD *)((char *)v96 + v100 - 12) >> 8)) >> 16;
                *v96 = v98 * (*(_DWORD *)((char *)v96 + v100) >> 8);
                v102 = *(_DWORD *)((char *)v96 + v100 - 4);
                v96 += 4;
                *(v96 - 5) = v98 * (v102 >> 8);
                *(v96 - 6) = v98 * (*(_DWORD *)((char *)v96 + v100 - 24) >> 8);
                *(v96 - 7) = v98 * (*(_DWORD *)((char *)v96 + v100 - 28) >> 8);
              }
              while ( v97 < a10->right - a10->left );
              v50 = v124;
              v79 = v133;
              v84 = v111;
            }
            v126 += a7;
          }
          else
          {
            v69 = v88 <= 0;
            v89 = v127;
            if ( !v69 )
            {
              v90 = (_DWORD *)((char *)v50 + 12);
              v91 = v122 >> 8;
              v92 = v127 - v50;
              v93 = 0;
              do
              {
                ++v93;
                *v90 += v91 * (*(_DWORD *)((char *)v90 + v92) >> 8);
                v94 = *(_DWORD *)((char *)v90 + v92 - 4);
                v90 += 4;
                *(v90 - 5) += v91 * (v94 >> 8);
                *(v90 - 6) += v91 * (*(_DWORD *)((char *)v90 + v92 - 24) >> 8);
                *(v90 - 7) += v91 * (*(_DWORD *)((char *)v90 + v92 - 28) >> 8);
              }
              while ( v93 < a10->right - a10->left );
              v84 = v111;
            }
          }
          v103 = v115;
          v111 = ++v84;
          if ( v84 < v115 || v78 )
          {
            v119 += v116;
            DxgkpGetBilinearLineFromSource(v119, v79, a2, 0LL, v89, v22, v112, v113);
            v84 = v111;
            v103 = v115;
          }
          v85 = v130;
          v86 = v13 << 16;
        }
        while ( v84 < v103 );
      }
      if ( v78 && a10->right - a10->left > 0 )
      {
        v104 = (_DWORD *)((char *)v50 + 12);
        v105 = v126 + 2;
        v106 = (unsigned __int16)(((v13 - v78) << 16) / v13) >> 8;
        v107 = v127 - v50;
        do
        {
          ++v45;
          v108 = *v104 + v106 * (*(_DWORD *)((char *)v104 + v107) >> 8) + 0x8000;
          v104 += 4;
          v105[1] = BYTE2(v108);
          *v105 = (unsigned int)(*(v104 - 5) + v106 * (*(_DWORD *)((char *)v104 + v107 - 20) >> 8) + 0x8000) >> 16;
          v105 += 4;
          *(v105 - 5) = (unsigned int)(*(v104 - 6) + v106 * (*(_DWORD *)((char *)v104 + v107 - 24) >> 8) + 0x8000) >> 16;
          *(v105 - 6) = (unsigned int)(*(v104 - 7) + v106 * (*(_DWORD *)((char *)v104 + v107 - 28) >> 8) + 0x8000) >> 16;
        }
        while ( v45 < a10->right - a10->left );
      }
    }
    else
    {
      v53 = left * v120 % v13;
      if ( v53 )
      {
        DxgkpGetBilinearLineFromSource(&v52[-v116], v133, a2, 0LL, v124, v22, v112, v113);
        v52 = &v125[v116 * left];
      }
      DxgkpGetBilinearLineFromSource(v52, v133, a2, 0LL, v127, v22, v112, v113);
      if ( left < right )
      {
        v54 = v131;
        do
        {
          if ( v53 && v53 < v13 )
          {
            v55 = (unsigned __int16)((v53 << 16) / (unsigned int)v13);
            if ( a10->right - a10->left > 0 )
            {
              v56 = 0;
              v110 = v55 >> 8;
              v57 = (0x10000 - v55) >> 8;
              v58 = v54 - v124;
              v59 = (unsigned int *)((char *)v124 + 12);
              v60 = v126 + 2;
              do
              {
                v61 = *(unsigned int *)((char *)v59 + v58);
                ++v56;
                v62 = *v59;
                v59 += 4;
                v60[1] = (v57 * (v61 >> 8) + 0x8000 + v110 * (v62 >> 8)) >> 16;
                *v60 = (v57 * (*(unsigned int *)((char *)v59 + v58 - 20) >> 8) + 0x8000 + v110 * (*(v59 - 5) >> 8)) >> 16;
                v60 += 4;
                *(v60 - 5) = (v57 * (*(unsigned int *)((char *)v59 + v58 - 24) >> 8) + 0x8000 + v110 * (*(v59 - 6) >> 8)) >> 16;
                *(v60 - 6) = (v57 * (*(unsigned int *)((char *)v59 + v58 - 28) >> 8) + 0x8000 + v110 * (*(v59 - 7) >> 8)) >> 16;
              }
              while ( v56 < a10->right - a10->left );
              v54 = v131;
            }
          }
          else
          {
            v63 = 0;
            if ( a10->right - a10->left > 0 )
            {
              v64 = (int *)((char *)v54 + 8);
              v65 = v126 + 2;
              do
              {
                ++v63;
                v65[1] = (unsigned int)(v64[1] + 0x8000) >> 16;
                v66 = *v64;
                v64 += 4;
                *v65 = (unsigned int)(v66 + 0x8000) >> 16;
                v65 += 4;
                *(v65 - 5) = (unsigned int)(*(v64 - 5) + 0x8000) >> 16;
                *(v65 - 6) = (unsigned int)(*(v64 - 6) + 0x8000) >> 16;
              }
              while ( v63 < a10->right - a10->left );
            }
          }
          v126 += a7;
          v67 = v124;
          v68 = v53 - v13 + v120;
          v69 = v53 < v13;
          v53 -= v13;
          if ( v69 )
            v53 = v68;
          if ( v53 < v13 )
          {
            ++left;
            v124 = v54;
            v131 = v67;
            if ( left < right || v53 )
            {
              v118 += v116;
              DxgkpGetBilinearLineFromSource(v118, v133, a2, 0LL, v67, v22, v112, v113);
              v54 = v131;
            }
            else
            {
              v54 = v67;
            }
          }
        }
        while ( left < right );
      }
      if ( v53 )
      {
        v70 = (unsigned __int16)((v53 << 16) / v13);
        if ( a10->right - a10->left > 0 )
        {
          v71 = v126 + 2;
          v72 = (0x10000 - v70) >> 8;
          v73 = v70 >> 8;
          v74 = (unsigned int *)((char *)v124 + 12);
          v75 = v131 - v124;
          do
          {
            v76 = *(unsigned int *)((char *)v74 + v75);
            ++v45;
            v77 = *v74;
            v74 += 4;
            v71[1] = (v72 * (v76 >> 8) + 0x8000 + v73 * (v77 >> 8)) >> 16;
            *v71 = (v72 * (*(unsigned int *)((char *)v74 + v75 - 20) >> 8) + 0x8000 + v73 * (*(v74 - 5) >> 8)) >> 16;
            v71 += 4;
            *(v71 - 5) = (v72 * (*(unsigned int *)((char *)v74 + v75 - 24) >> 8) + 0x8000 + v73 * (*(v74 - 6) >> 8)) >> 16;
            *(v71 - 6) = (v72 * (*(unsigned int *)((char *)v74 + v75 - 28) >> 8) + 0x8000 + v73 * (*(v74 - 7) >> 8)) >> 16;
          }
          while ( v45 < a10->right - a10->left );
        }
      }
    }
    operator delete[](v127);
    return 0LL;
  }
  v47 = WdLogNewEntry5_WdLowResource(v44);
  *(_QWORD *)(v47 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v47);
  return 3221225626LL;
}
