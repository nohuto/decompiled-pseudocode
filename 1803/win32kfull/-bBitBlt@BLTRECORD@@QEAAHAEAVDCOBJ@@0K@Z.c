/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009C984
 * Callers:
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C009C280 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009C4B0 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreMaskBlt @ 0x1C00AD8D4 (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00F7358 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C025C294 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GrePlgBlt @ 0x1C025E594 (GrePlgBlt.c)
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C008B6A0 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C008F90C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008F930 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C009CFC4 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A512C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00AB618 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
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
  struct SURFACE *v33; // rax
  __int32 v34; // r9d
  __int32 v35; // r10d
  int v36; // r15d
  __int64 v37; // r11
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // rcx
  bool v42; // cf
  __m128i *v43; // rax
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
  int v60; // edx
  int v61; // r8d
  __int64 v62; // r11
  int v63; // r15d
  int v64; // eax
  struct ECLIPOBJ *v65; // rdx
  int v66; // eax
  int v67; // eax
  struct REGION *v68; // rax
  __int64 v69; // r11
  int v70; // edx
  int v71; // r10d
  int v72; // eax
  struct ECLIPOBJ *v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rbx
  int (*v76)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // r10
  __int64 v80; // r11
  int v81; // ecx
  int v82; // ecx
  int v83; // r8d
  int v84; // r9d
  __int64 v85; // r11
  int v86; // r8d
  int v87; // ecx
  int v88; // ecx
  __int64 v89; // rcx
  int v90; // r9d
  int v91; // r10d
  __int64 v92; // rax
  int v93; // r8d
  int v94; // edx
  __int64 v95; // rcx
  struct REGION *v96; // rax
  __m128i v97; // xmm6
  int v98; // edx
  int v99; // r8d
  __int64 v100; // r9
  int v101; // r10d
  int v102; // eax
  struct ECLIPOBJ *v103; // rdx
  __int64 v104; // rax
  int v105; // r8d
  int v106; // ecx
  int v107; // edx
  int v108; // eax
  int v109; // eax
  int v110; // r14d
  __int64 v111; // r8
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rsi
  struct SURFACE *v116; // rax
  SURFACE *v117; // rcx
  char *v118; // rbx
  __int64 v119; // r9
  struct SURFACE *v120; // rax
  XDCOBJ *v121; // rcx
  __int16 v122; // r11
  struct SURFACE *v123; // rax
  struct SURFACE *v124; // rax
  XDCOBJ *v125; // rcx
  __int16 v126; // r11
  struct SURFACE *v127; // rax
  __int64 v128; // rax
  __int64 v129; // [rsp+28h] [rbp-E0h]
  __m128i *v130; // [rsp+30h] [rbp-D8h]
  _DWORD *v131; // [rsp+38h] [rbp-D0h]
  char *v132; // [rsp+40h] [rbp-C8h]
  __int64 v133; // [rsp+48h] [rbp-C0h]
  __int64 v134; // [rsp+50h] [rbp-B8h]
  int v135; // [rsp+58h] [rbp-B0h]
  int v136; // [rsp+68h] [rbp-A0h]
  __m128i v137; // [rsp+70h] [rbp-98h] BYREF
  __m128i v138; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v139[4]; // [rsp+98h] [rbp-70h] BYREF
  __m128i v140; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int64 v141; // [rsp+E8h] [rbp-20h]
  int v142; // [rsp+F0h] [rbp-18h]
  int v143; // [rsp+118h] [rbp+10h]
  __int64 v144; // [rsp+128h] [rbp+20h]
  _BYTE v145[4]; // [rsp+138h] [rbp+30h] BYREF
  __m128i v146; // [rsp+13Ch] [rbp+34h] BYREF
  __int64 v147; // [rsp+188h] [rbp+80h]
  int v148; // [rsp+190h] [rbp+88h]
  int v149; // [rsp+1B8h] [rbp+B0h]
  __int64 v150; // [rsp+1C8h] [rbp+C0h]

  v4 = (BLTRECORD *)((char *)this + 152);
  ERECTL::vOrder((BLTRECORD *)((char *)this + 152));
  v9 = DC::bTightenRao(*a2);
  LODWORD(v10) = 0;
  if ( !v9 )
    return 0LL;
  v11 = *a2;
  if ( *((_QWORD *)*a2 + 63) )
  {
    v12 = a4 & 0xD4;
    if ( !v12 || *(_QWORD *)(*(_QWORD *)a3 + 504LL) )
    {
      if ( (*((_DWORD *)v11 + 9) & 0xE0) != 0 )
      {
        XDCOBJ::vAccumulate((XDCOBJ *)a2, v4);
        v11 = *a2;
      }
      v13 = 1;
      v14 = *((_DWORD *)v11 + 10) & 1LL;
      *(_DWORD *)v4 += *((_DWORD *)v11 + 2 * v14 + 356);
      *((_DWORD *)v4 + 2) += *((_DWORD *)v11 + 2 * v14 + 356);
      *((_DWORD *)v4 + 1) += *((_DWORD *)v11 + 2 * v14 + 357);
      *((_DWORD *)v4 + 3) += *((_DWORD *)v11 + 2 * v14 + 357);
      v15 = *(_QWORD *)(*((_QWORD *)this + 8) + 48LL);
      if ( !v12 )
      {
        v68 = XDCOBJ::prgnEffRao(a2);
        v141 = v69;
        v142 = v69;
        v143 = 1;
        v144 = v69;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v139, v68, v4, 0);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v140) )
          return v13;
        if ( *((int *)this + 46) < 0 )
        {
          v81 = *((_DWORD *)this + 48);
          *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
          *((_DWORD *)this + 50) = v81;
        }
        if ( *((int *)this + 47) < 0 )
        {
          v82 = *((_DWORD *)this + 49);
          *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
          *((_DWORD *)this + 51) = v82;
        }
        if ( BLTRECORD::pSurfMskOut(this) )
        {
          v83 = *((_DWORD *)this + 48);
          if ( v83 < 0
            || (v84 = *((_DWORD *)this + 49), v84 < 0)
            || (v85 = *((_QWORD *)this + 10), *(_DWORD *)(v85 + 56) - v83 < (int)abs32(v70))
            || *(_DWORD *)(v85 + 60) - v84 < (int)abs32(v71) )
          {
            EngSetLastError(0x57u);
            return 0;
          }
          v86 = v140.m128i_i32[0] + v83 - *(_DWORD *)v4;
          *((_DWORD *)this + 49) = v140.m128i_i32[1] + v84 - *((_DWORD *)this + 39);
          *((_DWORD *)this + 48) = v86;
        }
        if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
        {
          v72 = *((_DWORD *)this + 54);
          v73 = (struct ECLIPOBJ *)(unsigned __int8)v72;
          if ( ((gajRop3[BYTE1(v72)] | gajRop3[(unsigned __int8)v72]) & 0xE8) == 0
            || (v74 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v74 + 120) & 0x100) == 0 )
          {
            v137 = v140;
            XDCOBJ::vAccumulateTight((struct _RECTL **)a2, v73, &v137);
          }
        }
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
        v75 = *((_QWORD *)this + 12);
        BLTRECORD::pSurfMskOut(this);
        v76 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
        return ((unsigned int (__fastcall *)(__int64, _QWORD, __int64, _BYTE *, _QWORD, struct ERECTL *, _QWORD, __int64, __int64, __int64, _DWORD))v76)(
                 v79,
                 0LL,
                 v77,
                 v139,
                 0LL,
                 v4,
                 0LL,
                 v80,
                 v75,
                 v78,
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
        v87 = *((_DWORD *)this + 48);
        *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
        *((_DWORD *)this + 50) = v87;
      }
      if ( *((_DWORD *)this + 45) > *((_DWORD *)this + 47) )
      {
        v88 = *((_DWORD *)this + 49);
        *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
        *((_DWORD *)this + 51) = v88;
      }
      v19 = *a2;
      v20 = *(_QWORD *)a3;
      if ( *(_QWORD *)(*(_QWORD *)a3 + 504LL) != *((_QWORD *)*a2 + 63) )
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
          v120 = XDCOBJ::pSurfaceEff((XDCOBJ *)a2);
          if ( *((_WORD *)v120 + 50) != v122 || (v123 = XDCOBJ::pSurfaceEff(v121), *((_QWORD *)v123 + 3) != v10) )
          {
            v124 = XDCOBJ::pSurfaceEff(a3);
            if ( *((_WORD *)v124 + 50) != v126 )
              goto LABEL_102;
            v127 = XDCOBJ::pSurfaceEff(v125);
            if ( *((_QWORD *)v127 + 3) != v10 )
              goto LABEL_102;
          }
        }
        v24 = *((_QWORD *)this + 9);
        v25 = v10;
        v26 = v10;
        v27 = *(_QWORD *)(v24 + 48);
        if ( v27 && v24 == *(_QWORD *)(v27 + 2544) && (v22 & *(_DWORD *)(v27 + 40)) != 0 )
        {
          v25 = *(_DWORD *)(v27 + 2576);
          v26 = *(_DWORD *)(v27 + 2580);
        }
        v28 = *(_DWORD *)v4 - *(_DWORD *)(v20 + 8 * (*(_DWORD *)(v20 + 40) & 1LL) + 1424) - *v16;
        *((_DWORD *)this + 44) = v28;
        v29 = *((_DWORD *)this + 39)
            - *(_DWORD *)(*(_QWORD *)a3 + 8 * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL) + 1428)
            - *((_DWORD *)this + 47);
        v138.m128i_i32[0] = v25 + v28;
        *((_DWORD *)this + 45) = v29;
        v30 = *((_QWORD *)this + 9);
        v138.m128i_i32[1] = v26 + v29;
        v138.m128i_i32[2] = v28 + v25 + *(_DWORD *)(v30 + 56);
        v138.m128i_i32[3] = v29 + v26 + *(_DWORD *)(v30 + 60);
        ERECTL::operator*=(&v138);
        v31 = XDCOBJ::prgnEffRao(a2);
        v147 = 0LL;
        v148 = 0;
        v150 = 0LL;
        v149 = 1;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v145, v31, (struct ERECTL *)&v138, 0);
        v32 = v146;
        v138 = v146;
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v138) )
          return v13;
        v33 = BLTRECORD::pSurfMskOut(this);
        v34 = v146.m128i_i32[1];
        v35 = v146.m128i_i32[0];
        if ( !v33 )
          goto LABEL_24;
        v60 = *((_DWORD *)this + 48);
        if ( v60 >= 0 )
        {
          v61 = *((_DWORD *)this + 49);
          if ( v61 >= 0 )
          {
            v62 = *((_QWORD *)this + 10);
            v136 = *(_DWORD *)v4;
            if ( *(_DWORD *)(v62 + 56) - v60 >= *((_DWORD *)this + 40) - *(_DWORD *)v4 )
            {
              v63 = *((_DWORD *)this + 39);
              if ( *(_DWORD *)(v62 + 60) - v61 >= *((_DWORD *)this + 41) - v63 )
              {
                *((_DWORD *)this + 48) = v146.m128i_i32[0] + v60 - v136;
                *((_DWORD *)this + 49) = v34 + v61 - v63;
LABEL_24:
                *v16 = v35 - *((_DWORD *)this + 44);
                *((_DWORD *)this + 47) = v34 - *((_DWORD *)this + 45);
                if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
                {
                  v64 = *((_DWORD *)this + 54);
                  v65 = (struct ECLIPOBJ *)(unsigned __int8)v64;
                  if ( ((gajRop3[BYTE1(v64)] | gajRop3[(unsigned __int8)v64]) & 0xE8) == 0
                    || (v128 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v128 + 120) & 0x100) == 0 )
                  {
                    v137 = v32;
                    XDCOBJ::vAccumulateTight((struct _RECTL **)a2, v65, &v137);
                  }
                }
                if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 1) != 0 )
                {
                  v66 = *((_DWORD *)this + 44);
                  v138.m128i_i32[0] -= v66;
                  v138.m128i_i32[2] -= v66;
                  v67 = *((_DWORD *)this + 45);
                  v138.m128i_i32[1] -= v67;
                  v138.m128i_i32[3] -= v67;
                }
                ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
                v36 = *((_DWORD *)this + 54);
                if ( v36 == 52428 )
                {
                  v37 = *((_QWORD *)this + 8);
                  if ( (*(_DWORD *)(v37 + 112) & 0x400) != 0 )
                    v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2832);
                  else
                    v38 = EngCopyBits;
                  v39 = *((_QWORD *)this + 9);
                  v40 = *((_QWORD *)this + 11);
                  v41 = v39 + 24;
                  v42 = v39 != 0;
                  v43 = &v146;
                  v44 = v41 & -(__int64)v42;
                  v45 = (v37 + 24) & -(__int64)(v37 != 0);
                  v46 = v145;
                  return ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, __int64, __m128i *, char *))v38)(
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
                v135 = v36;
                v134 = v58;
                v59 = v145;
                v133 = v49;
                v132 = v53;
                v131 = v16;
                v130 = &v146;
                v129 = v50;
                return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, __int64, __m128i *, _DWORD *, char *, __int64, __int64, int))v55)(
                         v56,
                         v57,
                         v54,
                         v59,
                         v129,
                         v130,
                         v131,
                         v132,
                         v133,
                         v134,
                         v135);
              }
            }
          }
        }
LABEL_102:
        EngSetLastError(0x57u);
        return 0;
      }
      v89 = *((_QWORD *)this + 9);
      v90 = v10;
      v91 = v10;
      v92 = *(_QWORD *)(v89 + 48);
      if ( v92 && v89 == *(_QWORD *)(v92 + 2544) && (*(_DWORD *)(v92 + 40) & 0x20000) != 0 )
      {
        v90 = *(_DWORD *)(v92 + 2576);
        v91 = *(_DWORD *)(v92 + 2580);
      }
      v93 = *(_DWORD *)v4 - *(_DWORD *)(v20 + 8 * (*(_DWORD *)(v20 + 40) & 1LL) + 1424) - *v16;
      *((_DWORD *)this + 44) = v93;
      v94 = *((_DWORD *)this + 39)
          - *(_DWORD *)(*(_QWORD *)a3 + 8 * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL) + 1428)
          - *((_DWORD *)this + 47);
      v138.m128i_i32[0] = v93 + v90;
      *((_DWORD *)this + 45) = v94;
      v95 = *((_QWORD *)this + 8);
      v138.m128i_i32[1] = v94 + v91;
      v138.m128i_i32[2] = v90 + v93 + *(_DWORD *)(v95 + 56);
      v138.m128i_i32[3] = v91 + v94 + *(_DWORD *)(v95 + 60);
      ERECTL::operator*=(&v138);
      v96 = XDCOBJ::prgnEffRao(a2);
      v143 = 1;
      v141 = 0LL;
      v142 = 0;
      v144 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v139, v96, (struct ERECTL *)&v138, 0);
      v97 = v140;
      v138 = v140;
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v138) )
        return v13;
      if ( BLTRECORD::pSurfMskOut(this) )
      {
        v98 = *((_DWORD *)this + 48);
        if ( v98 < 0 )
          goto LABEL_102;
        v99 = *((_DWORD *)this + 49);
        if ( v99 < 0 )
          goto LABEL_102;
        v100 = *((_QWORD *)this + 10);
        if ( *(_DWORD *)(v100 + 56) - v98 < *((_DWORD *)this + 40) - *(_DWORD *)v4 )
          goto LABEL_102;
        v101 = *((_DWORD *)this + 39);
        if ( *(_DWORD *)(v100 + 60) - v99 < *((_DWORD *)this + 41) - v101 )
          goto LABEL_102;
        *((_DWORD *)this + 48) = _mm_cvtsi128_si32(v97) + v98 - *(_DWORD *)v4;
        *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128(v97, 4)) + v99 - v101;
      }
      if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
      {
        v102 = *((_DWORD *)this + 54);
        v103 = (struct ECLIPOBJ *)(unsigned __int8)v102;
        if ( ((gajRop3[BYTE1(v102)] | gajRop3[(unsigned __int8)v102]) & 0xE8) == 0
          || (v104 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v104 + 120) & 0x100) == 0 )
        {
          v137 = v97;
          XDCOBJ::vAccumulateTight((struct _RECTL **)a2, v103, &v137);
        }
      }
      v105 = v138.m128i_i32[0];
      v106 = v138.m128i_i32[0] - *((_DWORD *)this + 44);
      v107 = v138.m128i_i32[1];
      v108 = v138.m128i_i32[1];
      *v16 = v106;
      v109 = v108 - *((_DWORD *)this + 45);
      *((_DWORD *)this + 47) = v109;
      if ( v106 >= v105 )
        v138.m128i_i32[2] += v106 - v105;
      else
        v138.m128i_i32[0] = v106;
      if ( v109 >= v107 )
        v138.m128i_i32[3] += v109 - v107;
      else
        v138.m128i_i32[1] = v109;
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
      v110 = *((_DWORD *)this + 54);
      if ( v110 == 52428 )
      {
        v111 = *((_QWORD *)this + 8);
        if ( (*(_DWORD *)(v111 + 112) & 0x400) != 0 )
          v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2832);
        else
          v38 = EngCopyBits;
        v112 = *((_QWORD *)this + 9);
        v113 = v112 + 24;
        v42 = v112 != 0;
        v114 = v111 + 24;
        v44 = v113 & -(__int64)v42;
        v42 = v111 != 0;
        v46 = v139;
        v45 = v114 & -(__int64)v42;
        v43 = &v140;
        v40 = 0LL;
        return ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, __int64, __m128i *, char *))v38)(
                 v45,
                 v44,
                 v46,
                 v40,
                 v43,
                 (char *)this + 184);
      }
      v115 = *((_QWORD *)this + 12);
      v116 = BLTRECORD::pSurfMskOut(this);
      v117 = (SURFACE *)*((_QWORD *)this + 8);
      v118 = (char *)this + 192;
      v54 = ((unsigned __int64)v116 + 24) & -(__int64)(v116 != 0LL);
      v55 = SURFACE::pfnBitBlt(v117);
      v135 = v110;
      v134 = v119;
      v59 = v139;
      v133 = v115;
      v132 = v118;
      v131 = v16;
      v130 = &v140;
      v129 = 0LL;
      return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, __int64, __m128i *, _DWORD *, char *, __int64, __int64, int))v55)(
               v56,
               v57,
               v54,
               v59,
               v129,
               v130,
               v131,
               v132,
               v133,
               v134,
               v135);
    }
  }
  return 1LL;
}
