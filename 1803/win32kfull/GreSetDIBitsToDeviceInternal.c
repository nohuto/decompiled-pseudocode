/*
 * XREFs of GreSetDIBitsToDeviceInternal @ 0x1C00A42B0
 * Callers:
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C0016380 (NtGdiSetDIBitsToDeviceInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00A06E8 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsInternal @ 0x1C0102E6C (GreSetDIBitsInternal.c)
 * Callees:
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0017D34 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00893D0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008BC88 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C008BCDC (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008F930 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C00A8418 (bCvtPts1.c)
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C011A5A4 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C011D58C (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C011D5D4 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C023BCB0 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C028B33C (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C028B3F8 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C028DD78 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C028EFC4 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 *     ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C028EFF8 (-vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

__int64 __fastcall GreSetDIBitsToDeviceInternal(
        HDC a1,
        LONG a2,
        LONG a3,
        unsigned int a4,
        unsigned int a5,
        LONG a6,
        int a7,
        int a8,
        unsigned int a9,
        __int64 a10,
        struct tagRGBQUAD *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        int a15,
        __int64 a16)
{
  __int64 v17; // rsi
  int v21; // ebx
  __int64 v22; // rsi
  __int64 v23; // rsi
  int v24; // r15d
  unsigned int v25; // r9d
  __int64 v26; // rbx
  unsigned int v27; // eax
  unsigned int v28; // r10d
  unsigned int v29; // edx
  unsigned __int64 v30; // rcx
  unsigned int v31; // ebx
  unsigned __int64 v32; // rcx
  int v33; // eax
  DC *v34; // rbx
  unsigned int v35; // edx
  __int64 v36; // rsi
  DC *v37; // rcx
  int v38; // r14d
  unsigned int v39; // edi
  int v40; // edx
  int v41; // eax
  unsigned int v42; // ecx
  LONG v43; // r8d
  LONG v44; // eax
  LONG v45; // edx
  LONG v46; // ecx
  __int64 v47; // r13
  __int64 v48; // rax
  int v49; // r14d
  __int64 v50; // rdi
  struct PALETTE *v51; // rbx
  int v52; // r12d
  unsigned int v53; // r8d
  XLATEOBJ *XlateObject; // rax
  int v55; // ebx
  DC *v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  LONG left; // r14d
  int right; // esi
  int bottom; // r12d
  __int64 v63; // rbx
  LONG v64; // r15d
  int v65; // ecx
  int v66; // r9d
  int v67; // eax
  int v68; // edx
  int v69; // r8d
  LONG v70; // r14d
  int v71; // ecx
  struct REGION *v72; // rax
  struct ECLIPOBJ *v73; // rdx
  LONG v74; // edi
  __int64 v75; // r14
  struct _RECTL v76; // xmm6
  LONG v77; // r12d
  __int64 v78; // rax
  unsigned int v79; // edx
  unsigned int v80; // r8d
  unsigned int v81; // ecx
  __int64 v82; // rax
  unsigned int v83; // edx
  unsigned int v84; // r8d
  DC *v85; // r15
  LONG v86; // eax
  int v87; // r14d
  int v88; // r12d
  int v89; // edi
  struct _RECTL v90; // xmm6
  __int32 v91; // edx
  __int32 v92; // r8d
  int v93; // ecx
  struct _RECTL v94; // xmm0
  int v95; // eax
  BOOL v96; // eax
  int v97; // ecx
  BOOL (__stdcall *v98)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v99; // rdx
  int v100; // eax
  __int64 v101; // rbx
  int v103; // r11d
  struct REGION *v104; // rax
  struct ECLIPOBJ *v105; // rdx
  struct _SURFOBJ *v106; // rdx
  __int16 v107; // r8
  BOOL (__stdcall *v108)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v109; // rdx
  unsigned int v110; // eax
  unsigned __int64 v111; // rcx
  ULONG v112; // ecx
  int v113; // ecx
  int v114; // eax
  unsigned __int64 v115; // rcx
  int v116; // eax
  unsigned __int64 v117; // rcx
  ULONG v118; // ecx
  int v119; // eax
  __int64 v120; // r8
  BOOL (__stdcall *v121)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rax
  __int64 v122; // rdx
  _DWORD *v123; // rax
  _DWORD *v124; // rax
  __int32 v125; // xmm2_4
  BOOL (__stdcall *v126)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rax
  __int64 v127; // rdx
  struct _CLIPOBJ *v128; // [rsp+20h] [rbp-E0h]
  struct _RECTL *v129; // [rsp+30h] [rbp-D0h]
  __int64 v130; // [rsp+38h] [rbp-C8h]
  __int64 v131; // [rsp+40h] [rbp-C0h]
  unsigned int v132; // [rsp+60h] [rbp-A0h]
  unsigned int v133; // [rsp+64h] [rbp-9Ch]
  int v134; // [rsp+68h] [rbp-98h]
  unsigned int v135; // [rsp+6Ch] [rbp-94h]
  unsigned int v136; // [rsp+70h] [rbp-90h]
  unsigned int v137; // [rsp+74h] [rbp-8Ch]
  unsigned int v138; // [rsp+78h] [rbp-88h]
  unsigned int v139; // [rsp+7Ch] [rbp-84h]
  unsigned int v140; // [rsp+7Ch] [rbp-84h]
  int v141; // [rsp+80h] [rbp-80h]
  unsigned __int64 v142; // [rsp+88h] [rbp-78h] BYREF
  int v143[4]; // [rsp+90h] [rbp-70h] BYREF
  struct tagRGBQUAD *v144[2]; // [rsp+A0h] [rbp-60h] BYREF
  DC *v145; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v146; // [rsp+B8h] [rbp-48h]
  unsigned int v147; // [rsp+C0h] [rbp-40h] BYREF
  LONG v148; // [rsp+C4h] [rbp-3Ch]
  XLATEOBJ *v149; // [rsp+C8h] [rbp-38h] BYREF
  __int64 *v150; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v151; // [rsp+D8h] [rbp-28h]
  _QWORD v152[4]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v153; // [rsp+100h] [rbp+0h]
  unsigned int v154; // [rsp+104h] [rbp+4h]
  unsigned int v155; // [rsp+108h] [rbp+8h]
  __int64 v156; // [rsp+110h] [rbp+10h] BYREF
  char v157; // [rsp+118h] [rbp+18h]
  int v158; // [rsp+11Ch] [rbp+1Ch]
  _BYTE v159[32]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v160; // [rsp+140h] [rbp+40h]
  __int64 v161; // [rsp+148h] [rbp+48h]
  struct _RECTL v162; // [rsp+170h] [rbp+70h] BYREF
  __m128i v163; // [rsp+180h] [rbp+80h] BYREF
  DC *v164[2]; // [rsp+190h] [rbp+90h] BYREF
  struct _RECTL v165; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL v166; // [rsp+1B0h] [rbp+B0h]
  _BYTE v167[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v168; // [rsp+1C4h] [rbp+C4h] BYREF
  __int64 v169; // [rsp+210h] [rbp+110h]
  int v170; // [rsp+218h] [rbp+118h]
  int v171; // [rsp+240h] [rbp+140h]
  __int64 v172; // [rsp+250h] [rbp+150h]
  unsigned int v173; // [rsp+328h] [rbp+228h]

  v17 = a10;
  v148 = a6;
  *(_QWORD *)&v162.left = a16;
  v147 = a4;
  v150 = 0LL;
  LOBYTE(v21) = -1;
  v151 = 0LL;
  v163.m128i_i64[0] = a10;
  XDCOBJ::vLock((XDCOBJ *)&v150, a1);
  if ( v150 )
  {
    v21 = *(_DWORD *)(v150[10] + 312);
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v150);
    v143[0] = 0;
    v22 = *v150;
    HmgDecrementExclusiveReferenceCountEx(v150, HIDWORD(v151), v143);
    if ( v143[0] )
      bDeleteDCInternalEx(v22, 0LL);
    v17 = v163.m128i_i64[0];
  }
  if ( (v21 & 1) != 0 )
    a2 = a4 + a2 - 1;
  if ( !a11 )
    goto LABEL_276;
  if ( !v17 )
    goto LABEL_276;
  if ( a12 > 2 )
    goto LABEL_276;
  if ( a14 < 0x28 )
    goto LABEL_276;
  v23 = (__int64)*a11;
  if ( (unsigned int)v23 < 0x28 )
    goto LABEL_276;
  v137 = (unsigned int)a11[1];
  if ( (int)v137 <= 0 )
    goto LABEL_276;
  v24 = (int)a11[2];
  if ( !v24 )
    goto LABEL_276;
  memset(v152, 0, sizeof(v152));
  v25 = (unsigned int)a11[8];
  v26 = *(unsigned __int16 *)&a11[3].rgbRed;
  LODWORD(v152[3]) = 0;
  v152[2] = 0LL;
  v27 = (unsigned int)a11[4];
  v138 = v27;
  v139 = v25;
  v144[0] = (struct tagRGBQUAD *)((char *)a11 + v23);
  if ( v24 < 0 )
  {
    LODWORD(v152[3]) = 1;
    if ( v27 > 0xC )
      goto LABEL_276;
    v113 = 7225;
    if ( !_bittest(&v113, v27) )
      goto LABEL_276;
    v24 = -v24;
  }
  v143[0] = 0;
  if ( v27 == 3 )
  {
    if ( a14 < 0x34 )
      goto LABEL_276;
    if ( a12 == 1 )
      a12 = 0;
    if ( (_DWORD)v26 == 16 )
    {
      LODWORD(v152[0]) = 4;
    }
    else
    {
      if ( (_DWORD)v26 != 32 )
        goto LABEL_276;
      LODWORD(v152[0]) = 6;
    }
    v29 = v137;
    v155 = (unsigned int)a11[10];
    v28 = 0;
    v110 = (unsigned int)a11[11];
    v144[0] = a11 + 10;
    v154 = v110;
    v111 = v26 * v137;
    v153 = (unsigned int)a11[12];
    v135 = 0;
    v133 = 2;
    v136 = 512;
    if ( v111 > 0xFFFFFFFF || (int)v111 + 31 < (unsigned int)v111 )
      goto LABEL_166;
    v31 = a9;
    v132 = a9;
    v32 = a9 * (unsigned __int64)(((unsigned int)(v111 + 31) >> 3) & 0x1FFFFFFC);
    if ( v32 > 0xFFFFFFFF )
    {
      HIDWORD(v152[1]) = -1;
      goto LABEL_166;
    }
    v27 = v138;
    v141 = a8;
    HIDWORD(v152[1]) = v32;
    goto LABEL_29;
  }
  if ( !v27 )
  {
    if ( (unsigned int)v26 > 8 )
      goto LABEL_18;
    switch ( (_DWORD)v26 )
    {
      case 1:
        LODWORD(v152[0]) = 1;
        v103 = 2;
        break;
      case 4:
        LODWORD(v152[0]) = 2;
        v103 = 16;
        break;
      case 8:
        v28 = 256;
        LODWORD(v152[0]) = 3;
        v135 = 256;
        v133 = 1;
        v136 = 1024;
        goto LABEL_23;
      default:
LABEL_18:
        if ( a12 == 1 )
          a12 = 0;
        v135 = 0;
        v28 = 0;
        v136 = 512;
        if ( (_DWORD)v26 == 32 )
        {
          LODWORD(v152[0]) = 6;
LABEL_22:
          v133 = 8;
          goto LABEL_23;
        }
        if ( (_DWORD)v26 != 16 )
        {
          if ( (_DWORD)v26 == 24 )
          {
            LODWORD(v152[0]) = 5;
            goto LABEL_22;
          }
LABEL_276:
          v112 = 87;
          goto LABEL_277;
        }
        LODWORD(v152[0]) = 4;
        v133 = 2;
LABEL_23:
        v29 = v137;
        v30 = v26 * v137;
        if ( v30 <= 0xFFFFFFFF && (int)v30 + 31 >= (unsigned int)v30 )
        {
          v31 = a9;
          v132 = a9;
          v32 = a9 * (unsigned __int64)(((unsigned int)(v30 + 31) >> 3) & 0x1FFFFFFC);
          if ( v32 > 0xFFFFFFFF )
          {
            LODWORD(v32) = -1;
            v33 = -2147024362;
          }
          else
          {
            v33 = 0;
          }
          HIDWORD(v152[1]) = v32;
          v155 = 31744;
          v154 = 992;
          v153 = 31;
          if ( v33 >= 0 )
          {
            v27 = v138;
            v141 = a8;
            goto LABEL_29;
          }
        }
LABEL_166:
        v112 = 534;
LABEL_277:
        EngSetLastError(v112);
        return 0LL;
    }
    v28 = v103;
    v135 = v103;
    v133 = 1;
    v136 = 1024;
    goto LABEL_23;
  }
  if ( v27 != 10 )
  {
    if ( v27 == 2 )
    {
LABEL_154:
      if ( (_DWORD)v26 != 4 )
        goto LABEL_276;
      LODWORD(v152[0]) = 7;
      v28 = 16;
      v135 = 16;
LABEL_140:
      v143[0] = 1;
      v31 = v24;
      v136 = 1024;
      v133 = 1;
LABEL_141:
      LODWORD(v32) = a11[5];
      v29 = v137;
      HIDWORD(v152[1]) = v32;
      v132 = v31;
      v141 = 0;
      goto LABEL_29;
    }
    if ( v27 != 12 )
    {
      if ( v27 == 1 )
      {
LABEL_138:
        if ( (_DWORD)v26 != 8 )
          goto LABEL_276;
        v28 = 256;
        LODWORD(v152[0]) = 8;
        v135 = 256;
        goto LABEL_140;
      }
      if ( v27 != 11 )
      {
        if ( v27 == 4 )
        {
          v31 = a9;
          v28 = 0;
          v135 = 0;
          v136 = 512;
          LODWORD(v152[0]) = 9;
          v133 = 8;
        }
        else
        {
          if ( v27 != 5 )
            goto LABEL_276;
          v31 = a9;
          v28 = 0;
          v135 = 0;
          v136 = 512;
          LODWORD(v152[0]) = 10;
          v133 = 8;
        }
        goto LABEL_141;
      }
      MDCOBJ::MDCOBJ((MDCOBJ *)v164, a1);
      if ( v164[0] && (unsigned int)DC::bIsCMYKColor(v164[0]) )
      {
        XDCOBJ::vUnlockFast((XDCOBJ *)v164);
        v25 = v139;
        v27 = v138;
        goto LABEL_138;
      }
      goto LABEL_193;
    }
    MDCOBJ::MDCOBJ((MDCOBJ *)v164, a1);
    if ( v164[0] && (unsigned int)DC::bIsCMYKColor(v164[0]) )
    {
      XDCOBJ::vUnlockFast((XDCOBJ *)v164);
      v25 = v139;
      v27 = v138;
      goto LABEL_154;
    }
LABEL_193:
    v118 = 87;
LABEL_194:
    EngSetLastError(v118);
    if ( v164[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v164);
    return 0LL;
  }
  MDCOBJ::MDCOBJ((MDCOBJ *)v164, a1);
  if ( !v164[0] || !(unsigned int)DC::bIsCMYKColor(v164[0]) )
    goto LABEL_193;
  if ( (_DWORD)v26 == 1 )
  {
    v114 = 1;
    v135 = 2;
    v133 = 1;
    goto LABEL_184;
  }
  if ( (_DWORD)v26 == 4 )
  {
    v114 = 2;
    v135 = 16;
    v133 = 1;
LABEL_184:
    LODWORD(v152[0]) = v114;
    goto LABEL_185;
  }
  if ( (_DWORD)v26 != 8 )
  {
    if ( (_DWORD)v26 != 32 )
      goto LABEL_193;
    LODWORD(v152[0]) = 6;
    v135 = 0;
    v136 = 512;
    v133 = 16;
    goto LABEL_186;
  }
  LODWORD(v152[0]) = 3;
  v135 = 256;
  v133 = 1;
LABEL_185:
  v136 = 1024;
LABEL_186:
  v115 = v26 * v137;
  if ( v115 > 0xFFFFFFFF || (int)v115 + 31 < (unsigned int)v115 )
    goto LABEL_192;
  v31 = a9;
  v116 = -1;
  v132 = a9;
  v117 = a9 * (((unsigned __int64)(unsigned int)(v115 + 31) >> 3) & 0x1FFFFFFC);
  if ( v117 <= 0xFFFFFFFF )
    v116 = v117;
  HIDWORD(v152[1]) = v116;
  if ( v117 > 0xFFFFFFFF )
  {
LABEL_192:
    v118 = 534;
    goto LABEL_194;
  }
  XDCOBJ::vUnlockFast((XDCOBJ *)v164);
  LODWORD(v32) = HIDWORD(v152[1]);
  v25 = v139;
  v29 = v137;
  v28 = v135;
  v27 = v138;
  v141 = a8;
LABEL_29:
  v173 = a14 - v23;
  if ( v25 )
  {
    if ( v25 > v28 )
      v25 = v28;
    v140 = v25;
  }
  else
  {
    v140 = v28;
  }
  if ( a13 < (unsigned int)v32 )
    goto LABEL_276;
  HIDWORD(v152[0]) = v29;
  if ( v27 - 4 <= 1 )
    LODWORD(v152[1]) = v24;
  else
    LODWORD(v152[1]) = v31;
  v145 = 0LL;
  v146 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v145, a1);
  v34 = v145;
  if ( !v145 || (*((_DWORD *)v145 + 9) & 0x10000) != 0 )
  {
    EngSetLastError(0x57u);
    v34 = v145;
    v39 = 0;
    goto LABEL_111;
  }
  v35 = (unsigned int)a11[4];
  v36 = *((_QWORD *)v145 + 6);
  v142 = __PAIR64__(a3, a2);
  if ( v35 - 4 <= 1
    && (!(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)&v145, v35) || a12 || *(_QWORD *)&v162.left) )
  {
    v132 = 0;
  }
  if ( !a15 )
    goto LABEL_133;
  LODWORD(v164[1]) = *(_DWORD *)(*((_QWORD *)v34 + 10) + 68LL);
  HIDWORD(v164[1]) = *(_DWORD *)(*((_QWORD *)v34 + 10) + 312LL) & 1;
  if ( (*(_DWORD *)(*((_QWORD *)v34 + 10) + 352LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)v164, (struct XDCOBJ *)&v145, 0x204u, 0);
    v37 = v164[0];
    v34 = v145;
  }
  else
  {
    v37 = (DC *)((char *)v34 + 328);
    v164[0] = (DC *)((char *)v34 + 328);
  }
  v38 = *((_DWORD *)v37 + 8);
  if ( (*((_BYTE *)v37 + 32) & 0x43) != 0x43 )
  {
    bCvtPts1(v37, &v142, 1LL);
    a3 = HIDWORD(v142);
    a2 = v142;
  }
  if ( v132 )
  {
    v39 = v132;
    if ( (unsigned int)(*(_DWORD *)&a11[4] - 4) <= 1 )
    {
      if ( (v38 & 1) == 0 )
        v39 = 0;
      v132 = v39;
    }
  }
  else
  {
LABEL_133:
    v39 = v132;
  }
  v40 = *((_DWORD *)v34 + 132);
  v41 = v147;
  v42 = a5;
  v142 = __PAIR64__(a5, v147);
  if ( (v40 & 1) != 0 && (v40 & 2) == 0 )
  {
    v149 = *(XLATEOBJ **)((char *)v34 + 532);
    EPOINTL::vScale((EPOINTL *)&v142, (const struct POINTFL *)&v149);
    v42 = HIDWORD(v142);
    v41 = v142;
  }
  v43 = v41 + a2;
  v165.left = a2;
  v165.top = a3;
  v44 = v42 + a3;
  v165.bottom = v42 + a3;
  v45 = v43;
  v165.right = v43;
  v46 = v42 + a3;
  if ( a2 > v43 )
  {
    v45 = a2;
    v165.left = v43;
    v165.right = a2;
    a2 = v43;
  }
  if ( a3 > v44 )
  {
    v46 = a3;
    v165.top = v44;
    v165.bottom = a3;
    a3 = v44;
  }
  if ( a2 == v45 || a3 == v46 || !v39 )
    goto LABEL_111;
  if ( (*((_DWORD *)v34 + 9) & 0xE0) != 0 )
    XDCOBJ::vAccumulate((XDCOBJ *)&v145, (struct ERECTL *)&v165);
  v160 = 0LL;
  v161 = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v159, (struct XDCOBJ *)&v145, 0);
  v47 = *((_QWORD *)v145 + 63);
  if ( v47 )
  {
    v48 = *(_QWORD *)&v162.left;
    if ( !*(_QWORD *)&v162.left )
    {
      v48 = *(_QWORD *)(*((_QWORD *)v145 + 10) + 112LL);
      *(_QWORD *)&v162.left = v48;
    }
    v49 = *((_DWORD *)v145 + 32);
    if ( (v49 & 0x10000000) != 0 && (!v48 || v138 - 10 > 2) )
      v49 = v49 & 0xFFFFFFF | 0x20000000;
    v50 = *(_QWORD *)(v47 + 128);
    LODWORD(v151) = 0;
    v150 = 0LL;
    v51 = (struct PALETTE *)*((_QWORD *)v145 + 12);
    if ( v51 != ppalDefault )
      *(_QWORD *)(v47 + 176) = *(_QWORD *)v51;
    v134 = 0;
    v149 = 0LL;
    v142 = 0LL;
    v52 = 1;
    if ( !a12 )
    {
      if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v150, v133, v135, 0LL, v155, v154, v153, v136, 1) )
      {
LABEL_229:
        v52 = 0;
        v55 = 0;
        goto LABEL_66;
      }
      if ( !v140 )
        goto LABEL_63;
      if ( v173 >= 4 * v140 )
      {
        if ( v138 - 10 <= 2 )
          XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v150, (unsigned int *)&v144[0]->rgbBlue, v53, v140);
        else
          XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v150, v144[0], 0, v140);
LABEL_63:
        LODWORD(v131) = 0xFFFFFF;
        LODWORD(v130) = 0;
        LODWORD(v129) = 0;
        XlateObject = (XLATEOBJ *)CreateXlateObject(
                                    *(__int64 *)&v162.left,
                                    v49,
                                    (__int64)v150,
                                    v50,
                                    v51,
                                    v51,
                                    v129,
                                    v130,
                                    v131,
                                    0);
        v142 = (unsigned __int64)XlateObject;
        if ( XlateObject )
        {
          v149 = XlateObject;
LABEL_65:
          v55 = 0;
          goto LABEL_66;
        }
        goto LABEL_229;
      }
LABEL_228:
      EngSetLastError(0x57u);
      goto LABEL_229;
    }
    if ( a12 == 1 )
    {
      if ( v173 >= 2 * (unsigned __int64)v140 )
      {
        if ( (unsigned int)EXLATEOBJ::bMakeXlate(&v142, v144[0], v51, v47, v140, v135) )
        {
          v149 = (XLATEOBJ *)v142;
          if ( gbMultiMonMismatchColor
            && (*(_DWORD *)(v36 + 40) & 1) != 0
            && PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v150, v133, v135, 0LL, v155, v154, v153, v136, 1) )
          {
            v120 = *(_QWORD *)(v47 + 128);
            if ( !v120 )
              v120 = *(_QWORD *)(v36 + 1800);
            XEPALOBJ::vGetEntriesFrom(&v150, v51, v120, v144[0], v140);
            v55 = 1;
            v134 = 1;
            goto LABEL_66;
          }
          goto LABEL_65;
        }
        v52 = 0;
        v55 = 0;
LABEL_66:
        v156 = 0LL;
        v157 = 0;
        v158 = 0;
        SURFMEM::bCreateDIB(
          (SURFMEM *)&v156,
          (struct _DEVBITMAPINFO *)v152,
          (void *)v163.m128i_i64[0],
          0LL,
          0,
          0LL,
          0LL,
          0,
          1,
          0,
          0);
        if ( v52 && v156 )
        {
          *(_DWORD *)(v156 + 92) = 0;
          if ( (v159[24] & 1) != 0
            && (v56 = v145,
                v57 = *((_DWORD *)v145 + 10) & 1,
                v58 = *((int *)v145 + 2 * v57 + 356),
                (unsigned __int64)(v58 + v165.left + 0x80000000LL) <= 0xFFFFFFFF)
            && (unsigned __int64)(v58 + v165.right + 0x80000000LL) <= 0xFFFFFFFF
            && (v59 = *((int *)v145 + 2 * v57 + 357), (unsigned __int64)(v59 + v165.top + 0x80000000LL) <= 0xFFFFFFFF)
            && (unsigned __int64)(v59 + v165.bottom + 0x80000000LL) <= 0xFFFFFFFF )
          {
            left = v58 + v165.left;
            v165.left += v58;
            right = *((_DWORD *)v145 + 2 * v57 + 356) + v165.right;
            v165.right = right;
            v165.top += *((_DWORD *)v145 + 2 * v57 + 357);
            bottom = *((_DWORD *)v145 + 2 * v57 + 357) + v165.bottom;
            v165.bottom = bottom;
            if ( v55 )
            {
              *(_QWORD *)(v156 + 128) = v150;
              v56 = v145;
              bottom = v165.bottom;
              right = v165.right;
              left = v165.left;
            }
            v63 = *(_QWORD *)(v47 + 48);
            v162.left = v148;
            v162.right = v147 + v148;
            v162.bottom = v24 - a7;
            v162.top = v24 - a5 - a7;
            if ( v143[0] )
            {
              v104 = XDCOBJ::prgnEffRao(&v145);
              v171 = 1;
              v169 = 0LL;
              v170 = 0;
              v172 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)v167, v104, (struct ERECTL *)&v165, 0);
              if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v168) )
              {
                if ( (*((_DWORD *)v145 + 9) & 0xE0) != 0 )
                {
                  *(_OWORD *)v164 = v168;
                  XDCOBJ::vAccumulateTight((struct _RECTL **)&v145, v105, (__m128i *)v164);
                }
                ++*(_DWORD *)(v47 + 92);
                if ( v156 )
                  v106 = (struct _SURFOBJ *)(v156 + 24);
                else
                  v106 = 0LL;
                if ( bClipSrcDstRectsAndValidate(
                       (struct _SURFOBJ *)(v47 + 24),
                       v106,
                       (struct DCOBJ *)&v145,
                       0LL,
                       v128,
                       &v165,
                       &v162) )
                {
                  if ( (unsigned int)DC::bDpiScaleTransform(v145) )
                  {
                    if ( (v107 & 2) != 0 )
                      v121 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v63 + 2840);
                    else
                      v121 = EngStretchBlt;
                    v122 = 0LL;
                    if ( v156 )
                      v122 = v156 + 24;
                    ((void (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, XLATEOBJ *, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))v121)(
                      v47 + 24,
                      v122,
                      0LL,
                      v167,
                      v149,
                      0LL,
                      0LL,
                      &v165,
                      &v162,
                      0LL,
                      3);
                  }
                  else
                  {
                    v163.m128i_i64[0] = *(_QWORD *)&v162.left;
                    if ( (v107 & 0x400) != 0 )
                      v108 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v63 + 2832);
                    else
                      v108 = EngCopyBits;
                    if ( v156 )
                      v109 = v156 + 24;
                    else
                      v109 = 0LL;
                    ((void (__fastcall *)(__int64, __int64, _BYTE *, XLATEOBJ *, struct _RECTL *, __m128i *))v108)(
                      v47 + 24,
                      v109,
                      v167,
                      v149,
                      &v165,
                      &v163);
                  }
                }
              }
            }
            else
            {
              v148 = v24 - v141;
              v64 = v24 - v141 - v132;
              v164[1] = (DC *)__PAIR64__(v148, v137);
              HIDWORD(v164[0]) = v64;
              LODWORD(v164[0]) = 0;
              v166 = v162;
              ERECTL::operator*=(&v162);
              if ( v162.left != v162.right && v162.top != v162.bottom )
              {
                v65 = v162.left - v166.left;
                v66 = *((_DWORD *)v56 + 132);
                v67 = v162.right - v166.right;
                v68 = v162.top - v166.top;
                v69 = v162.bottom - v166.bottom;
                LODWORD(v144[0]) = v162.left - v166.left;
                LODWORD(v144[1]) = v162.right - v166.right;
                HIDWORD(v144[0]) = v162.top - v166.top;
                HIDWORD(v144[1]) = v162.bottom - v166.bottom;
                if ( (v66 & 1) != 0 && (v66 & 2) == 0 )
                {
                  v163.m128i_i64[0] = *(_QWORD *)((char *)v56 + 532);
                  ERECTL::vScale((ERECTL *)v144, (const struct POINTFL *)&v163);
                  v69 = HIDWORD(v144[1]);
                  v67 = (int)v144[1];
                  v68 = HIDWORD(v144[0]);
                  v65 = (int)v144[0];
                }
                v70 = v65 + left;
                v71 = v68 + v165.top;
                v165.left = v70;
                v165.right = v67 + right;
                v165.top += v68;
                v165.bottom = v69 + bottom;
                if ( v70 != v67 + right && v71 != v69 + bottom )
                {
                  v72 = DC::prgnRao(v56) ? DC::prgnRao(v56) : DC::prgnVisSnap(v56);
                  v171 = 1;
                  v169 = 0LL;
                  v170 = 0;
                  v172 = 0LL;
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v167, v72, (struct ERECTL *)&v165, 0);
                  if ( (_DWORD)v168 != DWORD2(v168) && DWORD1(v168) != HIDWORD(v168) )
                  {
                    if ( (*((_DWORD *)v145 + 9) & 0xE0) != 0 )
                    {
                      *(_OWORD *)v164 = v168;
                      XDCOBJ::vAccumulateTight((struct _RECTL **)&v145, v73, (__m128i *)v164);
                    }
                    if ( v138 - 4 <= 1 )
                    {
                      v74 = v64;
                      v162.bottom += v64 - v162.top;
                      v162.top = v64;
                    }
                    else
                    {
                      v162.bottom -= v64;
                      v74 = v162.top - v64;
                      v162.top -= v64;
                    }
                    ++*(_DWORD *)(v47 + 92);
                    if ( v156 )
                      v75 = v156 + 24;
                    else
                      v75 = 0LL;
                    v76 = v165;
                    v77 = v162.left;
                    *(struct _RECTL *)v164 = v165;
                    v144[0] = 0LL;
                    v78 = SURFOBJ_TO_SURFACE_NOT_NULL(v47 + 24);
                    v79 = 0;
                    v80 = 0;
                    if ( *(int *)(v78 + 112) < 0 )
                    {
                      v123 = *(_DWORD **)(v47 + 48);
                      if ( v123 )
                      {
                        if ( (v123[10] & 0x20000) != 0 )
                        {
                          v79 = v123[644];
                          v80 = v123[645];
                          v144[0] = (struct tagRGBQUAD *)__PAIR64__(v80, v79);
                        }
                      }
                    }
                    v81 = v79 + *(_DWORD *)(v47 + 56);
                    *(_QWORD *)&v166.left = 0LL;
                    LODWORD(v144[1]) = v81;
                    HIDWORD(v144[1]) = v80 + *(_DWORD *)(v47 + 60);
                    v82 = SURFOBJ_TO_SURFACE_NOT_NULL(v75);
                    v83 = 0;
                    v84 = 0;
                    if ( *(int *)(v82 + 112) < 0 )
                    {
                      v124 = *(_DWORD **)(v75 + 24);
                      if ( v124 )
                      {
                        if ( (v124[10] & 0x20000) != 0 )
                        {
                          v83 = v124[644];
                          v84 = v124[645];
                          *(_QWORD *)&v166.left = __PAIR64__(v84, v83);
                        }
                      }
                    }
                    v85 = v145;
                    v166.right = v83 + *(_DWORD *)(v75 + 32);
                    v86 = *((_DWORD *)v145 + 132);
                    v166.bottom = v84 + *(_DWORD *)(v75 + 36);
                    v148 = v86;
                    v87 = v86 & 1;
                    if ( (v86 & 1) != 0 && (v86 & 2) == 0 )
                    {
                      *(float *)&v125 = 1.0 / *((float *)v145 + 134);
                      *(float *)v163.m128i_i32 = 1.0 / *((float *)v145 + 133);
                      v163.m128i_i32[1] = v125;
                      ERECTL::vScale((ERECTL *)v144, (const struct POINTFL *)&v163);
                      ERECTL::vScale((ERECTL *)v164, (const struct POINTFL *)&v163);
                      v76 = *(struct _RECTL *)v164;
                    }
                    v163 = (__m128i)v76;
                    v88 = v77 - _mm_cvtsi128_si32((__m128i)v76);
                    v89 = v74 - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v76, 4));
                    ERECTL::operator*=(&v163);
                    v163.m128i_i32[0] += v88;
                    v163.m128i_i32[2] += v88;
                    v163.m128i_i32[1] += v89;
                    v163.m128i_i32[3] += v89;
                    ERECTL::operator*=(&v163);
                    v90 = (struct _RECTL)v163;
                    v91 = v163.m128i_i32[1] - v89;
                    v92 = v163.m128i_i32[3] - v89;
                    v93 = _mm_cvtsi128_si32(v163);
                    v163.m128i_i32[2] -= v88;
                    v163.m128i_i32[1] -= v89;
                    v163.m128i_i32[3] -= v89;
                    v163.m128i_i32[0] = v93 - v88;
                    v94 = (struct _RECTL)v163;
                    *(__m128i *)v164 = v163;
                    v166 = v90;
                    if ( v93 - v88 < v163.m128i_i32[2] && v91 < v92 )
                    {
                      if ( v87 && (v148 & 2) == 0 )
                      {
                        v163.m128i_i64[0] = *(_QWORD *)((char *)v85 + 532);
                        ERECTL::vScale((ERECTL *)v164, (const struct POINTFL *)&v163);
                        v94 = *(struct _RECTL *)v164;
                      }
                      v162 = v90;
                      v165 = v94;
                      v95 = *((_DWORD *)v85 + 132);
                      v96 = (v95 & 1) != 0 && (v95 & 2) == 0;
                      v97 = *(_DWORD *)(v47 + 112);
                      if ( v96 )
                      {
                        if ( (v97 & 2) != 0 )
                          v126 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v63 + 2840);
                        else
                          v126 = EngStretchBlt;
                        v127 = 0LL;
                        if ( v156 )
                          v127 = v156 + 24;
                        v100 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, XLATEOBJ *, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))v126)(
                                 v47 + 24,
                                 v127,
                                 0LL,
                                 v167,
                                 v149,
                                 0LL,
                                 0LL,
                                 &v165,
                                 &v162,
                                 0LL,
                                 3);
                      }
                      else
                      {
                        v163.m128i_i64[0] = *(_QWORD *)&v166.left;
                        if ( (v97 & 0x400) != 0 )
                          v98 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v63 + 2832);
                        else
                          v98 = EngCopyBits;
                        if ( v156 )
                          v99 = v156 + 24;
                        else
                          v99 = 0LL;
                        v100 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, XLATEOBJ *, struct _RECTL *, __m128i *))v98)(
                                 v47 + 24,
                                 v99,
                                 v167,
                                 v149,
                                 &v165,
                                 &v163);
                      }
                      if ( !v100 )
                        v132 = 0;
                    }
                  }
                }
              }
            }
            v39 = v132;
            if ( v134 )
              *(_QWORD *)(v156 + 128) = 0LL;
          }
          else
          {
            v39 = v132;
          }
        }
        else
        {
          v39 = 0;
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v156);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v142);
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v150);
        goto LABEL_110;
      }
      goto LABEL_228;
    }
    v119 = *(_DWORD *)(v47 + 96);
    if ( v119 != LODWORD(v152[0]) )
    {
      if ( v119 == 2 )
      {
        if ( LODWORD(v152[0]) != 7 )
          goto LABEL_228;
      }
      else if ( v119 != 3 || LODWORD(v152[0]) != 8 )
      {
        goto LABEL_228;
      }
    }
    v149 = xloIdent;
    goto LABEL_65;
  }
LABEL_110:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v159);
  v34 = v145;
LABEL_111:
  if ( v34 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v145);
    v147 = 0;
    v101 = *(_QWORD *)v145;
    HmgDecrementExclusiveReferenceCountEx(v145, HIDWORD(v146), &v147);
    if ( v147 )
      bDeleteDCInternalEx(v101, 0LL);
  }
  return v39;
}
