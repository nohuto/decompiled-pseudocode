/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009C4B0
 * Callers:
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00AD8D4 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C025E594 (GrePlgBlt.c)
 * Callees:
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C008F90C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008F930 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C009C280 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C009C3E8 (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C009C420 (-vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009C984 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C009CFC4 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C02605E0 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 */

__int64 __fastcall BLTRECORD::bStretch(
        BLTRECORD *this,
        struct DCOBJ *a2,
        struct DCOBJ *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  _QWORD *v8; // rcx
  __int64 v9; // r11
  char v10; // r9
  char *v11; // r14
  unsigned int v12; // r15d
  int v13; // r8d
  __int64 v14; // rbx
  char v15; // r9
  int *v16; // r13
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // r9
  struct ERECTL *v22; // r10
  struct DCOBJ *v23; // r11
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct REGION *v29; // rax
  struct ERECTL *v30; // r10
  struct ECLIPOBJ *v31; // rdx
  __int64 v32; // r9
  __int64 v33; // rdx
  _DWORD *v34; // rax
  BOOL (__stdcall *v35)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // r15
  char *v36; // r12
  bool v37; // cc
  __int64 v38; // r8
  __int64 v39; // r11
  __int64 v40; // rcx
  bool v41; // sf
  int v42; // eax
  struct SURFACE *v44; // rax
  int v45; // edx
  BLTRECORD *v46; // rcx
  int *v47; // rdx
  __int64 v48; // rcx
  _DWORD *v49; // r10
  unsigned int v50; // r14d
  __int64 v51; // rcx
  int v52; // eax
  XDCOBJ *v53; // rcx
  XDCOBJ *v54; // r11
  XDCOBJ *v55; // rcx
  __int64 v56; // rcx
  const GUID *v57; // r8
  const GUID *v58; // r9
  __int64 v59; // rax
  int v60; // ecx
  int v61; // r8d
  char v62; // [rsp+70h] [rbp-90h]
  unsigned int v63; // [rsp+74h] [rbp-8Ch] BYREF
  int v64; // [rsp+78h] [rbp-88h] BYREF
  int v65; // [rsp+7Ch] [rbp-84h] BYREF
  int v66; // [rsp+80h] [rbp-80h] BYREF
  int v67; // [rsp+84h] [rbp-7Ch] BYREF
  int v68; // [rsp+88h] [rbp-78h] BYREF
  int v69; // [rsp+8Ch] [rbp-74h] BYREF
  int v70; // [rsp+90h] [rbp-70h] BYREF
  __m128i v71; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v72[4]; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v73[4]; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v74; // [rsp+100h] [rbp+0h]
  int v75; // [rsp+108h] [rbp+8h]
  int v76; // [rsp+130h] [rbp+30h]
  __int64 v77; // [rsp+140h] [rbp+40h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF
  unsigned int *v79; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+178h] [rbp+78h]
  int *v81; // [rsp+180h] [rbp+80h]
  __int64 v82; // [rsp+188h] [rbp+88h]
  int *v83; // [rsp+190h] [rbp+90h]
  __int64 v84; // [rsp+198h] [rbp+98h]
  int *v85; // [rsp+1A0h] [rbp+A0h]
  __int64 v86; // [rsp+1A8h] [rbp+A8h]
  int *v87; // [rsp+1B0h] [rbp+B0h]
  __int64 v88; // [rsp+1B8h] [rbp+B8h]
  int *v89; // [rsp+1C0h] [rbp+C0h]
  __int64 v90; // [rsp+1C8h] [rbp+C8h]
  int *v91; // [rsp+1D0h] [rbp+D0h]
  __int64 v92; // [rsp+1D8h] [rbp+D8h]
  int *v93; // [rsp+1E0h] [rbp+E0h]
  __int64 v94; // [rsp+1E8h] [rbp+E8h]

  v63 = a4;
  BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 152));
  if ( (v10 & 0xD4) != 0 )
  {
    v11 = 0LL;
    v12 = 1;
    v13 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
    v14 = *(_QWORD *)(v8[8] + 48LL);
    if ( (v13 & 0x200) != 0 && v14 && (*(_DWORD *)(v14 + 40) & 0x20000) != 0 )
    {
      v15 = 1;
      v62 = 1;
    }
    else
    {
      v15 = 0;
      v62 = 0;
    }
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) != *(_QWORD *)(*(_QWORD *)v9 + 48LL)
      && (v13 & 0x4000) == 0
      && (*(_DWORD *)(*(_QWORD *)v9 + 36LL) & 0x4000) == 0
      && !v15
      && (*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(v53) + 3))
      && (*((_WORD *)XDCOBJ::pSurfaceEff(v54) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(v55) + 3)) )
    {
      goto LABEL_78;
    }
    v16 = (int *)((char *)this + 192);
    v17 = *((_DWORD *)this + 48);
    v18 = *((_DWORD *)this + 50);
    if ( v17 > v18 )
    {
      *v16 = v18 + 1;
      *((_DWORD *)this + 50) = v17 + 1;
    }
    v19 = *((_DWORD *)this + 49);
    v20 = *((_DWORD *)this + 51);
    if ( v19 > v20 )
    {
      *((_DWORD *)this + 49) = v20 + 1;
      *((_DWORD *)this + 51) = v19 + 1;
    }
    if ( BLTRECORD::pSurfMskOut(this) )
    {
      if ( *v16 < 0
        || *((int *)this + 49) < 0
        || (v56 = *((_QWORD *)this + 10), *((_DWORD *)this + 50) > *(_DWORD *)(v56 + 56))
        || *((_DWORD *)this + 51) > *(_DWORD *)(v56 + 60) )
      {
        if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
        {
          v63 = (unsigned int)v58;
          v79 = &v63;
          v65 = *((_DWORD *)this + 49);
          v81 = &v65;
          v66 = *((_DWORD *)this + 50);
          v83 = &v66;
          v67 = *((_DWORD *)this + 51);
          v85 = &v67;
          v68 = *((_DWORD *)this + 44);
          v87 = &v68;
          v69 = *((_DWORD *)this + 45);
          v89 = &v69;
          v70 = *((_DWORD *)this + 46);
          v91 = &v70;
          v64 = *((_DWORD *)this + 47);
          v93 = &v64;
          v80 = 4LL;
          v82 = 4LL;
          v84 = 4LL;
          v86 = 4LL;
          v88 = 4LL;
          v90 = 4LL;
          v92 = 4LL;
          v94 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E452A, v57, v58, 0xAu, &pData);
        }
LABEL_78:
        EngSetLastError(0x57u);
        return (unsigned int)v11;
      }
    }
    BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 176));
    if ( a5 != 4
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 68LL) != 2
      && !BLTRECORD::pSurfMskOut(this)
      && (*((_DWORD *)this + 55) & 0x18) == 0 )
    {
      v24 = *v21 + *((_DWORD *)this + 40) - *((_DWORD *)this + 46) - *(_DWORD *)v22;
      if ( (unsigned int)(v24 + 1) <= 2 )
      {
        v45 = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 47) - *((_DWORD *)this + 39);
        if ( (unsigned int)(v45 + 1) <= 2 )
        {
          LODWORD(v11) = BLTRECORD::bBitBlt(this, a2, v23, v63, v24, v45);
          return (unsigned int)v11;
        }
      }
    }
    v25 = *(_QWORD *)a2;
    if ( !*(_QWORD *)(*(_QWORD *)a2 + 504LL) || !*(_QWORD *)(*(_QWORD *)v23 + 504LL) )
    {
      LODWORD(v11) = 1;
      return (unsigned int)v11;
    }
    if ( (*(_DWORD *)(v25 + 36) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate(a2, v22);
      v25 = *(_QWORD *)a2;
    }
    v26 = *(_DWORD *)(v25 + 40) & 1LL;
    *(_DWORD *)v22 += *(_DWORD *)(v25 + 8 * v26 + 1424);
    *((_DWORD *)v22 + 2) += *(_DWORD *)(v25 + 8 * v26 + 1424);
    *((_DWORD *)v22 + 1) += *(_DWORD *)(v25 + 8 * v26 + 1428);
    *((_DWORD *)v22 + 3) += *(_DWORD *)(v25 + 8 * v26 + 1428);
    v27 = *(_QWORD *)v23;
    v28 = *(_DWORD *)(*(_QWORD *)v23 + 40LL) & 1LL;
    *v21 += *(_DWORD *)(*(_QWORD *)v23 + 8 * v28 + 1424);
    v21[2] += *(_DWORD *)(v27 + 8 * v28 + 1424);
    v21[1] += *(_DWORD *)(v27 + 8 * v28 + 1428);
    v21[3] += *(_DWORD *)(v27 + 8 * v28 + 1428);
    v29 = XDCOBJ::prgnEffRao((DC **)a2);
    v74 = 0LL;
    v75 = 0;
    v76 = 1;
    v77 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v72, v29, v30, 0);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v73) )
      return v12;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0
      && ((v63 & 0xE8) == 0 || (v59 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v59 + 120) & 0x100) == 0) )
    {
      v71 = v73[0];
      XDCOBJ::vAccumulateTight((struct _RECTL **)a2, v31, &v71);
    }
    v32 = *((_QWORD *)this + 8);
    v33 = *((_QWORD *)this + 9);
    v34 = *(_DWORD **)(v33 + 48);
    if ( (*(_DWORD *)(v32 + 112) & 0x2000) != 0 )
      v35 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v14 + 3232);
    else
      v35 = EngStretchBltROP;
    if ( v62 )
    {
      v36 = (char *)this + 176;
LABEL_34:
      BLTRECORD::vMirror(this, (BLTRECORD *)((char *)this + 152));
      v38 = 0LL;
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
      v39 = *(_QWORD *)a2;
      v40 = *(_QWORD *)a2 + 184LL;
      v41 = *(__int16 *)(*(_QWORD *)a2 + 186LL) < 0;
      v42 = *((_DWORD *)this + 54);
      v64 = v42;
      if ( !v41 )
        v38 = v40;
      if ( v42 != 52428 )
      {
        v44 = BLTRECORD::pSurfMskOut(this);
        if ( v44 )
          v11 = (char *)v44 + 24;
      }
      return ((unsigned int (__fastcall *)(__int64, _QWORD, char *, _BYTE *, _QWORD, __int64, __int64, char *, char *, char *, _DWORD, _QWORD, int))v35)(
               (*((_QWORD *)this + 8) + 24LL) & -(__int64)(*((_QWORD *)this + 8) != 0LL),
               (*((_QWORD *)this + 9) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 9) >> 64),
               v11,
               v72,
               *((_QWORD *)this + 11),
               v38,
               v39 + 1584,
               (char *)this + 152,
               v36,
               (char *)this + 192,
               a5,
               *((_QWORD *)this + 12),
               v64);
    }
    if ( a5 == 4 && (*(_BYTE *)(v14 + 1816) & 0x10) == 0 )
      v35 = EngStretchBltROP;
    if ( *(_WORD *)(v33 + 100) == 1 && v34 && (v34[10] & 0x20000) != 0 )
    {
      v60 = v34[644];
      v36 = (char *)this + 176;
      if ( *((_DWORD *)this + 44) < v60 )
        goto LABEL_88;
      v61 = v34[645];
      if ( *((_DWORD *)this + 45) < v61 || *((_DWORD *)this + 46) > *(_DWORD *)(v33 + 56) + v60 )
        goto LABEL_88;
      v37 = *((_DWORD *)this + 47) <= v61 + *(_DWORD *)(v33 + 60);
    }
    else
    {
      v36 = (char *)this + 176;
      if ( *((int *)this + 44) < 0 || *((int *)this + 45) < 0 || *((_DWORD *)this + 46) > *(_DWORD *)(v33 + 56) )
        goto LABEL_88;
      v37 = *((_DWORD *)this + 47) <= *(_DWORD *)(v33 + 60);
    }
    if ( v37 )
    {
LABEL_33:
      if ( v32 == v33 && (unsigned int)bIntersect(v36, (char *)this + 152) )
        v35 = EngStretchBltROP;
      goto LABEL_34;
    }
LABEL_88:
    v35 = EngStretchBltROP;
    goto LABEL_33;
  }
  BLTRECORD::vOrderStupid((BLTRECORD *)v8, (struct ERECTL *)(v8 + 24));
  v50 = 0;
  if ( BLTRECORD::pSurfMskOut(v46) )
  {
    if ( *v47 < 0
      || *(int *)(v48 + 196) < 0
      || (v51 = *(_QWORD *)(v48 + 80), *((_DWORD *)this + 50) > *(_DWORD *)(v51 + 56))
      || *((_DWORD *)this + 51) > *(_DWORD *)(v51 + 60) )
    {
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  v71.m128i_i64[0] = 0LL;
  v71.m128i_i8[8] = 0;
  v71.m128i_i32[3] = 0;
  if ( (a4 & 0x10000) == 0 )
    goto LABEL_60;
  if ( (unsigned int)BLTRECORD::bStretch(this, (struct SURFMEM *)&v71, a5) )
  {
    v49 = (_DWORD *)((char *)this + 152);
LABEL_60:
    v52 = *((_DWORD *)this + 40) + *((_DWORD *)this + 44) - *v49;
    *((_DWORD *)this + 47) = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 39);
    *((_DWORD *)this + 46) = v52;
    v50 = BLTRECORD::bBitBlt(this, a2, a2, a4);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v71);
  return v50;
}
