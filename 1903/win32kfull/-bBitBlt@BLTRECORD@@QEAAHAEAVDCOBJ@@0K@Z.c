/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0058A1C
 * Callers:
 *     GrePlgBlt @ 0x1C0008764 (GrePlgBlt.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0008AF8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreStretchBltInternal @ 0x1C0071658 (GreStretchBltInternal.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0073164 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreMaskBlt @ 0x1C007EAC4 (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00FBAD4 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C012CCA4 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00589F4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C005A464 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C005A87C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C005ED08 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0072EC4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C0073644 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C007F0E4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C010A7E0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BLTRECORD::bBitBlt(BLTRECORD *this, DC **a2, struct DCOBJ *a3, char a4)
{
  struct ERECTL *v4; // r15
  int v9; // eax
  __int64 v10; // r11
  DC *v11; // rdx
  int v12; // r12d
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rbx
  _DWORD *v16; // r12
  int v17; // edx
  int v18; // ecx
  DC *v19; // rcx
  __int64 v20; // r8
  int v21; // r10d
  int v22; // edx
  char v23; // r9
  __int64 v24; // rcx
  int v25; // r9d
  int v26; // r10d
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rcx
  struct REGION *v31; // rax
  __m128i v32; // xmm6
  __int64 v33; // rax
  int v34; // r9d
  int v35; // r10d
  int v36; // r15d
  __int64 v37; // r11
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // rcx
  bool v42; // cf
  __int128 *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  _BYTE *v46; // r8
  __int64 v49; // rsi
  __int64 v50; // r14
  struct SURFACE *v51; // rax
  SURFACE *v52; // rcx
  char *v53; // rbx
  __int64 v54; // rdi
  int (*v55)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v56; // r10
  __int64 v57; // r11
  __int64 v58; // r9
  _BYTE *v59; // r9
  struct ECLIPOBJ *v60; // rdx
  int v61; // eax
  int v62; // eax
  int v63; // edx
  int v64; // r8d
  __int64 v65; // r11
  int v66; // r15d
  struct REGION *v67; // rax
  __int64 v68; // r11
  int v69; // edx
  int v70; // r10d
  struct ECLIPOBJ *v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rbx
  int (*v74)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r10
  __int64 v78; // r11
  int v79; // ecx
  int v80; // ecx
  int v81; // r8d
  int v82; // r9d
  __int64 v83; // r11
  int v84; // r8d
  int v85; // ecx
  int v86; // ecx
  __int64 v87; // rcx
  int v88; // r9d
  int v89; // r10d
  __int64 v90; // rax
  int v91; // r8d
  int v92; // edx
  __int64 v93; // rcx
  struct REGION *v94; // rax
  __m128i v95; // xmm6
  int v96; // edx
  int v97; // r8d
  __int64 v98; // r9
  int v99; // r10d
  struct ECLIPOBJ *v100; // rdx
  __int64 v101; // rax
  int v102; // r8d
  int v103; // ecx
  int v104; // edx
  int v105; // eax
  int v106; // eax
  int v107; // r14d
  __int64 v108; // r8
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rsi
  struct SURFACE *v113; // rax
  SURFACE *v114; // rcx
  char *v115; // rbx
  __int64 v116; // r9
  struct SURFACE *v117; // rax
  XDCOBJ *v118; // rcx
  __int16 v119; // r11
  struct SURFACE *v120; // rax
  struct SURFACE *v121; // rax
  XDCOBJ *v122; // rcx
  __int16 v123; // r11
  struct SURFACE *v124; // rax
  __int64 v125; // rax
  __int64 v126; // [rsp+28h] [rbp-E0h]
  __int128 *v127; // [rsp+30h] [rbp-D8h]
  _DWORD *v128; // [rsp+38h] [rbp-D0h]
  char *v129; // [rsp+40h] [rbp-C8h]
  __int64 v130; // [rsp+48h] [rbp-C0h]
  __int64 v131; // [rsp+50h] [rbp-B8h]
  int v132; // [rsp+58h] [rbp-B0h]
  int v133; // [rsp+68h] [rbp-A0h]
  __m128i v134; // [rsp+70h] [rbp-98h] BYREF
  __int128 v135; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v136[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v137; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int64 v138; // [rsp+E8h] [rbp-20h]
  int v139; // [rsp+F0h] [rbp-18h]
  int v140; // [rsp+118h] [rbp+10h]
  __int64 v141; // [rsp+128h] [rbp+20h]
  _BYTE v142[4]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v143; // [rsp+13Ch] [rbp+34h] BYREF
  __int64 v144; // [rsp+188h] [rbp+80h]
  int v145; // [rsp+190h] [rbp+88h]
  int v146; // [rsp+1B8h] [rbp+B0h]
  __int64 v147; // [rsp+1C8h] [rbp+C0h]

  v4 = (BLTRECORD *)((char *)this + 152);
  ERECTL::vOrder((BLTRECORD *)((char *)this + 152));
  v9 = DC::bTightenRao(*a2);
  LODWORD(v10) = 0;
  if ( !v9 )
    return 0LL;
  v11 = *a2;
  if ( *((_QWORD *)*a2 + 62) )
  {
    v12 = a4 & 0xD4;
    if ( !v12 || *(_QWORD *)(*(_QWORD *)a3 + 496LL) )
    {
      if ( (*((_DWORD *)v11 + 9) & 0xE0) != 0 )
      {
        XDCOBJ::vAccumulate((XDCOBJ *)a2, v4);
        v11 = *a2;
      }
      v13 = 1;
      v14 = *((_DWORD *)v11 + 10) & 1LL;
      *(_DWORD *)v4 += *((_DWORD *)v11 + 2 * v14 + 254);
      *((_DWORD *)v4 + 2) += *((_DWORD *)v11 + 2 * v14 + 254);
      *((_DWORD *)v4 + 1) += *((_DWORD *)v11 + 2 * v14 + 255);
      *((_DWORD *)v4 + 3) += *((_DWORD *)v11 + 2 * v14 + 255);
      v15 = *(_QWORD *)(*((_QWORD *)this + 8) + 48LL);
      if ( !v12 )
      {
        v67 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
        v138 = v68;
        v139 = v68;
        v140 = 1;
        v141 = v68;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v136, v67, v4, 0);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v137) )
          return v13;
        if ( *((int *)this + 46) < 0 )
        {
          v79 = *((_DWORD *)this + 48);
          *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
          *((_DWORD *)this + 50) = v79;
        }
        if ( *((int *)this + 47) < 0 )
        {
          v80 = *((_DWORD *)this + 49);
          *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
          *((_DWORD *)this + 51) = v80;
        }
        if ( BLTRECORD::pSurfMskOut(this) )
        {
          v81 = *((_DWORD *)this + 48);
          if ( v81 < 0
            || (v82 = *((_DWORD *)this + 49), v82 < 0)
            || (v83 = *((_QWORD *)this + 10), *(_DWORD *)(v83 + 56) - v81 < (int)abs32(v69))
            || *(_DWORD *)(v83 + 60) - v82 < (int)abs32(v70) )
          {
            EngSetLastError(0x57u);
            return 0;
          }
          v84 = v137 + v81 - *(_DWORD *)v4;
          *((_DWORD *)this + 49) = DWORD1(v137) + v82 - *((_DWORD *)this + 39);
          *((_DWORD *)this + 48) = v84;
        }
        if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
        {
          v71 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
          if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v71]) & 0xE8) == 0
            || (v72 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v72 + 120) & 0x100) == 0 )
          {
            v134 = (__m128i)v137;
            XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v71, (struct ERECTL *)&v134);
          }
        }
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
        v73 = *((_QWORD *)this + 12);
        BLTRECORD::pSurfMskOut(this);
        v74 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
        return ((unsigned int (__fastcall *)(__int64, _QWORD, __int64, _BYTE *, _QWORD, struct ERECTL *, _QWORD, __int64, __int64, __int64, _DWORD))v74)(
                 v77,
                 0LL,
                 v75,
                 v136,
                 0LL,
                 v4,
                 0LL,
                 v78,
                 v73,
                 v76,
                 *((_DWORD *)this + 54));
      }
      v16 = (_DWORD *)((char *)this + 184);
      v17 = *((_DWORD *)this + 46);
      v18 = *((_DWORD *)this + 47);
      if ( v17 >= *((_DWORD *)this + 44) )
        v17 = *((_DWORD *)this + 44);
      *v16 = v17;
      if ( v18 >= *((_DWORD *)this + 45) )
        v18 = *((_DWORD *)this + 45);
      *((_DWORD *)this + 47) = v18;
      if ( *((_DWORD *)this + 44) > v17 )
      {
        v85 = *((_DWORD *)this + 48);
        *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
        *((_DWORD *)this + 50) = v85;
      }
      if ( *((_DWORD *)this + 45) > *((_DWORD *)this + 47) )
      {
        v86 = *((_DWORD *)this + 49);
        *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
        *((_DWORD *)this + 51) = v86;
      }
      v19 = *a2;
      v20 = *(_QWORD *)a3;
      if ( *(_QWORD *)(*(_QWORD *)a3 + 496LL) != *((_QWORD *)*a2 + 62) )
      {
        v21 = *((_DWORD *)v19 + 9);
        v22 = 0x20000;
        if ( (v21 & 0x200) == 0 || !v15 || (v23 = 1, (*(_DWORD *)(v15 + 40) & 0x20000) == 0) )
          v23 = v10;
        if ( *((_QWORD *)v19 + 6) != *(_QWORD *)(v20 + 48)
          && (v21 & 0x4000) == 0
          && (*(_DWORD *)(v20 + 36) & 0x4000) == 0
          && !v23 )
        {
          v117 = XDCOBJ::pSurfaceEff((XDCOBJ *)a2);
          if ( *((_WORD *)v117 + 50) != v119 || (v120 = XDCOBJ::pSurfaceEff(v118), *((_QWORD *)v120 + 3) != v10) )
          {
            v121 = XDCOBJ::pSurfaceEff(a3);
            if ( *((_WORD *)v121 + 50) != v123 )
              goto LABEL_107;
            v124 = XDCOBJ::pSurfaceEff(v122);
            if ( *((_QWORD *)v124 + 3) != v10 )
              goto LABEL_107;
          }
        }
        v24 = *((_QWORD *)this + 9);
        v25 = v10;
        v26 = v10;
        v27 = *(_QWORD *)(v24 + 48);
        if ( v27 && v24 == *(_QWORD *)(v27 + 2552) && (v22 & *(_DWORD *)(v27 + 40)) != 0 )
        {
          v25 = *(_DWORD *)(v27 + 2584);
          v26 = *(_DWORD *)(v27 + 2588);
        }
        v28 = *(_DWORD *)v4 - *(_DWORD *)(v20 + 8 * (*(_DWORD *)(v20 + 40) & 1LL) + 1016) - *v16;
        *((_DWORD *)this + 44) = v28;
        v29 = *((_DWORD *)this + 39)
            - *(_DWORD *)(*(_QWORD *)a3 + 8 * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL) + 1020)
            - *((_DWORD *)this + 47);
        LODWORD(v135) = v25 + v28;
        *((_DWORD *)this + 45) = v29;
        v30 = *((_QWORD *)this + 9);
        DWORD1(v135) = v26 + v29;
        DWORD2(v135) = v28 + v25 + *(_DWORD *)(v30 + 56);
        HIDWORD(v135) = v29 + v26 + *(_DWORD *)(v30 + 60);
        ERECTL::operator*=(&v135, v4);
        v31 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
        v144 = 0LL;
        v145 = 0;
        v147 = 0LL;
        v146 = 1;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v142, v31, (struct ERECTL *)&v135, 0);
        v32 = (__m128i)v143;
        v135 = v143;
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v135) )
          return v13;
        if ( (*((_DWORD *)this + 55) & 0x10000) != 0 )
          v33 = *((_QWORD *)this + 10);
        else
          v33 = 0LL;
        v34 = DWORD1(v143);
        v35 = v143;
        if ( !v33 )
          goto LABEL_26;
        v63 = *((_DWORD *)this + 48);
        if ( v63 >= 0 )
        {
          v64 = *((_DWORD *)this + 49);
          if ( v64 >= 0 )
          {
            v65 = *((_QWORD *)this + 10);
            v133 = *(_DWORD *)v4;
            if ( *(_DWORD *)(v65 + 56) - v63 >= *((_DWORD *)this + 40) - *(_DWORD *)v4 )
            {
              v66 = *((_DWORD *)this + 39);
              if ( *(_DWORD *)(v65 + 60) - v64 >= *((_DWORD *)this + 41) - v66 )
              {
                *((_DWORD *)this + 48) = v143 + v63 - v133;
                *((_DWORD *)this + 49) = v34 + v64 - v66;
LABEL_26:
                *v16 = v35 - *((_DWORD *)this + 44);
                *((_DWORD *)this + 47) = v34 - *((_DWORD *)this + 45);
                if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
                {
                  v60 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
                  if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v60]) & 0xE8) == 0
                    || (v125 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v125 + 120) & 0x100) == 0 )
                  {
                    v134 = v32;
                    XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v60, (struct ERECTL *)&v134);
                  }
                }
                if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 1) != 0 )
                {
                  v61 = *((_DWORD *)this + 44);
                  LODWORD(v135) = v135 - v61;
                  DWORD2(v135) -= v61;
                  v62 = *((_DWORD *)this + 45);
                  DWORD1(v135) -= v62;
                  HIDWORD(v135) -= v62;
                }
                ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
                v36 = *((_DWORD *)this + 54);
                if ( v36 == 52428 )
                {
                  v37 = *((_QWORD *)this + 8);
                  if ( (*(_DWORD *)(v37 + 112) & 0x400) != 0 )
                    v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2840);
                  else
                    v38 = EngCopyBits;
                  v39 = *((_QWORD *)this + 9);
                  v40 = *((_QWORD *)this + 11);
                  v41 = v39 + 24;
                  v42 = v39 != 0;
                  v43 = &v143;
                  v44 = v41 & -(__int64)v42;
                  v45 = (v37 + 24) & -(__int64)(v37 != 0);
                  v46 = v142;
                  return ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, __int64, __int128 *, char *))v38)(
                           v45,
                           v44,
                           v46,
                           v40,
                           v43,
                           (char *)this + 184);
                }
                v49 = *((_QWORD *)this + 12);
                v50 = *((_QWORD *)this + 11);
                v51 = BLTRECORD::pSurfMskOut(this);
                v52 = (SURFACE *)*((_QWORD *)this + 8);
                v53 = (char *)this + 192;
                v54 = ((unsigned __int64)v51 + 24) & -(__int64)(v51 != 0LL);
                v55 = SURFACE::pfnBitBlt(v52);
                v132 = v36;
                v131 = v58;
                v59 = v142;
                v130 = v49;
                v129 = v53;
                v128 = v16;
                v127 = &v143;
                v126 = v50;
                return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, __int64, __int128 *, _DWORD *, char *, __int64, __int64, int))v55)(
                         v56,
                         v57,
                         v54,
                         v59,
                         v126,
                         v127,
                         v128,
                         v129,
                         v130,
                         v131,
                         v132);
              }
            }
          }
        }
LABEL_107:
        EngSetLastError(0x57u);
        return 0;
      }
      v87 = *((_QWORD *)this + 9);
      v88 = v10;
      v89 = v10;
      v90 = *(_QWORD *)(v87 + 48);
      if ( v90 && v87 == *(_QWORD *)(v90 + 2552) && (*(_DWORD *)(v90 + 40) & 0x20000) != 0 )
      {
        v88 = *(_DWORD *)(v90 + 2584);
        v89 = *(_DWORD *)(v90 + 2588);
      }
      v91 = *(_DWORD *)v4 - *(_DWORD *)(v20 + 8 * (*(_DWORD *)(v20 + 40) & 1LL) + 1016) - *v16;
      *((_DWORD *)this + 44) = v91;
      v92 = *((_DWORD *)this + 39)
          - *(_DWORD *)(*(_QWORD *)a3 + 8 * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL) + 1020)
          - *((_DWORD *)this + 47);
      LODWORD(v135) = v91 + v88;
      *((_DWORD *)this + 45) = v92;
      v93 = *((_QWORD *)this + 8);
      DWORD1(v135) = v92 + v89;
      DWORD2(v135) = v88 + v91 + *(_DWORD *)(v93 + 56);
      HIDWORD(v135) = v89 + v92 + *(_DWORD *)(v93 + 60);
      ERECTL::operator*=(&v135, v4);
      v94 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
      v140 = 1;
      v138 = 0LL;
      v139 = 0;
      v141 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v136, v94, (struct ERECTL *)&v135, 0);
      v95 = (__m128i)v137;
      v135 = v137;
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v135) )
        return v13;
      if ( BLTRECORD::pSurfMskOut(this) )
      {
        v96 = *((_DWORD *)this + 48);
        if ( v96 < 0 )
          goto LABEL_107;
        v97 = *((_DWORD *)this + 49);
        if ( v97 < 0 )
          goto LABEL_107;
        v98 = *((_QWORD *)this + 10);
        if ( *(_DWORD *)(v98 + 56) - v96 < *((_DWORD *)this + 40) - *(_DWORD *)v4 )
          goto LABEL_107;
        v99 = *((_DWORD *)this + 39);
        if ( *(_DWORD *)(v98 + 60) - v97 < *((_DWORD *)this + 41) - v99 )
          goto LABEL_107;
        *((_DWORD *)this + 48) = _mm_cvtsi128_si32(v95) + v96 - *(_DWORD *)v4;
        *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128(v95, 4)) + v97 - v99;
      }
      if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
      {
        v100 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 54);
        if ( ((gajRop3[*((unsigned __int8 *)this + 217)] | gajRop3[(_QWORD)v100]) & 0xE8) == 0
          || (v101 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v101 + 120) & 0x100) == 0 )
        {
          v134 = v95;
          XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v100, (struct ERECTL *)&v134);
        }
      }
      v102 = v135;
      v103 = v135 - *((_DWORD *)this + 44);
      v104 = DWORD1(v135);
      v105 = DWORD1(v135);
      *v16 = v103;
      v106 = v105 - *((_DWORD *)this + 45);
      *((_DWORD *)this + 47) = v106;
      if ( v103 >= v102 )
        DWORD2(v135) += v103 - v102;
      else
        LODWORD(v135) = v103;
      if ( v106 >= v104 )
        HIDWORD(v135) += v106 - v104;
      else
        DWORD1(v135) = v106;
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
      v107 = *((_DWORD *)this + 54);
      if ( v107 == 52428 )
      {
        v108 = *((_QWORD *)this + 8);
        if ( (*(_DWORD *)(v108 + 112) & 0x400) != 0 )
          v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2840);
        else
          v38 = EngCopyBits;
        v109 = *((_QWORD *)this + 9);
        v110 = v109 + 24;
        v42 = v109 != 0;
        v111 = v108 + 24;
        v44 = v110 & -(__int64)v42;
        v42 = v108 != 0;
        v46 = v136;
        v45 = v111 & -(__int64)v42;
        v43 = &v137;
        v40 = 0LL;
        return ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, __int64, __int128 *, char *))v38)(
                 v45,
                 v44,
                 v46,
                 v40,
                 v43,
                 (char *)this + 184);
      }
      v112 = *((_QWORD *)this + 12);
      v113 = BLTRECORD::pSurfMskOut(this);
      v114 = (SURFACE *)*((_QWORD *)this + 8);
      v115 = (char *)this + 192;
      v54 = ((unsigned __int64)v113 + 24) & -(__int64)(v113 != 0LL);
      v55 = SURFACE::pfnBitBlt(v114);
      v132 = v107;
      v131 = v116;
      v59 = v136;
      v130 = v112;
      v129 = v115;
      v128 = v16;
      v127 = &v137;
      v126 = 0LL;
      return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, __int64, __int128 *, _DWORD *, char *, __int64, __int64, int))v55)(
               v56,
               v57,
               v54,
               v59,
               v126,
               v127,
               v128,
               v129,
               v130,
               v131,
               v132);
    }
  }
  return 1LL;
}
