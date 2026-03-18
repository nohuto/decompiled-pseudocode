/*
 * XREFs of ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00A3068
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
 *     ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C00D9B80 (-vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00D9F14 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C00FEAF0 (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0138FF0 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C0139028 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0139314 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02721F8 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall EngStretchBltNew(
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
        unsigned int a11)
{
  struct _RECTL *v13; // rsi
  struct _RECTL *v14; // r13
  __int64 v15; // rdi
  __int64 v16; // r14
  unsigned int v17; // r15d
  int v18; // edx
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rbx
  int v22; // r12d
  struct _SURFOBJ *v23; // rcx
  __int64 v24; // r11
  int v25; // eax
  int v26; // r10d
  int v27; // r8d
  int v28; // ecx
  LONG bottom; // eax
  LONG top; // r10d
  LONG v31; // r8d
  LONG right; // eax
  LONG left; // r9d
  LONG v34; // edx
  unsigned int v35; // ecx
  int v36; // eax
  int v37; // ecx
  struct _SURFOBJ *v38; // r9
  LONG v39; // ecx
  LONG v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r14
  XCLIPOBJ *v43; // rax
  struct _POINTL *v44; // rbx
  __int64 v45; // rax
  int v46; // ecx
  int v47; // edx
  LONG v48; // ecx
  struct _RECTL *v49; // rcx
  LONG v50; // eax
  LONG v51; // ecx
  LONG v52; // edx
  LONG v53; // r8d
  int v55; // eax
  XCLIPOBJ *v56; // rdi
  int v57; // eax
  __int64 v58; // rax
  char *v59; // rdx
  XCLIPOBJ *v60; // r10
  struct _RECTL v61; // xmm0
  __int64 v62; // rax
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
  SURFOBJ *v74; // rbx
  int v75; // ecx
  XCLIPOBJ *v76; // rax
  LONG v77; // r8d
  int i; // r9d
  int v79; // edx
  unsigned int v80; // r8d
  unsigned int v81; // r8d
  LONG v82; // eax
  struct _POINTL *v83; // r8
  int v84; // eax
  char v85; // dl
  int v86; // ecx
  LONG v87; // ecx
  int v88; // eax
  LONG v89; // r8d
  LONG v90; // edx
  LONG v91; // edx
  SURFOBJ *v92; // rax
  int v93; // r14d
  int v94; // ecx
  int v95; // eax
  __int64 v96; // r14
  LONG x; // eax
  XCLIPOBJ *v98; // rsi
  int v99; // ebx
  int v100; // [rsp+70h] [rbp-4F8h]
  LONG v101; // [rsp+70h] [rbp-4F8h]
  int v102; // [rsp+74h] [rbp-4F4h]
  unsigned int v103; // [rsp+78h] [rbp-4F0h]
  int v104; // [rsp+80h] [rbp-4E8h]
  int v105; // [rsp+84h] [rbp-4E4h]
  int v106; // [rsp+84h] [rbp-4E4h]
  int v107; // [rsp+84h] [rbp-4E4h]
  int v108; // [rsp+84h] [rbp-4E4h]
  struct _SURFOBJ *v109; // [rsp+88h] [rbp-4E0h]
  struct _SURFOBJ *v110; // [rsp+88h] [rbp-4E0h]
  struct _POINTL *v111; // [rsp+90h] [rbp-4D8h]
  __int64 v112; // [rsp+98h] [rbp-4D0h]
  int v113; // [rsp+A0h] [rbp-4C8h]
  LONG v114; // [rsp+A4h] [rbp-4C4h]
  __int64 v115; // [rsp+A8h] [rbp-4C0h] BYREF
  char v116; // [rsp+B0h] [rbp-4B8h]
  int v117; // [rsp+B4h] [rbp-4B4h]
  struct _SURFOBJ *v118; // [rsp+B8h] [rbp-4B0h]
  struct REGION *v119[2]; // [rsp+C0h] [rbp-4A8h] BYREF
  struct _POINTL *v120; // [rsp+D0h] [rbp-498h] BYREF
  char v121; // [rsp+D8h] [rbp-490h]
  int v122; // [rsp+DCh] [rbp-48Ch]
  SURFOBJ *pso; // [rsp+E0h] [rbp-488h]
  unsigned int v124[2]; // [rsp+E8h] [rbp-480h]
  XCLIPOBJ *v125; // [rsp+F0h] [rbp-478h]
  XCLIPOBJ *v126; // [rsp+F8h] [rbp-470h]
  struct _SURFOBJ *v127; // [rsp+100h] [rbp-468h]
  __int64 v128; // [rsp+108h] [rbp-460h]
  struct _XRUNLEN *(**v129)(struct _STRDDA *, struct _STRRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+110h] [rbp-458h]
  __int64 v130; // [rsp+118h] [rbp-450h]
  __int64 v131; // [rsp+120h] [rbp-448h]
  struct _POINTL *v132; // [rsp+128h] [rbp-440h]
  SIZEL sizl; // [rsp+130h] [rbp-438h]
  struct _POINTL *v134; // [rsp+138h] [rbp-430h]
  int v135; // [rsp+140h] [rbp-428h]
  unsigned int v136; // [rsp+144h] [rbp-424h]
  struct REGION *v137[2]; // [rsp+148h] [rbp-420h] BYREF
  __int64 v138; // [rsp+158h] [rbp-410h]
  struct _RECTL *v139; // [rsp+160h] [rbp-408h]
  __int64 v140; // [rsp+168h] [rbp-400h]
  char *v141; // [rsp+170h] [rbp-3F8h]
  HSURF hsurf; // [rsp+178h] [rbp-3F0h]
  struct _RECTL *v143; // [rsp+180h] [rbp-3E8h]
  int v144; // [rsp+188h] [rbp-3E0h]
  int v145; // [rsp+18Ch] [rbp-3DCh]
  struct _CLIPOBJ *v146; // [rsp+190h] [rbp-3D8h]
  __int64 v147; // [rsp+198h] [rbp-3D0h] BYREF
  char v148; // [rsp+1A0h] [rbp-3C8h]
  int v149; // [rsp+1A4h] [rbp-3C4h]
  struct _CLIPOBJ *v150; // [rsp+1A8h] [rbp-3C0h]
  struct _SURFOBJ *v151; // [rsp+1B0h] [rbp-3B8h]
  struct _CLIPOBJ *v152; // [rsp+1B8h] [rbp-3B0h]
  __int64 v153; // [rsp+1C0h] [rbp-3A8h]
  struct _RECTL v154; // [rsp+1C8h] [rbp-3A0h] BYREF
  struct REGION *v155[2]; // [rsp+1D8h] [rbp-390h] BYREF
  _QWORD v156[3]; // [rsp+1E8h] [rbp-380h] BYREF
  int v157; // [rsp+200h] [rbp-368h]
  int v158; // [rsp+204h] [rbp-364h]
  __int64 v159; // [rsp+208h] [rbp-360h]
  __int64 v160; // [rsp+210h] [rbp-358h] BYREF
  struct _POINTL v161; // [rsp+218h] [rbp-350h] BYREF
  __int64 v162; // [rsp+220h] [rbp-348h] BYREF
  struct _RECTL v163; // [rsp+228h] [rbp-340h] BYREF
  void (*const near *v164)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+238h] [rbp-330h]
  _QWORD v165[2]; // [rsp+240h] [rbp-328h] BYREF
  _QWORD v166[4]; // [rsp+250h] [rbp-318h] BYREF
  _QWORD v167[4]; // [rsp+270h] [rbp-2F8h] BYREF
  struct _RECTL v168; // [rsp+290h] [rbp-2D8h] BYREF
  struct _RECTL v169; // [rsp+2A0h] [rbp-2C8h] BYREF
  struct _RECTL v170; // [rsp+2B0h] [rbp-2B8h] BYREF
  struct _RECTL v171; // [rsp+2C0h] [rbp-2A8h] BYREF
  __int64 v172; // [rsp+2D0h] [rbp-298h] BYREF
  int v173; // [rsp+2D8h] [rbp-290h]
  int v174; // [rsp+2DCh] [rbp-28Ch]
  __m128i v175; // [rsp+2E0h] [rbp-288h] BYREF
  __int64 v176; // [rsp+2F0h] [rbp-278h]
  int v177; // [rsp+2F8h] [rbp-270h]
  LONG v178; // [rsp+2FCh] [rbp-26Ch]
  struct _RECTL v179; // [rsp+300h] [rbp-268h] BYREF
  struct _RECTL v180; // [rsp+310h] [rbp-258h] BYREF
  int v181; // [rsp+320h] [rbp-248h] BYREF
  struct _RECTL v182; // [rsp+324h] [rbp-244h] BYREF
  _BYTE v183[160]; // [rsp+340h] [rbp-228h] BYREF
  _BYTE v184[160]; // [rsp+3E0h] [rbp-188h] BYREF
  char v185[4]; // [rsp+480h] [rbp-E8h] BYREF
  char v186[156]; // [rsp+484h] [rbp-E4h] BYREF

  v126 = (XCLIPOBJ *)a4;
  v127 = a3;
  v109 = a2;
  v118 = a1;
  *(_QWORD *)v124 = a5;
  v165[1] = a5;
  v151 = a3;
  v152 = a4;
  v146 = a4;
  v150 = a4;
  v129 = (struct _XRUNLEN *(**)(struct _STRDDA *, struct _STRRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int))a6;
  v132 = a7;
  v13 = a8;
  v14 = a9;
  v134 = a10;
  v103 = a11;
  if ( a11 - 1 > 3 )
    return 0LL;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v128 = v15;
  v16 = SURFOBJ_TO_SURFACE(a2);
  v111 = (struct _POINTL *)v16;
  v140 = SURFOBJ_TO_SURFACE(a3);
  v17 = 0;
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
  v141 = (char *)v20;
  v153 = v20;
  v21 = *(_QWORD *)(v16 + 48);
  v159 = v21;
  v147 = 0LL;
  v148 = 0;
  v149 = 0;
  v180 = *a9;
  v22 = 1;
  v23 = v109;
  if ( v109->iType == 1 && v21 && (*(_DWORD *)(v21 + 40) & 0x20000) != 0 )
  {
    if ( !(unsigned int)MulCopyDeviceToDIB(v109, (struct SURFMEM *)&v147, &v180) )
      goto LABEL_66;
    if ( !v147 )
    {
LABEL_65:
      v17 = v22;
LABEL_66:
      SURFMEM::~SURFMEM((SURFMEM *)&v147);
      return v17;
    }
    v14 = &v180;
    v109 = (struct _SURFOBJ *)(v147 + 24);
    v16 = SURFOBJ_TO_SURFACE(v147 + 24);
    v111 = (struct _POINTL *)v16;
    v159 = *(_QWORD *)(v16 + 48);
    v23 = v109;
  }
  v24 = *(_QWORD *)v124;
  if ( !*(_QWORD *)v124 || (v25 = 1, (*(_DWORD *)(*(_QWORD *)v124 + 4LL) & 8) == 0) )
    v25 = 0;
  v102 = v25;
  v144 = v25;
  if ( v25 )
  {
    if ( v23->iType )
      goto LABEL_66;
    v26 = (int)v118;
    if ( v118->iType != 1 )
      goto LABEL_66;
    v27 = (int)v127;
    if ( v127 )
      goto LABEL_66;
  }
  else
  {
    v26 = (int)v118;
    v27 = (int)v127;
  }
  if ( a11 == 4 )
  {
    if ( v25 )
      goto LABEL_66;
    v55 = EngHTBlt(
            v26,
            (_DWORD)v23,
            v27,
            (_DWORD)v126,
            *(__int64 *)v124,
            (__int64)v129,
            (__int64)v132,
            (__int64)a8,
            (__int64)v14,
            (__int64)v134,
            0,
            0LL);
    if ( v55 == -1 )
      goto LABEL_66;
    if ( v55 )
    {
      if ( v55 == 1 )
        goto LABEL_65;
    }
    else
    {
      v103 = 3;
    }
    v24 = *(_QWORD *)v124;
  }
  v28 = 0;
  v100 = 0;
  bottom = a8->bottom;
  top = a8->top;
  v31 = bottom;
  if ( bottom < top )
  {
    v31 = a8->top;
    a8->top = bottom;
    a8->bottom = top;
    v28 = 2;
    v100 = 2;
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
    v100 = v28 | 1;
    left = right;
  }
  v35 = v103;
  if ( v103 >= 3 || (v36 = 1, v140) )
    v36 = 0;
  v104 = v36;
  if ( v36 )
  {
    if ( v34 - left >= v14->right - v14->left )
    {
      if ( v31 - top >= v14->bottom - v14->top )
        v36 = 0;
      v104 = v36;
    }
    v35 = v103;
  }
  v135 = v36;
  if ( !v36 )
  {
    if ( v35 < 3 )
      v35 = 3;
    v103 = v35;
  }
  v136 = v35;
  v37 = *(_DWORD *)(v128 + 112);
  if ( (v37 & 0x40000) == 0 )
  {
    if ( v24 && (*(_DWORD *)(v24 + 4) & 1) == 0 )
    {
      v38 = v109;
    }
    else
    {
      v38 = v109;
      if ( !v109->iType )
        goto LABEL_34;
    }
    if ( *(_WORD *)(v128 + 100) )
    {
      if ( (v37 & 2) != 0 && !v100 && !v127 )
      {
        v87 = v14->left;
        if ( v14->left >= 0 )
        {
          v88 = v14->top;
          if ( v88 >= 0 )
          {
            v89 = v14->right;
            if ( v89 <= v38->sizlBitmap.cx )
            {
              v90 = v14->bottom;
              if ( v90 <= v38->sizlBitmap.cy )
              {
                v107 = v89 - v87;
                sizl.cx = v89 - v87;
                v91 = v90 - v88;
                v114 = v91;
                sizl.cy = v91;
                if ( v89 - v87 <= a8->right - a8->left && v91 <= a8->bottom - a8->top )
                {
                  hsurf = (HSURF)EngCreateBitmap(sizl, 0, v118->iBitmapFormat, 0, 0LL);
                  v92 = EngLockSurface(hsurf);
                  pso = v92;
                  if ( v92 )
                  {
                    v92->iUniq = 0;
                    v176 = 0LL;
                    v177 = v107;
                    v178 = v114;
                    if ( !(unsigned int)_guard_dispatch_icall_fptr()
                      || !*(_QWORD *)(v20 + 2840)
                      || !(unsigned int)_guard_dispatch_icall_fptr() )
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
  v115 = 0LL;
  v116 = 0;
  v117 = 0;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v183);
  v39 = *(_DWORD *)(v16 + 60);
  v40 = *(_DWORD *)(v16 + 56);
  *(_QWORD *)&v168.left = 0LL;
  v168.right = v40;
  v168.bottom = v39;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v119);
  v41 = v128;
  if ( !*(_WORD *)(v128 + 100) && *(_QWORD *)(v128 + 32) != *(_QWORD *)(v16 + 32) )
    goto LABEL_36;
  v175 = *(__m128i *)a8;
  v93 = _mm_cvtsi128_si32(v175);
  v170.left = v93 - 1;
  v170.top = v175.m128i_i32[1] - 1;
  v108 = _mm_cvtsi128_si32(_mm_srli_si128(v175, 8));
  v170.right = v108 + 1;
  v170.bottom = _mm_srli_si128(v175, 8).m128i_i32[1] + 1;
  v94 = *(_DWORD *)(v128 + 60);
  v95 = *(_DWORD *)(v128 + 56);
  v156[2] = 0LL;
  v157 = v95;
  v158 = v94;
  ERECTL::operator*=(&v170);
  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v170) )
    goto LABEL_64;
  v41 = v128;
  if ( *(_WORD *)(v128 + 100)
    || v170.left <= v14->right && v170.right >= v14->left && v170.top <= v14->bottom && v170.bottom >= v14->top )
  {
    v175.m128i_i32[0] = v93 - v170.left;
    v175.m128i_i32[1] -= v170.top;
    v175.m128i_i32[2] = v108 - v170.left;
    v175.m128i_i32[3] -= v170.top;
    memset(v166, 0, sizeof(v166));
    HIDWORD(v166[0]) = v170.right - v170.left + 1;
    LODWORD(v166[1]) = v170.bottom - v170.top + 1;
    v166[2] = 0LL;
    v96 = v128;
    if ( v102 )
      x = v111[12].x;
    else
      x = *(_DWORD *)(v128 + 96);
    LODWORD(v166[0]) = x;
    LODWORD(v166[3]) = *(_DWORD *)(v128 + 112) & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v115, (struct _DEVBITMAPINFO *)v166, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v115 )
      goto LABEL_198;
    v112 = *(_QWORD *)&v170.left;
    if ( !v119[0] )
      goto LABEL_198;
    *(_QWORD *)&v170.left = 0LL;
    v170.right -= v112;
    v170.bottom -= HIDWORD(v112);
    RGNOBJ::vSet((RGNOBJ *)v119, &v170);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v183, v119[0], (struct ERECTL *)&v170, 1);
    v160 = *(_QWORD *)(v96 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v160, (struct _SURFOBJ *)(v96 + 24), 0LL, 0);
    if ( v140 )
      _guard_dispatch_icall_fptr();
    v42 = v115;
    v138 = v115;
    v13 = (struct _RECTL *)&v175;
    v43 = (XCLIPOBJ *)v183;
  }
  else
  {
LABEL_36:
    v42 = v41;
    v138 = v41;
    v43 = v126;
  }
  v139 = v13;
  v125 = v43;
  v161 = v111[6];
  PDEVOBJ::vSync((PDEVOBJ *)&v161, v109, 0LL, 0);
  ERECTL::operator*=(&v168);
  if ( v168.left == v168.right || v168.top == v168.bottom )
    goto LABEL_64;
  v120 = 0LL;
  v121 = 0;
  v122 = 0;
  if ( v100 || LOWORD(v111[12].y) || (unsigned int)(v111[12].x - 7) <= 1 )
  {
    memset(v167, 0, sizeof(v167));
    HIDWORD(v167[0]) = v168.right - v168.left;
    LODWORD(v167[1]) = v168.bottom - v168.top;
    v167[2] = 0LL;
    if ( v102 )
      v82 = v111[12].x;
    else
      v82 = *(_DWORD *)(v42 + 96);
    LODWORD(v167[0]) = v82;
    LODWORD(v167[3]) = v111[14].x & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v120, (struct _DEVBITMAPINFO *)v167, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v120 )
      goto LABEL_197;
    v172 = 0LL;
    v173 = v168.right - v168.left;
    v174 = v168.bottom - v168.top;
    _guard_dispatch_icall_fptr();
    LODWORD(v172) = v14->left - v168.left;
    HIDWORD(v172) = v14->top - v168.top;
    v173 = v14->right - v168.left;
    v174 = v14->bottom - v168.top;
    v83 = v120;
    v44 = v120;
    v111 = v120;
    v132 = v120;
    v14 = (struct _RECTL *)&v172;
    sizl = (SIZEL)&v172;
    v110 = 0LL;
    v168.right -= v168.left;
    v84 = v168.bottom - v168.top;
    v168.bottom -= v168.top;
    *(_QWORD *)&v168.left = 0LL;
    v85 = v100;
    if ( (v100 & 2) != 0 )
    {
      v86 = v120[11].x;
      if ( v86 > 0 )
      {
        v120[10] = (struct _POINTL)(*(_QWORD *)&v120[9] + v86 * (v84 - 1));
        v85 = v100;
      }
      else
      {
        v120[10] = v120[9];
      }
      v120[11].x = -v120[11].x;
      v83 = v120;
    }
    if ( (v85 & 1) != 0 )
    {
      if ( (unsigned int)(v83[12].x - 1) > 5 )
        goto LABEL_197;
      _guard_dispatch_icall_fptr();
    }
  }
  else
  {
    v44 = v111;
    v132 = v111;
    sizl = (SIZEL)v14;
    v45 = 0LL;
    if ( !v102 )
      v45 = *(_QWORD *)v124;
    v110 = (struct _SURFOBJ *)v45;
  }
  v162 = *(_QWORD *)(v42 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v162, (struct _SURFOBJ *)(v42 + 24), 0LL, 0);
  if ( v14->right - v14->left >= 128000000 )
    goto LABEL_197;
  if ( v14->bottom - v14->top >= 128000000 )
    goto LABEL_197;
  v46 = v13->right - v13->left;
  if ( v46 >= 128000000 )
    goto LABEL_197;
  v47 = v13->bottom - v13->top;
  if ( v47 >= 128000000 || v46 <= -128000000 || v47 <= -128000000 )
    goto LABEL_197;
  if ( v103 != 3
    || v127
    || v110 && (HIDWORD(v110->dhsurf) & 1) == 0
    || (v48 = v44[12].x, *(_DWORD *)(v42 + 96) != v48)
    || ((v48 - 3) & 0xFFFFFFFC) != 0
    || v48 == 5 )
  {
    v58 = AllocFreeTmpBuffer(324LL);
    v59 = (char *)v58;
    v141 = (char *)v58;
    if ( v58 )
    {
      v165[0] = v58;
      v60 = v125;
      if ( v125 && *((_BYTE *)v125 + 20) )
      {
        if ( *((_BYTE *)v125 + 20) != 1 )
        {
          if ( *((_BYTE *)v125 + 20) == 3 )
          {
            v102 = 1;
            XCLIPOBJ::cEnumStart(v125, 0, 0, 4u, 0x14u);
            v60 = v125;
            v59 = v141;
          }
LABEL_87:
          *(_QWORD *)&v171.right = 0LL;
          *(_QWORD *)&v171.left = 0LL;
          if ( v102 )
            goto LABEL_204;
          while ( 1 )
          {
            v62 = 0LL;
            while ( 1 )
            {
              v106 = v62;
              v59 = v141;
              if ( (unsigned int)v62 >= *(_DWORD *)v141 )
                break;
              v143 = (struct _RECTL *)&v141[16 * v62 + 4];
              v169 = 0LL;
              vInitStrDDAClip(&v168, v14, v13, v143, &v169);
              if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v169) )
              {
                --v169.left;
                --v169.top;
                ++v169.right;
                ++v169.bottom;
                ERECTL::operator*=(&v169);
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
                      v118 = (struct _SURFOBJ *)v68;
                      if ( v68 )
                      {
                        vInitStrDDA(v68, &v169, v14, v13);
                        v69 = v118;
                        v154 = *(struct _RECTL *)&v118->dhsurf;
                        v70 = v110;
                        if ( v110 )
                        {
                          if ( (BYTE4(v110->dhsurf) & 1) != 0 )
                            v70 = 0LL;
                          v110 = v70;
                        }
                        v164 = (&apfnWrite)[*(unsigned int *)(v42 + 96)];
                        if ( v104 )
                          HIDWORD(v118->dhpdev) = (v136 != 1) - 1;
                        v129 = (struct _XRUNLEN *(**)(struct _STRDDA *, struct _STRRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int))*(&apfnRead + 3 * v44[12].x + v103 - 1);
                        hsurf = (HSURF)v129;
                        v71 = v154.right - v154.left;
                        if ( v14->right - v14->left > v13->right - v13->left )
                        {
                          if ( v71 >= 0x15555553 )
                            goto LABEL_207;
                          v72 = v154.right - v154.left;
                        }
                        else
                        {
                          if ( v71 + 3 < v71 )
                            goto LABEL_207;
                          v72 = (v71 + 3) >> 1;
                          if ( v72 >= 0x15555553 )
                            goto LABEL_207;
                        }
                        v73 = 12 * (v72 + 2);
                        if ( v71 > 0x5F5E100 || (unsigned int)v73 > 0x2710000 )
                          goto LABEL_207;
                        v74 = (SURFOBJ *)AllocFreeTmpBuffer(v73);
                        pso = v74;
                        if ( !v74 )
                        {
                          v69 = v118;
LABEL_207:
                          Win32FreePool(v69);
                          goto LABEL_128;
                        }
                        v101 = v169.top;
                        v131 = *(_QWORD *)&v111[10] + v111[11].x * v169.top;
                        if ( v127 )
                        {
                          v145 = v169.left + v134->x - v14->left;
                          v130 = *(_QWORD *)(v140 + 80) + *(_DWORD *)(v140 + 88) * (v169.top + v134->y - v14->top);
                        }
                        else
                        {
                          v130 = 0LL;
                        }
                        if ( v104 )
                        {
                          v80 = -1;
                          if ( v136 != 1 )
                            v80 = 0;
                          vInitBuffer((struct _STRRUN *)v74, &v154, v80);
                          v124[0] = v81;
                        }
                        LODWORD(v74->dhsurf) = HIDWORD(v118->dhsurf);
                        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v155);
                        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v184);
                        v75 = 0;
                        v76 = v125;
                        if ( v125 && v155[0] )
                        {
                          RGNOBJ::vSet((RGNOBJ *)v155, v143);
                          XCLIPOBJ::vSetup((XCLIPOBJ *)v184, v155[0], (struct ERECTL *)v143, 1);
                          v75 = 1;
                          v76 = v125;
                        }
                        LODWORD(v143) = v75;
                        if ( !v76 || v155[0] )
                        {
                          v77 = v101;
                          for ( i = 0; ; ++i )
                          {
                            v113 = i;
                            if ( v77 >= v169.bottom )
                              break;
                            v79 = *((_DWORD *)v118->hdev + i);
                            HIDWORD(v74->dhsurf) = v79;
                            if ( v79 )
                            {
                              _guard_dispatch_icall_fptr();
                              v74 = pso;
                              _guard_dispatch_icall_fptr();
                              v77 = v101;
                              if ( v104 )
                              {
                                vInitBuffer((struct _STRRUN *)v74, &v154, v124[0]);
                                v77 = v101;
                              }
                              i = v113;
                            }
                            else if ( v104 )
                            {
                              _guard_dispatch_icall_fptr();
                              v77 = v101;
                              i = v113;
                            }
                            v131 += v111[11].x;
                            LODWORD(v74->dhsurf) += HIDWORD(v74->dhsurf);
                            if ( v130 )
                              v130 += *(int *)(v140 + 88);
                            v101 = ++v77;
                          }
                        }
                        FreeTmpBuffer(v74);
                        Win32FreePool(v118);
                        ERECTL::operator+=(&v171, &v154);
                        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v155);
                      }
                    }
                  }
                }
              }
LABEL_128:
              v62 = (unsigned int)(v106 + 1);
              v44 = v111;
            }
            v60 = v125;
            if ( !v102 )
            {
              AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(v165);
              v53 = v171.bottom;
              v51 = v171.right;
              v52 = v171.top;
              v50 = v171.left;
              goto LABEL_62;
            }
LABEL_204:
            v102 = XCLIPOBJ::bEnum(v60, 0x144u, v59, 0LL);
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
      v102 = 0;
      *(struct _RECTL *)(v58 + 4) = v61;
      goto LABEL_87;
    }
LABEL_197:
    SURFMEM::~SURFMEM((SURFMEM *)&v120);
LABEL_198:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v119);
    SURFMEM::~SURFMEM((SURFMEM *)&v115);
    goto LABEL_66;
  }
  if ( v125 && *((_BYTE *)v125 + 20) == 3 )
  {
    *(_QWORD *)&v163.left = 0LL;
    *(_QWORD *)&v163.right = 0LL;
    *(_QWORD *)&v168.right = 0LL;
    *(_QWORD *)&v168.left = 0LL;
    v56 = v126;
    XCLIPOBJ::cEnumStart(v126, 0, 0, 4u, 0);
    do
    {
      v57 = XCLIPOBJ::bEnum(v56, 0x14u, (char *)&v181, 0LL);
      v105 = v57;
      if ( v181 )
      {
        StretchDIBDirect(
          *(void **)(v42 + 80),
          *(unsigned int *)(v42 + 88),
          *(_DWORD *)(v42 + 56),
          *(_DWORD *)(v42 + 60),
          v13,
          *(void **)&v44[10],
          v44[11].x,
          v44[7].x,
          v44[7].y,
          v14,
          &v163,
          &v182);
        ERECTL::operator+=(&v168, &v163);
        v57 = v105;
      }
    }
    while ( v57 );
  }
  else
  {
    v49 = v13;
    if ( v125 && *((_BYTE *)v125 + 20) == 1 )
      v49 = (struct _RECTL *)((char *)v125 + 4);
    StretchDIBDirect(
      *(void **)(v42 + 80),
      *(unsigned int *)(v42 + 88),
      *(_DWORD *)(v42 + 56),
      *(_DWORD *)(v42 + 60),
      v13,
      *(void **)&v44[10],
      v44[11].x,
      v44[7].x,
      v44[7].y,
      v14,
      &v168,
      v49);
  }
  v50 = v168.left;
  v171 = v168;
  v51 = v168.right;
  v52 = v168.top;
  v53 = v168.bottom;
LABEL_62:
  if ( v42 == v128 )
    goto LABEL_63;
  v171.left = v112 + v50;
  v171.top = HIDWORD(v112) + v52;
  v171.right = v112 + v51;
  v171.bottom = HIDWORD(v112) + v53;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v137);
  if ( !v137[0] )
  {
LABEL_196:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v137);
    goto LABEL_197;
  }
  v98 = v126;
  if ( v126 )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v156);
    if ( v156[0] )
    {
      RGNOBJ::vSet((RGNOBJ *)v156, &v171);
      v99 = RGNOBJ::bMerge(
              (RGNOBJ *)v137,
              (struct RGNOBJ *)v156,
              (struct RGNOBJ *)((unsigned __int64)&v146[2].rclBounds.top & -(__int64)(v146 != 0LL)),
              BYTE1(gafjRgnOp));
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v156);
      if ( v99 )
        goto LABEL_213;
    }
    else
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v156);
    }
    goto LABEL_196;
  }
  RGNOBJ::vSet((RGNOBJ *)v137, &v171);
LABEL_213:
  v179 = *(struct _RECTL *)((char *)v137[0] + 88);
  if ( v98 && !bIntersect(&v179, (const struct _RECTL *)((char *)v98 + 4), &v179)
    || (ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v185, v137[0], (struct ERECTL *)&v179, 1),
        (unsigned int)ERECTL::bEmpty((ERECTL *)v186)) )
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v137);
LABEL_63:
    SURFMEM::~SURFMEM((SURFMEM *)&v120);
LABEL_64:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v119);
    SURFMEM::~SURFMEM((SURFMEM *)&v115);
    goto LABEL_65;
  }
  v170.left += v112;
  v170.top += HIDWORD(v112);
  v170.right += v112;
  v170.bottom += HIDWORD(v112);
  _guard_dispatch_icall_fptr();
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v137);
  SURFMEM::~SURFMEM((SURFMEM *)&v120);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v119);
  SURFMEM::~SURFMEM((SURFMEM *)&v115);
  SURFMEM::~SURFMEM((SURFMEM *)&v147);
  return 1LL;
}
