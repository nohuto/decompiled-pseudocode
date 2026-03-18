/*
 * XREFs of ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0051258
 * Callers:
 *     EngStretchBlt @ 0x1C0051160 (EngStretchBlt.c)
 * Callees:
 *     EngHTBlt @ 0x1C0012AA4 (EngHTBlt.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C0050CAC (-StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B104 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F22E4 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C00F2DC4 (-vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00F313C (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ?vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z @ 0x1C0108054 (-vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C011B2B4 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C011C868 (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015E8A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C015EC40 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C015EEA8 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0285238 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall EngStretchBltNew(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        __m128i *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  __m128i *v13; // rsi
  struct _RECTL *v14; // r13
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // r15
  int v18; // edx
  int v19; // eax
  _DWORD *v20; // rdi
  __int64 v21; // rbx
  int v22; // r12d
  SURFOBJ *v23; // rcx
  int v24; // eax
  SURFOBJ *v25; // r10
  __int64 v26; // r11
  unsigned int v27; // ecx
  int v28; // r11d
  LONG bottom; // eax
  LONG top; // r10d
  LONG v31; // r8d
  LONG right; // eax
  LONG left; // r9d
  LONG v34; // edx
  BOOL v35; // eax
  int v36; // ecx
  struct _SURFOBJ *v37; // r9
  LONG v38; // ecx
  LONG v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r14
  XCLIPOBJ *v42; // rax
  __int64 v43; // rbx
  unsigned __int64 v44; // rax
  int v45; // ecx
  int v46; // edx
  unsigned int v47; // edx
  int v48; // ecx
  struct _RECTL *v49; // rcx
  LONG v50; // eax
  LONG v51; // ecx
  LONG v52; // edx
  LONG v53; // r8d
  __int64 v54; // rbx
  int v56; // eax
  XCLIPOBJ *v57; // rdi
  int v58; // eax
  __int64 v59; // rax
  void *v60; // rdx
  XCLIPOBJ *v61; // r10
  __m128i v62; // xmm0
  __int64 i; // rax
  LONG v64; // eax
  LONG v65; // ecx
  LONG v66; // edx
  unsigned int v67; // eax
  unsigned int v68; // ecx
  struct _STRDDA *v69; // rax
  struct _SURFOBJ *v70; // r8
  struct _SURFOBJ *v71; // rcx
  unsigned int v72; // r9d
  unsigned int v73; // eax
  __int64 v74; // rcx
  struct _STRRUN *v75; // r11
  int v76; // ecx
  XCLIPOBJ *v77; // rax
  LONG v78; // r9d
  int j; // r8d
  struct _SURFOBJ *v80; // r10
  int v81; // edx
  struct _STRRUN *v82; // rcx
  unsigned __int64 v83; // rbx
  __int64 v84; // rax
  unsigned int v85; // r8d
  unsigned int v86; // r8d
  int v87; // eax
  unsigned __int64 v88; // r9
  __int64 v89; // r8
  int v90; // eax
  char v91; // dl
  int v92; // ecx
  int v93; // ecx
  LONG v94; // ecx
  int v95; // eax
  LONG v96; // r8d
  LONG v97; // edx
  LONG v98; // edx
  SURFOBJ *v99; // rax
  int v100; // eax
  unsigned int (__fastcall *v101)(struct _SURFOBJ *, SURFOBJ *, _QWORD, XCLIPOBJ *, _QWORD, __m128i *, struct SURFACE *, struct _RECTL *, __int64 *, __int64 *, unsigned int); // rax
  int v102; // r14d
  int v103; // ecx
  int v104; // eax
  __int64 v105; // r14
  int v106; // eax
  BOOL (__stdcall *v107)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v108; // rcx
  XCLIPOBJ *v109; // rsi
  int v110; // ebx
  BOOL (__stdcall *v111)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  unsigned int v112; // [rsp+70h] [rbp-4E8h]
  int v113; // [rsp+78h] [rbp-4E0h]
  LONG v114; // [rsp+78h] [rbp-4E0h]
  int v115; // [rsp+7Ch] [rbp-4DCh]
  int v116; // [rsp+80h] [rbp-4D8h]
  int v117; // [rsp+84h] [rbp-4D4h]
  int v118; // [rsp+84h] [rbp-4D4h]
  int v119; // [rsp+84h] [rbp-4D4h]
  int v120; // [rsp+84h] [rbp-4D4h]
  struct _SURFOBJ *v121; // [rsp+88h] [rbp-4D0h]
  struct _SURFOBJ *v122; // [rsp+88h] [rbp-4D0h]
  __int64 v123; // [rsp+90h] [rbp-4C8h]
  __int64 v124; // [rsp+98h] [rbp-4C0h] BYREF
  int v125; // [rsp+A0h] [rbp-4B8h]
  LONG v126; // [rsp+A4h] [rbp-4B4h]
  __int64 v127; // [rsp+A8h] [rbp-4B0h] BYREF
  char v128; // [rsp+B0h] [rbp-4A8h]
  int v129; // [rsp+B4h] [rbp-4A4h]
  struct _SURFOBJ *v130; // [rsp+B8h] [rbp-4A0h]
  struct REGION *v131[2]; // [rsp+C0h] [rbp-498h] BYREF
  __int64 v132; // [rsp+D0h] [rbp-488h] BYREF
  char v133; // [rsp+D8h] [rbp-480h]
  int v134; // [rsp+DCh] [rbp-47Ch]
  XCLIPOBJ *v135; // [rsp+E0h] [rbp-478h]
  XCLIPOBJ *v136; // [rsp+E8h] [rbp-470h]
  unsigned __int64 v137; // [rsp+F0h] [rbp-468h]
  SURFOBJ *pso; // [rsp+F8h] [rbp-460h]
  struct _SURFOBJ *v139; // [rsp+100h] [rbp-458h]
  __int64 v140; // [rsp+108h] [rbp-450h]
  __m128i *v141; // [rsp+110h] [rbp-448h]
  struct SURFACE *v142; // [rsp+118h] [rbp-440h]
  __int64 v143; // [rsp+120h] [rbp-438h]
  __int64 v144; // [rsp+128h] [rbp-430h]
  SIZEL sizl; // [rsp+130h] [rbp-428h]
  unsigned int v146; // [rsp+138h] [rbp-420h]
  BOOL v147; // [rsp+13Ch] [rbp-41Ch]
  struct REGION *v148[2]; // [rsp+140h] [rbp-418h] BYREF
  __int64 *v149; // [rsp+150h] [rbp-408h]
  struct _STRRUN *v150; // [rsp+158h] [rbp-400h]
  struct _RECTL *v151; // [rsp+160h] [rbp-3F8h]
  __int64 v152; // [rsp+168h] [rbp-3F0h]
  __int64 v153; // [rsp+170h] [rbp-3E8h]
  _DWORD *v154; // [rsp+178h] [rbp-3E0h]
  HSURF hsurf; // [rsp+180h] [rbp-3D8h]
  int v156; // [rsp+188h] [rbp-3D0h]
  unsigned int v157; // [rsp+18Ch] [rbp-3CCh]
  int v158; // [rsp+190h] [rbp-3C8h]
  __int64 v159; // [rsp+198h] [rbp-3C0h] BYREF
  char v160; // [rsp+1A0h] [rbp-3B8h]
  int v161; // [rsp+1A4h] [rbp-3B4h]
  struct _SURFOBJ *v162; // [rsp+1A8h] [rbp-3B0h]
  struct _CLIPOBJ *v163; // [rsp+1B0h] [rbp-3A8h]
  _DWORD *v164; // [rsp+1B8h] [rbp-3A0h]
  struct _RECTL v165; // [rsp+1C0h] [rbp-398h] BYREF
  _QWORD v166[2]; // [rsp+1D0h] [rbp-388h] BYREF
  struct REGION *v167[2]; // [rsp+1E0h] [rbp-378h] BYREF
  __int64 v168; // [rsp+1F0h] [rbp-368h] BYREF
  int v169; // [rsp+1F8h] [rbp-360h]
  int v170; // [rsp+1FCh] [rbp-35Ch]
  __int64 v171; // [rsp+200h] [rbp-358h] BYREF
  __int64 v172; // [rsp+208h] [rbp-350h] BYREF
  __int64 v173; // [rsp+210h] [rbp-348h] BYREF
  void (*const near *v174)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+218h] [rbp-340h]
  __int64 v175; // [rsp+220h] [rbp-338h] BYREF
  struct _RECTL v176; // [rsp+228h] [rbp-330h] BYREF
  __int64 v177; // [rsp+238h] [rbp-320h]
  _QWORD v178[4]; // [rsp+240h] [rbp-318h] BYREF
  _QWORD v179[4]; // [rsp+260h] [rbp-2F8h] BYREF
  struct _RECTL v180; // [rsp+280h] [rbp-2D8h] BYREF
  struct _RECTL v181; // [rsp+290h] [rbp-2C8h] BYREF
  struct _RECTL v182; // [rsp+2A0h] [rbp-2B8h] BYREF
  struct _RECTL v183; // [rsp+2B0h] [rbp-2A8h] BYREF
  __int64 v184; // [rsp+2C0h] [rbp-298h] BYREF
  int v185; // [rsp+2C8h] [rbp-290h]
  int v186; // [rsp+2CCh] [rbp-28Ch]
  __m128i v187; // [rsp+2D0h] [rbp-288h] BYREF
  __int64 v188; // [rsp+2E0h] [rbp-278h] BYREF
  int v189; // [rsp+2E8h] [rbp-270h]
  LONG v190; // [rsp+2ECh] [rbp-26Ch]
  struct _RECTL v191; // [rsp+2F0h] [rbp-268h] BYREF
  struct _RECTL v192; // [rsp+300h] [rbp-258h] BYREF
  int v193; // [rsp+310h] [rbp-248h] BYREF
  struct _RECTL v194; // [rsp+314h] [rbp-244h] BYREF
  _BYTE v195[160]; // [rsp+330h] [rbp-228h] BYREF
  _BYTE v196[160]; // [rsp+3D0h] [rbp-188h] BYREF
  _BYTE v197[4]; // [rsp+470h] [rbp-E8h] BYREF
  char v198[156]; // [rsp+474h] [rbp-E4h] BYREF

  v136 = (XCLIPOBJ *)a4;
  v139 = a3;
  v121 = a2;
  v130 = a1;
  v137 = (unsigned __int64)a5;
  v162 = a3;
  v163 = a4;
  v141 = a6;
  v142 = (struct SURFACE *)a7;
  v13 = (__m128i *)a8;
  v14 = a9;
  v149 = (__int64 *)a10;
  v112 = a11;
  if ( a11 - 1 > 3 )
    return 0LL;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v140 = v15;
  v16 = SURFOBJ_TO_SURFACE(a2);
  v123 = v16;
  v153 = SURFOBJ_TO_SURFACE(a3);
  v17 = 0LL;
  if ( !v15 )
    return 0LL;
  if ( !v16 )
    return 0LL;
  v18 = *(_DWORD *)(v15 + 96);
  if ( (unsigned int)(v18 - 7) <= 2 )
    return 0LL;
  v19 = *(_DWORD *)(v16 + 96);
  if ( v19 == 9 || v18 == 10 || v19 == 10 )
    return 0LL;
  if ( a9->left == a9->right || a9->top == a9->bottom || a8->left == a8->right || a8->top == a8->bottom )
    return 1LL;
  v20 = *(_DWORD **)(v15 + 48);
  v154 = v20;
  v164 = v20;
  v21 = *(_QWORD *)(v16 + 48);
  v177 = v21;
  v159 = 0LL;
  v160 = 0;
  v161 = 0;
  v192 = *a9;
  v22 = 1;
  v23 = v121;
  if ( v121->iType == 1 && v21 && (*(_DWORD *)(v21 + 40) & 0x20000) != 0 )
  {
    if ( !(unsigned int)MulCopyDeviceToDIB(v121, (struct SURFMEM *)&v159, &v192) )
      goto LABEL_66;
    if ( !v159 )
    {
LABEL_65:
      LODWORD(v17) = v22;
LABEL_66:
      SURFMEM::~SURFMEM((SURFMEM *)&v159);
      return (unsigned int)v17;
    }
    v14 = &v192;
    v121 = (struct _SURFOBJ *)(v159 + 24);
    v16 = SURFOBJ_TO_SURFACE(v159 + 24);
    v123 = v16;
    v21 = *(_QWORD *)(v16 + 48);
    v177 = v21;
    v23 = v121;
  }
  if ( !v137 || (v24 = 1, (*(_DWORD *)(v137 + 4) & 8) == 0) )
    v24 = 0;
  v115 = v24;
  v156 = v24;
  if ( v24 )
  {
    if ( v23->iType )
      goto LABEL_66;
    v25 = v130;
    if ( v130->iType != 1 )
      goto LABEL_66;
    v26 = (__int64)v139;
    if ( v139 )
      goto LABEL_66;
  }
  else
  {
    v25 = v130;
    v26 = (__int64)v139;
  }
  if ( a11 != 4 )
    goto LABEL_19;
  if ( v24 )
    goto LABEL_66;
  v56 = EngHTBlt(
          v25,
          v23,
          v26,
          (CLIPOBJ *)v136,
          (struct XLATE *)v137,
          (struct tagCOLORADJUSTMENT *)v141,
          v142,
          (XLATEOBJ *)a8,
          (XLATEOBJ *)v14,
          v149,
          0,
          0LL);
  if ( v56 == -1 )
    goto LABEL_66;
  if ( v56 )
  {
    if ( v56 == 1 )
      goto LABEL_65;
LABEL_19:
    v27 = a11;
    goto LABEL_20;
  }
  v27 = 3;
  v112 = 3;
LABEL_20:
  v28 = 0;
  v113 = 0;
  bottom = a8->bottom;
  top = a8->top;
  v31 = bottom;
  if ( bottom < top )
  {
    v31 = a8->top;
    a8->top = bottom;
    a8->bottom = top;
    v28 = 2;
    v113 = 2;
    top = bottom;
  }
  right = a8->right;
  left = a8->left;
  v34 = right;
  if ( right < a8->left )
  {
    v34 = a8->left;
    a8->left = right;
    a8->right = left;
    v28 |= 1u;
    v113 = v28;
    left = right;
  }
  if ( v27 >= 3 || v153 )
  {
    v35 = 0;
    v116 = 0;
  }
  else
  {
    v116 = 1;
    v35 = 1;
    if ( v34 - left >= v14->right - v14->left )
    {
      v35 = v31 - top < v14->bottom - v14->top;
      v116 = v35;
    }
    v27 = v112;
  }
  v147 = v35;
  if ( !v35 )
  {
    if ( v27 < 3 )
      v27 = 3;
    v112 = v27;
  }
  v146 = v27;
  v36 = *(_DWORD *)(v140 + 112);
  if ( (v36 & 0x40000) != 0 )
    goto LABEL_34;
  if ( v137 && (*(_DWORD *)(v137 + 4) & 1) == 0 )
  {
    v37 = v121;
    goto LABEL_155;
  }
  v37 = v121;
  if ( v121->iType )
  {
LABEL_155:
    if ( *(_WORD *)(v140 + 100) )
    {
      if ( (v36 & 2) != 0 && !v28 && !v139 )
      {
        v94 = v14->left;
        if ( v14->left >= 0 )
        {
          v95 = v14->top;
          if ( v95 >= 0 )
          {
            v96 = v14->right;
            if ( v96 <= v37->sizlBitmap.cx )
            {
              v97 = v14->bottom;
              if ( v97 <= v37->sizlBitmap.cy )
              {
                v119 = v96 - v94;
                sizl.cx = v96 - v94;
                v98 = v97 - v95;
                v126 = v98;
                sizl.cy = v98;
                if ( v96 - v94 <= a8->right - a8->left && v98 <= a8->bottom - a8->top )
                {
                  hsurf = (HSURF)EngCreateBitmap(sizl, 0, v130->iBitmapFormat, 0, 0LL);
                  v99 = EngLockSurface(hsurf);
                  pso = v99;
                  if ( v99 )
                  {
                    v99->iUniq = 0;
                    v188 = 0LL;
                    v189 = v119;
                    v190 = v126;
                    if ( (*(_DWORD *)(v16 + 112) & 0x400) != 0 )
                      v100 = (*(__int64 (__fastcall **)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int64 *, struct _RECTL *))(v21 + 2840))(
                               v99,
                               v121,
                               0LL,
                               v137,
                               &v188,
                               v14);
                    else
                      v100 = ((__int64 (__fastcall *)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int64 *, struct _RECTL *))EngCopyBits)(
                               v99,
                               v121,
                               0LL,
                               v137,
                               &v188,
                               v14);
                    if ( !v100
                      || (v101 = (unsigned int (__fastcall *)(struct _SURFOBJ *, SURFOBJ *, _QWORD, XCLIPOBJ *, _QWORD, __m128i *, struct SURFACE *, struct _RECTL *, __int64 *, __int64 *, unsigned int))*((_QWORD *)v20 + 356)) == 0LL
                      || !v101(v130, pso, 0LL, v136, 0LL, v141, v142, a8, &v188, v149, v112) )
                    {
                      v22 = 0;
                    }
                    EngUnlockSurface(pso);
                    EngDeleteSurface(hsurf);
                    goto LABEL_65;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_34:
  v127 = 0LL;
  v128 = 0;
  v129 = 0;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v195);
  v38 = *(_DWORD *)(v16 + 60);
  v39 = *(_DWORD *)(v16 + 56);
  *(_QWORD *)&v180.left = 0LL;
  v180.right = v39;
  v180.bottom = v38;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v131);
  v40 = v140;
  if ( !*(_WORD *)(v140 + 100) && *(_QWORD *)(v140 + 32) != *(_QWORD *)(v16 + 32) )
    goto LABEL_36;
  v187 = *(__m128i *)a8;
  v102 = _mm_cvtsi128_si32(v187);
  v182.left = v102 - 1;
  v182.top = v187.m128i_i32[1] - 1;
  v120 = _mm_cvtsi128_si32(_mm_srli_si128(v187, 8));
  v182.right = v120 + 1;
  v182.bottom = _mm_srli_si128(v187, 8).m128i_i32[1] + 1;
  v103 = *(_DWORD *)(v140 + 60);
  v104 = *(_DWORD *)(v140 + 56);
  v168 = 0LL;
  v169 = v104;
  v170 = v103;
  ERECTL::operator*=(&v182, &v168);
  if ( ERECTL::bEmpty((ERECTL *)&v182) )
    goto LABEL_64;
  v40 = v140;
  if ( *(_WORD *)(v140 + 100)
    || v182.left <= v14->right && v182.right >= v14->left && v182.top <= v14->bottom && v182.bottom >= v14->top )
  {
    v187.m128i_i32[0] = v102 - v182.left;
    v187.m128i_i32[1] -= v182.top;
    v187.m128i_i32[2] = v120 - v182.left;
    v187.m128i_i32[3] -= v182.top;
    memset(v178, 0, sizeof(v178));
    HIDWORD(v178[0]) = v182.right - v182.left + 1;
    LODWORD(v178[1]) = v182.bottom - v182.top + 1;
    v178[2] = 0LL;
    v105 = v140;
    if ( v115 )
      v106 = *(_DWORD *)(v123 + 96);
    else
      v106 = *(_DWORD *)(v140 + 96);
    LODWORD(v178[0]) = v106;
    LODWORD(v178[3]) = *(_DWORD *)(v140 + 112) & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v127, (struct _DEVBITMAPINFO *)v178, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v127 )
      goto LABEL_202;
    v124 = *(_QWORD *)&v182.left;
    if ( !v131[0] )
      goto LABEL_202;
    *(_QWORD *)&v182.left = 0LL;
    v182.right -= v124;
    v182.bottom -= HIDWORD(v124);
    RGNOBJ::vSet((RGNOBJ *)v131, &v182);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v195, v131[0], (struct ERECTL *)&v182, 1);
    v171 = *(_QWORD *)(v105 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v171, (struct _SURFOBJ *)(v105 + 24), 0LL, 0);
    if ( v153 )
    {
      if ( (*(_DWORD *)(v105 + 112) & 0x400) != 0 )
        v107 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v20 + 355);
      else
        v107 = EngCopyBits;
      v108 = 0LL;
      if ( v127 )
        v108 = v127 + 24;
      ((void (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, struct _RECTL *, __int64 *))v107)(
        v108,
        v105 + 24,
        0LL,
        xloIdent,
        &v182,
        &v124);
    }
    v41 = v127;
    v152 = v127;
    v13 = &v187;
    v42 = (XCLIPOBJ *)v195;
  }
  else
  {
LABEL_36:
    v41 = v40;
    v152 = v40;
    v42 = v136;
  }
  v141 = v13;
  v135 = v42;
  v172 = *(_QWORD *)(v123 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v172, v121, 0LL, 0);
  ERECTL::operator*=(&v180, v14);
  if ( v180.left == v180.right || v180.top == v180.bottom )
    goto LABEL_64;
  v132 = 0LL;
  v133 = 0;
  v134 = 0;
  if ( v113 || *(_WORD *)(v123 + 100) || (unsigned int)(*(_DWORD *)(v123 + 96) - 7) <= 1 )
  {
    memset(v179, 0, sizeof(v179));
    HIDWORD(v179[0]) = v180.right - v180.left;
    LODWORD(v179[1]) = v180.bottom - v180.top;
    v179[2] = 0LL;
    if ( v115 )
      v87 = *(_DWORD *)(v123 + 96);
    else
      v87 = *(_DWORD *)(v41 + 96);
    LODWORD(v179[0]) = v87;
    LODWORD(v179[3]) = *(_DWORD *)(v123 + 112) & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v132, (struct _DEVBITMAPINFO *)v179, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v132 )
      goto LABEL_201;
    v184 = 0LL;
    v185 = v180.right - v180.left;
    v186 = v180.bottom - v180.top;
    v88 = 0LL;
    if ( !v115 )
      v88 = v137;
    if ( (*(_DWORD *)(v123 + 112) & 0x400) != 0 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD, unsigned __int64, __int64 *, struct _RECTL *))(v21 + 2840))(
        v132 + 24,
        v123 + 24,
        0LL,
        v88,
        &v184,
        &v180);
    else
      ((void (__fastcall *)(__int64, __int64, _QWORD, unsigned __int64, __int64 *, struct _RECTL *))EngCopyBits)(
        v132 + 24,
        v123 + 24,
        0LL,
        v88,
        &v184,
        &v180);
    LODWORD(v184) = v14->left - v180.left;
    HIDWORD(v184) = v14->top - v180.top;
    v185 = v14->right - v180.left;
    v186 = v14->bottom - v180.top;
    v89 = v132;
    v43 = v132;
    v123 = v132;
    v142 = (struct SURFACE *)v132;
    v14 = (struct _RECTL *)&v184;
    sizl = (SIZEL)&v184;
    v122 = 0LL;
    v180.right -= v180.left;
    v90 = v180.bottom - v180.top;
    v180.bottom -= v180.top;
    *(_QWORD *)&v180.left = 0LL;
    v91 = v113;
    if ( (v113 & 2) != 0 )
    {
      v92 = *(_DWORD *)(v132 + 88);
      if ( v92 > 0 )
      {
        *(_QWORD *)(v132 + 80) = *(_QWORD *)(v132 + 72) + v92 * (v90 - 1);
        v91 = v113;
      }
      else
      {
        *(_QWORD *)(v132 + 80) = *(_QWORD *)(v132 + 72);
      }
      *(_DWORD *)(v132 + 88) = -*(_DWORD *)(v132 + 88);
      v89 = v132;
    }
    if ( (v91 & 1) != 0 )
    {
      v93 = *(_DWORD *)(v89 + 96);
      if ( (unsigned int)(v93 - 1) > 5 )
        goto LABEL_201;
      ((void (__fastcall *)(__int64))(&apfnMirror)[v93])(v89);
    }
  }
  else
  {
    v43 = v123;
    v142 = (struct SURFACE *)v123;
    sizl = (SIZEL)v14;
    v44 = 0LL;
    if ( !v115 )
      v44 = v137;
    v122 = (struct _SURFOBJ *)v44;
  }
  v173 = *(_QWORD *)(v41 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v173, (struct _SURFOBJ *)(v41 + 24), 0LL, 0);
  if ( v14->right - v14->left >= 128000000 )
    goto LABEL_201;
  if ( v14->bottom - v14->top >= 128000000 )
    goto LABEL_201;
  v45 = v13->m128i_i32[2] - v13->m128i_i32[0];
  if ( v45 >= 128000000 )
    goto LABEL_201;
  v46 = v13->m128i_i32[3] - v13->m128i_i32[1];
  if ( v46 >= 128000000 || v45 <= -128000000 || v46 <= -128000000 )
    goto LABEL_201;
  if ( v112 != 3
    || v139
    || v122 && (HIDWORD(v122->dhsurf) & 1) == 0
    || (v47 = *(_DWORD *)(v41 + 96), v48 = *(_DWORD *)(v43 + 96), v47 != v48)
    || ((v48 - 3) & 0xFFFFFFFC) != 0
    || v48 == 5 )
  {
    v59 = AllocFreeTmpBuffer(324LL);
    v60 = (void *)v59;
    v154 = (_DWORD *)v59;
    if ( v59 )
    {
      v175 = v59;
      v61 = v135;
      if ( v135 && *((_BYTE *)v135 + 20) )
      {
        if ( *((_BYTE *)v135 + 20) != 1 )
        {
          if ( *((_BYTE *)v135 + 20) == 3 )
          {
            v115 = 1;
            XCLIPOBJ::cEnumStart(v135, 0, 0, 4u, 0x14u);
            v61 = v135;
            v60 = v154;
          }
LABEL_87:
          *(_QWORD *)&v183.right = 0LL;
          *(_QWORD *)&v183.left = 0LL;
          if ( v115 )
            goto LABEL_213;
          while ( 1 )
          {
            for ( i = 0LL; ; i = (unsigned int)(v118 + 1) )
            {
              v118 = i;
              v60 = v154;
              if ( (unsigned int)i >= *v154 )
                break;
              v151 = (struct _RECTL *)&v154[4 * i + 1];
              v181 = 0LL;
              vInitStrDDAClip(&v180, v14, (struct _RECTL *)v13, v151, &v181);
              if ( !ERECTL::bEmpty((ERECTL *)&v181) )
              {
                --v181.left;
                --v181.top;
                ++v181.right;
                ++v181.bottom;
                ERECTL::operator*=(&v181, &v180);
                v64 = v14->right;
                if ( v64 >= v14->left )
                {
                  v65 = v14->bottom;
                  v66 = v14->top;
                  if ( v65 >= v66 )
                  {
                    v67 = v64 - v14->left;
                    v68 = v67 + v65 - v66;
                    if ( v68 >= v67 && v68 < 0x3FFFFFF5 )
                    {
                      v69 = (struct _STRDDA *)PALLOCMEM2(4 * v68 + 40);
                      v130 = (struct _SURFOBJ *)v69;
                      if ( v69 )
                      {
                        vInitStrDDA(v69, &v181, v14, (struct _RECTL *)v13);
                        v70 = v130;
                        v165 = *(struct _RECTL *)&v130->dhsurf;
                        v71 = v122;
                        if ( v122 )
                        {
                          if ( (BYTE4(v122->dhsurf) & 1) != 0 )
                            v71 = 0LL;
                          v122 = v71;
                        }
                        v174 = (&apfnWrite)[*(unsigned int *)(v41 + 96)];
                        if ( v116 )
                          HIDWORD(v130->dhpdev) = (v146 != 1) - 1;
                        pso = (SURFOBJ *)*(&apfnRead + 3 * *(unsigned int *)(v43 + 96) + v112 - 1);
                        hsurf = (HSURF)pso;
                        v72 = v165.right - v165.left;
                        if ( v14->right - v14->left > v13->m128i_i32[2] - v13->m128i_i32[0] )
                        {
                          if ( v72 >= 0x15555553 )
                            goto LABEL_216;
                          v73 = v165.right - v165.left;
                        }
                        else
                        {
                          if ( v72 + 3 < v72 )
                            goto LABEL_216;
                          v73 = (v72 + 3) >> 1;
                          if ( v73 >= 0x15555553 )
                            goto LABEL_216;
                        }
                        v74 = 12 * (v73 + 2);
                        if ( v72 > 0x5F5E100 || (unsigned int)v74 > 0x2710000 )
                          goto LABEL_216;
                        v75 = (struct _STRRUN *)AllocFreeTmpBuffer(v74);
                        v150 = v75;
                        if ( !v75 )
                        {
                          v70 = v130;
LABEL_216:
                          Win32FreePool(v70);
                          continue;
                        }
                        v114 = v181.top;
                        v143 = *(_QWORD *)(v43 + 80) + *(_DWORD *)(v43 + 88) * v181.top;
                        if ( v139 )
                        {
                          v158 = v181.left + *(_DWORD *)v149 - v14->left;
                          v144 = *(_QWORD *)(v153 + 80)
                               + *(_DWORD *)(v153 + 88) * (v181.top + *((_DWORD *)v149 + 1) - v14->top);
                        }
                        else
                        {
                          v144 = 0LL;
                        }
                        if ( v116 )
                        {
                          v85 = -1;
                          if ( v146 != 1 )
                            v85 = 0;
                          vInitBuffer(v75, &v165, v85);
                          v157 = v86;
                        }
                        *(_DWORD *)v75 = HIDWORD(v130->dhsurf);
                        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v167);
                        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v196);
                        v76 = 0;
                        v77 = v135;
                        if ( v135 && v167[0] )
                        {
                          RGNOBJ::vSet((RGNOBJ *)v167, v151);
                          XCLIPOBJ::vSetup((XCLIPOBJ *)v196, v167[0], (struct ERECTL *)v151, 1);
                          v76 = 1;
                          v77 = v135;
                        }
                        LODWORD(v151) = v76;
                        if ( !v77 || v167[0] )
                        {
                          v78 = v114;
                          for ( j = 0; ; ++j )
                          {
                            v125 = j;
                            v126 = v78;
                            if ( v78 >= v181.bottom )
                              break;
                            v80 = v130;
                            v81 = *((_DWORD *)v130->hdev + j);
                            v82 = v150;
                            *((_DWORD *)v150 + 1) = v81;
                            if ( v81 )
                            {
                              v83 = (unsigned __int64)v196 & -(__int64)((_DWORD)v151 != 0);
                              v84 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _STRRUN *, __int64, __int64, struct _SURFOBJ *, LONG, LONG, int))pso)(
                                      v80,
                                      v82,
                                      v143,
                                      v144,
                                      v122,
                                      v181.left,
                                      v181.right,
                                      v158);
                              ((void (__fastcall *)(struct _STRRUN *, __int64, __int64, unsigned __int64))v174)(
                                v150,
                                v84,
                                v41,
                                v83);
                              v43 = v123;
                              v78 = v114;
                              if ( v116 )
                              {
                                vInitBuffer(v150, &v165, v157);
                                v78 = v114;
                              }
                              j = v125;
                            }
                            else if ( v116 )
                            {
                              ((void (__fastcall *)(struct _SURFOBJ *, struct _STRRUN *, __int64, _QWORD, struct _SURFOBJ *, LONG, LONG, _DWORD))pso)(
                                v80,
                                v82,
                                v143,
                                0LL,
                                v122,
                                v181.left,
                                v181.right,
                                0);
                              j = v125;
                              v78 = v114;
                            }
                            v143 += *(int *)(v43 + 88);
                            *(_DWORD *)v150 += *((_DWORD *)v150 + 1);
                            if ( v144 )
                              v144 += *(int *)(v153 + 88);
                            v114 = ++v78;
                          }
                        }
                        FreeTmpBuffer(v150);
                        Win32FreePool(v130);
                        ERECTL::operator+=(&v183, &v165);
                        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v167);
                      }
                    }
                  }
                }
              }
            }
            v61 = v135;
            if ( !v115 )
            {
              AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v175);
              v53 = v183.bottom;
              v51 = v183.right;
              v52 = v183.top;
              v50 = v183.left;
              goto LABEL_62;
            }
LABEL_213:
            v115 = XCLIPOBJ::bEnum(v61, 0x144u, v60, 0LL);
          }
        }
        *(_DWORD *)v59 = 1;
        v62 = *(__m128i *)((char *)v61 + 4);
      }
      else
      {
        *(_DWORD *)v59 = 1;
        v62 = *v13;
      }
      v115 = 0;
      *(__m128i *)(v59 + 4) = v62;
      goto LABEL_87;
    }
LABEL_201:
    SURFMEM::~SURFMEM((SURFMEM *)&v132);
LABEL_202:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v131);
    SURFMEM::~SURFMEM((SURFMEM *)&v127);
    goto LABEL_66;
  }
  if ( v135 && *((_BYTE *)v135 + 20) == 3 )
  {
    *(_QWORD *)&v176.left = 0LL;
    *(_QWORD *)&v176.right = 0LL;
    *(_QWORD *)&v180.right = 0LL;
    *(_QWORD *)&v180.left = 0LL;
    v57 = v136;
    XCLIPOBJ::cEnumStart(v136, 0, 0, 4u, 0);
    do
    {
      v58 = XCLIPOBJ::bEnum(v57, 0x14u, &v193, 0LL);
      v117 = v58;
      if ( v193 )
      {
        StretchDIBDirect(
          *(char **)(v41 + 80),
          *(_DWORD *)(v41 + 88),
          *(_DWORD *)(v41 + 56),
          *(_DWORD *)(v41 + 60),
          (struct _RECTL *)v13,
          *(char **)(v43 + 80),
          *(_DWORD *)(v43 + 88),
          *(_DWORD *)(v43 + 56),
          *(_DWORD *)(v43 + 60),
          v14,
          &v176,
          &v194,
          *(_DWORD *)(v41 + 96));
        ERECTL::operator+=(&v180, &v176);
        v58 = v117;
      }
    }
    while ( v58 );
    v20 = v154;
  }
  else
  {
    v49 = (struct _RECTL *)v13;
    if ( v135 && *((_BYTE *)v135 + 20) == 1 )
      v49 = (struct _RECTL *)((char *)v135 + 4);
    StretchDIBDirect(
      *(char **)(v41 + 80),
      *(_DWORD *)(v41 + 88),
      *(_DWORD *)(v41 + 56),
      *(_DWORD *)(v41 + 60),
      (struct _RECTL *)v13,
      *(char **)(v43 + 80),
      *(_DWORD *)(v43 + 88),
      *(_DWORD *)(v43 + 56),
      *(_DWORD *)(v43 + 60),
      v14,
      &v180,
      v49,
      v47);
  }
  v50 = v180.left;
  v183 = v180;
  v51 = v180.right;
  v52 = v180.top;
  v53 = v180.bottom;
LABEL_62:
  v54 = v140;
  if ( v41 == v140 )
    goto LABEL_63;
  v183.left = v124 + v50;
  v183.top = HIDWORD(v124) + v52;
  v183.right = v124 + v51;
  v183.bottom = HIDWORD(v124) + v53;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v148);
  if ( !v148[0] )
  {
LABEL_200:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v148);
    goto LABEL_201;
  }
  v109 = v136;
  if ( v136 )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v166);
    if ( v166[0] )
    {
      RGNOBJ::vSet((RGNOBJ *)v166, &v183);
      v110 = RGNOBJ::bMerge((RGNOBJ *)v148, (struct RGNOBJ *)v166, (XCLIPOBJ *)((char *)v109 + 56), BYTE1(gafjRgnOp));
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v166);
      if ( v110 )
      {
        v54 = v140;
        goto LABEL_223;
      }
    }
    else
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v166);
    }
    goto LABEL_200;
  }
  RGNOBJ::vSet((RGNOBJ *)v148, &v183);
LABEL_223:
  v191 = *(struct _RECTL *)((char *)v148[0] + 88);
  if ( v109 && !bIntersect(&v191, (const struct _RECTL *)((char *)v109 + 4), &v191)
    || (ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v197, v148[0], (struct ERECTL *)&v191, 1), ERECTL::bEmpty((ERECTL *)v198)) )
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v148);
LABEL_63:
    SURFMEM::~SURFMEM((SURFMEM *)&v132);
LABEL_64:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v131);
    SURFMEM::~SURFMEM((SURFMEM *)&v127);
    goto LABEL_65;
  }
  v182.left += v124;
  v182.top += HIDWORD(v124);
  v182.right += v124;
  v182.bottom += HIDWORD(v124);
  v124 = 0LL;
  if ( (*(_DWORD *)(v54 + 112) & 0x400) != 0 )
    v111 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v20 + 355);
  else
    v111 = EngCopyBits;
  if ( v127 )
    v17 = v127 + 24;
  ((void (__fastcall *)(__int64, __int64, _BYTE *, unsigned __int64, struct _RECTL *, __int64 *))v111)(
    v54 + 24,
    v17,
    v197,
    v137 & -(__int64)(v156 != 0),
    &v182,
    &v124);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v148);
  SURFMEM::~SURFMEM((SURFMEM *)&v132);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v131);
  SURFMEM::~SURFMEM((SURFMEM *)&v127);
  SURFMEM::~SURFMEM((SURFMEM *)&v159);
  return 1LL;
}
