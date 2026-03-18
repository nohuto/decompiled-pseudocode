/*
 * XREFs of ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C0272870
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
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00F313C (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ?vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z @ 0x1C0108054 (-vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C011B2B4 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015E8A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C015EC40 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C015EEA8 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0285238 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall EngStretchBltOld(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11,
        int *a12)
{
  struct _RECTL *v14; // rsi
  struct _RECTL *v15; // r14
  __int64 v16; // rdi
  SIZEL v17; // r13
  char *v18; // r15
  int v19; // edx
  int v20; // eax
  BOOL (__stdcall **v21)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  __int64 v22; // rbx
  int v23; // r12d
  SURFOBJ *v24; // rcx
  int v25; // eax
  SURFOBJ *v26; // r10
  __int64 v27; // r11
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // r11d
  LONG bottom; // eax
  LONG top; // r10d
  LONG v33; // r8d
  LONG right; // eax
  LONG left; // r9d
  LONG v36; // edx
  BOOL v37; // eax
  int v38; // ecx
  struct _SURFOBJ *v39; // r9
  LONG v40; // ecx
  LONG v41; // eax
  struct SURFACE *v42; // r14
  XCLIPOBJ *v43; // rax
  LONG v44; // ecx
  int v45; // eax
  LONG v46; // r8d
  LONG v47; // edx
  LONG v48; // edx
  SURFOBJ *v49; // rax
  int v50; // eax
  BOOL (__stdcall *v51)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v52; // ecx
  int v53; // eax
  __int64 v54; // rsi
  int v55; // eax
  BOOL (__stdcall *v56)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  char *v57; // rcx
  unsigned __int64 v58; // rax
  struct _RECTL *v59; // rbx
  int v60; // eax
  unsigned __int64 v61; // r9
  SIZEL v62; // r8
  int v63; // eax
  int v64; // ecx
  int v65; // ecx
  int v66; // r8d
  LONG v67; // r11d
  int v68; // r9d
  int v69; // ecx
  int v70; // edx
  unsigned int v71; // edx
  int v72; // ecx
  XCLIPOBJ *v73; // rdi
  int v74; // eax
  struct _RECTL *v75; // rcx
  LONG v76; // eax
  LONG v77; // ecx
  LONG v78; // edx
  LONG v79; // r8d
  unsigned int v80; // ecx
  void *v81; // rsi
  struct _RECTL *v82; // rbx
  unsigned __int64 v83; // rcx
  unsigned int v84; // r8d
  unsigned int v85; // eax
  __int64 v86; // rcx
  HSURF v87; // rbx
  struct _SURFOBJ *v88; // r11
  int v89; // r10d
  unsigned int v90; // r8d
  signed int v91; // r8d
  LONG v92; // r8d
  int i; // r9d
  int v94; // edx
  __int64 v95; // rax
  __int64 v96; // rbx
  XCLIPOBJ *v97; // rsi
  int v98; // ebx
  BOOL (__stdcall *v99)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  unsigned int v101; // [rsp+70h] [rbp-3C8h]
  LONG v102; // [rsp+70h] [rbp-3C8h]
  int v103; // [rsp+74h] [rbp-3C4h]
  int v104; // [rsp+74h] [rbp-3C4h]
  int v105; // [rsp+78h] [rbp-3C0h]
  LONG v106; // [rsp+7Ch] [rbp-3BCh]
  int v107; // [rsp+7Ch] [rbp-3BCh]
  int v108; // [rsp+7Ch] [rbp-3BCh]
  int v109; // [rsp+7Ch] [rbp-3BCh]
  unsigned int v110; // [rsp+80h] [rbp-3B8h]
  unsigned int v111; // [rsp+80h] [rbp-3B8h]
  signed int v112; // [rsp+80h] [rbp-3B8h]
  struct _SURFOBJ *v113; // [rsp+88h] [rbp-3B0h]
  struct _SURFOBJ *v114; // [rsp+88h] [rbp-3B0h]
  int v115; // [rsp+90h] [rbp-3A8h]
  unsigned __int64 v116; // [rsp+90h] [rbp-3A8h]
  struct SURFACE *v117; // [rsp+98h] [rbp-3A0h] BYREF
  char v118; // [rsp+A0h] [rbp-398h]
  int v119; // [rsp+A4h] [rbp-394h]
  __int64 v120; // [rsp+A8h] [rbp-390h] BYREF
  SIZEL v121; // [rsp+B0h] [rbp-388h] BYREF
  char v122; // [rsp+B8h] [rbp-380h]
  int v123; // [rsp+BCh] [rbp-37Ch]
  struct REGION *v124[2]; // [rsp+C0h] [rbp-378h] BYREF
  struct _SURFOBJ *v125; // [rsp+D0h] [rbp-368h]
  unsigned __int64 v126; // [rsp+D8h] [rbp-360h]
  struct _RECTL *v127; // [rsp+E0h] [rbp-358h]
  XCLIPOBJ *v128; // [rsp+E8h] [rbp-350h]
  unsigned __int64 v129; // [rsp+F0h] [rbp-348h]
  SURFOBJ *pso; // [rsp+F8h] [rbp-340h]
  __int64 v131; // [rsp+100h] [rbp-338h]
  struct SURFACE *v132; // [rsp+108h] [rbp-330h]
  SIZEL sizl; // [rsp+110h] [rbp-328h]
  struct _RECTL *v134; // [rsp+118h] [rbp-320h]
  BOOL v135; // [rsp+120h] [rbp-318h]
  struct REGION *v136[2]; // [rsp+128h] [rbp-310h] BYREF
  __int64 *v137[2]; // [rsp+138h] [rbp-300h] BYREF
  BOOL (__stdcall **v138)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+148h] [rbp-2F0h]
  HSURF hsurf; // [rsp+150h] [rbp-2E8h]
  struct _RECTL v140; // [rsp+158h] [rbp-2E0h] BYREF
  __int64 v141; // [rsp+168h] [rbp-2D0h]
  void (**v142)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+170h] [rbp-2C8h]
  int v143; // [rsp+178h] [rbp-2C0h]
  __int64 v144; // [rsp+180h] [rbp-2B8h] BYREF
  char v145; // [rsp+188h] [rbp-2B0h]
  int v146; // [rsp+18Ch] [rbp-2ACh]
  BOOL (__stdcall **v147)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+190h] [rbp-2A8h]
  struct _CLIPOBJ *v148; // [rsp+198h] [rbp-2A0h]
  __int64 v149; // [rsp+1A0h] [rbp-298h] BYREF
  int v150; // [rsp+1A8h] [rbp-290h]
  int v151; // [rsp+1ACh] [rbp-28Ch]
  __int64 v152; // [rsp+1B0h] [rbp-288h] BYREF
  __int64 v153; // [rsp+1B8h] [rbp-280h] BYREF
  __int64 v154; // [rsp+1C0h] [rbp-278h] BYREF
  __int64 v155; // [rsp+1C8h] [rbp-270h]
  _QWORD v156[4]; // [rsp+1D0h] [rbp-268h] BYREF
  _QWORD v157[4]; // [rsp+1F0h] [rbp-248h] BYREF
  struct _RECTL v158; // [rsp+210h] [rbp-228h] BYREF
  struct _RECTL v159; // [rsp+220h] [rbp-218h] BYREF
  struct _RECTL v160; // [rsp+230h] [rbp-208h] BYREF
  __int64 v161; // [rsp+240h] [rbp-1F8h] BYREF
  int v162; // [rsp+248h] [rbp-1F0h]
  int v163; // [rsp+24Ch] [rbp-1ECh]
  __m128i v164; // [rsp+250h] [rbp-1E8h] BYREF
  __int64 v165; // [rsp+260h] [rbp-1D8h] BYREF
  unsigned int v166; // [rsp+268h] [rbp-1D0h]
  LONG v167; // [rsp+26Ch] [rbp-1CCh]
  struct _RECTL v168; // [rsp+270h] [rbp-1C8h] BYREF
  struct _RECTL v169; // [rsp+280h] [rbp-1B8h] BYREF
  int v170; // [rsp+290h] [rbp-1A8h] BYREF
  struct _RECTL v171; // [rsp+294h] [rbp-1A4h] BYREF
  _BYTE v172[160]; // [rsp+2B0h] [rbp-188h] BYREF
  _BYTE v173[4]; // [rsp+350h] [rbp-E8h] BYREF
  char v174[156]; // [rsp+354h] [rbp-E4h] BYREF

  v128 = (XCLIPOBJ *)a4;
  *(_QWORD *)&v140.left = a3;
  v113 = a2;
  v125 = a1;
  v129 = (unsigned __int64)a5;
  v148 = a4;
  v126 = (unsigned __int64)a6;
  v132 = (struct SURFACE *)a7;
  v14 = a8;
  v134 = a8;
  v15 = a9;
  v127 = a9;
  v137[0] = (__int64 *)a10;
  v101 = a11;
  v142 = (void (**)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *))a12;
  if ( a11 - 1 > 3 )
    return 0LL;
  v16 = SURFOBJ_TO_SURFACE(a1);
  v131 = v16;
  v17 = (SIZEL)SURFOBJ_TO_SURFACE(a2);
  v141 = SURFOBJ_TO_SURFACE(a3);
  v18 = 0LL;
  if ( !v16 )
    return 0LL;
  if ( !*(_QWORD *)&v17 )
    return 0LL;
  v19 = *(_DWORD *)(v16 + 96);
  if ( (unsigned int)(v19 - 7) <= 2 )
    return 0LL;
  v20 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
  if ( v20 == 9 || v19 == 10 || v20 == 10 )
    return 0LL;
  if ( a9->left == a9->right || a9->top == a9->bottom || a8->left == a8->right || a8->top == a8->bottom )
    return 1LL;
  v21 = *(BOOL (__stdcall ***)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v16 + 48);
  v138 = v21;
  v147 = v21;
  v22 = *(_QWORD *)(*(_QWORD *)&v17 + 48LL);
  v155 = v22;
  v144 = 0LL;
  v145 = 0;
  v146 = 0;
  v169 = *a9;
  v23 = 1;
  v24 = v113;
  if ( v113->iType == 1 && v22 && (*(_DWORD *)(v22 + 40) & 0x20000) != 0 )
  {
    if ( !(unsigned int)MulCopyDeviceToDIB(v113, (struct SURFMEM *)&v144, &v169) )
    {
LABEL_210:
      SURFMEM::~SURFMEM((SURFMEM *)&v144);
      return (unsigned int)v18;
    }
    if ( !v144 )
    {
LABEL_17:
      LODWORD(v18) = v23;
      goto LABEL_210;
    }
    v15 = &v169;
    v127 = &v169;
    v113 = (struct _SURFOBJ *)(v144 + 24);
    v17 = (SIZEL)SURFOBJ_TO_SURFACE(v144 + 24);
    v22 = *(_QWORD *)(*(_QWORD *)&v17 + 48LL);
    v155 = v22;
    v24 = v113;
  }
  if ( !v129 || (v25 = 1, (*(_DWORD *)(v129 + 4) & 8) == 0) )
    v25 = 0;
  v115 = v25;
  v143 = v25;
  if ( v25 )
  {
    if ( v24->iType )
      goto LABEL_210;
    v26 = v125;
    if ( v125->iType != 1 )
      goto LABEL_210;
    v27 = *(_QWORD *)&v140.left;
    if ( *(_QWORD *)&v140.left )
      goto LABEL_210;
  }
  else
  {
    v26 = v125;
    v27 = *(_QWORD *)&v140.left;
  }
  if ( a11 != 4 )
    goto LABEL_33;
  if ( v25 )
    goto LABEL_210;
  v28 = EngHTBlt(
          v26,
          v24,
          v27,
          (CLIPOBJ *)v128,
          (struct XLATE *)v129,
          (struct tagCOLORADJUSTMENT *)v126,
          v132,
          (XLATEOBJ *)a8,
          (XLATEOBJ *)v15,
          v137[0],
          0,
          0LL);
  if ( v28 == -1 )
    goto LABEL_210;
  if ( v28 )
  {
    if ( v28 == 1 )
      goto LABEL_17;
LABEL_33:
    v29 = a11;
    goto LABEL_34;
  }
  v29 = 3;
  v101 = 3;
LABEL_34:
  v30 = 0;
  v103 = 0;
  bottom = a8->bottom;
  top = a8->top;
  v33 = bottom;
  if ( bottom < top )
  {
    v33 = a8->top;
    a8->top = bottom;
    a8->bottom = top;
    v30 = 2;
    v103 = 2;
    top = bottom;
  }
  right = a8->right;
  left = a8->left;
  v36 = right;
  if ( right < a8->left )
  {
    v36 = a8->left;
    a8->left = right;
    a8->right = left;
    v30 |= 1u;
    v103 = v30;
    left = right;
  }
  if ( v29 >= 3 || v141 )
  {
    v37 = 0;
    v105 = 0;
  }
  else
  {
    v105 = 1;
    v37 = 1;
    if ( v36 - left >= v15->right - v15->left )
    {
      v37 = v33 - top < v15->bottom - v15->top;
      v105 = v37;
    }
    v29 = v101;
  }
  v135 = v37;
  if ( !v37 )
  {
    if ( v29 < 3 )
      v29 = 3;
    v101 = v29;
  }
  v38 = *(_DWORD *)(v131 + 112);
  if ( (v38 & 0x40000) == 0 )
  {
    if ( v129 && (*(_DWORD *)(v129 + 4) & 1) == 0 )
    {
      v39 = v113;
    }
    else
    {
      v39 = v113;
      if ( !v113->iType )
        goto LABEL_51;
    }
    if ( *(_WORD *)(v131 + 100) )
    {
      if ( (v38 & 2) != 0 && !v30 && !*(_QWORD *)&v140.left )
      {
        v44 = v15->left;
        if ( v15->left >= 0 )
        {
          v45 = v15->top;
          if ( v45 >= 0 )
          {
            v46 = v15->right;
            if ( v46 <= v39->sizlBitmap.cx )
            {
              v47 = v15->bottom;
              if ( v47 <= v39->sizlBitmap.cy )
              {
                v110 = v46 - v44;
                sizl.cx = v46 - v44;
                v48 = v47 - v45;
                v106 = v48;
                sizl.cy = v48;
                if ( v46 - v44 <= a8->right - a8->left && v48 <= a8->bottom - a8->top )
                {
                  hsurf = (HSURF)EngCreateBitmap(sizl, 0, v125->iBitmapFormat, 0, 0LL);
                  v49 = EngLockSurface(hsurf);
                  pso = v49;
                  if ( v49 )
                  {
                    v49->iUniq = 0;
                    v165 = 0LL;
                    v166 = v110;
                    v167 = v106;
                    if ( (*(_DWORD *)(*(_QWORD *)&v17 + 112LL) & 0x400) != 0 )
                      v50 = (*(__int64 (__fastcall **)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int64 *, struct _RECTL *))(v22 + 2840))(
                              v49,
                              v113,
                              0LL,
                              v129,
                              &v165,
                              v15);
                    else
                      v50 = ((__int64 (__fastcall *)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int64 *, struct _RECTL *))EngCopyBits)(
                              v49,
                              v113,
                              0LL,
                              v129,
                              &v165,
                              v15);
                    if ( !v50
                      || (v51 = v21[356]) == 0LL
                      || !((unsigned int (__fastcall *)(struct _SURFOBJ *, SURFOBJ *, _QWORD, XCLIPOBJ *, _QWORD, unsigned __int64, struct SURFACE *, struct _RECTL *, __int64 *, __int64 *, unsigned int))v51)(
                            v125,
                            pso,
                            0LL,
                            v128,
                            0LL,
                            v126,
                            v132,
                            a8,
                            &v165,
                            v137[0],
                            v101) )
                    {
                      v23 = 0;
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
  v117 = 0LL;
  v118 = 0;
  v119 = 0;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v172);
  v40 = *(_DWORD *)(*(_QWORD *)&v17 + 60LL);
  v41 = *(_DWORD *)(*(_QWORD *)&v17 + 56LL);
  *(_QWORD *)&v158.left = 0LL;
  v158.right = v41;
  v158.bottom = v40;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v124);
  if ( *(_WORD *)(v131 + 100) || *(_QWORD *)(v131 + 32) == *(_QWORD *)(*(_QWORD *)&v17 + 32LL) )
  {
    v164 = *(__m128i *)a8;
    v107 = _mm_cvtsi128_si32(v164);
    v159.left = v107 - 1;
    v159.top = v164.m128i_i32[1] - 1;
    v111 = _mm_cvtsi128_si32(_mm_srli_si128(v164, 8));
    v159.right = v111 + 1;
    v159.bottom = _mm_srli_si128(v164, 8).m128i_i32[1] + 1;
    v52 = *(_DWORD *)(v131 + 60);
    v53 = *(_DWORD *)(v131 + 56);
    v149 = 0LL;
    v150 = v53;
    v151 = v52;
    ERECTL::operator*=(&v159.left, (int *)&v149);
    if ( ERECTL::bEmpty((ERECTL *)&v159) )
    {
LABEL_77:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v124);
      SURFMEM::~SURFMEM((SURFMEM *)&v117);
      goto LABEL_17;
    }
    if ( *(_WORD *)(v131 + 100)
      || v159.left <= v15->right && v159.right >= v15->left && v159.top <= v15->bottom && v159.bottom >= v15->top )
    {
      v164.m128i_i32[0] = v107 - v159.left;
      v164.m128i_i32[1] -= v159.top;
      v164.m128i_i32[2] = v111 - v159.left;
      v164.m128i_i32[3] -= v159.top;
      memset(v156, 0, sizeof(v156));
      HIDWORD(v156[0]) = v159.right - v159.left + 1;
      LODWORD(v156[1]) = v159.bottom - v159.top + 1;
      v156[2] = 0LL;
      v54 = v131;
      if ( v115 )
        v55 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
      else
        v55 = *(_DWORD *)(v131 + 96);
      LODWORD(v156[0]) = v55;
      LODWORD(v156[3]) = *(_DWORD *)(v131 + 112) & 0x40000;
      SURFMEM::bCreateDIB((SURFMEM *)&v117, (struct _DEVBITMAPINFO *)v156, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v117 )
        goto LABEL_209;
      v120 = *(_QWORD *)&v159.left;
      if ( !v124[0] )
        goto LABEL_209;
      *(_QWORD *)&v159.left = 0LL;
      v159.right -= v120;
      v159.bottom -= HIDWORD(v120);
      RGNOBJ::vSet((RGNOBJ *)v124, &v159);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v172, v124[0], (struct ERECTL *)&v159, 1);
      v152 = *(_QWORD *)(v54 + 48);
      PDEVOBJ::vSync((PDEVOBJ *)&v152, (struct _SURFOBJ *)(v54 + 24), 0LL, 0);
      if ( v141 )
      {
        if ( (*(_DWORD *)(v54 + 112) & 0x400) != 0 )
          v56 = v21[355];
        else
          v56 = EngCopyBits;
        v57 = 0LL;
        if ( v117 )
          v57 = (char *)v117 + 24;
        ((void (__fastcall *)(char *, __int64, _QWORD, XLATEOBJ *const, struct _RECTL *, __int64 *))v56)(
          v57,
          v54 + 24,
          0LL,
          xloIdent,
          &v159,
          &v120);
      }
      v42 = v117;
      v132 = v117;
      v14 = (struct _RECTL *)&v164;
      v43 = (XCLIPOBJ *)v172;
    }
    else
    {
      v42 = (struct SURFACE *)v131;
      v132 = (struct SURFACE *)v131;
      v43 = v128;
    }
    v134 = v14;
  }
  else
  {
    v42 = (struct SURFACE *)v131;
    v132 = (struct SURFACE *)v131;
    v43 = v128;
  }
  v126 = (unsigned __int64)v43;
  v153 = *(_QWORD *)(*(_QWORD *)&v17 + 48LL);
  PDEVOBJ::vSync((PDEVOBJ *)&v153, v113, 0LL, 0);
  ERECTL::operator*=(&v158.left, &v127->left);
  if ( ERECTL::bEmpty((ERECTL *)&v158) )
    goto LABEL_77;
  v121 = 0LL;
  v122 = 0;
  v123 = 0;
  if ( v103 || *(_WORD *)(*(_QWORD *)&v17 + 100LL) || (unsigned int)(*(_DWORD *)(*(_QWORD *)&v17 + 96LL) - 7) <= 1 )
  {
    memset(v157, 0, sizeof(v157));
    HIDWORD(v157[0]) = v158.right - v158.left;
    LODWORD(v157[1]) = v158.bottom - v158.top;
    v157[2] = 0LL;
    if ( v115 )
      v60 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
    else
      v60 = *((_DWORD *)v42 + 24);
    LODWORD(v157[0]) = v60;
    LODWORD(v157[3]) = *(_DWORD *)(*(_QWORD *)&v17 + 112LL) & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v121, (struct _DEVBITMAPINFO *)v157, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !*(_QWORD *)&v121 )
      goto LABEL_208;
    v161 = 0LL;
    v162 = v158.right - v158.left;
    v163 = v158.bottom - v158.top;
    v61 = 0LL;
    if ( !v115 )
      v61 = v129;
    if ( (*(_DWORD *)(*(_QWORD *)&v17 + 112LL) & 0x400) != 0 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD, unsigned __int64, __int64 *, struct _RECTL *))(v22 + 2840))(
        *(_QWORD *)&v121 + 24LL,
        *(_QWORD *)&v17 + 24LL,
        0LL,
        v61,
        &v161,
        &v158);
    else
      ((void (__fastcall *)(__int64, __int64, _QWORD, unsigned __int64, __int64 *, struct _RECTL *))EngCopyBits)(
        *(_QWORD *)&v121 + 24LL,
        *(_QWORD *)&v17 + 24LL,
        0LL,
        v61,
        &v161,
        &v158);
    LODWORD(v161) = v127->left - v158.left;
    HIDWORD(v161) = v127->top - v158.top;
    v162 = v127->right - v158.left;
    v163 = v127->bottom - v158.top;
    v62 = v121;
    v17 = v121;
    sizl = v121;
    v59 = (struct _RECTL *)&v161;
    v127 = (struct _RECTL *)&v161;
    v116 = 0LL;
    v158.right -= v158.left;
    v63 = v158.bottom - v158.top;
    v158.bottom -= v158.top;
    *(_QWORD *)&v158.left = 0LL;
    if ( (v103 & 2) != 0 )
    {
      v64 = *(_DWORD *)(*(_QWORD *)&v121 + 88LL);
      if ( v64 <= 0 )
        *(_QWORD *)(*(_QWORD *)&v121 + 80LL) = *(_QWORD *)(*(_QWORD *)&v121 + 72LL);
      else
        *(_QWORD *)(*(_QWORD *)&v121 + 80LL) = *(_QWORD *)(*(_QWORD *)&v121 + 72LL) + v64 * (v63 - 1);
      *(_DWORD *)(*(_QWORD *)&v121 + 88LL) = -*(_DWORD *)(*(_QWORD *)&v121 + 88LL);
      v62 = v121;
    }
    if ( (v103 & 1) != 0 )
    {
      v65 = *(_DWORD *)(*(_QWORD *)&v62 + 96LL);
      if ( (unsigned int)(v65 - 1) > 5 )
      {
LABEL_208:
        SURFMEM::~SURFMEM((SURFMEM *)&v121);
LABEL_209:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v124);
        SURFMEM::~SURFMEM((SURFMEM *)&v117);
        goto LABEL_210;
      }
      ((void (__fastcall *)(_QWORD))(&apfnMirror)[v65])(v62);
    }
  }
  else
  {
    sizl = v17;
    v58 = 0LL;
    if ( !v115 )
      v58 = v129;
    v116 = v58;
    v59 = v127;
  }
  v154 = *((_QWORD *)v42 + 6);
  PDEVOBJ::vSync((PDEVOBJ *)&v154, (struct _SURFOBJ *)((char *)v42 + 24), 0LL, 0);
  v112 = v59->right;
  v108 = v59->left;
  v66 = v112 - v59->left;
  if ( v66 >= 128000000 )
    goto LABEL_208;
  v67 = v59->top;
  v68 = v59->bottom - v67;
  if ( v68 >= 128000000 )
    goto LABEL_208;
  v69 = v14->right - v14->left;
  if ( v69 >= 128000000 )
    goto LABEL_208;
  v70 = v14->bottom - v14->top;
  if ( v70 >= 128000000 || v69 <= -128000000 || v70 <= -128000000 )
    goto LABEL_208;
  if ( v101 == 3 && !*(_QWORD *)&v140.left && (!v116 || (*(_DWORD *)(v116 + 4) & 1) != 0) )
  {
    v71 = *((_DWORD *)v42 + 24);
    v72 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
    if ( v71 == v72 && ((v72 - 3) & 0xFFFFFFFC) == 0 && v72 != 5 )
    {
      if ( v126 && *(_BYTE *)(v126 + 20) == 3 )
      {
        *(_QWORD *)&v140.left = 0LL;
        *(_QWORD *)&v140.right = 0LL;
        *(_QWORD *)&v158.right = 0LL;
        *(_QWORD *)&v158.left = 0LL;
        v73 = v128;
        XCLIPOBJ::cEnumStart(v128, 0, 0, 4u, 0);
        do
        {
          v74 = XCLIPOBJ::bEnum(v73, 0x14u, (char *)&v170, 0LL);
          v109 = v74;
          if ( v170 )
          {
            StretchDIBDirect(
              *((char **)v42 + 10),
              *((_DWORD *)v42 + 22),
              *((_DWORD *)v42 + 14),
              *((_DWORD *)v42 + 15),
              v14,
              *(char **)(*(_QWORD *)&v17 + 80LL),
              *(_DWORD *)(*(_QWORD *)&v17 + 88LL),
              *(_DWORD *)(*(_QWORD *)&v17 + 56LL),
              *(_DWORD *)(*(_QWORD *)&v17 + 60LL),
              v59,
              &v140,
              &v171,
              *((_DWORD *)v42 + 24));
            ERECTL::operator+=((unsigned int *)&v158, (unsigned int *)&v140);
            v74 = v109;
          }
        }
        while ( v74 );
        v21 = v138;
      }
      else
      {
        v75 = v14;
        if ( v126 && *(_BYTE *)(v126 + 20) == 1 )
          v75 = (struct _RECTL *)(v126 + 4);
        StretchDIBDirect(
          *((char **)v42 + 10),
          *((_DWORD *)v42 + 22),
          *((_DWORD *)v42 + 14),
          *((_DWORD *)v42 + 15),
          v14,
          *(char **)(*(_QWORD *)&v17 + 80LL),
          *(_DWORD *)(*(_QWORD *)&v17 + 88LL),
          *(_DWORD *)(*(_QWORD *)&v17 + 56LL),
          *(_DWORD *)(*(_QWORD *)&v17 + 60LL),
          v59,
          &v158,
          v75,
          v71);
      }
      v76 = v158.left;
      v160 = v158;
      v77 = v158.right;
      v78 = v158.top;
      v79 = v158.bottom;
      goto LABEL_187;
    }
  }
  if ( v112 < v108 )
    goto LABEL_208;
  if ( v59->bottom < v67 )
    goto LABEL_208;
  v80 = v68 + v66;
  if ( v68 + v66 < (unsigned int)v66 )
    goto LABEL_208;
  if ( v80 >= 0x3FFFFFF5 )
    goto LABEL_208;
  v81 = PALLOCMEM2(4 * v80 + 40, 1752462151LL, 0);
  v138 = (BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v81;
  if ( !v81 )
    goto LABEL_208;
  *(_DWORD *)v142 = 1;
  v82 = v134;
  vInitStrDDA((struct _STRDDA *)v81, &v158, v127, v134);
  v160 = *(struct _RECTL *)v81;
  v83 = v116;
  if ( v116 )
  {
    if ( (*(_BYTE *)(v116 + 4) & 1) != 0 )
      v83 = 0LL;
    v116 = v83;
  }
  if ( v126 )
    v126 &= -(__int64)(*(_BYTE *)(v126 + 20) != 0);
  v142 = (void (**)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *))(&apfnWrite)[*((unsigned int *)v42 + 24)];
  if ( v105 )
    *((_DWORD *)v81 + 5) = (v101 != 1) - 1;
  pso = (SURFOBJ *)*(&apfnRead + 3 * *(unsigned int *)(*(_QWORD *)&v17 + 96LL) + v101 - 1);
  v134 = (struct _RECTL *)pso;
  v84 = v160.right - v160.left;
  if ( v127->right - v127->left <= v82->right - v82->left )
  {
    if ( v84 + 3 < v84 )
      goto LABEL_207;
    v85 = (v84 + 3) >> 1;
    if ( v85 >= 0x15555553 )
      goto LABEL_207;
  }
  else
  {
    if ( v84 >= 0x15555553 )
    {
LABEL_207:
      Win32FreePool(v81);
      goto LABEL_208;
    }
    v85 = v160.right - v160.left;
  }
  v86 = 12 * (v85 + 2);
  if ( v84 > 0x5F5E100 )
    goto LABEL_207;
  if ( (unsigned int)v86 > 0x2710000 )
    goto LABEL_207;
  v87 = (HSURF)AllocFreeTmpBuffer(v86);
  hsurf = v87;
  if ( !v87 )
    goto LABEL_207;
  v125 = (struct _SURFOBJ *)(*(_QWORD *)(*(_QWORD *)&v17 + 80LL) + *(_DWORD *)(*(_QWORD *)&v17 + 88LL) * v158.top);
  if ( *(_QWORD *)&v140.left )
  {
    v108 = v158.left + *(_DWORD *)v137[0] - v127->left;
    v88 = (struct _SURFOBJ *)(*(_QWORD *)(v141 + 80)
                            + *(_DWORD *)(v141 + 88) * (v158.top + *((_DWORD *)v137[0] + 1) - v127->top));
  }
  else
  {
    v88 = 0LL;
  }
  v114 = v88;
  v89 = v105;
  if ( v105 )
  {
    v90 = -1;
    if ( v101 != 1 )
      v90 = 0;
    vInitBuffer((struct _STRRUN *)v87, &v160, v90);
    v112 = v91;
    v89 = v105;
  }
  *(_DWORD *)v87 = *(_DWORD *)(HSURF)((int)v81 + 4);
  v92 = v158.top;
  for ( i = 0; ; ++i )
  {
    v104 = i;
    v102 = v92;
    if ( v92 >= v158.bottom )
      break;
    v94 = *(_DWORD *)(*((_QWORD *)v81 + 3) + 4LL * i);
    *((_DWORD *)v87 + 1) = v94;
    if ( v94 )
    {
      v95 = ((__int64 (__fastcall *)(void *, HSURF, struct _SURFOBJ *, struct _SURFOBJ *, unsigned __int64, LONG, LONG, int))pso)(
              v81,
              v87,
              v125,
              v88,
              v116,
              v158.left,
              v158.right,
              v108);
      ((void (__fastcall *)(HSURF, __int64, struct SURFACE *, unsigned __int64))v142)(v87, v95, v42, v126);
      v92 = v102;
      v89 = v105;
      if ( v105 )
      {
        vInitBuffer((struct _STRRUN *)v87, &v160, v112);
        v92 = v102;
        v89 = v105;
      }
      i = v104;
      v88 = v114;
    }
    else if ( v89 )
    {
      ((void (__fastcall *)(void *, HSURF, struct _SURFOBJ *, _QWORD, unsigned __int64, LONG, LONG, _DWORD))pso)(
        v81,
        v87,
        v125,
        0LL,
        v116,
        v158.left,
        v158.right,
        0);
      v88 = v114;
      v92 = v102;
      i = v104;
      v89 = v105;
    }
    v125 = (struct _SURFOBJ *)((char *)v125 + *(int *)(*(_QWORD *)&v17 + 88LL));
    *(_DWORD *)v87 += *((_DWORD *)v87 + 1);
    if ( v88 )
    {
      v88 = (struct _SURFOBJ *)((char *)v88 + *(int *)(v141 + 88));
      v114 = v88;
    }
    ++v92;
  }
  FreeTmpBuffer(v87);
  Win32FreePool(v81);
  v79 = v160.bottom;
  v77 = v160.right;
  v78 = v160.top;
  v76 = v160.left;
LABEL_187:
  v96 = v131;
  if ( v42 == (struct SURFACE *)v131 )
  {
LABEL_188:
    SURFMEM::~SURFMEM((SURFMEM *)&v121);
    goto LABEL_77;
  }
  v160.left = v120 + v76;
  v160.top = HIDWORD(v120) + v78;
  v160.right = v120 + v77;
  v160.bottom = HIDWORD(v120) + v79;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v136);
  if ( !v136[0] )
    goto LABEL_190;
  v97 = v128;
  if ( v128 )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v137);
    if ( v137[0] )
    {
      RGNOBJ::vSet((RGNOBJ *)v137, &v160);
      v98 = RGNOBJ::bMerge((RGNOBJ *)v136, (struct RGNOBJ *)v137, (XCLIPOBJ *)((char *)v97 + 56), BYTE1(gafjRgnOp));
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v137);
      if ( v98 )
      {
        v96 = v131;
        goto LABEL_197;
      }
    }
    else
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v137);
    }
LABEL_190:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v136);
    goto LABEL_208;
  }
  RGNOBJ::vSet((RGNOBJ *)v136, &v160);
LABEL_197:
  v168 = *(struct _RECTL *)((char *)v136[0] + 88);
  if ( v97 && !bIntersect(&v168, (const struct _RECTL *)((char *)v97 + 4), &v168)
    || (ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v173, v136[0], (struct ERECTL *)&v168, 1), ERECTL::bEmpty((ERECTL *)v174)) )
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v136);
    goto LABEL_188;
  }
  v159.left += v120;
  v159.top += HIDWORD(v120);
  v159.right += v120;
  v159.bottom += HIDWORD(v120);
  v120 = 0LL;
  if ( (*(_DWORD *)(v96 + 112) & 0x400) != 0 )
    v99 = v21[355];
  else
    v99 = EngCopyBits;
  if ( v117 )
    v18 = (char *)v117 + 24;
  ((void (__fastcall *)(__int64, char *, _BYTE *, unsigned __int64, struct _RECTL *, __int64 *))v99)(
    v96 + 24,
    v18,
    v173,
    v129 & -(__int64)(v143 != 0),
    &v159,
    &v120);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v136);
  SURFMEM::~SURFMEM((SURFMEM *)&v121);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v124);
  SURFMEM::~SURFMEM((SURFMEM *)&v117);
  SURFMEM::~SURFMEM((SURFMEM *)&v144);
  return 1LL;
}
