/*
 * XREFs of ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C02889D0
 * Callers:
 *     EngStretchBlt @ 0x1C005D7E0 (EngStretchBlt.c)
 * Callees:
 *     EngHTBlt @ 0x1C0036378 (EngHTBlt.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C005D29C (-StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EE7C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00F5428 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F5BF8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00FD2A4 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ?vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z @ 0x1C01101C4 (-vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0123680 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C016486C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C01648D4 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C01648FC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C029B498 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall EngStretchBltOld(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        RECTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11,
        int *a12)
{
  struct _RECTL *v14; // r15
  __int64 v15; // rbx
  __int64 v16; // r13
  struct tagCOLORADJUSTMENT *v17; // rsi
  int v18; // edx
  int v19; // eax
  SURFOBJ *v20; // rdi
  __int64 v21; // rbx
  int v22; // r14d
  SURFOBJ *v23; // rcx
  int v24; // eax
  SURFOBJ *v25; // r10
  __int64 v26; // r11
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // r11d
  LONG bottom; // eax
  LONG top; // r10d
  LONG v32; // r8d
  LONG right; // eax
  LONG left; // r9d
  LONG v35; // edx
  BOOL v36; // eax
  int v37; // ecx
  struct _SURFOBJ *v38; // r9
  LONG v39; // ecx
  LONG v40; // eax
  struct tagCOLORADJUSTMENT *v41; // r12
  XCLIPOBJ *v42; // rax
  LONG v43; // ecx
  int v44; // eax
  LONG v45; // r8d
  LONG v46; // edx
  LONG v47; // edx
  SURFOBJ *v48; // rax
  int v49; // eax
  unsigned int (__fastcall *pvBits)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // rax
  int v51; // r12d
  int v52; // ecx
  int v53; // eax
  struct _RECTL *v54; // rcx
  int v55; // eax
  __int64 v56; // r12
  BOOL (__stdcall *v57)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  struct tagCOLORADJUSTMENT *v58; // rcx
  unsigned __int64 v59; // rbx
  int v60; // eax
  unsigned __int64 v61; // r9
  __int64 v62; // r8
  int v63; // eax
  int v64; // ecx
  __int64 v65; // rcx
  int v66; // r8d
  LONG v67; // r11d
  int v68; // r9d
  struct _RECTL *v69; // rbx
  int v70; // ecx
  int v71; // edx
  unsigned int v72; // edx
  int v73; // ecx
  XCLIPOBJ *v74; // rdi
  unsigned int v75; // eax
  struct _RECTL *v76; // rcx
  LONG v77; // eax
  LONG v78; // ecx
  LONG v79; // edx
  LONG v80; // r8d
  unsigned int v81; // ecx
  void *v82; // r15
  struct _RECTL *v83; // r9
  _DWORD *v84; // rbx
  unsigned __int64 v85; // rcx
  unsigned int v86; // r8d
  unsigned int v87; // eax
  __int64 v88; // rcx
  HSURF v89; // rbx
  struct _SURFOBJ *v90; // r10
  __int64 v91; // r11
  unsigned int v92; // r8d
  int v93; // r8d
  LONG v94; // r8d
  int i; // r9d
  int v96; // edx
  __int64 v97; // rax
  __int64 v98; // rbx
  XCLIPOBJ *v99; // r15
  BOOL (__stdcall *v100)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  unsigned int v102; // [rsp+70h] [rbp-3C8h]
  LONG v103; // [rsp+70h] [rbp-3C8h]
  int v104; // [rsp+74h] [rbp-3C4h]
  int v105; // [rsp+74h] [rbp-3C4h]
  unsigned int v106; // [rsp+78h] [rbp-3C0h]
  unsigned int v107; // [rsp+78h] [rbp-3C0h]
  int v108; // [rsp+78h] [rbp-3C0h]
  unsigned int v109; // [rsp+78h] [rbp-3C0h]
  int v110; // [rsp+7Ch] [rbp-3BCh]
  struct _SURFOBJ *v111; // [rsp+80h] [rbp-3B8h]
  struct _SURFOBJ *v112; // [rsp+80h] [rbp-3B8h]
  int v113; // [rsp+88h] [rbp-3B0h]
  unsigned __int64 v114; // [rsp+88h] [rbp-3B0h]
  struct tagCOLORADJUSTMENT *v115; // [rsp+90h] [rbp-3A8h] BYREF
  char v116; // [rsp+98h] [rbp-3A0h]
  int v117; // [rsp+9Ch] [rbp-39Ch]
  __int64 v118; // [rsp+A0h] [rbp-398h] BYREF
  __int64 v119; // [rsp+A8h] [rbp-390h] BYREF
  char v120; // [rsp+B0h] [rbp-388h]
  int v121; // [rsp+B4h] [rbp-384h]
  struct REGION *v122[2]; // [rsp+B8h] [rbp-380h] BYREF
  __int64 v123; // [rsp+C8h] [rbp-370h]
  unsigned __int64 v124; // [rsp+D0h] [rbp-368h]
  XCLIPOBJ *v125; // [rsp+D8h] [rbp-360h]
  unsigned __int64 v126; // [rsp+E0h] [rbp-358h]
  struct _RECTL *v127; // [rsp+E8h] [rbp-350h]
  SURFOBJ *pso; // [rsp+F0h] [rbp-348h]
  struct tagCOLORADJUSTMENT *v129; // [rsp+F8h] [rbp-340h]
  RECTL *v130; // [rsp+100h] [rbp-338h]
  BOOL v131; // [rsp+108h] [rbp-330h]
  struct _SURFOBJ *v132; // [rsp+110h] [rbp-328h]
  __int64 v133; // [rsp+118h] [rbp-320h]
  struct REGION *v134[2]; // [rsp+120h] [rbp-318h] BYREF
  _QWORD *v135[2]; // [rsp+130h] [rbp-308h] BYREF
  HSURF hsurf; // [rsp+140h] [rbp-2F8h]
  __int64 v137; // [rsp+148h] [rbp-2F0h]
  SURFOBJ *v138; // [rsp+150h] [rbp-2E8h]
  struct _RECTL v139; // [rsp+158h] [rbp-2E0h] BYREF
  int v140; // [rsp+168h] [rbp-2D0h]
  void (**v141)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+170h] [rbp-2C8h]
  __int64 v142; // [rsp+178h] [rbp-2C0h] BYREF
  char v143; // [rsp+180h] [rbp-2B8h]
  int v144; // [rsp+184h] [rbp-2B4h]
  struct _CLIPOBJ *v145; // [rsp+188h] [rbp-2B0h]
  void *v146; // [rsp+190h] [rbp-2A8h]
  SURFOBJ *v147; // [rsp+198h] [rbp-2A0h]
  SIZEL sizl; // [rsp+1A0h] [rbp-298h]
  __int64 v149; // [rsp+1A8h] [rbp-290h] BYREF
  int v150; // [rsp+1B0h] [rbp-288h]
  int v151; // [rsp+1B4h] [rbp-284h]
  _DWORD v152[4]; // [rsp+1B8h] [rbp-280h] BYREF
  __int64 v153; // [rsp+1C8h] [rbp-270h]
  int v154; // [rsp+1D0h] [rbp-268h]
  int v155; // [rsp+1D4h] [rbp-264h]
  _DWORD v156[4]; // [rsp+1D8h] [rbp-260h] BYREF
  __int64 v157; // [rsp+1E8h] [rbp-250h]
  int v158; // [rsp+1F0h] [rbp-248h]
  int v159; // [rsp+1F4h] [rbp-244h]
  __int64 v160; // [rsp+1F8h] [rbp-240h]
  __int64 v161; // [rsp+200h] [rbp-238h] BYREF
  __int64 v162; // [rsp+208h] [rbp-230h] BYREF
  __int64 v163; // [rsp+210h] [rbp-228h] BYREF
  struct _RECTL v164; // [rsp+218h] [rbp-220h] BYREF
  struct _RECTL v165; // [rsp+228h] [rbp-210h] BYREF
  struct _RECTL v166; // [rsp+238h] [rbp-200h] BYREF
  __m128i v167; // [rsp+248h] [rbp-1F0h] BYREF
  __int64 v168; // [rsp+258h] [rbp-1E0h] BYREF
  __int64 v169; // [rsp+260h] [rbp-1D8h]
  __int64 v170; // [rsp+268h] [rbp-1D0h] BYREF
  unsigned __int64 v171; // [rsp+270h] [rbp-1C8h]
  struct _RECTL v172; // [rsp+278h] [rbp-1C0h] BYREF
  int v173; // [rsp+288h] [rbp-1B0h]
  struct _RECTL v174; // [rsp+290h] [rbp-1A8h] BYREF
  struct _RECTL v175; // [rsp+2A0h] [rbp-198h] BYREF
  _BYTE v176[160]; // [rsp+2B0h] [rbp-188h] BYREF
  _BYTE v177[4]; // [rsp+350h] [rbp-E8h] BYREF
  char v178[156]; // [rsp+354h] [rbp-E4h] BYREF

  v125 = (XCLIPOBJ *)a4;
  v132 = a3;
  v111 = a2;
  v124 = (unsigned __int64)a1;
  v126 = (unsigned __int64)a5;
  v145 = a4;
  v129 = a6;
  v130 = a7;
  v127 = a8;
  v14 = a9;
  *(_QWORD *)&v139.left = a9;
  v135[0] = a10;
  v102 = a11;
  v141 = (void (**)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *))a12;
  if ( a11 - 1 > 3 )
    return 0LL;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v133 = v15;
  v16 = SURFOBJ_TO_SURFACE(a2);
  v137 = SURFOBJ_TO_SURFACE(a3);
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
  v20 = *(SURFOBJ **)(v15 + 48);
  v138 = v20;
  v147 = v20;
  v21 = *(_QWORD *)(v16 + 48);
  v160 = v21;
  v142 = 0LL;
  v143 = 0;
  v144 = 0;
  v175 = *a9;
  v22 = 1;
  v23 = v111;
  if ( v111->iType == 1 && v21 && (*(_DWORD *)(v21 + 40) & 0x20000) != 0 )
  {
    if ( !(unsigned int)MulCopyDeviceToDIB(v111, (struct SURFMEM *)&v142, &v175) )
    {
LABEL_210:
      SURFMEM::~SURFMEM((SURFMEM *)&v142);
      return (unsigned int)v17;
    }
    if ( !v142 )
    {
LABEL_17:
      LODWORD(v17) = v22;
      goto LABEL_210;
    }
    v14 = &v175;
    *(_QWORD *)&v139.left = &v175;
    v111 = (struct _SURFOBJ *)(v142 + 24);
    v16 = SURFOBJ_TO_SURFACE(v142 + 24);
    v21 = *(_QWORD *)(v16 + 48);
    v160 = v21;
    v23 = v111;
  }
  if ( !v126 || (v24 = 1, (*(_DWORD *)(v126 + 4) & 8) == 0) )
    v24 = 0;
  v113 = v24;
  v140 = v24;
  if ( v24 )
  {
    if ( v23->iType )
      goto LABEL_210;
    v25 = (SURFOBJ *)v124;
    if ( *(_WORD *)(v124 + 76) != 1 )
      goto LABEL_210;
    v26 = (__int64)v132;
    if ( v132 )
      goto LABEL_210;
  }
  else
  {
    v25 = (SURFOBJ *)v124;
    v26 = (__int64)v132;
  }
  if ( a11 != 4 )
    goto LABEL_33;
  if ( v24 )
    goto LABEL_210;
  v27 = EngHTBlt(
          v25,
          v23,
          v26,
          (CLIPOBJ *)v125,
          (struct XLATE *)v126,
          v129,
          v130,
          (XLATEOBJ *)a8,
          (XLATEOBJ *)v14,
          v135[0],
          0,
          0LL);
  if ( v27 == -1 )
    goto LABEL_210;
  if ( v27 )
  {
    if ( v27 == 1 )
      goto LABEL_17;
LABEL_33:
    v28 = a11;
    goto LABEL_34;
  }
  v28 = 3;
  v102 = 3;
LABEL_34:
  v29 = 0;
  v104 = 0;
  bottom = a8->bottom;
  top = a8->top;
  v32 = bottom;
  if ( bottom < top )
  {
    v32 = a8->top;
    a8->top = bottom;
    a8->bottom = top;
    v29 = 2;
    v104 = 2;
    top = bottom;
  }
  right = a8->right;
  left = a8->left;
  v35 = right;
  if ( right < a8->left )
  {
    v35 = a8->left;
    a8->left = right;
    a8->right = left;
    v29 |= 1u;
    v104 = v29;
    left = right;
  }
  if ( v28 >= 3 || v137 )
  {
    v36 = 0;
    v110 = 0;
  }
  else
  {
    v110 = 1;
    v36 = 1;
    if ( v35 - left >= v14->right - v14->left )
    {
      v36 = v32 - top < v14->bottom - v14->top;
      v110 = v36;
    }
    v28 = v102;
  }
  v131 = v36;
  if ( !v36 )
  {
    if ( v28 < 3 )
      v28 = 3;
    v102 = v28;
  }
  v37 = *(_DWORD *)(v133 + 112);
  if ( (v37 & 0x40000) == 0 )
  {
    if ( v126 && (*(_DWORD *)(v126 + 4) & 1) == 0 )
    {
      v38 = v111;
    }
    else
    {
      v38 = v111;
      if ( !v111->iType )
        goto LABEL_51;
    }
    if ( *(_WORD *)(v133 + 100) )
    {
      if ( (v37 & 2) != 0 && !v29 && !v132 )
      {
        v43 = v14->left;
        if ( v14->left >= 0 )
        {
          v44 = v14->top;
          if ( v44 >= 0 )
          {
            v45 = v14->right;
            if ( v45 <= v38->sizlBitmap.cx )
            {
              v46 = v14->bottom;
              if ( v46 <= v38->sizlBitmap.cy )
              {
                v170 = 0LL;
                v171 = 0LL;
                LODWORD(v123) = v45 - v43;
                sizl.cx = v45 - v43;
                v47 = v46 - v44;
                v106 = v47;
                sizl.cy = v47;
                if ( v45 - v43 <= a8->right - a8->left && v47 <= a8->bottom - a8->top )
                {
                  hsurf = (HSURF)EngCreateBitmap(sizl, 0, *(_DWORD *)(v124 + 72), 0, 0LL);
                  v48 = EngLockSurface(hsurf);
                  pso = v48;
                  if ( v48 )
                  {
                    v48->iUniq = 0;
                    v171 = __PAIR64__(v106, v123);
                    if ( (*(_DWORD *)(v16 + 112) & 0x400) != 0 )
                      v49 = (*(__int64 (__fastcall **)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int64 *, struct _RECTL *))(v21 + 2840))(
                              v48,
                              v111,
                              0LL,
                              v126,
                              &v170,
                              v14);
                    else
                      v49 = ((__int64 (__fastcall *)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int64 *, struct _RECTL *))EngCopyBits)(
                              v48,
                              v111,
                              0LL,
                              v126,
                              &v170,
                              v14);
                    if ( !v49
                      || (pvBits = (unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v20[35].pvBits) == 0LL
                      || !pvBits(v124, pso, 0LL, v125, 0LL, v129, v130, a8, &v170, v135[0], v102) )
                    {
                      v22 = 0;
                    }
                    EngUnlockSurface(pso);
                    EngDeleteSurface(hsurf);
                    goto LABEL_17;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_51:
  v115 = 0LL;
  v116 = 0;
  v117 = 0;
  v167 = 0uLL;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v176);
  v39 = *(_DWORD *)(v16 + 60);
  v40 = *(_DWORD *)(v16 + 56);
  *(_QWORD *)&v164.left = 0LL;
  v164.right = v40;
  v164.bottom = v39;
  *(_QWORD *)&v166.left = 0LL;
  *(_QWORD *)&v166.right = 0LL;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
  if ( *(_WORD *)(v133 + 100) || *(_QWORD *)(v133 + 32) == *(_QWORD *)(v16 + 32) )
  {
    v167 = *(__m128i *)a8;
    v51 = _mm_cvtsi128_si32(v167);
    v165.left = v51 - 1;
    v165.top = v167.m128i_i32[1] - 1;
    v107 = _mm_cvtsi128_si32(_mm_srli_si128(v167, 8));
    v165.right = v107 + 1;
    v165.bottom = _mm_srli_si128(v167, 8).m128i_i32[1] + 1;
    v52 = *(_DWORD *)(v133 + 60);
    v53 = *(_DWORD *)(v133 + 56);
    v149 = 0LL;
    v150 = v53;
    v151 = v52;
    ERECTL::operator*=(&v165.left, (int *)&v149);
    if ( ERECTL::bEmpty((ERECTL *)&v165) )
    {
LABEL_77:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
      SURFMEM::~SURFMEM((SURFMEM *)&v115);
      goto LABEL_17;
    }
    if ( *(_WORD *)(v133 + 100)
      || v165.left <= v14->right && v165.right >= v14->left && v165.top <= v14->bottom && v165.bottom >= v14->top )
    {
      v167.m128i_i32[0] = v51 - v165.left;
      v167.m128i_i32[1] -= v165.top;
      v167.m128i_i32[2] = v107 - v165.left;
      v167.m128i_i32[3] -= v165.top;
      v152[3] = 0;
      v155 = 0;
      v152[1] = v165.right - v165.left + 1;
      v152[2] = v165.bottom - v165.top + 1;
      v153 = 0LL;
      if ( v113 )
        v55 = *(_DWORD *)(v16 + 96);
      else
        v55 = *(_DWORD *)(v133 + 96);
      v152[0] = v55;
      v154 = *(_DWORD *)(v133 + 112) & 0x40000;
      SURFMEM::bCreateDIB((SURFMEM *)&v115, (struct _DEVBITMAPINFO *)v152, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v115 )
        goto LABEL_209;
      v118 = *(_QWORD *)&v165.left;
      if ( !v122[0] )
        goto LABEL_209;
      *(_QWORD *)&v165.left = 0LL;
      v165.right -= v118;
      v165.bottom -= HIDWORD(v118);
      RGNOBJ::vSet((RGNOBJ *)v122, &v165);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v176, v122[0], (struct ERECTL *)&v165, 1);
      v56 = v133;
      v161 = *(_QWORD *)(v133 + 48);
      PDEVOBJ::vSync((PDEVOBJ *)&v161, (struct _SURFOBJ *)(v133 + 24), 0LL, 0);
      if ( v137 )
      {
        if ( (*(_DWORD *)(v56 + 112) & 0x400) != 0 )
          v57 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))&v20[35].cjBits;
        else
          v57 = EngCopyBits;
        v58 = 0LL;
        if ( v115 )
          v58 = v115 + 1;
        ((void (__fastcall *)(struct tagCOLORADJUSTMENT *, __int64, _QWORD, XLATEOBJ *const, struct _RECTL *, __int64 *))v57)(
          v58,
          v56 + 24,
          0LL,
          xloIdent,
          &v165,
          &v118);
      }
      v41 = v115;
      v129 = v115;
      v54 = (struct _RECTL *)&v167;
      v42 = (XCLIPOBJ *)v176;
    }
    else
    {
      v41 = (struct tagCOLORADJUSTMENT *)v133;
      v129 = (struct tagCOLORADJUSTMENT *)v133;
      v54 = v127;
      v42 = v125;
    }
    v127 = v54;
  }
  else
  {
    v41 = (struct tagCOLORADJUSTMENT *)v133;
    v129 = (struct tagCOLORADJUSTMENT *)v133;
    v42 = v125;
  }
  v124 = (unsigned __int64)v42;
  v162 = *(_QWORD *)(v16 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v162, v111, 0LL, 0);
  ERECTL::operator*=(&v164.left, &v14->left);
  if ( ERECTL::bEmpty((ERECTL *)&v164) )
    goto LABEL_77;
  v119 = 0LL;
  v120 = 0;
  v121 = 0;
  v168 = 0LL;
  v169 = 0LL;
  if ( v104 || *(_WORD *)(v16 + 100) || (unsigned int)(*(_DWORD *)(v16 + 96) - 7) <= 1 )
  {
    v156[3] = 0;
    v159 = 0;
    v156[1] = v164.right - v164.left;
    v156[2] = v164.bottom - v164.top;
    v157 = 0LL;
    if ( v113 )
      v60 = *(_DWORD *)(v16 + 96);
    else
      v60 = *(_DWORD *)&v41[4].caSize;
    v156[0] = v60;
    v158 = *(_DWORD *)(v16 + 112) & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v119, (struct _DEVBITMAPINFO *)v156, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v119 )
      goto LABEL_208;
    LODWORD(v169) = v164.right - v164.left;
    HIDWORD(v169) = v164.bottom - v164.top;
    v61 = 0LL;
    if ( !v113 )
      v61 = v126;
    if ( (*(_DWORD *)(v16 + 112) & 0x400) != 0 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD, unsigned __int64, __int64 *, struct _RECTL *))(v21 + 2840))(
        v119 + 24,
        v16 + 24,
        0LL,
        v61,
        &v168,
        &v164);
    else
      ((void (__fastcall *)(__int64, __int64, _QWORD, unsigned __int64, __int64 *, struct _RECTL *))EngCopyBits)(
        v119 + 24,
        v16 + 24,
        0LL,
        v61,
        &v168,
        &v164);
    LODWORD(v168) = v14->left - v164.left;
    HIDWORD(v168) = v14->top - v164.top;
    LODWORD(v169) = v14->right - v164.left;
    HIDWORD(v169) = v14->bottom - v164.top;
    v62 = v119;
    v16 = v119;
    v130 = (RECTL *)v119;
    v14 = (struct _RECTL *)&v168;
    *(_QWORD *)&v139.left = &v168;
    v114 = 0LL;
    v164.right -= v164.left;
    v63 = v164.bottom - v164.top;
    v164.bottom -= v164.top;
    *(_QWORD *)&v164.left = 0LL;
    if ( (v104 & 2) != 0 )
    {
      v64 = *(_DWORD *)(v119 + 88);
      if ( v64 <= 0 )
        *(_QWORD *)(v119 + 80) = *(_QWORD *)(v119 + 72);
      else
        *(_QWORD *)(v119 + 80) = *(_QWORD *)(v119 + 72) + v64 * (v63 - 1);
      *(_DWORD *)(v119 + 88) = -*(_DWORD *)(v119 + 88);
      v62 = v119;
    }
    if ( (v104 & 1) != 0 )
    {
      v65 = *(unsigned int *)(v62 + 96);
      if ( (unsigned int)(v65 - 1) > 5 )
      {
LABEL_208:
        SURFMEM::~SURFMEM((SURFMEM *)&v119);
LABEL_209:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
        SURFMEM::~SURFMEM((SURFMEM *)&v115);
        goto LABEL_210;
      }
      ((void (__fastcall *)(__int64))(&apfnMirror)[v65])(v62);
    }
  }
  else
  {
    v130 = (RECTL *)v16;
    v59 = 0LL;
    if ( !v113 )
      v59 = v126;
    v114 = v59;
  }
  v163 = *(_QWORD *)&v41[2].caSize;
  PDEVOBJ::vSync((PDEVOBJ *)&v163, (struct _SURFOBJ *)&v41[1], 0LL, 0);
  LODWORD(v123) = v14->right;
  v108 = v14->left;
  v66 = v123 - v14->left;
  if ( v66 >= 128000000 )
    goto LABEL_208;
  v67 = v14->top;
  v68 = v14->bottom - v67;
  if ( v68 >= 128000000 )
    goto LABEL_208;
  v69 = v127;
  v70 = v127->right - v127->left;
  if ( v70 >= 128000000 )
    goto LABEL_208;
  v71 = v127->bottom - v127->top;
  if ( v71 >= 128000000 || v70 <= -128000000 || v71 <= -128000000 )
    goto LABEL_208;
  if ( v102 != 3
    || v132
    || v114 && (*(_DWORD *)(v114 + 4) & 1) == 0
    || (v72 = *(_DWORD *)&v41[4].caSize, v73 = *(_DWORD *)(v16 + 96), v72 != v73)
    || ((v73 - 3) & 0xFFFFFFFC) != 0
    || v73 == 5 )
  {
    if ( (int)v123 < v108 )
      goto LABEL_208;
    if ( v14->bottom < v67 )
      goto LABEL_208;
    v81 = v68 + v66;
    if ( v68 + v66 < (unsigned int)v66 )
      goto LABEL_208;
    if ( v81 >= 0x3FFFFFF5 )
      goto LABEL_208;
    v82 = PALLOCMEM2(4 * v81 + 40, 1752462151LL, 0);
    v146 = v82;
    if ( !v82 )
      goto LABEL_208;
    *(_DWORD *)v141 = 1;
    v83 = v69;
    v84 = *(_DWORD **)&v139.left;
    vInitStrDDA((struct _STRDDA *)v82, &v164, *(struct _RECTL **)&v139.left, v83);
    v166 = *(struct _RECTL *)v82;
    v85 = v114;
    if ( v114 )
    {
      if ( (*(_BYTE *)(v114 + 4) & 1) != 0 )
        v85 = 0LL;
      v114 = v85;
    }
    if ( v124 )
      v124 &= -(__int64)(*(_BYTE *)(v124 + 20) != 0);
    v141 = (void (**)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *))(&apfnWrite)[*(unsigned int *)&v41[4].caSize];
    if ( v110 )
      *((_DWORD *)v82 + 5) = (v102 != 1) - 1;
    pso = (SURFOBJ *)*(&apfnRead + 3 * *(unsigned int *)(v16 + 96) + v102 - 1);
    v138 = pso;
    v86 = v166.right - v166.left;
    if ( v84[2] - *v84 <= v127->right - v127->left )
    {
      if ( v86 + 3 < v86 )
        goto LABEL_207;
      v87 = (v86 + 3) >> 1;
      if ( v87 >= 0x15555553 )
        goto LABEL_207;
    }
    else
    {
      if ( v86 >= 0x15555553 )
        goto LABEL_207;
      v87 = v166.right - v166.left;
    }
    v88 = 12 * (v87 + 2);
    if ( v86 <= 0x5F5E100 && (unsigned int)v88 <= 0x2710000 )
    {
      v89 = (HSURF)AllocFreeTmpBuffer(v88);
      hsurf = v89;
      if ( v89 )
      {
        v90 = (struct _SURFOBJ *)(*(_QWORD *)(v16 + 80) + *(_DWORD *)(v16 + 88) * v164.top);
        v112 = v90;
        v127 = 0LL;
        if ( v132 )
        {
          LODWORD(v127) = v164.left + *(_DWORD *)v135[0] - **(_DWORD **)&v139.left;
          v91 = *(_QWORD *)(v137 + 80)
              + *(_DWORD *)(v137 + 88)
              * (v164.top + *((_DWORD *)v135[0] + 1) - *(_DWORD *)(*(_QWORD *)&v139.left + 4LL));
        }
        else
        {
          v91 = 0LL;
        }
        v123 = v91;
        if ( v110 )
        {
          v92 = -1;
          if ( v102 != 1 )
            v92 = 0;
          vInitBuffer((struct _STRRUN *)v89, &v166, v92);
          v108 = v93;
          v90 = v112;
        }
        *(_DWORD *)v89 = *(_DWORD *)(HSURF)((int)v82 + 4);
        v94 = v164.top;
        for ( i = 0; ; ++i )
        {
          v105 = i;
          v103 = v94;
          if ( v94 >= v164.bottom )
            break;
          v96 = *(_DWORD *)(*((_QWORD *)v82 + 3) + 4LL * i);
          *((_DWORD *)v89 + 1) = v96;
          if ( v96 )
          {
            v97 = ((__int64 (__fastcall *)(void *, HSURF, struct _SURFOBJ *, __int64, unsigned __int64, LONG, LONG, _DWORD))pso)(
                    v82,
                    v89,
                    v90,
                    v91,
                    v114,
                    v164.left,
                    v164.right,
                    (_DWORD)v127);
            ((void (__fastcall *)(HSURF, __int64, struct tagCOLORADJUSTMENT *, unsigned __int64))v141)(
              v89,
              v97,
              v41,
              v124);
            v94 = v103;
            if ( v110 )
            {
              vInitBuffer((struct _STRRUN *)v89, &v166, v108);
              v94 = v103;
            }
            i = v105;
            v90 = v112;
            v91 = v123;
          }
          else if ( v110 )
          {
            ((void (__fastcall *)(void *, HSURF, struct _SURFOBJ *, _QWORD, unsigned __int64, LONG, LONG, _DWORD))pso)(
              v82,
              v89,
              v90,
              0LL,
              v114,
              v164.left,
              v164.right,
              0);
            v91 = v123;
            v90 = v112;
            v94 = v103;
            i = v105;
          }
          v90 = (struct _SURFOBJ *)((char *)v90 + *(int *)(v16 + 88));
          v112 = v90;
          *(_DWORD *)v89 += *((_DWORD *)v89 + 1);
          if ( v91 )
          {
            v91 += *(int *)(v137 + 88);
            v123 = v91;
          }
          ++v94;
        }
        FreeTmpBuffer(v89);
        Win32FreePool(v82);
        v80 = v166.bottom;
        v78 = v166.right;
        v79 = v166.top;
        v77 = v166.left;
        goto LABEL_187;
      }
    }
LABEL_207:
    Win32FreePool(v82);
    goto LABEL_208;
  }
  if ( v124 && *(_BYTE *)(v124 + 20) == 3 )
  {
    *(_QWORD *)&v139.left = 0LL;
    *(_QWORD *)&v139.right = 0LL;
    *(_QWORD *)&v164.right = 0LL;
    *(_QWORD *)&v164.left = 0LL;
    *(_QWORD *)&v172.left = 0LL;
    *(_QWORD *)&v172.right = 0LL;
    v173 = 0;
    v74 = v125;
    XCLIPOBJ::cEnumStart(v125, 0, 0, 4u, 0);
    do
    {
      v75 = XCLIPOBJ::bEnum(v74, 0x14u, (char *)&v172, 0LL);
      v109 = v75;
      if ( v172.left )
      {
        StretchDIBDirect(
          *(char **)&v41[3].caGreenGamma,
          *(_DWORD *)&v41[3].caContrast,
          *(_DWORD *)&v41[2].caGreenGamma,
          *(_DWORD *)&v41[2].caReferenceBlack,
          v69,
          *(char **)(v16 + 80),
          *(_DWORD *)(v16 + 88),
          *(_DWORD *)(v16 + 56),
          *(_DWORD *)(v16 + 60),
          v14,
          &v139,
          (struct _RECTL *)&v172.top,
          *(_DWORD *)&v41[4].caSize);
        ERECTL::operator+=((unsigned int *)&v164, (unsigned int *)&v139);
        v75 = v109;
      }
    }
    while ( v75 );
    v20 = v138;
  }
  else
  {
    v76 = v127;
    if ( v124 && *(_BYTE *)(v124 + 20) == 1 )
      v76 = (struct _RECTL *)(v124 + 4);
    StretchDIBDirect(
      *(char **)&v41[3].caGreenGamma,
      *(_DWORD *)&v41[3].caContrast,
      *(_DWORD *)&v41[2].caGreenGamma,
      *(_DWORD *)&v41[2].caReferenceBlack,
      v127,
      *(char **)(v16 + 80),
      *(_DWORD *)(v16 + 88),
      *(_DWORD *)(v16 + 56),
      *(_DWORD *)(v16 + 60),
      v14,
      &v164,
      v76,
      v72);
  }
  v77 = v164.left;
  v166 = v164;
  v78 = v164.right;
  v79 = v164.top;
  v80 = v164.bottom;
LABEL_187:
  v98 = v133;
  if ( v41 == (struct tagCOLORADJUSTMENT *)v133 )
  {
LABEL_188:
    SURFMEM::~SURFMEM((SURFMEM *)&v119);
    goto LABEL_77;
  }
  v166.left = v118 + v77;
  v166.top = HIDWORD(v118) + v79;
  v166.right = v118 + v78;
  v166.bottom = HIDWORD(v118) + v80;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v134);
  if ( !v134[0] )
    goto LABEL_190;
  v99 = v125;
  if ( v125 )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v135);
    if ( !v135[0]
      || (RGNOBJ::vSet((RGNOBJ *)v135, &v166),
          !RGNOBJ::bMerge((RGNOBJ *)v134, (struct RGNOBJ *)v135, (XCLIPOBJ *)((char *)v99 + 56), BYTE1(gafjRgnOp))) )
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v135);
LABEL_190:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v134);
      goto LABEL_208;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v135);
  }
  else
  {
    RGNOBJ::vSet((RGNOBJ *)v134, &v166);
  }
  v174 = *(struct _RECTL *)((char *)v134[0] + 88);
  if ( v99 && !bIntersect(&v174, (const struct _RECTL *)((char *)v99 + 4), &v174)
    || (ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v177, v134[0], (struct ERECTL *)&v174, 1), ERECTL::bEmpty((ERECTL *)v178)) )
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v134);
    goto LABEL_188;
  }
  v165.left += v118;
  v165.top += HIDWORD(v118);
  v165.right += v118;
  v165.bottom += HIDWORD(v118);
  v118 = 0LL;
  if ( (*(_DWORD *)(v98 + 112) & 0x400) != 0 )
    v100 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))&v20[35].cjBits;
  else
    v100 = EngCopyBits;
  if ( v115 )
    v17 = v115 + 1;
  ((void (__fastcall *)(__int64, struct tagCOLORADJUSTMENT *, _BYTE *, unsigned __int64, struct _RECTL *, __int64 *))v100)(
    v98 + 24,
    v17,
    v177,
    v126 & -(__int64)(v140 != 0),
    &v165,
    &v118);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v134);
  SURFMEM::~SURFMEM((SURFMEM *)&v119);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
  SURFMEM::~SURFMEM((SURFMEM *)&v115);
  SURFMEM::~SURFMEM((SURFMEM *)&v142);
  return 1LL;
}
