/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009D094
 * Callers:
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009F644 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00A4848 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C0120F38 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C026FC58 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GrePlgBlt @ 0x1C0272010 (GrePlgBlt.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C009B98C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C009DE80 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009E31C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C009FF28 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C009FF7C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BLTRECORD::bBitBlt(BLTRECORD *this, DC **a2, struct DCOBJ *a3, char a4)
{
  struct ERECTL *v4; // r15
  __int64 result; // rax
  __int64 v10; // r11
  DC *v11; // rdx
  int v12; // r12d
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rbx
  struct REGION *v16; // rax
  int *v17; // r11
  int v18; // ecx
  int v19; // ecx
  int v20; // edx
  int v21; // r10d
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // r11
  int v25; // r8d
  int v26; // eax
  struct ECLIPOBJ *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rbx
  int (*v30)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // r11
  int *v36; // r12
  int v37; // edx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  DC *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // r9d
  int v45; // r10d
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  __int64 v49; // rcx
  struct REGION *v50; // rax
  __m128i v51; // xmm6
  int v52; // edx
  int v53; // r8d
  __int64 v54; // r9
  int v55; // r10d
  int v56; // eax
  struct ECLIPOBJ *v57; // rdx
  __int64 v58; // rax
  int Ptr; // r8d
  int v60; // ecx
  int Ptr_high; // edx
  int v62; // eax
  int v63; // eax
  int v64; // r14d
  __int64 v65; // r8
  BOOL (__stdcall *v66)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v67; // rax
  __int64 v68; // rcx
  bool v69; // cf
  __int64 v70; // rax
  __int64 v71; // rdx
  _BYTE *v72; // r8
  __int64 v73; // rcx
  EVENT_DATA_DESCRIPTOR *v74; // rax
  __int64 v75; // r9
  __int64 v76; // rsi
  struct SURFACE *v77; // rax
  SURFACE *v78; // rcx
  char *v79; // rbx
  __int64 v80; // rdi
  int (*v81)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v82; // r10
  __int64 v83; // r11
  __int64 v84; // r9
  _BYTE *v85; // r9
  __int64 v86; // r9
  char v87; // al
  __int64 v88; // r10
  __int64 v89; // rcx
  char v90; // r8
  char v91; // al
  __int64 v92; // rcx
  int v93; // r9d
  int v94; // r10d
  __int64 v95; // rax
  int v96; // r8d
  int v97; // edx
  __int64 v98; // rcx
  struct REGION *v99; // rax
  __int128 v100; // xmm6
  __int64 v101; // rax
  struct SURFACE *v102; // rax
  XDCOBJ *v103; // rcx
  __int16 v104; // r11
  struct SURFACE *v105; // rax
  struct SURFACE *v106; // rax
  XDCOBJ *v107; // rcx
  char v108; // r8
  __int16 v109; // r11
  struct SURFACE *v110; // rax
  int v111; // r11d
  int v112; // r9d
  int v113; // r10d
  int v114; // edx
  int v115; // r8d
  int v116; // r15d
  __int64 v117; // r11
  int v118; // eax
  int v119; // r15d
  int v120; // eax
  struct ECLIPOBJ *v121; // rdx
  __int64 v122; // rax
  int v123; // eax
  int v124; // eax
  int v125; // r15d
  __int64 v126; // r11
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rsi
  __int64 v130; // r14
  struct SURFACE *v131; // rax
  SURFACE *v132; // rcx
  char *v133; // rbx
  __int64 v134; // r9
  UINT32 cData[2]; // [rsp+28h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-D8h]
  int *v137; // [rsp+38h] [rbp-D0h]
  char *v138; // [rsp+40h] [rbp-C8h]
  __int64 v139; // [rsp+48h] [rbp-C0h]
  __int64 v140; // [rsp+50h] [rbp-B8h]
  int v141; // [rsp+58h] [rbp-B0h]
  int v142; // [rsp+68h] [rbp-A0h] BYREF
  int v143; // [rsp+6Ch] [rbp-9Ch] BYREF
  _QWORD v144[3]; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR v145; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v146[4]; // [rsp+98h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v147; // [rsp+9Ch] [rbp-6Ch] BYREF
  int *v148; // [rsp+B8h] [rbp-50h]
  __int64 v149; // [rsp+C0h] [rbp-48h]
  _QWORD *v150; // [rsp+C8h] [rbp-40h]
  __int64 v151; // [rsp+D0h] [rbp-38h]
  _QWORD *v152; // [rsp+D8h] [rbp-30h]
  __int64 v153; // [rsp+E0h] [rbp-28h]
  int *v154; // [rsp+E8h] [rbp-20h]
  __int64 v155; // [rsp+F0h] [rbp-18h]
  int v156; // [rsp+118h] [rbp+10h]
  int *v157; // [rsp+128h] [rbp+20h]
  _BYTE v158[4]; // [rsp+138h] [rbp+30h] BYREF
  _OWORD v159[3]; // [rsp+13Ch] [rbp+34h] BYREF
  __int64 v160; // [rsp+170h] [rbp+68h]
  __int64 v161; // [rsp+188h] [rbp+80h]
  int v162; // [rsp+190h] [rbp+88h]
  int v163; // [rsp+1B8h] [rbp+B0h]
  __int64 v164; // [rsp+1C8h] [rbp+C0h]

  v4 = (BLTRECORD *)((char *)this + 152);
  ERECTL::vOrder((BLTRECORD *)((char *)this + 152));
  result = DC::bTightenRao(*a2);
  LODWORD(v10) = 0;
  if ( (_DWORD)result )
  {
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
          v16 = XDCOBJ::prgnEffRao(a2);
          v151 = (__int64)v17;
          v154 = v17;
          LODWORD(v155) = (_DWORD)v17;
          v156 = 1;
          v157 = v17;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v146, v16, v4, 0);
          if ( !ERECTL::bEmpty((ERECTL *)&v147) )
          {
            if ( *((int *)this + 46) < 0 )
            {
              v18 = *((_DWORD *)this + 48);
              *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
              *((_DWORD *)this + 50) = v18;
            }
            if ( *((int *)this + 47) < 0 )
            {
              v19 = *((_DWORD *)this + 49);
              *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
              *((_DWORD *)this + 51) = v19;
            }
            if ( !BLTRECORD::pSurfMskOut(this) )
              goto LABEL_19;
            v22 = *((_DWORD *)this + 48);
            if ( v22 >= 0 )
            {
              v23 = *((_DWORD *)this + 49);
              if ( v23 >= 0 )
              {
                v24 = *((_QWORD *)this + 10);
                if ( *(_DWORD *)(v24 + 56) - v22 >= (int)abs32(v20) && *(_DWORD *)(v24 + 60) - v23 >= (int)abs32(v21) )
                {
                  v25 = LODWORD(v147.Ptr) + v22 - *(_DWORD *)v4;
                  *((_DWORD *)this + 49) = HIDWORD(v147.Ptr) + v23 - *((_DWORD *)this + 39);
                  *((_DWORD *)this + 48) = v25;
LABEL_19:
                  if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
                  {
                    v26 = *((_DWORD *)this + 54);
                    v27 = (struct ECLIPOBJ *)(unsigned __int8)v26;
                    if ( ((gajRop3[BYTE1(v26)] | gajRop3[(unsigned __int8)v26]) & 0xE8) == 0
                      || (v28 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v28 + 120) & 0x100) == 0 )
                    {
                      *(EVENT_DATA_DESCRIPTOR *)&v144[1] = v147;
                      XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v27, (__m128i *)&v144[1]);
                    }
                  }
                  ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
                  v29 = *((_QWORD *)this + 12);
                  BLTRECORD::pSurfMskOut(this);
                  v30 = SURFACE::pfnBitBlt(*((SURFACE **)this + 8));
                  return ((unsigned int (__fastcall *)(__int64, _QWORD, __int64, _BYTE *, _QWORD, struct ERECTL *, _QWORD, __int64, __int64, __int64, _DWORD))v30)(
                           v33,
                           0LL,
                           v31,
                           v146,
                           0LL,
                           v4,
                           0LL,
                           v34,
                           v29,
                           v32,
                           *((_DWORD *)this + 54));
                }
              }
            }
            EngSetLastError(0x57u);
            return 0;
          }
          return v13;
        }
        v36 = (int *)((char *)this + 184);
        v37 = *((_DWORD *)this + 46);
        v38 = *((_DWORD *)this + 47);
        if ( v37 >= *((_DWORD *)this + 44) )
          v37 = *((_DWORD *)this + 44);
        *v36 = v37;
        if ( v38 >= *((_DWORD *)this + 45) )
          v38 = *((_DWORD *)this + 45);
        *((_DWORD *)this + 47) = v38;
        if ( *((_DWORD *)this + 44) > v37 )
        {
          v39 = *((_DWORD *)this + 48);
          *((_DWORD *)this + 48) = *((_DWORD *)this + 50);
          *((_DWORD *)this + 50) = v39;
        }
        if ( *((_DWORD *)this + 45) > *((_DWORD *)this + 47) )
        {
          v40 = *((_DWORD *)this + 49);
          *((_DWORD *)this + 49) = *((_DWORD *)this + 51);
          *((_DWORD *)this + 51) = v40;
        }
        v41 = *a2;
        v42 = *(_QWORD *)a3;
        if ( *(_QWORD *)(*(_QWORD *)a3 + 496LL) == *((_QWORD *)*a2 + 62) )
        {
          v43 = *((_QWORD *)this + 9);
          v44 = v10;
          v45 = v10;
          v46 = *(_QWORD *)(v43 + 48);
          if ( v46 && v43 == *(_QWORD *)(v46 + 2552) && (*(_DWORD *)(v46 + 40) & 0x20000) != 0 )
          {
            v44 = *(_DWORD *)(v46 + 2584);
            v45 = *(_DWORD *)(v46 + 2588);
          }
          v47 = *(_DWORD *)v4 - *(_DWORD *)(v42 + 8 * (*(_DWORD *)(v42 + 40) & 1LL) + 1016) - *v36;
          *((_DWORD *)this + 44) = v47;
          v48 = *((_DWORD *)this + 39)
              - *(_DWORD *)(*(_QWORD *)a3 + 8 * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL) + 1020)
              - *((_DWORD *)this + 47);
          LODWORD(v145.Ptr) = v47 + v44;
          *((_DWORD *)this + 45) = v48;
          v49 = *((_QWORD *)this + 8);
          HIDWORD(v145.Ptr) = v48 + v45;
          v145.Size = v44 + v47 + *(_DWORD *)(v49 + 56);
          v145.Reserved = v45 + v48 + *(_DWORD *)(v49 + 60);
          ERECTL::operator*=((int *)&v145, (int *)v4);
          v50 = XDCOBJ::prgnEffRao(a2);
          v156 = 1;
          v151 = 0LL;
          v154 = 0LL;
          LODWORD(v155) = 0;
          v157 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v146, v50, (struct ERECTL *)&v145, 0);
          v51 = (__m128i)v147;
          v145 = v147;
          if ( ERECTL::bEmpty((ERECTL *)&v145) )
            return v13;
          if ( BLTRECORD::pSurfMskOut(this) )
          {
            v52 = *((_DWORD *)this + 48);
            if ( v52 < 0
              || (v53 = *((_DWORD *)this + 49), v53 < 0)
              || (v54 = *((_QWORD *)this + 10), *(_DWORD *)(v54 + 56) - v52 < *((_DWORD *)this + 40) - *(_DWORD *)v4)
              || (v55 = *((_DWORD *)this + 39), *(_DWORD *)(v54 + 60) - v53 < *((_DWORD *)this + 41) - v55) )
            {
              EngSetLastError(0x57u);
              return 0;
            }
            *((_DWORD *)this + 48) = _mm_cvtsi128_si32(v51) + v52 - *(_DWORD *)v4;
            *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128(v51, 4)) + v53 - v55;
          }
          if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
          {
            v56 = *((_DWORD *)this + 54);
            v57 = (struct ECLIPOBJ *)(unsigned __int8)v56;
            if ( ((gajRop3[BYTE1(v56)] | gajRop3[(unsigned __int8)v56]) & 0xE8) == 0
              || (v58 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v58 + 120) & 0x100) == 0 )
            {
              *(__m128i *)&v144[1] = v51;
              XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v57, (__m128i *)&v144[1]);
            }
          }
          Ptr = v145.Ptr;
          v60 = LODWORD(v145.Ptr) - *((_DWORD *)this + 44);
          Ptr_high = HIDWORD(v145.Ptr);
          v62 = HIDWORD(v145.Ptr);
          *v36 = v60;
          v63 = v62 - *((_DWORD *)this + 45);
          *((_DWORD *)this + 47) = v63;
          if ( v60 >= Ptr )
            v145.Size += v60 - Ptr;
          else
            LODWORD(v145.Ptr) = v60;
          if ( v63 >= Ptr_high )
            v145.Reserved += v63 - Ptr_high;
          else
            HIDWORD(v145.Ptr) = v63;
          ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
          v64 = *((_DWORD *)this + 54);
          if ( v64 == 52428 )
          {
            v65 = *((_QWORD *)this + 8);
            if ( (*(_DWORD *)(v65 + 112) & 0x400) != 0 )
              v66 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2840);
            else
              v66 = EngCopyBits;
            v67 = *((_QWORD *)this + 9);
            v68 = v67 + 24;
            v69 = v67 != 0;
            v70 = v65 + 24;
            v71 = v68 & -(__int64)v69;
            v69 = v65 != 0;
            v72 = v146;
            v73 = v70 & -(__int64)v69;
            v74 = &v147;
            v75 = 0LL;
            return ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, __int64, EVENT_DATA_DESCRIPTOR *, char *))v66)(
                     v73,
                     v71,
                     v72,
                     v75,
                     v74,
                     (char *)this + 184);
          }
          v76 = *((_QWORD *)this + 12);
          v77 = BLTRECORD::pSurfMskOut(this);
          v78 = (SURFACE *)*((_QWORD *)this + 8);
          v79 = (char *)this + 192;
          v80 = ((unsigned __int64)v77 + 24) & -(__int64)(v77 != 0LL);
          v81 = SURFACE::pfnBitBlt(v78);
          v141 = v64;
          v140 = v84;
          v85 = v146;
          v139 = v76;
          v138 = v79;
          v137 = v36;
          pData = &v147;
          *(_QWORD *)cData = 0LL;
          return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, _QWORD, EVENT_DATA_DESCRIPTOR *, int *, char *, __int64, __int64, int))v81)(
                   v82,
                   v83,
                   v80,
                   v85,
                   *(_QWORD *)cData,
                   pData,
                   v137,
                   v138,
                   v139,
                   v140,
                   v141);
        }
        v86 = *((unsigned int *)v41 + 9);
        if ( (v86 & 0x200) == 0 || !v15 || (v87 = 1, (*(_DWORD *)(v15 + 40) & 0x20000) == 0) )
          v87 = v10;
        v88 = *((_QWORD *)v41 + 6);
        v89 = *(_QWORD *)(v42 + 48);
        if ( v88 != v89 && !v87 )
        {
          if ( (v86 & 0x4000) != 0 || (v90 = v10, (*(_DWORD *)(v42 + 36) & 0x4000) != 0) )
            v90 = 1;
          if ( (*(_DWORD *)(v88 + 40) & 0x8000) != 0 || (v91 = v10, (*(_DWORD *)(v89 + 40) & 0x8000) != 0) )
            v91 = 1;
          if ( !v90 || v91 )
          {
            v102 = XDCOBJ::pSurfaceEff((XDCOBJ *)a2);
            if ( *((_WORD *)v102 + 50) != v104 || (v105 = XDCOBJ::pSurfaceEff(v103), *((_QWORD *)v105 + 3) != v10) )
            {
              v106 = XDCOBJ::pSurfaceEff(a3);
              if ( *((_WORD *)v106 + 50) != v109 || (v110 = XDCOBJ::pSurfaceEff(v107), *((_QWORD *)v110 + 3) != v10) )
              {
                if ( v108 && hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
                {
                  v143 = 80812;
                  v148 = &v143;
                  v150 = &v144[1];
                  v152 = v144;
                  v154 = &v142;
                  v149 = 4LL;
                  v144[1] = 0x1000000LL;
                  v151 = 8LL;
                  LODWORD(v144[0]) = 2;
                  v153 = 4LL;
                  v142 = v111;
                  v155 = 4LL;
                  TlgWrite(
                    (TraceLoggingHProvider)&hProvider,
                    &unk_1C02D707D,
                    0LL,
                    0LL,
                    6u,
                    (EVENT_DATA_DESCRIPTOR *)v146);
                }
                goto LABEL_94;
              }
            }
          }
          else
          {
            TraceLoggingWriteUnsupportedGdiUsage(23LL, *(unsigned int *)(v42 + 36), v86);
            LODWORD(v10) = 0;
          }
        }
        v92 = *((_QWORD *)this + 9);
        v93 = v10;
        v94 = v10;
        v95 = *(_QWORD *)(v92 + 48);
        if ( v95 && v92 == *(_QWORD *)(v95 + 2552) && (*(_DWORD *)(v95 + 40) & 0x20000) != 0 )
        {
          v93 = *(_DWORD *)(v95 + 2584);
          v94 = *(_DWORD *)(v95 + 2588);
        }
        v96 = *(_DWORD *)v4 - *(_DWORD *)(*(_QWORD *)a3 + 8 * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL) + 1016) - *v36;
        *((_DWORD *)this + 44) = v96;
        v97 = *((_DWORD *)this + 39)
            - *(_DWORD *)(*(_QWORD *)a3 + 8 * (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL) + 1020)
            - *((_DWORD *)this + 47);
        LODWORD(v145.Ptr) = v93 + v96;
        *((_DWORD *)this + 45) = v97;
        v98 = *((_QWORD *)this + 9);
        HIDWORD(v145.Ptr) = v94 + v97;
        v145.Size = v96 + v93 + *(_DWORD *)(v98 + 56);
        v145.Reserved = v97 + v94 + *(_DWORD *)(v98 + 60);
        ERECTL::operator*=((int *)&v145, (int *)v4);
        v99 = XDCOBJ::prgnEffRao(a2);
        v160 = 0LL;
        v161 = 0LL;
        v162 = 0;
        v164 = 0LL;
        v163 = 1;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v158, v99, (struct ERECTL *)&v145, 0);
        v100 = v159[0];
        v145 = (EVENT_DATA_DESCRIPTOR)v159[0];
        if ( ERECTL::bEmpty((ERECTL *)&v145) )
          return v13;
        if ( (*((_DWORD *)this + 55) & 0x10000) != 0 )
          v101 = *((_QWORD *)this + 10);
        else
          v101 = 0LL;
        v112 = DWORD1(v159[0]);
        v113 = v159[0];
        if ( !v101 )
          goto LABEL_102;
        v114 = *((_DWORD *)this + 48);
        if ( v114 >= 0 )
        {
          v115 = *((_DWORD *)this + 49);
          if ( v115 >= 0 )
          {
            v116 = *(_DWORD *)v4;
            v117 = *((_QWORD *)this + 10);
            v118 = *((_DWORD *)this + 40) - v116;
            v142 = v116;
            if ( *(_DWORD *)(v117 + 56) - v114 >= v118 )
            {
              v119 = *((_DWORD *)this + 39);
              if ( *(_DWORD *)(v117 + 60) - v115 >= *((_DWORD *)this + 41) - v119 )
              {
                *((_DWORD *)this + 48) = LODWORD(v159[0]) + v114 - v142;
                *((_DWORD *)this + 49) = v112 + v115 - v119;
LABEL_102:
                *v36 = v113 - *((_DWORD *)this + 44);
                *((_DWORD *)this + 47) = v112 - *((_DWORD *)this + 45);
                if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
                {
                  v120 = *((_DWORD *)this + 54);
                  v121 = (struct ECLIPOBJ *)(unsigned __int8)v120;
                  if ( ((gajRop3[BYTE1(v120)] | gajRop3[(unsigned __int8)v120]) & 0xE8) == 0
                    || (v122 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v122 + 120) & 0x100) == 0 )
                  {
                    *(_OWORD *)&v144[1] = v100;
                    XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v121, (__m128i *)&v144[1]);
                  }
                }
                if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 1) != 0 )
                {
                  v123 = *((_DWORD *)this + 44);
                  LODWORD(v145.Ptr) -= v123;
                  v145.Size -= v123;
                  v124 = *((_DWORD *)this + 45);
                  HIDWORD(v145.Ptr) -= v124;
                  v145.Reserved -= v124;
                }
                ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
                v125 = *((_DWORD *)this + 54);
                if ( v125 == 52428 )
                {
                  v126 = *((_QWORD *)this + 8);
                  if ( (*(_DWORD *)(v126 + 112) & 0x400) != 0 )
                    v66 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2840);
                  else
                    v66 = EngCopyBits;
                  v127 = *((_QWORD *)this + 9);
                  v75 = *((_QWORD *)this + 11);
                  v128 = v127 + 24;
                  v69 = v127 != 0;
                  v74 = (EVENT_DATA_DESCRIPTOR *)v159;
                  v71 = v128 & -(__int64)v69;
                  v73 = (v126 + 24) & -(__int64)(v126 != 0);
                  v72 = v158;
                  return ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, __int64, EVENT_DATA_DESCRIPTOR *, char *))v66)(
                           v73,
                           v71,
                           v72,
                           v75,
                           v74,
                           (char *)this + 184);
                }
                v129 = *((_QWORD *)this + 12);
                v130 = *((_QWORD *)this + 11);
                v131 = BLTRECORD::pSurfMskOut(this);
                v132 = (SURFACE *)*((_QWORD *)this + 8);
                v133 = (char *)this + 192;
                v80 = ((unsigned __int64)v131 + 24) & -(__int64)(v131 != 0LL);
                v81 = SURFACE::pfnBitBlt(v132);
                v141 = v125;
                v140 = v134;
                v85 = v158;
                v139 = v129;
                v138 = v133;
                v137 = v36;
                pData = (EVENT_DATA_DESCRIPTOR *)v159;
                *(_QWORD *)cData = v130;
                return ((unsigned int (__fastcall *)(__int64, __int64, __int64, _BYTE *, _QWORD, EVENT_DATA_DESCRIPTOR *, int *, char *, __int64, __int64, int))v81)(
                         v82,
                         v83,
                         v80,
                         v85,
                         *(_QWORD *)cData,
                         pData,
                         v137,
                         v138,
                         v139,
                         v140,
                         v141);
              }
            }
          }
        }
LABEL_94:
        EngSetLastError(0x57u);
        return 0;
      }
    }
    return 1LL;
  }
  return result;
}
