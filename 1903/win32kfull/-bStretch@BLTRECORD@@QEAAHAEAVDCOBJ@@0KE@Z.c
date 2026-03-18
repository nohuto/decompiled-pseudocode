/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0073164
 * Callers:
 *     GrePlgBlt @ 0x1C0008764 (GrePlgBlt.c)
 *     GreStretchBltInternal @ 0x1C0071658 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C007EAC4 (GreMaskBlt.c)
 * Callees:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0058A1C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C005A464 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C005ED08 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0072EC4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C00735FC (-vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C0073644 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0073660 (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C007F0E4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C012CCA4 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C028A310 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
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
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  _DWORD *v35; // rax
  BOOL (__stdcall *v36)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // r15
  char *v37; // r12
  bool v38; // cc
  __int64 v39; // r8
  __int64 v40; // r11
  __int64 v41; // rcx
  bool v42; // sf
  int v43; // eax
  struct SURFACE *v45; // rax
  int v46; // edx
  BLTRECORD *v47; // rcx
  int *v48; // rdx
  __int64 v49; // rcx
  _DWORD *v50; // r10
  unsigned int v51; // r14d
  __int64 v52; // rcx
  int v53; // eax
  XDCOBJ *v54; // rcx
  XDCOBJ *v55; // r11
  XDCOBJ *v56; // rcx
  __int64 v57; // rcx
  unsigned int v58; // r9d
  __int64 v59; // rax
  int v60; // ecx
  char v61; // [rsp+70h] [rbp-90h]
  unsigned int v62; // [rsp+74h] [rbp-8Ch] BYREF
  int v63; // [rsp+78h] [rbp-88h] BYREF
  int v64; // [rsp+7Ch] [rbp-84h] BYREF
  int v65; // [rsp+80h] [rbp-80h] BYREF
  int v66; // [rsp+84h] [rbp-7Ch] BYREF
  int v67; // [rsp+88h] [rbp-78h] BYREF
  int v68; // [rsp+8Ch] [rbp-74h] BYREF
  int v69; // [rsp+90h] [rbp-70h] BYREF
  __m128i v70; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v71[4]; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v72[4]; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v73; // [rsp+100h] [rbp+0h]
  int v74; // [rsp+108h] [rbp+8h]
  int v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+140h] [rbp+40h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF
  unsigned int *v78; // [rsp+170h] [rbp+70h]
  __int64 v79; // [rsp+178h] [rbp+78h]
  int *v80; // [rsp+180h] [rbp+80h]
  __int64 v81; // [rsp+188h] [rbp+88h]
  int *v82; // [rsp+190h] [rbp+90h]
  __int64 v83; // [rsp+198h] [rbp+98h]
  int *v84; // [rsp+1A0h] [rbp+A0h]
  __int64 v85; // [rsp+1A8h] [rbp+A8h]
  int *v86; // [rsp+1B0h] [rbp+B0h]
  __int64 v87; // [rsp+1B8h] [rbp+B8h]
  int *v88; // [rsp+1C0h] [rbp+C0h]
  __int64 v89; // [rsp+1C8h] [rbp+C8h]
  int *v90; // [rsp+1D0h] [rbp+D0h]
  __int64 v91; // [rsp+1D8h] [rbp+D8h]
  int *v92; // [rsp+1E0h] [rbp+E0h]
  __int64 v93; // [rsp+1E8h] [rbp+E8h]

  v62 = a4;
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
      v61 = 1;
    }
    else
    {
      v15 = 0;
      v61 = 0;
    }
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) != *(_QWORD *)(*(_QWORD *)v9 + 48LL)
      && (v13 & 0x4000) == 0
      && (*(_DWORD *)(*(_QWORD *)v9 + 36LL) & 0x4000) == 0
      && !v15
      && (*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(v54) + 3))
      && (*((_WORD *)XDCOBJ::pSurfaceEff(v55) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(v56) + 3)) )
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
        || (v57 = *((_QWORD *)this + 10), *((_DWORD *)this + 50) > *(_DWORD *)(v57 + 56))
        || *((_DWORD *)this + 51) > *(_DWORD *)(v57 + 60) )
      {
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
        {
          v62 = v58;
          v78 = &v62;
          v64 = *((_DWORD *)this + 49);
          v80 = &v64;
          v65 = *((_DWORD *)this + 50);
          v82 = &v65;
          v66 = *((_DWORD *)this + 51);
          v84 = &v66;
          v67 = *((_DWORD *)this + 44);
          v86 = &v67;
          v68 = *((_DWORD *)this + 45);
          v88 = &v68;
          v69 = *((_DWORD *)this + 46);
          v90 = &v69;
          v63 = *((_DWORD *)this + 47);
          v92 = &v63;
          v79 = 4LL;
          v81 = 4LL;
          v83 = 4LL;
          v85 = 4LL;
          v87 = 4LL;
          v89 = 4LL;
          v91 = 4LL;
          v93 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E9CED, 0LL, 0LL, 0xAu, &pData);
        }
LABEL_78:
        EngSetLastError(0x57u);
        return (unsigned int)v11;
      }
    }
    BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 176));
    if ( a5 != 4
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) != 2
      && !BLTRECORD::pSurfMskOut(this)
      && (*((_DWORD *)this + 55) & 0x18) == 0 )
    {
      v24 = *v21 + *((_DWORD *)this + 40) - *((_DWORD *)this + 46) - *(_DWORD *)v22;
      if ( (unsigned int)(v24 + 1) <= 2 )
      {
        v46 = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 47) - *((_DWORD *)this + 39);
        if ( (unsigned int)(v46 + 1) <= 2 )
        {
          LODWORD(v11) = BLTRECORD::bBitBlt(this, a2, v23, v62, v24, v46);
          return (unsigned int)v11;
        }
      }
    }
    v25 = *(_QWORD *)a2;
    if ( !*(_QWORD *)(*(_QWORD *)a2 + 496LL) || !*(_QWORD *)(*(_QWORD *)v23 + 496LL) )
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
    *(_DWORD *)v22 += *(_DWORD *)(v25 + 8 * v26 + 1016);
    *((_DWORD *)v22 + 2) += *(_DWORD *)(v25 + 8 * v26 + 1016);
    *((_DWORD *)v22 + 1) += *(_DWORD *)(v25 + 8 * v26 + 1020);
    *((_DWORD *)v22 + 3) += *(_DWORD *)(v25 + 8 * v26 + 1020);
    v27 = *(_QWORD *)v23;
    v28 = *(_DWORD *)(*(_QWORD *)v23 + 40LL) & 1LL;
    *v21 += *(_DWORD *)(*(_QWORD *)v23 + 8 * v28 + 1016);
    v21[2] += *(_DWORD *)(v27 + 8 * v28 + 1016);
    v21[1] += *(_DWORD *)(v27 + 8 * v28 + 1020);
    v21[3] += *(_DWORD *)(v27 + 8 * v28 + 1020);
    v29 = XDCOBJ::prgnEffRao((DC **)a2);
    v73 = 0LL;
    v74 = 0;
    v75 = 1;
    v76 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v71, v29, v30, 0);
    if ( ERECTL::bEmpty((ERECTL *)v72) )
      return v12;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0
      && ((v62 & 0xE8) == 0 || (v59 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v59 + 120) & 0x100) == 0) )
    {
      v70 = v72[0];
      XDCOBJ::vAccumulateTight(a2, v31, &v70);
    }
    v33 = *((_QWORD *)this + 8);
    v34 = *((_QWORD *)this + 9);
    v35 = *(_DWORD **)(v34 + 48);
    if ( (*(_DWORD *)(v33 + 112) & 0x2000) != 0 )
      v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v14 + 3240);
    else
      v36 = EngStretchBltROP;
    if ( v61 )
    {
      v37 = (char *)this + 176;
LABEL_34:
      BLTRECORD::vMirror(this, (BLTRECORD *)((char *)this + 152));
      v39 = 0LL;
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
      v40 = *(_QWORD *)a2;
      v41 = *(_QWORD *)a2 + 176LL;
      v42 = *(__int16 *)(*(_QWORD *)a2 + 178LL) < 0;
      v43 = *((_DWORD *)this + 54);
      v63 = v43;
      if ( !v42 )
        v39 = v41;
      if ( v43 != 52428 )
      {
        v45 = BLTRECORD::pSurfMskOut(this);
        if ( v45 )
          v11 = (char *)v45 + 24;
      }
      return ((unsigned int (__fastcall *)(__int64, _QWORD, char *, _BYTE *, _QWORD, __int64, __int64, char *, char *, char *, _DWORD, _QWORD, int))v36)(
               (*((_QWORD *)this + 8) + 24LL) & -(__int64)(*((_QWORD *)this + 8) != 0LL),
               (*((_QWORD *)this + 9) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 9) >> 64),
               v11,
               v71,
               *((_QWORD *)this + 11),
               v39,
               v40 + 1176,
               (char *)this + 152,
               v37,
               (char *)this + 192,
               a5,
               *((_QWORD *)this + 12),
               v63);
    }
    if ( a5 == 4 && (*(_BYTE *)(v14 + 1824) & 0x10) == 0 )
      v36 = EngStretchBltROP;
    if ( *(_WORD *)(v34 + 100) == 1 && v35 && (v35[10] & 0x20000) != 0 )
    {
      v60 = v35[646];
      v37 = (char *)this + 176;
      if ( *((_DWORD *)this + 44) < v60 )
        goto LABEL_88;
      v32 = (unsigned int)v35[647];
      if ( *((_DWORD *)this + 45) < (int)v32 || *((_DWORD *)this + 46) > *(_DWORD *)(v34 + 56) + v60 )
        goto LABEL_88;
      v38 = *((_DWORD *)this + 47) <= (int)v32 + *(_DWORD *)(v34 + 60);
    }
    else
    {
      v37 = (char *)this + 176;
      if ( *((int *)this + 44) < 0 || *((int *)this + 45) < 0 || *((_DWORD *)this + 46) > *(_DWORD *)(v34 + 56) )
        goto LABEL_88;
      v38 = *((_DWORD *)this + 47) <= *(_DWORD *)(v34 + 60);
    }
    if ( v38 )
    {
LABEL_33:
      if ( v33 == v34 && (unsigned int)bIntersect(v37, (char *)this + 152, v32) )
        v36 = EngStretchBltROP;
      goto LABEL_34;
    }
LABEL_88:
    v36 = EngStretchBltROP;
    goto LABEL_33;
  }
  BLTRECORD::vOrderStupid((BLTRECORD *)v8, (struct ERECTL *)(v8 + 24));
  v51 = 0;
  if ( BLTRECORD::pSurfMskOut(v47) )
  {
    if ( *v48 < 0
      || *(int *)(v49 + 196) < 0
      || (v52 = *(_QWORD *)(v49 + 80), *((_DWORD *)this + 50) > *(_DWORD *)(v52 + 56))
      || *((_DWORD *)this + 51) > *(_DWORD *)(v52 + 60) )
    {
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  v70.m128i_i64[0] = 0LL;
  v70.m128i_i8[8] = 0;
  v70.m128i_i32[3] = 0;
  if ( (a4 & 0x10000) == 0 )
    goto LABEL_60;
  if ( (unsigned int)BLTRECORD::bStretch(this, (struct SURFMEM *)&v70, a5) )
  {
    v50 = (_DWORD *)((char *)this + 152);
LABEL_60:
    v53 = *((_DWORD *)this + 40) + *((_DWORD *)this + 44) - *v50;
    *((_DWORD *)this + 47) = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 39);
    *((_DWORD *)this + 46) = v53;
    v51 = BLTRECORD::bBitBlt(this, (DC **)a2, a2, a4);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v70);
  return v51;
}
