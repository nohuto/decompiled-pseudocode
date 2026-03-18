/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009F644
 * Callers:
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C0272010 (GrePlgBlt.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C009B98C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009D094 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C009FEE0 (-vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C009FF28 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C009FF44 (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C0120F38 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0274174 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 */

__int64 __fastcall BLTRECORD::bStretch(BLTRECORD *this, DC **a2, struct DCOBJ *a3, int a4, unsigned __int8 a5)
{
  struct ERECTL *v5; // r12
  _QWORD *v8; // rcx
  __int64 *v9; // r10
  char v10; // r9
  BLTRECORD *v11; // rcx
  int *v12; // rdx
  __int64 v13; // rcx
  int v14; // r9d
  char v15; // r11
  unsigned int v16; // esi
  __int64 v17; // rcx
  int v19; // eax
  char *v20; // rsi
  __int64 v21; // r8
  unsigned int v22; // r13d
  __int64 v23; // rbx
  char v24; // al
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdi
  char v28; // dl
  char v29; // al
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int *v34; // rdx
  __int64 v35; // rcx
  int v36; // r9d
  XDCOBJ *v37; // rcx
  XDCOBJ *v38; // r10
  char v39; // dl
  XDCOBJ *v40; // rcx
  _DWORD *v41; // r9
  struct DCOBJ *v42; // r10
  unsigned int v43; // r11d
  int v44; // ecx
  int v45; // edx
  DC *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  struct REGION *v50; // rax
  struct ECLIPOBJ *v51; // rdx
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // r10
  __int64 v55; // rdx
  _DWORD *v56; // rax
  BOOL (__stdcall *v57)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // r12
  int v58; // ecx
  char *v59; // r8
  bool v60; // cc
  struct ERECTL *v61; // rbx
  char *v62; // r8
  DC *v63; // r11
  int v64; // r15d
  struct SURFACE *v65; // rax
  char v66; // [rsp+70h] [rbp-90h]
  int v67; // [rsp+74h] [rbp-8Ch] BYREF
  int v68; // [rsp+78h] [rbp-88h] BYREF
  int v69; // [rsp+7Ch] [rbp-84h] BYREF
  __m128i v70; // [rsp+80h] [rbp-80h] BYREF
  int v71; // [rsp+90h] [rbp-70h] BYREF
  int v72; // [rsp+94h] [rbp-6Ch] BYREF
  int v73; // [rsp+98h] [rbp-68h] BYREF
  int v74; // [rsp+9Ch] [rbp-64h] BYREF
  _BYTE v75[4]; // [rsp+A0h] [rbp-60h] BYREF
  __m128i v76[3]; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v77; // [rsp+D8h] [rbp-28h]
  __int64 v78; // [rsp+F0h] [rbp-10h]
  int v79; // [rsp+F8h] [rbp-8h]
  int v80; // [rsp+120h] [rbp+20h]
  __int64 v81; // [rsp+130h] [rbp+30h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  int *v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  __m128i *v85; // [rsp+170h] [rbp+70h]
  __int64 v86; // [rsp+178h] [rbp+78h]
  int *v87; // [rsp+180h] [rbp+80h]
  __int64 v88; // [rsp+188h] [rbp+88h]
  int *v89; // [rsp+190h] [rbp+90h]
  __int64 v90; // [rsp+198h] [rbp+98h]
  int *v91; // [rsp+1A0h] [rbp+A0h]
  __int64 v92; // [rsp+1A8h] [rbp+A8h]
  int *v93; // [rsp+1B0h] [rbp+B0h]
  __int64 v94; // [rsp+1B8h] [rbp+B8h]
  int *v95; // [rsp+1C0h] [rbp+C0h]
  __int64 v96; // [rsp+1C8h] [rbp+C8h]
  __m128i *v97; // [rsp+1D0h] [rbp+D0h]
  __int64 v98; // [rsp+1D8h] [rbp+D8h]

  v5 = (BLTRECORD *)((char *)this + 152);
  v67 = a4;
  v70.m128i_i64[0] = (__int64)a3;
  BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 152));
  if ( (v10 & 0xD4) == 0 )
  {
    BLTRECORD::vOrderStupid((BLTRECORD *)v8, (struct ERECTL *)(v8 + 24));
    v16 = 0;
    if ( BLTRECORD::pSurfMskOut(v11) )
    {
      if ( *v12 < 0
        || *(int *)(v13 + 196) < 0
        || (v17 = *(_QWORD *)(v13 + 80), *((_DWORD *)this + 50) > *(_DWORD *)(v17 + 56))
        || *((_DWORD *)this + 51) > *(_DWORD *)(v17 + 60) )
      {
        EngSetLastError(0x57u);
        return 0LL;
      }
    }
    v70.m128i_i64[0] = 0LL;
    v70.m128i_i8[8] = 0;
    v70.m128i_i32[3] = 0;
    if ( (v14 & 0x10000) != 0 )
    {
      if ( !(unsigned int)BLTRECORD::bStretch(this, (struct SURFMEM *)&v70, a5) )
      {
LABEL_12:
        SURFMEM::~SURFMEM((SURFMEM *)&v70);
        return v16;
      }
      v15 = v67;
    }
    v19 = *((_DWORD *)this + 40) + *((_DWORD *)this + 44) - *(_DWORD *)v5;
    *((_DWORD *)this + 47) = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 39);
    *((_DWORD *)this + 46) = v19;
    v16 = BLTRECORD::bBitBlt(this, a2, (struct DCOBJ *)a2, v15);
    goto LABEL_12;
  }
  v20 = 0LL;
  v21 = *((unsigned int *)*a2 + 9);
  v22 = 1;
  v23 = *(_QWORD *)(v8[8] + 48LL);
  if ( (v21 & 0x200) == 0 || !v23 || (v24 = 1, (*(_DWORD *)(v23 + 40) & 0x20000) == 0) )
    v24 = 0;
  v25 = *v9;
  v26 = *((_QWORD *)*a2 + 6);
  v66 = v24;
  v27 = *(_QWORD *)(*v9 + 48);
  if ( v26 != v27 && !v24 )
  {
    if ( (v21 & 0x4000) != 0 || (v28 = 0, (*(_DWORD *)(v25 + 36) & 0x4000) != 0) )
      v28 = 1;
    if ( (*(_DWORD *)(v26 + 40) & 0x8000) != 0 || (v29 = 0, (*(_DWORD *)(v27 + 40) & 0x8000) != 0) )
      v29 = 1;
    if ( !v28 || v29 )
    {
      if ( (*((_WORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)a2) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(v37) + 3))
        && (*((_WORD *)XDCOBJ::pSurfaceEff(v38) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(v40) + 3)) )
      {
        if ( v39 && hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
        {
          v67 = 80812;
          v83 = &v67;
          v85 = &v70;
          v87 = &v68;
          v89 = &v69;
          v84 = 4LL;
          v70.m128i_i64[0] = 0x1000000LL;
          v86 = 8LL;
          v68 = 1;
          v88 = 4LL;
          v69 = 0;
          v90 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D707D, 0LL, 0LL, 6u, &pData);
        }
        goto LABEL_40;
      }
    }
    else
    {
      TraceLoggingWriteUnsupportedGdiUsage(22LL, *(unsigned int *)(v25 + 36), v21);
    }
  }
  v30 = *((_DWORD *)this + 48);
  v31 = *((_DWORD *)this + 50);
  if ( v30 > v31 )
  {
    *((_DWORD *)this + 48) = v31 + 1;
    *((_DWORD *)this + 50) = v30 + 1;
  }
  v32 = *((_DWORD *)this + 49);
  v33 = *((_DWORD *)this + 51);
  if ( v32 > v33 )
  {
    *((_DWORD *)this + 49) = v33 + 1;
    *((_DWORD *)this + 51) = v32 + 1;
  }
  if ( !BLTRECORD::pSurfMskOut(this)
    || *v34 >= 0
    && *((int *)this + 49) >= 0
    && (v35 = *((_QWORD *)this + 10), *((_DWORD *)this + 50) <= *(_DWORD *)(v35 + 56))
    && *((_DWORD *)this + 51) <= *(_DWORD *)(v35 + 60) )
  {
    BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 176));
    if ( a5 != 4
      && *(_DWORD *)(*((_QWORD *)*a2 + 122) + 208LL) != 2
      && !BLTRECORD::pSurfMskOut(this)
      && (*((_DWORD *)this + 55) & 0x18) == 0 )
    {
      v44 = *v41 + *((_DWORD *)this + 40) - *((_DWORD *)this + 46) - *(_DWORD *)v5;
      if ( (unsigned int)(v44 + 1) <= 2 )
      {
        v45 = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 47) - *((_DWORD *)this + 39);
        if ( (unsigned int)(v45 + 1) <= 2 )
        {
          LODWORD(v20) = BLTRECORD::bBitBlt(this, (struct DCOBJ *)a2, v42, v43, v44, v45);
          return (unsigned int)v20;
        }
      }
    }
    v46 = *a2;
    if ( !*((_QWORD *)*a2 + 62) || !*(_QWORD *)(*(_QWORD *)v42 + 496LL) )
    {
      LODWORD(v20) = 1;
      return (unsigned int)v20;
    }
    if ( (*((_DWORD *)v46 + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)a2, v5);
      v46 = *a2;
    }
    v47 = *((_DWORD *)v46 + 10) & 1LL;
    *(_DWORD *)v5 += *((_DWORD *)v46 + 2 * v47 + 254);
    *((_DWORD *)v5 + 2) += *((_DWORD *)v46 + 2 * v47 + 254);
    *((_DWORD *)v5 + 1) += *((_DWORD *)v46 + 2 * v47 + 255);
    *((_DWORD *)v5 + 3) += *((_DWORD *)v46 + 2 * v47 + 255);
    v48 = *(_QWORD *)v42;
    v49 = *(_DWORD *)(*(_QWORD *)v42 + 40LL) & 1LL;
    *v41 += *(_DWORD *)(*(_QWORD *)v42 + 8 * v49 + 1016);
    v41[2] += *(_DWORD *)(v48 + 8 * v49 + 1016);
    v41[1] += *(_DWORD *)(v48 + 8 * v49 + 1020);
    v41[3] += *(_DWORD *)(v48 + 8 * v49 + 1020);
    v50 = XDCOBJ::prgnEffRao(a2);
    v77 = 0LL;
    v78 = 0LL;
    v79 = 0;
    v80 = 1;
    v81 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v75, v50, v5, 0);
    if ( ERECTL::bEmpty((ERECTL *)v76) )
      return v22;
    if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0
      && ((v67 & 0xE8) == 0 || (v53 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v53 + 120) & 0x100) == 0) )
    {
      v70 = v76[0];
      XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v51, &v70);
    }
    v54 = *((_QWORD *)this + 8);
    v55 = *((_QWORD *)this + 9);
    v56 = *(_DWORD **)(v55 + 48);
    if ( (*(_DWORD *)(v54 + 112) & 0x2000) != 0 )
      v57 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v23 + 3240);
    else
      v57 = EngStretchBltROP;
    if ( v66 )
    {
      v61 = (BLTRECORD *)((char *)this + 152);
LABEL_91:
      BLTRECORD::vMirror(this, v61);
      v62 = 0LL;
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
      v63 = *a2;
      v64 = *((_DWORD *)this + 54);
      if ( *((__int16 *)v63 + 89) >= 0 )
        v62 = (char *)v63 + 176;
      if ( v64 != 52428 )
      {
        v65 = BLTRECORD::pSurfMskOut(this);
        if ( v65 )
          v20 = (char *)v65 + 24;
      }
      return ((unsigned int (__fastcall *)(__int64, _QWORD, char *, _BYTE *, _QWORD, char *, char *, char *, char *, char *, _DWORD, _QWORD, int))v57)(
               (*((_QWORD *)this + 8) + 24LL) & -(__int64)(*((_QWORD *)this + 8) != 0LL),
               (*((_QWORD *)this + 9) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 9) >> 64),
               v20,
               v75,
               *((_QWORD *)this + 11),
               v62,
               (char *)v63 + 1200,
               (char *)this + 152,
               (char *)this + 176,
               (char *)this + 192,
               a5,
               *((_QWORD *)this + 12),
               v64);
    }
    if ( a5 == 4 && (*(_BYTE *)(v23 + 1824) & 0x10) == 0 )
      v57 = EngStretchBltROP;
    if ( *(_WORD *)(v55 + 100) == 1 && v56 && (v56[10] & 0x20000) != 0 )
    {
      v58 = v56[646];
      v59 = (char *)this + 176;
      if ( *((_DWORD *)this + 44) < v58 )
        goto LABEL_85;
      v52 = (unsigned int)v56[647];
      if ( *((_DWORD *)this + 45) < (int)v52 || *((_DWORD *)this + 46) > *(_DWORD *)(v55 + 56) + v58 )
        goto LABEL_85;
      v60 = *((_DWORD *)this + 47) <= (int)v52 + *(_DWORD *)(v55 + 60);
    }
    else
    {
      v59 = (char *)this + 176;
      if ( *((int *)this + 44) < 0 || *((int *)this + 45) < 0 || *((_DWORD *)this + 46) > *(_DWORD *)(v55 + 56) )
        goto LABEL_85;
      v60 = *((_DWORD *)this + 47) <= *(_DWORD *)(v55 + 60);
    }
    if ( v60 )
    {
LABEL_86:
      v61 = (BLTRECORD *)((char *)this + 152);
      if ( v54 == v55 && (unsigned int)bIntersect(v59, (char *)this + 152, v59, v52) )
        v57 = EngStretchBltROP;
      goto LABEL_91;
    }
LABEL_85:
    v57 = EngStretchBltROP;
    goto LABEL_86;
  }
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
  {
    v69 = v36;
    v83 = &v69;
    v68 = *((_DWORD *)this + 49);
    v85 = (__m128i *)&v68;
    v67 = *((_DWORD *)this + 50);
    v87 = &v67;
    v71 = *((_DWORD *)this + 51);
    v89 = &v71;
    v72 = *((_DWORD *)this + 44);
    v91 = &v72;
    v73 = *((_DWORD *)this + 45);
    v93 = &v73;
    v74 = *((_DWORD *)this + 46);
    v95 = &v74;
    v70.m128i_i32[0] = *((_DWORD *)this + 47);
    v97 = &v70;
    v84 = 4LL;
    v86 = 4LL;
    v88 = 4LL;
    v90 = 4LL;
    v92 = 4LL;
    v94 = 4LL;
    v96 = 4LL;
    v98 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D70C0, 0LL, 0LL, 0xAu, &pData);
  }
LABEL_40:
  EngSetLastError(0x57u);
  return (unsigned int)v20;
}
