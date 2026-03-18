/*
 * XREFs of ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C025ED3C
 * Callers:
 *     EngStretchBlt @ 0x1C00A2F70 (EngStretchBlt.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0090AA4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z @ 0x1C00A0290 (-vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z.c)
 *     ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C00A2924 (-StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00A5154 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     EngHTBlt @ 0x1C00CD750 (EngHTBlt.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00D9F14 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0138FF0 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C0139028 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0139314 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02721F8 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall EngStretchBltOld(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        SURFOBJ *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11,
        int *a12)
{
  struct _RECTL *v14; // rsi
  __int64 v15; // rdi
  SIZEL v16; // r13
  unsigned int v17; // r15d
  int v18; // edx
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rbx
  int v22; // r12d
  SURFOBJ *v23; // rcx
  int v24; // eax
  SURFOBJ *v25; // r10
  __int64 v26; // r8
  int v27; // eax
  int v28; // ecx
  LONG hsurf_high; // eax
  LONG dhsurf_high; // r10d
  LONG v31; // r8d
  LONG v32; // eax
  LONG dhsurf; // r9d
  LONG v34; // edx
  int v35; // eax
  int v36; // r11d
  int v37; // ecx
  struct _SURFOBJ *v38; // r9
  LONG v39; // ecx
  LONG v40; // eax
  SURFOBJ *v41; // r14
  XCLIPOBJ *v42; // rsi
  int left; // ecx
  int top; // eax
  LONG right; // r8d
  LONG bottom; // edx
  LONG v47; // edx
  SURFOBJ *v48; // rax
  int v49; // r14d
  int v50; // ecx
  int v51; // eax
  __m128i *v52; // rax
  __int64 v53; // r14
  int v54; // eax
  struct _XRUNLEN *(**v55)(struct _STRDDA *, struct _STRRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // rax
  struct _RECTL *v56; // rbx
  int dhpdev; // eax
  SIZEL v58; // r8
  int v59; // eax
  int v60; // ecx
  signed int v61; // r9d
  LONG v62; // r11d
  int v63; // r10d
  int v64; // edx
  int v65; // r8d
  int v66; // edx
  XCLIPOBJ *v67; // rdi
  int v68; // eax
  struct _RECTL *v69; // rax
  LONG v70; // eax
  LONG v71; // ecx
  LONG v72; // edx
  LONG v73; // r8d
  unsigned int v74; // ecx
  void *v75; // rsi
  unsigned int v76; // r8d
  unsigned int v77; // eax
  __int64 v78; // rcx
  HSURF v79; // rbx
  struct _RECTL *v80; // r10
  struct _RECTL *v81; // r11
  unsigned int v82; // r8d
  unsigned int v83; // r8d
  LONG v84; // r8d
  int i; // r9d
  int v86; // edx
  XCLIPOBJ *v87; // rsi
  int v88; // ebx
  int v90; // [rsp+70h] [rbp-3D8h]
  LONG v91; // [rsp+70h] [rbp-3D8h]
  int v92; // [rsp+74h] [rbp-3D4h]
  LONG v93; // [rsp+74h] [rbp-3D4h]
  int v94; // [rsp+74h] [rbp-3D4h]
  unsigned int v95; // [rsp+78h] [rbp-3D0h]
  LONG v96; // [rsp+7Ch] [rbp-3CCh]
  int v97; // [rsp+7Ch] [rbp-3CCh]
  int v98; // [rsp+7Ch] [rbp-3CCh]
  int v99; // [rsp+80h] [rbp-3C8h]
  struct _SURFOBJ *v100; // [rsp+88h] [rbp-3C0h]
  struct _SURFOBJ *v101; // [rsp+88h] [rbp-3C0h]
  struct _RECTL *v102; // [rsp+90h] [rbp-3B8h]
  struct _RECTL *v103; // [rsp+90h] [rbp-3B8h]
  struct _RECTL *v104; // [rsp+98h] [rbp-3B0h]
  struct _RECTL *v105; // [rsp+98h] [rbp-3B0h]
  SURFOBJ *v106; // [rsp+A0h] [rbp-3A8h] BYREF
  char v107; // [rsp+A8h] [rbp-3A0h]
  int v108; // [rsp+ACh] [rbp-39Ch]
  __int64 v109; // [rsp+B0h] [rbp-398h]
  SIZEL v110; // [rsp+B8h] [rbp-390h] BYREF
  char v111; // [rsp+C0h] [rbp-388h]
  int v112; // [rsp+C4h] [rbp-384h]
  struct REGION *v113[2]; // [rsp+C8h] [rbp-380h] BYREF
  unsigned int v114; // [rsp+D8h] [rbp-370h]
  struct _XRUNLEN *(**v115)(struct _STRDDA *, struct _STRRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+E0h] [rbp-368h]
  unsigned __int64 v116; // [rsp+E8h] [rbp-360h]
  XCLIPOBJ *v117; // [rsp+F0h] [rbp-358h]
  SURFOBJ *pso; // [rsp+F8h] [rbp-350h]
  __int64 v119; // [rsp+100h] [rbp-348h]
  SIZEL sizl; // [rsp+108h] [rbp-340h]
  int v121; // [rsp+110h] [rbp-338h]
  struct _SURFOBJ *v122; // [rsp+118h] [rbp-330h]
  struct _POINTL *v123; // [rsp+120h] [rbp-328h]
  struct tagCOLORADJUSTMENT *v124; // [rsp+128h] [rbp-320h]
  struct REGION *v125[2]; // [rsp+130h] [rbp-318h] BYREF
  __int64 v126; // [rsp+140h] [rbp-308h]
  HSURF hsurf; // [rsp+148h] [rbp-300h]
  struct _CLIPOBJ *v128; // [rsp+150h] [rbp-2F8h]
  void (**v129)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+158h] [rbp-2F0h]
  _QWORD v130[2]; // [rsp+160h] [rbp-2E8h] BYREF
  int v131; // [rsp+170h] [rbp-2D8h]
  struct _RECTL v132; // [rsp+178h] [rbp-2D0h] BYREF
  __int64 v133; // [rsp+188h] [rbp-2C0h] BYREF
  char v134; // [rsp+190h] [rbp-2B8h]
  int v135; // [rsp+194h] [rbp-2B4h]
  struct _CLIPOBJ *v136; // [rsp+198h] [rbp-2B0h]
  struct _CLIPOBJ *v137; // [rsp+1A0h] [rbp-2A8h]
  __int64 v138; // [rsp+1A8h] [rbp-2A0h]
  __int64 v139; // [rsp+1B0h] [rbp-298h] BYREF
  int v140; // [rsp+1B8h] [rbp-290h]
  int v141; // [rsp+1BCh] [rbp-28Ch]
  PVOID pvBits; // [rsp+1C0h] [rbp-288h] BYREF
  __int64 v143; // [rsp+1C8h] [rbp-280h]
  struct _XLATEOBJ *v144; // [rsp+1D0h] [rbp-278h]
  __int64 v145; // [rsp+1D8h] [rbp-270h] BYREF
  __int64 v146; // [rsp+1E0h] [rbp-268h] BYREF
  _QWORD v147[4]; // [rsp+1E8h] [rbp-260h] BYREF
  _QWORD v148[4]; // [rsp+208h] [rbp-240h] BYREF
  struct _RECTL v149; // [rsp+228h] [rbp-220h] BYREF
  struct _RECTL v150; // [rsp+238h] [rbp-210h] BYREF
  struct _RECTL v151; // [rsp+248h] [rbp-200h] BYREF
  __int64 v152; // [rsp+258h] [rbp-1F0h] BYREF
  int v153; // [rsp+260h] [rbp-1E8h]
  int v154; // [rsp+264h] [rbp-1E4h]
  __m128i v155; // [rsp+268h] [rbp-1E0h] BYREF
  __int64 v156; // [rsp+278h] [rbp-1D0h]
  unsigned int v157; // [rsp+280h] [rbp-1C8h]
  LONG v158; // [rsp+284h] [rbp-1C4h]
  struct _RECTL v159; // [rsp+288h] [rbp-1C0h] BYREF
  struct _RECTL v160; // [rsp+298h] [rbp-1B0h] BYREF
  int v161; // [rsp+2A8h] [rbp-1A0h] BYREF
  struct _RECTL v162; // [rsp+2ACh] [rbp-19Ch] BYREF
  _BYTE v163[160]; // [rsp+2C0h] [rbp-188h] BYREF
  char v164[4]; // [rsp+360h] [rbp-E8h] BYREF
  char v165[156]; // [rsp+364h] [rbp-E4h] BYREF

  v117 = (XCLIPOBJ *)a4;
  v122 = a3;
  v100 = a2;
  v116 = (unsigned __int64)a1;
  v115 = (struct _XRUNLEN *(**)(struct _STRDDA *, struct _STRRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int))a5;
  v144 = a5;
  v136 = a4;
  v128 = a4;
  v137 = a4;
  v124 = a6;
  v123 = a7;
  v102 = (struct _RECTL *)a8;
  v14 = a9;
  v104 = a9;
  *(_QWORD *)&v132.left = a10;
  v95 = a11;
  v129 = (void (**)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *))a12;
  if ( a11 - 1 > 3 )
    return 0LL;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v119 = v15;
  v16 = (SIZEL)SURFOBJ_TO_SURFACE(a2);
  v126 = SURFOBJ_TO_SURFACE(a3);
  v17 = 0;
  if ( !v15 )
    return 0LL;
  if ( !*(_QWORD *)&v16 )
    return 0LL;
  v18 = *(_DWORD *)(v15 + 96);
  if ( (unsigned int)(v18 - 7) <= 2 )
    return 0LL;
  v19 = *(_DWORD *)(*(_QWORD *)&v16 + 96LL);
  if ( v19 == 9 || v18 == 10 || v19 == 10 )
    return 0LL;
  if ( a9->left != a9->right
    && a9->top != a9->bottom
    && LODWORD(a8->dhsurf) != LODWORD(a8->hsurf)
    && HIDWORD(a8->dhsurf) != HIDWORD(a8->hsurf) )
  {
    v20 = *(_QWORD *)(v15 + 48);
    v130[0] = v20;
    v138 = v20;
    v21 = *(_QWORD *)(*(_QWORD *)&v16 + 48LL);
    v143 = v21;
    v133 = 0LL;
    v134 = 0;
    v135 = 0;
    v160 = *a9;
    v22 = 1;
    v23 = v100;
    if ( v100->iType == 1 && v21 && (*(_DWORD *)(v21 + 40) & 0x20000) != 0 )
    {
      if ( !(unsigned int)MulCopyDeviceToDIB(v100, (struct SURFMEM *)&v133, &v160) )
      {
LABEL_189:
        SURFMEM::~SURFMEM((SURFMEM *)&v133);
        return v17;
      }
      if ( !v133 )
      {
LABEL_17:
        v17 = v22;
        goto LABEL_189;
      }
      v14 = &v160;
      v104 = &v160;
      v100 = (struct _SURFOBJ *)(v133 + 24);
      v16 = (SIZEL)SURFOBJ_TO_SURFACE(v133 + 24);
      v143 = *(_QWORD *)(*(_QWORD *)&v16 + 48LL);
      v23 = v100;
    }
    if ( !v115 || (v24 = 1, (*((_DWORD *)v115 + 1) & 8) == 0) )
      v24 = 0;
    v92 = v24;
    v131 = v24;
    if ( v24 )
    {
      if ( v23->iType )
        goto LABEL_189;
      v25 = (SURFOBJ *)v116;
      if ( *(_WORD *)(v116 + 76) != 1 )
        goto LABEL_189;
      v26 = (__int64)v122;
      if ( v122 )
        goto LABEL_189;
    }
    else
    {
      v25 = (SURFOBJ *)v116;
      v26 = (__int64)v122;
    }
    if ( a11 == 4 )
    {
      if ( v24 )
        goto LABEL_189;
      v27 = EngHTBlt(
              v25,
              v23,
              v26,
              (CLIPOBJ *)v117,
              (struct XLATE *)v115,
              v124,
              (__int64)v123,
              a8,
              &v14->left,
              *(__int64 **)&v132.left,
              0,
              0LL);
      if ( v27 == -1 )
        goto LABEL_189;
      if ( v27 )
      {
        if ( v27 == 1 )
          goto LABEL_17;
      }
      else
      {
        v95 = 3;
      }
    }
    v28 = 0;
    v90 = 0;
    hsurf_high = HIDWORD(a8->hsurf);
    dhsurf_high = HIDWORD(a8->dhsurf);
    v31 = hsurf_high;
    if ( hsurf_high < dhsurf_high )
    {
      v31 = HIDWORD(a8->dhsurf);
      HIDWORD(a8->dhsurf) = hsurf_high;
      HIDWORD(a8->hsurf) = dhsurf_high;
      v28 = 2;
      v90 = 2;
      dhsurf_high = hsurf_high;
    }
    v32 = (LONG)a8->hsurf;
    dhsurf = (LONG)a8->dhsurf;
    v34 = v32;
    if ( v32 < SLODWORD(a8->dhsurf) )
    {
      v34 = (LONG)a8->dhsurf;
      LODWORD(a8->dhsurf) = v32;
      LODWORD(a8->hsurf) = dhsurf;
      v90 = v28 | 1;
      dhsurf = v32;
    }
    v35 = v95;
    if ( v95 >= 3 || (v36 = 1, v126) )
      v36 = 0;
    v99 = v36;
    if ( v36 && v34 - dhsurf >= v14->right - v14->left )
    {
      if ( v31 - dhsurf_high >= v14->bottom - v14->top )
        v36 = 0;
      v99 = v36;
    }
    v121 = v36;
    if ( !v36 )
    {
      if ( v95 < 3 )
        v35 = 3;
      v95 = v35;
    }
    v37 = *(_DWORD *)(v119 + 112);
    if ( (v37 & 0x40000) == 0 )
    {
      if ( v115 && (*((_DWORD *)v115 + 1) & 1) == 0 )
      {
        v38 = v100;
      }
      else
      {
        v38 = v100;
        if ( !v100->iType )
          goto LABEL_55;
      }
      if ( *(_WORD *)(v119 + 100) )
      {
        if ( (v37 & 2) != 0 && !v90 && !v122 )
        {
          left = v14->left;
          if ( v14->left >= 0 )
          {
            top = v14->top;
            if ( top >= 0 )
            {
              right = v14->right;
              if ( right <= v38->sizlBitmap.cx )
              {
                bottom = v14->bottom;
                if ( bottom <= v38->sizlBitmap.cy )
                {
                  v114 = right - left;
                  sizl.cx = right - left;
                  v47 = bottom - top;
                  v96 = v47;
                  sizl.cy = v47;
                  if ( right - left <= LODWORD(a8->hsurf) - LODWORD(a8->dhsurf)
                    && v47 <= HIDWORD(a8->hsurf) - HIDWORD(a8->dhsurf) )
                  {
                    hsurf = (HSURF)EngCreateBitmap(sizl, 0, *(_DWORD *)(v116 + 72), 0, 0LL);
                    v48 = EngLockSurface(hsurf);
                    pso = v48;
                    if ( v48 )
                    {
                      v48->iUniq = 0;
                      v156 = 0LL;
                      v157 = v114;
                      v158 = v96;
                      if ( !(unsigned int)_guard_dispatch_icall_fptr()
                        || !*(_QWORD *)(v20 + 2840)
                        || !(unsigned int)_guard_dispatch_icall_fptr() )
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
LABEL_55:
    v106 = 0LL;
    v107 = 0;
    v108 = 0;
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v163);
    v39 = *(_DWORD *)(*(_QWORD *)&v16 + 60LL);
    v40 = *(_DWORD *)(*(_QWORD *)&v16 + 56LL);
    *(_QWORD *)&v149.left = 0LL;
    v149.right = v40;
    v149.bottom = v39;
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v113);
    if ( *(_WORD *)(v119 + 100) || *(_QWORD *)(v119 + 32) == *(_QWORD *)(*(_QWORD *)&v16 + 32LL) )
    {
      v155 = *(__m128i *)&a8->dhsurf;
      v49 = _mm_cvtsi128_si32(v155);
      v150.left = v49 - 1;
      v150.top = v155.m128i_i32[1] - 1;
      v97 = _mm_cvtsi128_si32(_mm_srli_si128(v155, 8));
      v150.right = v97 + 1;
      v150.bottom = _mm_srli_si128(v155, 8).m128i_i32[1] + 1;
      v50 = *(_DWORD *)(v119 + 60);
      v51 = *(_DWORD *)(v119 + 56);
      v139 = 0LL;
      v140 = v51;
      v141 = v50;
      ERECTL::operator*=(&v150.left, (int *)&v139);
      if ( ERECTL::bEmpty((ERECTL *)&v150) )
        goto LABEL_76;
      if ( *(_WORD *)(v119 + 100)
        || v150.left <= v14->right && v150.right >= v14->left && v150.top <= v14->bottom && v150.bottom >= v14->top )
      {
        v155.m128i_i32[0] = v49 - v150.left;
        v155.m128i_i32[1] -= v150.top;
        v155.m128i_i32[2] = v97 - v150.left;
        v155.m128i_i32[3] -= v150.top;
        memset(v147, 0, sizeof(v147));
        HIDWORD(v147[0]) = v150.right - v150.left + 1;
        LODWORD(v147[1]) = v150.bottom - v150.top + 1;
        v147[2] = 0LL;
        v53 = v119;
        if ( v92 )
          v54 = *(_DWORD *)(*(_QWORD *)&v16 + 96LL);
        else
          v54 = *(_DWORD *)(v119 + 96);
        LODWORD(v147[0]) = v54;
        LODWORD(v147[3]) = *(_DWORD *)(v119 + 112) & 0x40000;
        SURFMEM::bCreateDIB((SURFMEM *)&v106, (struct _DEVBITMAPINFO *)v147, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !v106 )
          goto LABEL_188;
        v109 = *(_QWORD *)&v150.left;
        if ( !v113[0] )
          goto LABEL_188;
        *(_QWORD *)&v150.left = 0LL;
        v150.right -= v109;
        v150.bottom -= HIDWORD(v109);
        RGNOBJ::vSet((RGNOBJ *)v113, &v150);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v163, v113[0], (struct ERECTL *)&v150, 1);
        v145 = *(_QWORD *)(v53 + 48);
        PDEVOBJ::vSync((PDEVOBJ *)&v145, (struct _SURFOBJ *)(v53 + 24), 0LL, 0);
        if ( v126 )
          _guard_dispatch_icall_fptr();
        v41 = v106;
        pso = v106;
        v52 = &v155;
        v42 = (XCLIPOBJ *)v163;
      }
      else
      {
        v41 = (SURFOBJ *)v119;
        pso = (SURFOBJ *)v119;
        v52 = (__m128i *)a8;
        v42 = v117;
      }
      v102 = (struct _RECTL *)v52;
    }
    else
    {
      v41 = (SURFOBJ *)v119;
      pso = (SURFOBJ *)v119;
      v42 = v117;
    }
    v116 = (unsigned __int64)v42;
    v146 = *(_QWORD *)(*(_QWORD *)&v16 + 48LL);
    PDEVOBJ::vSync((PDEVOBJ *)&v146, v100, 0LL, 0);
    ERECTL::operator*=(&v149.left, &v104->left);
    if ( !ERECTL::bEmpty((ERECTL *)&v149) )
    {
      v110 = 0LL;
      v111 = 0;
      v112 = 0;
      if ( v90 || *(_WORD *)(*(_QWORD *)&v16 + 100LL) || (unsigned int)(*(_DWORD *)(*(_QWORD *)&v16 + 96LL) - 7) <= 1 )
      {
        memset(v148, 0, sizeof(v148));
        HIDWORD(v148[0]) = v149.right - v149.left;
        LODWORD(v148[1]) = v149.bottom - v149.top;
        v148[2] = 0LL;
        if ( v92 )
          dhpdev = *(_DWORD *)(*(_QWORD *)&v16 + 96LL);
        else
          dhpdev = (int)v41[1].dhpdev;
        LODWORD(v148[0]) = dhpdev;
        LODWORD(v148[3]) = *(_DWORD *)(*(_QWORD *)&v16 + 112LL) & 0x40000;
        SURFMEM::bCreateDIB((SURFMEM *)&v110, (struct _DEVBITMAPINFO *)v148, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !*(_QWORD *)&v110 )
          goto LABEL_187;
        v152 = 0LL;
        v153 = v149.right - v149.left;
        v154 = v149.bottom - v149.top;
        _guard_dispatch_icall_fptr();
        LODWORD(v152) = v104->left - v149.left;
        HIDWORD(v152) = v104->top - v149.top;
        v153 = v104->right - v149.left;
        v154 = v104->bottom - v149.top;
        v58 = v110;
        v16 = v110;
        sizl = v110;
        v56 = (struct _RECTL *)&v152;
        v104 = (struct _RECTL *)&v152;
        v101 = 0LL;
        v149.right -= v149.left;
        v59 = v149.bottom - v149.top;
        v149.bottom -= v149.top;
        *(_QWORD *)&v149.left = 0LL;
        if ( (v90 & 2) != 0 )
        {
          v60 = *(_DWORD *)(*(_QWORD *)&v110 + 88LL);
          if ( v60 <= 0 )
            *(_QWORD *)(*(_QWORD *)&v110 + 80LL) = *(_QWORD *)(*(_QWORD *)&v110 + 72LL);
          else
            *(_QWORD *)(*(_QWORD *)&v110 + 80LL) = *(_QWORD *)(*(_QWORD *)&v110 + 72LL) + v60 * (v59 - 1);
          *(_DWORD *)(*(_QWORD *)&v110 + 88LL) = -*(_DWORD *)(*(_QWORD *)&v110 + 88LL);
          v58 = v110;
        }
        if ( (v90 & 1) != 0 )
        {
          if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)&v58 + 96LL) - 1) > 5 )
          {
LABEL_187:
            SURFMEM::~SURFMEM((SURFMEM *)&v110);
LABEL_188:
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v113);
            SURFMEM::~SURFMEM((SURFMEM *)&v106);
            goto LABEL_189;
          }
          _guard_dispatch_icall_fptr();
        }
      }
      else
      {
        sizl = v16;
        v55 = 0LL;
        if ( !v92 )
          v55 = v115;
        v101 = (struct _SURFOBJ *)v55;
        v56 = v104;
      }
      pvBits = v41->pvBits;
      PDEVOBJ::vSync((PDEVOBJ *)&pvBits, (struct _SURFOBJ *)&v41->hdev, 0LL, 0);
      v114 = v56->right;
      v61 = v114 - v56->left;
      if ( v61 >= 128000000 )
        goto LABEL_187;
      v62 = v56->bottom;
      v93 = v56->top;
      v63 = v62 - v93;
      if ( v62 - v93 >= 128000000 )
        goto LABEL_187;
      v64 = v102->right - v102->left;
      if ( v64 >= 128000000 )
        goto LABEL_187;
      v65 = v102->bottom - v102->top;
      if ( v65 >= 128000000 || v64 <= -128000000 || v65 <= -128000000 )
        goto LABEL_187;
      if ( v95 == 3 && !v122 && (!v101 || (HIDWORD(v101->dhsurf) & 1) != 0) )
      {
        v66 = *(_DWORD *)(*(_QWORD *)&v16 + 96LL);
        if ( LODWORD(v41[1].dhpdev) == v66 && ((v66 - 3) & 0xFFFFFFFC) == 0 && v66 != 5 )
        {
          if ( v42 && *((_BYTE *)v42 + 20) == 3 )
          {
            *(_QWORD *)&v132.left = 0LL;
            *(_QWORD *)&v132.right = 0LL;
            *(_QWORD *)&v149.right = 0LL;
            *(_QWORD *)&v149.left = 0LL;
            v67 = v117;
            XCLIPOBJ::cEnumStart(v117, 0, 0, 4u, 0);
            do
            {
              v68 = XCLIPOBJ::bEnum(v67, 0x14u, (char *)&v161, 0LL);
              v98 = v68;
              if ( v161 )
              {
                StretchDIBDirect(
                  v41[1].dhsurf,
                  LODWORD(v41[1].hsurf),
                  (int)v41->pvScan0,
                  HIDWORD(v41->pvScan0),
                  v102,
                  *(void **)(*(_QWORD *)&v16 + 80LL),
                  *(_DWORD *)(*(_QWORD *)&v16 + 88LL),
                  *(_DWORD *)(*(_QWORD *)&v16 + 56LL),
                  *(_DWORD *)(*(_QWORD *)&v16 + 60LL),
                  v56,
                  &v132,
                  &v162);
                ERECTL::operator+=((unsigned int *)&v149, (unsigned int *)&v132);
                v68 = v98;
              }
            }
            while ( v68 );
          }
          else
          {
            v69 = v102;
            if ( v42 && *((_BYTE *)v42 + 20) == 1 )
              v69 = (struct _RECTL *)((char *)v42 + 4);
            StretchDIBDirect(
              v41[1].dhsurf,
              LODWORD(v41[1].hsurf),
              (int)v41->pvScan0,
              HIDWORD(v41->pvScan0),
              v102,
              *(void **)(*(_QWORD *)&v16 + 80LL),
              *(_DWORD *)(*(_QWORD *)&v16 + 88LL),
              *(_DWORD *)(*(_QWORD *)&v16 + 56LL),
              *(_DWORD *)(*(_QWORD *)&v16 + 60LL),
              v56,
              &v149,
              v69);
          }
          v70 = v149.left;
          v151 = v149;
          v71 = v149.right;
          v72 = v149.top;
          v73 = v149.bottom;
          goto LABEL_172;
        }
      }
      if ( (signed int)v114 < v56->left )
        goto LABEL_187;
      if ( v62 < v93 )
        goto LABEL_187;
      v74 = v63 + v61;
      if ( v63 + v61 < (unsigned int)v61 )
        goto LABEL_187;
      if ( v74 >= 0x3FFFFFF5 )
        goto LABEL_187;
      v75 = PALLOCMEM2(4 * v74 + 40, 1752462151LL, 0);
      v124 = (struct tagCOLORADJUSTMENT *)v75;
      if ( !v75 )
        goto LABEL_187;
      *(_DWORD *)v129 = 1;
      vInitStrDDA((struct _STRDDA *)v75, &v149, v56, v102);
      v151 = *(struct _RECTL *)v75;
      if ( v116 )
        v116 &= -(__int64)(*(_BYTE *)(v116 + 20) != 0);
      v129 = (void (**)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *))(&apfnWrite)[LODWORD(v41[1].dhpdev)];
      if ( v99 )
        *((_DWORD *)v75 + 5) = (v95 != 1) - 1;
      v115 = (struct _XRUNLEN *(**)(struct _STRDDA *, struct _STRRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int))*(&apfnRead + 3 * *(unsigned int *)(*(_QWORD *)&v16 + 96LL) + v95 - 1);
      v123 = (struct _POINTL *)v115;
      v76 = v151.right - v151.left;
      if ( v56->right - v56->left <= v102->right - v102->left )
      {
        if ( v76 + 3 < v76 )
          goto LABEL_186;
        v77 = (v76 + 3) >> 1;
        if ( v77 >= 0x15555553 )
          goto LABEL_186;
      }
      else
      {
        if ( v76 >= 0x15555553 )
          goto LABEL_186;
        v77 = v151.right - v151.left;
      }
      v78 = 12 * (v77 + 2);
      if ( v76 <= 0x5F5E100 && (unsigned int)v78 <= 0x2710000 )
      {
        v79 = (HSURF)AllocFreeTmpBuffer(v78);
        hsurf = v79;
        if ( v79 )
        {
          v80 = (struct _RECTL *)(*(_QWORD *)(*(_QWORD *)&v16 + 80LL) + *(_DWORD *)(*(_QWORD *)&v16 + 88LL) * v149.top);
          v103 = v80;
          if ( v122 )
            v81 = (struct _RECTL *)(*(_QWORD *)(v126 + 80)
                                  + *(_DWORD *)(v126 + 88)
                                  * (v149.top + *(_DWORD *)(*(_QWORD *)&v132.left + 4LL) - v104->top));
          else
            v81 = 0LL;
          v105 = v81;
          if ( v99 )
          {
            v82 = -1;
            if ( v95 != 1 )
              v82 = 0;
            vInitBuffer((struct _STRRUN *)v79, &v151, v82);
            v114 = v83;
            v80 = v103;
          }
          *(_DWORD *)v79 = *(_DWORD *)(HSURF)((int)v75 + 4);
          v84 = v149.top;
          for ( i = 0; ; ++i )
          {
            v94 = i;
            v91 = v84;
            if ( v84 >= v149.bottom )
              break;
            v86 = *(_DWORD *)(*((_QWORD *)v75 + 3) + 4LL * i);
            *((_DWORD *)v79 + 1) = v86;
            if ( v86 )
            {
              _guard_dispatch_icall_fptr();
              _guard_dispatch_icall_fptr();
              v84 = v91;
              if ( v99 )
              {
                vInitBuffer((struct _STRRUN *)v79, &v151, v114);
                v84 = v91;
              }
              i = v94;
              v80 = v103;
              v81 = v105;
            }
            else if ( v99 )
            {
              _guard_dispatch_icall_fptr();
              v81 = v105;
              v80 = v103;
              v84 = v91;
              i = v94;
            }
            v80 = (struct _RECTL *)((char *)v80 + *(int *)(*(_QWORD *)&v16 + 88LL));
            v103 = v80;
            *(_DWORD *)v79 += *((_DWORD *)v79 + 1);
            if ( v81 )
            {
              v81 = (struct _RECTL *)((char *)v81 + *(int *)(v126 + 88));
              v105 = v81;
            }
            ++v84;
          }
          FreeTmpBuffer(v79);
          Win32FreePool(v75);
          v73 = v151.bottom;
          v71 = v151.right;
          v72 = v151.top;
          v70 = v151.left;
LABEL_172:
          if ( v41 == (SURFOBJ *)v119 )
          {
LABEL_173:
            SURFMEM::~SURFMEM((SURFMEM *)&v110);
            goto LABEL_76;
          }
          v151.left = v109 + v70;
          v151.top = HIDWORD(v109) + v72;
          v151.right = v109 + v71;
          v151.bottom = HIDWORD(v109) + v73;
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v125);
          if ( !v125[0] )
            goto LABEL_175;
          v87 = v117;
          if ( !v117 )
          {
            RGNOBJ::vSet((RGNOBJ *)v125, &v151);
LABEL_181:
            v159 = *(struct _RECTL *)((char *)v125[0] + 88);
            if ( !v87 || bIntersect(&v159, (const struct _RECTL *)((char *)v87 + 4), &v159) )
            {
              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v164, v125[0], (struct ERECTL *)&v159, 1);
              if ( !ERECTL::bEmpty((ERECTL *)v165) )
              {
                v150.left += v109;
                v150.top += HIDWORD(v109);
                v150.right += v109;
                v150.bottom += HIDWORD(v109);
                v109 = 0LL;
                _guard_dispatch_icall_fptr();
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v125);
                SURFMEM::~SURFMEM((SURFMEM *)&v110);
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v113);
                SURFMEM::~SURFMEM((SURFMEM *)&v106);
                SURFMEM::~SURFMEM((SURFMEM *)&v133);
                return 1LL;
              }
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v125);
            goto LABEL_173;
          }
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v130);
          if ( v130[0] )
          {
            RGNOBJ::vSet((RGNOBJ *)v130, &v151);
            v88 = RGNOBJ::bMerge(
                    (RGNOBJ *)v125,
                    (struct RGNOBJ *)v130,
                    (struct RGNOBJ *)((unsigned __int64)&v128[2].rclBounds.top & -(__int64)(v128 != 0LL)),
                    BYTE1(gafjRgnOp));
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v130);
            if ( v88 )
              goto LABEL_181;
          }
          else
          {
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v130);
          }
LABEL_175:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v125);
          goto LABEL_187;
        }
      }
LABEL_186:
      Win32FreePool(v75);
      goto LABEL_187;
    }
LABEL_76:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v113);
    SURFMEM::~SURFMEM((SURFMEM *)&v106);
    goto LABEL_17;
  }
  return 1LL;
}
