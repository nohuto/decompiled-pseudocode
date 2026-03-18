/*
 * XREFs of ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C005D8D8
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
 *     ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C00FCF08 (-vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00FD2A4 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ?vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z @ 0x1C01101C4 (-vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0123680 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C01246EC (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C016486C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C01648D4 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C01648FC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C029B498 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall EngStretchBltNew(
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
        unsigned int a11)
{
  struct _RECTL *v13; // r15
  struct _RECTL *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // rsi
  int v18; // edx
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rbx
  int v22; // r14d
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
  struct _SURFOBJ *v37; // rax
  LONG v38; // ecx
  LONG v39; // eax
  __int64 v40; // r13
  XCLIPOBJ *v41; // rax
  __int64 v42; // rbx
  unsigned __int64 v43; // rax
  int v44; // ecx
  int v45; // edx
  unsigned int v46; // edx
  int v47; // ecx
  struct _RECTL *v48; // rcx
  LONG v49; // eax
  LONG v50; // ecx
  LONG v51; // edx
  LONG v52; // r8d
  __int64 v53; // rbx
  int v55; // eax
  XCLIPOBJ *v56; // rdi
  int v57; // eax
  __int64 v58; // rax
  void *v59; // rdx
  XCLIPOBJ *v60; // r10
  struct _RECTL v61; // xmm0
  __int64 i; // rax
  LONG v63; // eax
  LONG v64; // ecx
  LONG v65; // edx
  unsigned int v66; // eax
  unsigned int v67; // ecx
  struct _STRDDA *v68; // rax
  struct _SURFOBJ *v69; // r8
  struct _SURFOBJ *v70; // rcx
  unsigned int v71; // r9d
  unsigned int v72; // eax
  __int64 v73; // rcx
  struct _STRRUN *v74; // r11
  int v75; // ecx
  XCLIPOBJ *v76; // rax
  LONG v77; // r9d
  int j; // r8d
  struct _SURFOBJ *v79; // r10
  int v80; // edx
  struct _STRRUN *v81; // rcx
  unsigned __int64 v82; // rbx
  __int64 v83; // rax
  unsigned int v84; // r8d
  unsigned int v85; // r8d
  int v86; // eax
  unsigned __int64 v87; // r9
  __int64 v88; // r8
  int v89; // eax
  char v90; // dl
  int v91; // ecx
  int v92; // ecx
  LONG v93; // r9d
  int v94; // ecx
  LONG v95; // r8d
  LONG v96; // edx
  LONG v97; // edx
  SURFOBJ *v98; // rax
  int v99; // eax
  unsigned int (__fastcall *v100)(struct _SURFOBJ *, SURFOBJ *, _QWORD, XCLIPOBJ *, _QWORD, struct tagCOLORADJUSTMENT *, RECTL *, struct _RECTL *, __int64 *, _QWORD *, unsigned int); // rax
  int v101; // ecx
  int v102; // eax
  int v103; // eax
  __int64 v104; // r13
  BOOL (__stdcall *v105)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v106; // rcx
  XCLIPOBJ *v107; // r15
  BOOL (__stdcall *v108)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  unsigned int v109; // [rsp+70h] [rbp-4F8h]
  int v110; // [rsp+78h] [rbp-4F0h]
  LONG v111; // [rsp+78h] [rbp-4F0h]
  int v112; // [rsp+7Ch] [rbp-4ECh]
  int v113; // [rsp+80h] [rbp-4E8h]
  int v114; // [rsp+84h] [rbp-4E4h]
  int v115; // [rsp+84h] [rbp-4E4h]
  int v116; // [rsp+84h] [rbp-4E4h]
  int v117; // [rsp+84h] [rbp-4E4h]
  struct _SURFOBJ *v118; // [rsp+88h] [rbp-4E0h]
  struct _SURFOBJ *v119; // [rsp+88h] [rbp-4E0h]
  LONG v120; // [rsp+90h] [rbp-4D8h]
  int v121; // [rsp+90h] [rbp-4D8h]
  __int64 v122; // [rsp+98h] [rbp-4D0h] BYREF
  int v123; // [rsp+A0h] [rbp-4C8h]
  __int64 v124; // [rsp+A8h] [rbp-4C0h] BYREF
  char v125; // [rsp+B0h] [rbp-4B8h]
  int v126; // [rsp+B4h] [rbp-4B4h]
  struct _SURFOBJ *v127; // [rsp+B8h] [rbp-4B0h]
  __int64 v128; // [rsp+C0h] [rbp-4A8h]
  struct REGION *v129[2]; // [rsp+C8h] [rbp-4A0h] BYREF
  __int64 v130; // [rsp+D8h] [rbp-490h] BYREF
  char v131; // [rsp+E0h] [rbp-488h]
  int v132; // [rsp+E4h] [rbp-484h]
  SURFOBJ *pso; // [rsp+E8h] [rbp-480h]
  XCLIPOBJ *v134; // [rsp+F0h] [rbp-478h]
  XCLIPOBJ *v135; // [rsp+F8h] [rbp-470h]
  unsigned __int64 v136; // [rsp+100h] [rbp-468h]
  struct _SURFOBJ *v137; // [rsp+108h] [rbp-460h]
  __int64 v138; // [rsp+110h] [rbp-458h]
  __int64 v139; // [rsp+118h] [rbp-450h]
  struct tagCOLORADJUSTMENT *v140; // [rsp+120h] [rbp-448h]
  RECTL *v141; // [rsp+128h] [rbp-440h]
  __int64 v142; // [rsp+130h] [rbp-438h]
  _QWORD *v143; // [rsp+138h] [rbp-430h]
  struct _STRRUN *v144; // [rsp+140h] [rbp-428h]
  BOOL v145; // [rsp+148h] [rbp-420h]
  unsigned int v146; // [rsp+14Ch] [rbp-41Ch]
  struct REGION *v147[2]; // [rsp+150h] [rbp-418h] BYREF
  __int64 v148; // [rsp+160h] [rbp-408h]
  struct _RECTL *v149; // [rsp+168h] [rbp-400h]
  __int64 v150; // [rsp+170h] [rbp-3F8h]
  __int64 v151; // [rsp+178h] [rbp-3F0h]
  HSURF hsurf; // [rsp+180h] [rbp-3E8h]
  struct _RECTL *v153; // [rsp+188h] [rbp-3E0h]
  int v154; // [rsp+190h] [rbp-3D8h]
  unsigned int v155; // [rsp+194h] [rbp-3D4h]
  _QWORD v156[2]; // [rsp+198h] [rbp-3D0h] BYREF
  __int64 v157; // [rsp+1A8h] [rbp-3C0h] BYREF
  char v158; // [rsp+1B0h] [rbp-3B8h]
  int v159; // [rsp+1B4h] [rbp-3B4h]
  __int64 v160; // [rsp+1B8h] [rbp-3B0h]
  SIZEL sizl; // [rsp+1C0h] [rbp-3A8h]
  struct _SURFOBJ *v162; // [rsp+1C8h] [rbp-3A0h]
  struct _CLIPOBJ *v163; // [rsp+1D0h] [rbp-398h]
  _DWORD *v164; // [rsp+1D8h] [rbp-390h]
  struct _RECTL v165; // [rsp+1E0h] [rbp-388h] BYREF
  struct REGION *v166[2]; // [rsp+1F0h] [rbp-378h] BYREF
  __int64 v167; // [rsp+200h] [rbp-368h] BYREF
  int v168; // [rsp+208h] [rbp-360h]
  int v169; // [rsp+20Ch] [rbp-35Ch]
  _DWORD v170[4]; // [rsp+210h] [rbp-358h] BYREF
  __int64 v171; // [rsp+220h] [rbp-348h]
  int v172; // [rsp+228h] [rbp-340h]
  int v173; // [rsp+22Ch] [rbp-33Ch]
  _DWORD v174[4]; // [rsp+230h] [rbp-338h] BYREF
  __int64 v175; // [rsp+240h] [rbp-328h]
  int v176; // [rsp+248h] [rbp-320h]
  int v177; // [rsp+24Ch] [rbp-31Ch]
  __int64 v178; // [rsp+250h] [rbp-318h]
  __int64 v179; // [rsp+258h] [rbp-310h] BYREF
  __int64 v180; // [rsp+260h] [rbp-308h] BYREF
  __int64 v181; // [rsp+268h] [rbp-300h] BYREF
  struct _RECTL v182; // [rsp+270h] [rbp-2F8h] BYREF
  void (*const near *v183)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+280h] [rbp-2E8h]
  __int64 v184; // [rsp+288h] [rbp-2E0h] BYREF
  struct _RECTL v185; // [rsp+290h] [rbp-2D8h] BYREF
  struct _RECTL v186; // [rsp+2A0h] [rbp-2C8h] BYREF
  struct _RECTL v187; // [rsp+2B0h] [rbp-2B8h] BYREF
  struct _RECTL v188; // [rsp+2C0h] [rbp-2A8h] BYREF
  __int64 v189; // [rsp+2D0h] [rbp-298h] BYREF
  __int64 v190; // [rsp+2D8h] [rbp-290h]
  __m128i v191; // [rsp+2E0h] [rbp-288h] BYREF
  __int64 v192; // [rsp+2F0h] [rbp-278h] BYREF
  unsigned __int64 v193; // [rsp+2F8h] [rbp-270h]
  struct _RECTL v194; // [rsp+300h] [rbp-268h] BYREF
  int v195; // [rsp+310h] [rbp-258h]
  struct _RECTL v196; // [rsp+318h] [rbp-250h] BYREF
  struct _RECTL v197; // [rsp+328h] [rbp-240h] BYREF
  _BYTE v198[160]; // [rsp+340h] [rbp-228h] BYREF
  _BYTE v199[160]; // [rsp+3E0h] [rbp-188h] BYREF
  _BYTE v200[4]; // [rsp+480h] [rbp-E8h] BYREF
  char v201[156]; // [rsp+484h] [rbp-E4h] BYREF

  v135 = (XCLIPOBJ *)a4;
  v137 = a3;
  v118 = a2;
  v127 = a1;
  v136 = (unsigned __int64)a5;
  v162 = a3;
  v163 = a4;
  v140 = a6;
  v141 = a7;
  v13 = a8;
  v14 = a9;
  v143 = a10;
  v109 = a11;
  if ( a11 - 1 > 3 )
    return 0LL;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v142 = v15;
  v16 = SURFOBJ_TO_SURFACE(a2);
  v128 = v16;
  v150 = SURFOBJ_TO_SURFACE(a3);
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
  v20 = *(_QWORD *)(v15 + 48);
  v151 = v20;
  v160 = v20;
  v21 = *(_QWORD *)(v16 + 48);
  v178 = v21;
  v157 = 0LL;
  v158 = 0;
  v159 = 0;
  v197 = *a9;
  v22 = 1;
  v23 = v118;
  if ( v118->iType == 1 && v21 && (*(_DWORD *)(v21 + 40) & 0x20000) != 0 )
  {
    if ( !(unsigned int)MulCopyDeviceToDIB(v118, (struct SURFMEM *)&v157, &v197) )
      goto LABEL_67;
    if ( !v157 )
    {
LABEL_66:
      LODWORD(v17) = v22;
LABEL_67:
      SURFMEM::~SURFMEM((SURFMEM *)&v157);
      return (unsigned int)v17;
    }
    v14 = &v197;
    v118 = (struct _SURFOBJ *)(v157 + 24);
    v16 = SURFOBJ_TO_SURFACE(v157 + 24);
    v128 = v16;
    v21 = *(_QWORD *)(v16 + 48);
    v178 = v21;
    v23 = v118;
  }
  if ( !v136 || (v24 = 1, (*(_DWORD *)(v136 + 4) & 8) == 0) )
    v24 = 0;
  v112 = v24;
  v154 = v24;
  if ( v24 )
  {
    if ( v23->iType )
      goto LABEL_67;
    v25 = v127;
    if ( v127->iType != 1 )
      goto LABEL_67;
    v26 = (__int64)v137;
    if ( v137 )
      goto LABEL_67;
  }
  else
  {
    v25 = v127;
    v26 = (__int64)v137;
  }
  if ( a11 != 4 )
    goto LABEL_19;
  if ( v24 )
    goto LABEL_67;
  v55 = EngHTBlt(
          v25,
          v23,
          v26,
          (CLIPOBJ *)v135,
          (struct XLATE *)v136,
          v140,
          v141,
          (XLATEOBJ *)a8,
          (XLATEOBJ *)v14,
          v143,
          0,
          0LL);
  if ( v55 == -1 )
    goto LABEL_67;
  if ( v55 )
  {
    if ( v55 == 1 )
      goto LABEL_66;
LABEL_19:
    v27 = a11;
    goto LABEL_20;
  }
  v27 = 3;
  v109 = 3;
LABEL_20:
  v28 = 0;
  v110 = 0;
  bottom = a8->bottom;
  top = a8->top;
  v31 = bottom;
  if ( bottom < top )
  {
    v31 = a8->top;
    a8->top = bottom;
    a8->bottom = top;
    v28 = 2;
    v110 = 2;
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
    v110 = v28;
    left = right;
  }
  if ( v27 >= 3 || v150 )
  {
    v35 = 0;
    v113 = 0;
  }
  else
  {
    v113 = 1;
    v35 = 1;
    if ( v34 - left >= v14->right - v14->left )
    {
      v35 = v31 - top < v14->bottom - v14->top;
      v113 = v35;
    }
    v27 = v109;
  }
  v145 = v35;
  if ( !v35 )
  {
    if ( v27 < 3 )
      v27 = 3;
    v109 = v27;
  }
  v146 = v27;
  v36 = *(_DWORD *)(v142 + 112);
  if ( (v36 & 0x40000) == 0 )
  {
    if ( v136 && (*(_DWORD *)(v136 + 4) & 1) == 0 )
    {
      v37 = v118;
    }
    else
    {
      v37 = v118;
      if ( !v118->iType )
        goto LABEL_34;
    }
    if ( *(_WORD *)(v142 + 100) )
    {
      if ( (v36 & 2) != 0 && !v28 && !v137 )
      {
        v93 = v14->left;
        if ( v14->left >= 0 )
        {
          v94 = v14->top;
          if ( v94 >= 0 )
          {
            v95 = v14->right;
            if ( v95 <= v37->sizlBitmap.cx )
            {
              v96 = v14->bottom;
              if ( v96 <= v37->sizlBitmap.cy )
              {
                v192 = 0LL;
                v193 = 0LL;
                v116 = v95 - v93;
                sizl.cx = v95 - v93;
                v97 = v96 - v94;
                v120 = v97;
                sizl.cy = v97;
                if ( v95 - v93 <= a8->right - a8->left && v97 <= a8->bottom - a8->top )
                {
                  hsurf = (HSURF)EngCreateBitmap(sizl, 0, v127->iBitmapFormat, 0, 0LL);
                  v98 = EngLockSurface(hsurf);
                  pso = v98;
                  if ( v98 )
                  {
                    v98->iUniq = 0;
                    v193 = __PAIR64__(v120, v116);
                    if ( (*(_DWORD *)(v16 + 112) & 0x400) != 0 )
                      v99 = (*(__int64 (__fastcall **)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int64 *, struct _RECTL *))(v21 + 2840))(
                              v98,
                              v118,
                              0LL,
                              v136,
                              &v192,
                              v14);
                    else
                      v99 = ((__int64 (__fastcall *)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int64 *, struct _RECTL *))EngCopyBits)(
                              v98,
                              v118,
                              0LL,
                              v136,
                              &v192,
                              v14);
                    if ( !v99
                      || (v100 = *(unsigned int (__fastcall **)(struct _SURFOBJ *, SURFOBJ *, _QWORD, XCLIPOBJ *, _QWORD, struct tagCOLORADJUSTMENT *, RECTL *, struct _RECTL *, __int64 *, _QWORD *, unsigned int))(v20 + 2848)) == 0LL
                      || !v100(v127, pso, 0LL, v135, 0LL, v140, v141, a8, &v192, v143, v109) )
                    {
                      v22 = 0;
                    }
                    EngUnlockSurface(pso);
                    EngDeleteSurface(hsurf);
                    goto LABEL_66;
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
  v124 = 0LL;
  v125 = 0;
  v126 = 0;
  v191 = 0uLL;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v198);
  v38 = *(_DWORD *)(v16 + 60);
  v39 = *(_DWORD *)(v16 + 56);
  *(_QWORD *)&v185.left = 0LL;
  v185.right = v39;
  v185.bottom = v38;
  *(_QWORD *)&v188.left = 0LL;
  *(_QWORD *)&v188.right = 0LL;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v129);
  if ( !*(_WORD *)(v142 + 100) && *(_QWORD *)(v142 + 32) != *(_QWORD *)(v16 + 32) )
  {
    v40 = v142;
    v148 = v142;
LABEL_37:
    v41 = v135;
    goto LABEL_38;
  }
  v191 = *(__m128i *)a8;
  v117 = _mm_cvtsi128_si32(v191);
  v187.left = v117 - 1;
  v187.top = v191.m128i_i32[1] - 1;
  v121 = _mm_cvtsi128_si32(_mm_srli_si128(v191, 8));
  v187.right = v121 + 1;
  v187.bottom = _mm_srli_si128(v191, 8).m128i_i32[1] + 1;
  v101 = *(_DWORD *)(v142 + 60);
  v102 = *(_DWORD *)(v142 + 56);
  v167 = 0LL;
  v168 = v102;
  v169 = v101;
  ERECTL::operator*=(&v187, &v167);
  if ( ERECTL::bEmpty((ERECTL *)&v187) )
    goto LABEL_65;
  if ( !*(_WORD *)(v142 + 100)
    && (v187.left > v14->right || v187.right < v14->left || v187.top > v14->bottom || v187.bottom < v14->top) )
  {
    v40 = v142;
    v148 = v142;
    goto LABEL_37;
  }
  v191.m128i_i32[0] = v117 - v187.left;
  v191.m128i_i32[1] -= v187.top;
  v191.m128i_i32[2] = v121 - v187.left;
  v191.m128i_i32[3] -= v187.top;
  v170[3] = 0;
  v173 = 0;
  v170[1] = v187.right - v187.left + 1;
  v170[2] = v187.bottom - v187.top + 1;
  v171 = 0LL;
  if ( v112 )
    v103 = *(_DWORD *)(v16 + 96);
  else
    v103 = *(_DWORD *)(v142 + 96);
  v170[0] = v103;
  v172 = *(_DWORD *)(v142 + 112) & 0x40000;
  SURFMEM::bCreateDIB((SURFMEM *)&v124, (struct _DEVBITMAPINFO *)v170, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( !v124 )
    goto LABEL_204;
  v122 = *(_QWORD *)&v187.left;
  if ( !v129[0] )
    goto LABEL_204;
  *(_QWORD *)&v187.left = 0LL;
  v187.right -= v122;
  v187.bottom -= HIDWORD(v122);
  RGNOBJ::vSet((RGNOBJ *)v129, &v187);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v198, v129[0], (struct ERECTL *)&v187, 1);
  v104 = v142;
  v179 = *(_QWORD *)(v142 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v179, (struct _SURFOBJ *)(v142 + 24), 0LL, 0);
  if ( v150 )
  {
    if ( (*(_DWORD *)(v104 + 112) & 0x400) != 0 )
      v105 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v20 + 2840);
    else
      v105 = EngCopyBits;
    v106 = 0LL;
    if ( v124 )
      v106 = v124 + 24;
    ((void (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, struct _RECTL *, __int64 *))v105)(
      v106,
      v104 + 24,
      0LL,
      xloIdent,
      &v187,
      &v122);
  }
  v40 = v124;
  v148 = v124;
  v13 = (struct _RECTL *)&v191;
  v41 = (XCLIPOBJ *)v198;
LABEL_38:
  v149 = v13;
  v134 = v41;
  v180 = *(_QWORD *)(v128 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v180, v118, 0LL, 0);
  ERECTL::operator*=(&v185, v14);
  if ( v185.left == v185.right || v185.top == v185.bottom )
    goto LABEL_65;
  v130 = 0LL;
  v131 = 0;
  v132 = 0;
  v189 = 0LL;
  v190 = 0LL;
  if ( v110 || *(_WORD *)(v128 + 100) || (unsigned int)(*(_DWORD *)(v128 + 96) - 7) <= 1 )
  {
    v174[3] = 0;
    v177 = 0;
    v174[1] = v185.right - v185.left;
    v174[2] = v185.bottom - v185.top;
    v175 = 0LL;
    if ( v112 )
      v86 = *(_DWORD *)(v128 + 96);
    else
      v86 = *(_DWORD *)(v40 + 96);
    v174[0] = v86;
    v176 = *(_DWORD *)(v128 + 112) & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v130, (struct _DEVBITMAPINFO *)v174, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v130 )
      goto LABEL_203;
    LODWORD(v190) = v185.right - v185.left;
    HIDWORD(v190) = v185.bottom - v185.top;
    v87 = 0LL;
    if ( !v112 )
      v87 = v136;
    if ( (*(_DWORD *)(v128 + 112) & 0x400) != 0 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD, unsigned __int64, __int64 *, struct _RECTL *))(v21 + 2840))(
        v130 + 24,
        v128 + 24,
        0LL,
        v87,
        &v189,
        &v185);
    else
      ((void (__fastcall *)(__int64, __int64, _QWORD, unsigned __int64, __int64 *, struct _RECTL *))EngCopyBits)(
        v130 + 24,
        v128 + 24,
        0LL,
        v87,
        &v189,
        &v185);
    LODWORD(v189) = v14->left - v185.left;
    HIDWORD(v189) = v14->top - v185.top;
    LODWORD(v190) = v14->right - v185.left;
    HIDWORD(v190) = v14->bottom - v185.top;
    v88 = v130;
    v42 = v130;
    v128 = v130;
    v140 = (struct tagCOLORADJUSTMENT *)v130;
    v14 = (struct _RECTL *)&v189;
    v141 = (RECTL *)&v189;
    v119 = 0LL;
    v185.right -= v185.left;
    v89 = v185.bottom - v185.top;
    v185.bottom -= v185.top;
    *(_QWORD *)&v185.left = 0LL;
    v90 = v110;
    if ( (v110 & 2) != 0 )
    {
      v91 = *(_DWORD *)(v130 + 88);
      if ( v91 > 0 )
      {
        *(_QWORD *)(v130 + 80) = *(_QWORD *)(v130 + 72) + v91 * (v89 - 1);
        v90 = v110;
      }
      else
      {
        *(_QWORD *)(v130 + 80) = *(_QWORD *)(v130 + 72);
      }
      *(_DWORD *)(v130 + 88) = -*(_DWORD *)(v130 + 88);
      v88 = v130;
    }
    if ( (v90 & 1) != 0 )
    {
      v92 = *(_DWORD *)(v88 + 96);
      if ( (unsigned int)(v92 - 1) > 5 )
        goto LABEL_203;
      ((void (__fastcall *)(__int64))(&apfnMirror)[v92])(v88);
    }
  }
  else
  {
    v42 = v128;
    v140 = (struct tagCOLORADJUSTMENT *)v128;
    v141 = v14;
    v43 = 0LL;
    if ( !v112 )
      v43 = v136;
    v119 = (struct _SURFOBJ *)v43;
  }
  v181 = *(_QWORD *)(v40 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v181, (struct _SURFOBJ *)(v40 + 24), 0LL, 0);
  if ( v14->right - v14->left >= 128000000 )
    goto LABEL_203;
  if ( v14->bottom - v14->top >= 128000000 )
    goto LABEL_203;
  v44 = v13->right - v13->left;
  if ( v44 >= 128000000 )
    goto LABEL_203;
  v45 = v13->bottom - v13->top;
  if ( v45 >= 128000000 || v44 <= -128000000 || v45 <= -128000000 )
    goto LABEL_203;
  if ( v109 != 3
    || v137
    || v119 && (HIDWORD(v119->dhsurf) & 1) == 0
    || (v46 = *(_DWORD *)(v40 + 96), v47 = *(_DWORD *)(v42 + 96), v46 != v47)
    || ((v47 - 3) & 0xFFFFFFFC) != 0
    || v47 == 5 )
  {
    v58 = AllocFreeTmpBuffer(324LL);
    v59 = (void *)v58;
    v164 = (_DWORD *)v58;
    if ( v58 )
    {
      v184 = v58;
      v60 = v134;
      if ( v134 && *((_BYTE *)v134 + 20) )
      {
        if ( *((_BYTE *)v134 + 20) != 1 )
        {
          if ( *((_BYTE *)v134 + 20) == 3 )
          {
            v112 = 1;
            XCLIPOBJ::cEnumStart(v134, 0, 0, 4u, 0x14u);
            v60 = v134;
            v59 = v164;
          }
LABEL_88:
          if ( v112 )
            goto LABEL_215;
          while ( 1 )
          {
            for ( i = 0LL; ; i = (unsigned int)(v115 + 1) )
            {
              v115 = i;
              v59 = v164;
              if ( (unsigned int)i >= *v164 )
                break;
              v153 = (struct _RECTL *)&v164[4 * i + 1];
              v186 = 0LL;
              vInitStrDDAClip(&v185, v14, v13, v153, &v186);
              if ( !ERECTL::bEmpty((ERECTL *)&v186) )
              {
                --v186.left;
                --v186.top;
                ++v186.right;
                ++v186.bottom;
                ERECTL::operator*=(&v186, &v185);
                v63 = v14->right;
                if ( v63 >= v14->left )
                {
                  v64 = v14->bottom;
                  v65 = v14->top;
                  if ( v64 >= v65 )
                  {
                    v66 = v63 - v14->left;
                    v67 = v66 + v64 - v65;
                    if ( v67 >= v66 && v67 < 0x3FFFFFF5 )
                    {
                      v68 = (struct _STRDDA *)PALLOCMEM2(4 * v67 + 40);
                      v127 = (struct _SURFOBJ *)v68;
                      if ( v68 )
                      {
                        vInitStrDDA(v68, &v186, v14, v13);
                        v69 = v127;
                        v165 = *(struct _RECTL *)&v127->dhsurf;
                        v70 = v119;
                        if ( v119 )
                        {
                          if ( (BYTE4(v119->dhsurf) & 1) != 0 )
                            v70 = 0LL;
                          v119 = v70;
                        }
                        v183 = (&apfnWrite)[*(unsigned int *)(v40 + 96)];
                        if ( v113 )
                          HIDWORD(v127->dhpdev) = (v146 != 1) - 1;
                        pso = (SURFOBJ *)*(&apfnRead + 3 * *(unsigned int *)(v42 + 96) + v109 - 1);
                        hsurf = (HSURF)pso;
                        v71 = v165.right - v165.left;
                        if ( v14->right - v14->left > v13->right - v13->left )
                        {
                          if ( v71 >= 0x15555553 )
                            goto LABEL_218;
                          v72 = v165.right - v165.left;
                        }
                        else
                        {
                          if ( v71 + 3 < v71 )
                            goto LABEL_218;
                          v72 = (v71 + 3) >> 1;
                          if ( v72 >= 0x15555553 )
                            goto LABEL_218;
                        }
                        v73 = 12 * (v72 + 2);
                        if ( v71 > 0x5F5E100 || (unsigned int)v73 > 0x2710000 )
                          goto LABEL_218;
                        v74 = (struct _STRRUN *)AllocFreeTmpBuffer(v73);
                        v144 = v74;
                        if ( !v74 )
                        {
                          v69 = v127;
LABEL_218:
                          Win32FreePool(v69);
                          continue;
                        }
                        v111 = v186.top;
                        v138 = *(_QWORD *)(v42 + 80) + *(_DWORD *)(v42 + 88) * v186.top;
                        v151 = 0LL;
                        if ( v137 )
                        {
                          LODWORD(v151) = v186.left + *(_DWORD *)v143 - v14->left;
                          v139 = *(_QWORD *)(v150 + 80)
                               + *(_DWORD *)(v150 + 88) * (v186.top + *((_DWORD *)v143 + 1) - v14->top);
                        }
                        else
                        {
                          v139 = 0LL;
                        }
                        if ( v113 )
                        {
                          v84 = -1;
                          if ( v146 != 1 )
                            v84 = 0;
                          vInitBuffer(v74, &v165, v84);
                          v155 = v85;
                        }
                        *(_DWORD *)v74 = HIDWORD(v127->dhsurf);
                        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v166);
                        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v199);
                        v75 = 0;
                        v76 = v134;
                        if ( v134 && v166[0] )
                        {
                          RGNOBJ::vSet((RGNOBJ *)v166, v153);
                          XCLIPOBJ::vSetup((XCLIPOBJ *)v199, v166[0], (struct ERECTL *)v153, 1);
                          v75 = 1;
                          v76 = v134;
                        }
                        LODWORD(v153) = v75;
                        if ( !v76 || v166[0] )
                        {
                          v77 = v111;
                          for ( j = 0; ; ++j )
                          {
                            v123 = j;
                            if ( v77 >= v186.bottom )
                              break;
                            v79 = v127;
                            v80 = *((_DWORD *)v127->hdev + j);
                            v81 = v144;
                            *((_DWORD *)v144 + 1) = v80;
                            if ( v80 )
                            {
                              v82 = (unsigned __int64)v199 & -(__int64)((_DWORD)v153 != 0);
                              v83 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _STRRUN *, __int64, __int64, struct _SURFOBJ *, LONG, LONG, _DWORD))pso)(
                                      v79,
                                      v81,
                                      v138,
                                      v139,
                                      v119,
                                      v186.left,
                                      v186.right,
                                      v151);
                              ((void (__fastcall *)(struct _STRRUN *, __int64, __int64, unsigned __int64))v183)(
                                v144,
                                v83,
                                v40,
                                v82);
                              v42 = v128;
                              v77 = v111;
                              if ( v113 )
                              {
                                vInitBuffer(v144, &v165, v155);
                                v77 = v111;
                              }
                              j = v123;
                            }
                            else if ( v113 )
                            {
                              ((void (__fastcall *)(struct _SURFOBJ *, struct _STRRUN *, __int64, _QWORD, struct _SURFOBJ *, LONG, LONG, _DWORD))pso)(
                                v79,
                                v81,
                                v138,
                                0LL,
                                v119,
                                v186.left,
                                v186.right,
                                0);
                              j = v123;
                              v77 = v111;
                            }
                            v138 += *(int *)(v42 + 88);
                            *(_DWORD *)v144 += *((_DWORD *)v144 + 1);
                            if ( v139 )
                              v139 += *(int *)(v150 + 88);
                            v111 = ++v77;
                          }
                        }
                        FreeTmpBuffer(v144);
                        Win32FreePool(v127);
                        ERECTL::operator+=(&v188, &v165);
                        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v166);
                      }
                    }
                  }
                }
              }
            }
            v60 = v134;
            if ( !v112 )
            {
              AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v184);
              v52 = v188.bottom;
              v50 = v188.right;
              v51 = v188.top;
              v49 = v188.left;
              goto LABEL_63;
            }
LABEL_215:
            v112 = XCLIPOBJ::bEnum(v60, 0x144u, v59, 0LL);
          }
        }
        *(_DWORD *)v58 = 1;
        v61 = *(struct _RECTL *)((char *)v60 + 4);
      }
      else
      {
        *(_DWORD *)v58 = 1;
        v61 = *v13;
      }
      v112 = 0;
      *(struct _RECTL *)(v58 + 4) = v61;
      goto LABEL_88;
    }
LABEL_203:
    SURFMEM::~SURFMEM((SURFMEM *)&v130);
LABEL_204:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v129);
    SURFMEM::~SURFMEM((SURFMEM *)&v124);
    goto LABEL_67;
  }
  if ( v134 && *((_BYTE *)v134 + 20) == 3 )
  {
    *(_QWORD *)&v182.left = 0LL;
    *(_QWORD *)&v182.right = 0LL;
    *(_QWORD *)&v185.right = 0LL;
    *(_QWORD *)&v185.left = 0LL;
    *(_QWORD *)&v194.left = 0LL;
    *(_QWORD *)&v194.right = 0LL;
    v195 = 0;
    v56 = v135;
    XCLIPOBJ::cEnumStart(v135, 0, 0, 4u, 0);
    do
    {
      v57 = XCLIPOBJ::bEnum(v56, 0x14u, &v194, 0LL);
      v114 = v57;
      if ( v194.left )
      {
        StretchDIBDirect(
          *(char **)(v40 + 80),
          *(_DWORD *)(v40 + 88),
          *(_DWORD *)(v40 + 56),
          *(_DWORD *)(v40 + 60),
          v13,
          *(char **)(v42 + 80),
          *(_DWORD *)(v42 + 88),
          *(_DWORD *)(v42 + 56),
          *(_DWORD *)(v42 + 60),
          v14,
          &v182,
          (struct _RECTL *)&v194.top,
          *(_DWORD *)(v40 + 96));
        ERECTL::operator+=(&v185, &v182);
        v57 = v114;
      }
    }
    while ( v57 );
    v20 = v151;
  }
  else
  {
    v48 = v13;
    if ( v134 && *((_BYTE *)v134 + 20) == 1 )
      v48 = (struct _RECTL *)((char *)v134 + 4);
    StretchDIBDirect(
      *(char **)(v40 + 80),
      *(_DWORD *)(v40 + 88),
      *(_DWORD *)(v40 + 56),
      *(_DWORD *)(v40 + 60),
      v13,
      *(char **)(v42 + 80),
      *(_DWORD *)(v42 + 88),
      *(_DWORD *)(v42 + 56),
      *(_DWORD *)(v42 + 60),
      v14,
      &v185,
      v48,
      v46);
  }
  v49 = v185.left;
  v188 = v185;
  v50 = v185.right;
  v51 = v185.top;
  v52 = v185.bottom;
LABEL_63:
  v53 = v142;
  if ( v40 == v142 )
    goto LABEL_64;
  v188.left = v122 + v49;
  v188.top = HIDWORD(v122) + v51;
  v188.right = v122 + v50;
  v188.bottom = HIDWORD(v122) + v52;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v147);
  if ( !v147[0] )
  {
LABEL_202:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v147);
    goto LABEL_203;
  }
  v107 = v135;
  if ( v135 )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v156);
    if ( v156[0] )
    {
      RGNOBJ::vSet((RGNOBJ *)v156, &v188);
      if ( RGNOBJ::bMerge((RGNOBJ *)v147, (struct RGNOBJ *)v156, (XCLIPOBJ *)((char *)v107 + 56), BYTE1(gafjRgnOp)) )
      {
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v156);
        goto LABEL_225;
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v156);
    goto LABEL_202;
  }
  RGNOBJ::vSet((RGNOBJ *)v147, &v188);
LABEL_225:
  v196 = *(struct _RECTL *)((char *)v147[0] + 88);
  if ( v107 && !bIntersect(&v196, (const struct _RECTL *)((char *)v107 + 4), &v196)
    || (ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v200, v147[0], (struct ERECTL *)&v196, 1), ERECTL::bEmpty((ERECTL *)v201)) )
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v147);
LABEL_64:
    SURFMEM::~SURFMEM((SURFMEM *)&v130);
LABEL_65:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v129);
    SURFMEM::~SURFMEM((SURFMEM *)&v124);
    goto LABEL_66;
  }
  v187.left += v122;
  v187.top += HIDWORD(v122);
  v187.right += v122;
  v187.bottom += HIDWORD(v122);
  v122 = 0LL;
  if ( (*(_DWORD *)(v53 + 112) & 0x400) != 0 )
    v108 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v20 + 2840);
  else
    v108 = EngCopyBits;
  if ( v124 )
    v17 = v124 + 24;
  ((void (__fastcall *)(__int64, __int64, _BYTE *, unsigned __int64, struct _RECTL *, __int64 *))v108)(
    v53 + 24,
    v17,
    v200,
    v136 & -(__int64)(v154 != 0),
    &v187,
    &v122);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v147);
  SURFMEM::~SURFMEM((SURFMEM *)&v130);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v129);
  SURFMEM::~SURFMEM((SURFMEM *)&v124);
  SURFMEM::~SURFMEM((SURFMEM *)&v157);
  return 1LL;
}
