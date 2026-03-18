/*
 * XREFs of GreSetDIBitsToDeviceInternal @ 0x1C005F070
 * Callers:
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C0030330 (NtGdiSetDIBitsToDeviceInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00595B4 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsInternal @ 0x1C012C848 (GreSetDIBitsInternal.c)
 * Callees:
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0032430 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0035FE8 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C005A464 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C005D7B4 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C005EB34 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C005ED08 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006B1C0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     bCvtPts1 @ 0x1C0072710 (bCvtPts1.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0072E38 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0072EC4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00803AC (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C00F87F4 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C00F89A8 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026C624 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02B5D04 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02B5DC0 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02B801C (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02B953C (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 *     ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C02B9570 (-vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z.c)
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
  __int64 *v22; // rcx
  __int64 v23; // rsi
  unsigned int v24; // r8d
  __int64 v25; // rsi
  __int64 v26; // r11
  int v27; // r14d
  unsigned int v28; // r9d
  __int64 v29; // rbx
  unsigned int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // ebx
  unsigned __int64 v34; // rcx
  int v35; // eax
  DC *v36; // rbx
  unsigned int v37; // edx
  __int64 v38; // rsi
  unsigned int v39; // r13d
  DC *v40; // rcx
  int v41; // r14d
  unsigned int v42; // r14d
  int v43; // edx
  int v44; // eax
  unsigned int v45; // ecx
  LONG v46; // r8d
  LONG v47; // eax
  LONG v48; // edx
  LONG v49; // ecx
  __int64 v50; // r13
  __int64 v51; // rax
  unsigned int v52; // r14d
  __int64 v53; // rdi
  struct PALETTE *v54; // rbx
  int v55; // r15d
  unsigned int v56; // r8d
  __int64 XlateObject; // rax
  XLATEOBJ *v58; // r14
  int v59; // ebx
  DC *v60; // r15
  int *v61; // rcx
  __int64 v62; // r9
  __int64 v63; // r8
  LONG left; // esi
  int right; // edi
  int bottom; // r12d
  __int64 v67; // rbx
  LONG v68; // r14d
  int v69; // ecx
  int v70; // r9d
  int v71; // eax
  int v72; // edx
  int v73; // r8d
  LONG v74; // esi
  int v75; // ecx
  struct REGION *v76; // rax
  struct ECLIPOBJ *v77; // rdx
  LONG v78; // edi
  __int64 v79; // r14
  struct _RECTL v80; // xmm6
  LONG v81; // r12d
  __int64 v82; // rax
  unsigned int v83; // edx
  unsigned int v84; // r8d
  unsigned int v85; // ecx
  __int64 v86; // rax
  unsigned int v87; // edx
  unsigned int v88; // r8d
  DC *v89; // r15
  LONG v90; // eax
  int v91; // r14d
  int v92; // r12d
  int v93; // edi
  struct _RECTL v94; // xmm6
  __int32 v95; // edx
  __int32 v96; // r8d
  int v97; // ecx
  struct _RECTL v98; // xmm0
  int v99; // eax
  BOOL v100; // eax
  int v101; // ecx
  BOOL (__stdcall *v102)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v103; // rdx
  int v104; // eax
  __int64 *v105; // rcx
  __int64 v106; // rbx
  __int64 v107; // rdi
  struct _DC_ATTR *UserAttr; // rax
  struct _DC_ATTR *v110; // rax
  int v111; // r10d
  struct REGION *v112; // rax
  struct ECLIPOBJ *v113; // rdx
  struct _SURFOBJ *v114; // rdx
  __int16 v115; // r8
  BOOL (__stdcall *v116)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v117; // rdx
  _DWORD *v118; // rax
  unsigned int v119; // eax
  unsigned int v120; // ecx
  ULONG v121; // ecx
  int v122; // eax
  unsigned __int64 v123; // rcx
  unsigned __int64 v124; // rcx
  ULONG v125; // ecx
  bool v126; // zf
  int v127; // eax
  unsigned int v128; // edi
  __int64 v129; // r8
  BOOL (__stdcall *v130)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rax
  __int64 v131; // rdx
  _DWORD *v132; // rax
  __int32 v133; // xmm1_4
  BOOL (__stdcall *v134)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rax
  __int64 v135; // rdx
  struct _CLIPOBJ *v136; // [rsp+20h] [rbp-E0h]
  unsigned int v137; // [rsp+60h] [rbp-A0h]
  unsigned int v138; // [rsp+64h] [rbp-9Ch]
  unsigned int v139; // [rsp+68h] [rbp-98h]
  int v140; // [rsp+6Ch] [rbp-94h]
  unsigned int v141; // [rsp+70h] [rbp-90h]
  unsigned int v142; // [rsp+74h] [rbp-8Ch]
  unsigned int v143; // [rsp+78h] [rbp-88h] BYREF
  XLATEOBJ *v144; // [rsp+80h] [rbp-80h] BYREF
  DC *v145; // [rsp+88h] [rbp-78h] BYREF
  __int64 v146; // [rsp+90h] [rbp-70h]
  unsigned int v147; // [rsp+98h] [rbp-68h]
  int v148; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 v149; // [rsp+A0h] [rbp-60h] BYREF
  int v150; // [rsp+A8h] [rbp-58h] BYREF
  struct tagRGBQUAD *v151[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v152; // [rsp+C0h] [rbp-40h]
  __int64 v153; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v154; // [rsp+D0h] [rbp-30h]
  __int64 v155; // [rsp+D8h] [rbp-28h]
  __int64 v156; // [rsp+E0h] [rbp-20h]
  unsigned int v157; // [rsp+E8h] [rbp-18h]
  unsigned int v158; // [rsp+ECh] [rbp-14h]
  unsigned int v159; // [rsp+F0h] [rbp-10h]
  LONG v160; // [rsp+F4h] [rbp-Ch]
  __int64 v161; // [rsp+F8h] [rbp-8h] BYREF
  char v162; // [rsp+100h] [rbp+0h]
  int v163; // [rsp+104h] [rbp+4h]
  int v164; // [rsp+108h] [rbp+8h]
  __int64 v165; // [rsp+110h] [rbp+10h] BYREF
  int v166; // [rsp+118h] [rbp+18h]
  _BYTE v167[32]; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v168; // [rsp+140h] [rbp+40h] BYREF
  __int64 v169; // [rsp+148h] [rbp+48h]
  __int16 v170; // [rsp+150h] [rbp+50h]
  struct _RECTL v171; // [rsp+170h] [rbp+70h] BYREF
  struct _RECTL v172; // [rsp+180h] [rbp+80h] BYREF
  __m128i v173; // [rsp+190h] [rbp+90h] BYREF
  DC *v174[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL v175; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v176[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v177; // [rsp+1C4h] [rbp+C4h] BYREF
  __int64 v178; // [rsp+210h] [rbp+110h]
  int v179; // [rsp+218h] [rbp+118h]
  int v180; // [rsp+240h] [rbp+140h]
  __int64 v181; // [rsp+250h] [rbp+150h]
  unsigned int v182; // [rsp+328h] [rbp+228h]

  v17 = a10;
  v160 = a6;
  *(_QWORD *)&v171.left = a16;
  v143 = a4;
  *(_QWORD *)&v172.left = 0LL;
  LOBYTE(v21) = -1;
  *(_QWORD *)&v172.right = 0LL;
  v173.m128i_i64[0] = a10;
  XDCOBJ::vLock((XDCOBJ *)&v172, a1);
  v22 = *(__int64 **)&v172.left;
  if ( *(_QWORD *)&v172.left )
  {
    v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v172.left + 976LL) + 108LL);
    if ( v172.right && (*(_DWORD *)(*(_QWORD *)&v172.left + 44LL) & 2) != 0 )
    {
      if ( !v172.bottom )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v172);
        v22 = *(__int64 **)&v172.left;
        if ( UserAttr )
        {
          DC::RestoreAttributes(*(DC **)&v172.left, UserAttr);
          v22 = *(__int64 **)&v172.left;
        }
      }
      *((_DWORD *)v22 + 11) &= ~2u;
      v22 = *(__int64 **)&v172.left;
      v172.right = 0;
    }
    v150 = 0;
    v23 = *v22;
    HmgDecrementExclusiveReferenceCountEx(v22, (unsigned int)v172.bottom, &v150);
    if ( v150 )
      bDeleteDCInternalEx(v23, 0LL);
    v17 = v173.m128i_i64[0];
  }
  if ( (v21 & 1) != 0 )
    a2 = a4 + a2 - 1;
  if ( !a11 )
    goto LABEL_225;
  if ( !v17 )
    goto LABEL_225;
  if ( a12 > 2 )
    goto LABEL_225;
  v24 = a14;
  if ( a14 < 0x28 )
    goto LABEL_225;
  v25 = (__int64)*a11;
  if ( (unsigned int)v25 < 0x28 )
    goto LABEL_225;
  v26 = (unsigned int)a11[1];
  v152 = v26;
  if ( (int)v26 <= 0 )
    goto LABEL_225;
  v27 = (int)a11[2];
  v164 = v27;
  if ( !v27 )
    goto LABEL_225;
  v28 = (unsigned int)a11[8];
  v29 = *(unsigned __int16 *)&a11[3].rgbRed;
  v153 = 0LL;
  v154 = 0LL;
  v156 = 0LL;
  v155 = 0LL;
  v30 = (unsigned int)a11[4];
  v142 = v30;
  v147 = v28;
  v151[0] = (struct tagRGBQUAD *)((char *)a11 + v25);
  if ( v27 < 0 )
  {
    LODWORD(v156) = 1;
    if ( v30 > 0xC )
      goto LABEL_225;
    v111 = 7225;
    if ( !_bittest(&v111, v30) )
      goto LABEL_225;
    v27 = -v27;
    v164 = v27;
  }
  v150 = 0;
  if ( v30 != 3 )
  {
    if ( !v30 )
    {
      if ( (unsigned int)v29 > 8 )
        goto LABEL_19;
      switch ( (_DWORD)v29 )
      {
        case 1:
          v138 = 2;
          LODWORD(v153) = 1;
          v139 = 1;
          v31 = 2;
          v141 = 1024;
          break;
        case 4:
          v138 = 16;
          v139 = 1;
          v31 = 16;
          LODWORD(v153) = 2;
          v141 = 1024;
          break;
        case 8:
          v139 = 1;
          v31 = 256;
          LODWORD(v153) = 3;
          v138 = 256;
          v141 = 1024;
          break;
        default:
LABEL_19:
          if ( a12 == 1 )
            a12 = 0;
          v31 = 0;
          v141 = 512;
          v138 = 0;
          if ( (_DWORD)v29 == 32 )
          {
            LODWORD(v153) = 6;
LABEL_23:
            v139 = 8;
            break;
          }
          if ( (_DWORD)v29 != 16 )
          {
            if ( (_DWORD)v29 == 24 )
            {
              LODWORD(v153) = 5;
              goto LABEL_23;
            }
LABEL_225:
            v121 = 87;
            goto LABEL_226;
          }
          LODWORD(v153) = 4;
          v139 = 2;
          break;
      }
      v32 = v29 * v26;
      if ( (unsigned __int64)(v29 * v26) <= 0xFFFFFFFF && v32 + 31 >= v32 )
      {
        v33 = a9;
        v137 = a9;
        v34 = a9 * (unsigned __int64)(((v32 + 31) >> 3) & 0x1FFFFFFC);
        if ( v34 > 0xFFFFFFFF )
        {
          LODWORD(v34) = -1;
          HIDWORD(v154) = -1;
          v35 = -2147024362;
        }
        else
        {
          HIDWORD(v154) = v34;
          v35 = 0;
        }
        v159 = 31744;
        v158 = 992;
        v157 = 31;
        if ( v35 >= 0 )
        {
          v30 = v142;
          v148 = a8;
          goto LABEL_30;
        }
      }
LABEL_193:
      v121 = 534;
LABEL_226:
      EngSetLastError(v121);
      return 0LL;
    }
    if ( v30 != 10 )
    {
      if ( v30 != 2 )
      {
        if ( v30 != 12 )
        {
          if ( v30 == 1 )
          {
LABEL_163:
            if ( (_DWORD)v29 != 8 )
              goto LABEL_225;
            v139 = 1;
            v150 = 1;
            v138 = 256;
            v31 = 256;
            v30 = v142;
            LODWORD(v153) = 8;
            v33 = v27;
            v141 = 1024;
            goto LABEL_165;
          }
          if ( v30 != 11 )
          {
            if ( v30 == 4 )
            {
              LODWORD(v153) = 9;
            }
            else
            {
              if ( v30 != 5 )
                goto LABEL_225;
              LODWORD(v153) = 10;
            }
            v33 = a9;
            v31 = 0;
            v138 = 0;
            v141 = 512;
            v139 = 8;
LABEL_165:
            LODWORD(v34) = a11[5];
            HIDWORD(v154) = v34;
            v137 = v33;
            v148 = 0;
            goto LABEL_30;
          }
          DCOBJ::DCOBJ((DCOBJ *)v174, a1);
          if ( v174[0] && (unsigned int)DC::bIsCMYKColor(v174[0]) )
          {
            XDCOBJ::vUnlockFast((XDCOBJ *)v174);
            v24 = a14;
            v28 = v147;
            LODWORD(v26) = v152;
            goto LABEL_163;
          }
          goto LABEL_216;
        }
        DCOBJ::DCOBJ((DCOBJ *)v174, a1);
        if ( !v174[0] || !(unsigned int)DC::bIsCMYKColor(v174[0]) )
        {
          EngSetLastError(0x57u);
          if ( !v174[0] )
            return 0LL;
LABEL_235:
          XDCOBJ::vUnlockFast((XDCOBJ *)v174);
          return 0LL;
        }
        XDCOBJ::vUnlockFast((XDCOBJ *)v174);
        v24 = a14;
        v28 = v147;
        LODWORD(v26) = v152;
        v30 = v142;
      }
      if ( (_DWORD)v29 != 4 )
        goto LABEL_225;
      v138 = 16;
      v33 = v27;
      v139 = 1;
      v150 = 1;
      v31 = 16;
      LODWORD(v153) = 7;
      v141 = 1024;
      goto LABEL_165;
    }
    DCOBJ::DCOBJ((DCOBJ *)v174, a1);
    if ( !v174[0] || !(unsigned int)DC::bIsCMYKColor(v174[0]) )
      goto LABEL_216;
    switch ( (_DWORD)v29 )
    {
      case 1:
        v122 = 1;
        v138 = 2;
        v139 = 1;
        break;
      case 4:
        v122 = 2;
        v138 = 16;
        v139 = 1;
        break;
      case 8:
        LODWORD(v153) = 3;
        v138 = 256;
        v139 = 1;
LABEL_209:
        v141 = 1024;
        goto LABEL_210;
      case 0x20:
        LODWORD(v153) = 6;
        v138 = 0;
        v141 = 512;
        v139 = 16;
LABEL_210:
        v123 = v29 * v152;
        if ( v123 <= 0xFFFFFFFF && (int)v123 + 31 >= (unsigned int)v123 )
        {
          v33 = a9;
          v137 = a9;
          v124 = a9 * (unsigned __int64)(((unsigned int)(v123 + 31) >> 3) & 0x1FFFFFFC);
          if ( v124 <= 0xFFFFFFFF )
          {
            HIDWORD(v154) = v124;
            XDCOBJ::vUnlockFast((XDCOBJ *)v174);
            LODWORD(v34) = HIDWORD(v154);
            v24 = a14;
            v28 = v147;
            LODWORD(v26) = v152;
            v31 = v138;
            v30 = v142;
            v148 = a8;
            goto LABEL_30;
          }
          HIDWORD(v154) = -1;
        }
        v125 = 534;
        goto LABEL_217;
      default:
LABEL_216:
        v125 = 87;
LABEL_217:
        EngSetLastError(v125);
        if ( !v174[0] )
          return 0LL;
        goto LABEL_235;
    }
    LODWORD(v153) = v122;
    goto LABEL_209;
  }
  if ( a14 < 0x34 )
    goto LABEL_225;
  if ( a12 == 1 )
    a12 = 0;
  if ( (_DWORD)v29 == 16 )
  {
    LODWORD(v153) = 4;
  }
  else
  {
    if ( (_DWORD)v29 != 32 )
      goto LABEL_225;
    LODWORD(v153) = 6;
  }
  v159 = (unsigned int)a11[10];
  v31 = 0;
  v119 = (unsigned int)a11[11];
  v151[0] = a11 + 10;
  v158 = v119;
  v120 = v29 * v26;
  v157 = (unsigned int)a11[12];
  v138 = 0;
  v139 = 2;
  v141 = 512;
  if ( (unsigned __int64)(v29 * v26) > 0xFFFFFFFF || v120 + 31 < v120 )
    goto LABEL_193;
  v33 = a9;
  v137 = a9;
  v34 = a9 * (unsigned __int64)(((v120 + 31) >> 3) & 0x1FFFFFFC);
  if ( v34 > 0xFFFFFFFF )
  {
    HIDWORD(v154) = -1;
    goto LABEL_193;
  }
  v30 = v142;
  v148 = a8;
  HIDWORD(v154) = v34;
LABEL_30:
  v182 = v24 - v25;
  if ( v28 )
  {
    if ( v28 > v31 )
      v28 = v31;
    v147 = v28;
  }
  else
  {
    v147 = v31;
  }
  if ( a13 < (unsigned int)v34 )
    goto LABEL_225;
  HIDWORD(v153) = v26;
  if ( v30 - 4 <= 1 )
    LODWORD(v154) = v27;
  else
    LODWORD(v154) = v33;
  v145 = 0LL;
  v146 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v145, a1);
  v36 = v145;
  if ( v145 && (*((_DWORD *)v145 + 9) & 0x10000) == 0 )
  {
    v37 = (unsigned int)a11[4];
    v38 = *((_QWORD *)v145 + 6);
    v149 = __PAIR64__(a3, a2);
    if ( v37 - 4 <= 1
      && (!(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)&v145, v37) || a12 || *(_QWORD *)&v171.left) )
    {
      v39 = 0;
      v137 = 0;
    }
    else
    {
      v39 = v137;
    }
    if ( !a15 )
      goto LABEL_46;
    LODWORD(v174[1]) = *(_DWORD *)(*((_QWORD *)v36 + 122) + 208LL);
    HIDWORD(v174[1]) = *(_DWORD *)(*((_QWORD *)v36 + 122) + 108LL) & 1;
    if ( (*(_DWORD *)(*((_QWORD *)v36 + 122) + 340LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)v174, (struct XDCOBJ *)&v145, 0x204u, 0);
      v40 = v174[0];
      v36 = v145;
    }
    else
    {
      v40 = (DC *)((char *)v36 + 320);
      v174[0] = (DC *)((char *)v36 + 320);
    }
    v41 = *((_DWORD *)v40 + 8);
    if ( (*((_BYTE *)v40 + 32) & 0x43) != 0x43 )
    {
      bCvtPts1(v40, &v149, 1LL);
      a3 = HIDWORD(v149);
      a2 = v149;
    }
    if ( v39 && (unsigned int)(*(_DWORD *)&a11[4] - 4) <= 1 )
    {
      v126 = (v41 & 1) == 0;
      v42 = v137;
      if ( v126 )
        v42 = 0;
      v137 = v42;
    }
    else
    {
LABEL_46:
      v42 = v137;
    }
    v43 = *((_DWORD *)v36 + 130);
    v44 = v143;
    v45 = a5;
    v149 = __PAIR64__(a5, v143);
    if ( (v43 & 1) != 0 && (v43 & 2) == 0 )
    {
      v144 = *(XLATEOBJ **)((char *)v36 + 524);
      EPOINTL::vScale((EPOINTL *)&v149, (const struct POINTFL *)&v144);
      v45 = HIDWORD(v149);
      v44 = v149;
    }
    v46 = v44 + a2;
    v172.left = a2;
    v172.top = a3;
    v47 = v45 + a3;
    v172.bottom = v45 + a3;
    v48 = v46;
    v172.right = v46;
    v49 = v45 + a3;
    if ( a2 > v46 )
    {
      v48 = a2;
      v172.left = v46;
      v172.right = a2;
      a2 = v46;
    }
    if ( a3 > v47 )
    {
      v49 = a3;
      v172.top = v47;
      v172.bottom = a3;
      a3 = v47;
    }
    if ( a2 == v48 || a3 == v49 || !v42 )
      goto LABEL_123;
    if ( (*((_DWORD *)v36 + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)&v145, (struct ERECTL *)&v172);
    v170 = 256;
    v168 = 0LL;
    v169 = 0LL;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v167, (struct XDCOBJ *)&v145, 0);
    v50 = *((_QWORD *)v145 + 62);
    if ( !v50 )
      goto LABEL_115;
    v51 = *(_QWORD *)&v171.left;
    if ( !*(_QWORD *)&v171.left )
    {
      v51 = *(_QWORD *)(*((_QWORD *)v145 + 122) + 248LL);
      *(_QWORD *)&v171.left = v51;
    }
    v52 = *((_DWORD *)v145 + 30);
    if ( (v52 & 0x10000000) != 0 && (!v51 || v142 - 10 > 2) )
      v52 = v52 & 0xFFFFFFF | 0x20000000;
    v53 = *(_QWORD *)(v50 + 128);
    v166 = 0;
    v165 = 0LL;
    v54 = (struct PALETTE *)*((_QWORD *)v145 + 11);
    if ( v54 != ppalDefault )
      *(_QWORD *)(v50 + 176) = *(_QWORD *)v54;
    v140 = 0;
    v55 = 1;
    v144 = 0LL;
    v149 = 0LL;
    if ( !a12 )
    {
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v165, v139, v138, 0LL, v159, v158, v157, v141, 1) )
      {
        if ( !v147 )
          goto LABEL_66;
        if ( v182 >= 4 * v147 )
        {
          if ( v142 - 10 <= 2 )
            XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v165, (const unsigned int *)&v151[0]->rgbBlue, v56, v147);
          else
            XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v165, v151[0], 0, v147);
LABEL_66:
          XlateObject = CreateXlateObject(*(_QWORD *)&v171.left, v52, v165, v53, v54, v54, 0, 0, 0xFFFFFF, 0);
          v149 = XlateObject;
          if ( XlateObject )
          {
            v58 = (XLATEOBJ *)XlateObject;
            v144 = (XLATEOBJ *)XlateObject;
LABEL_68:
            v59 = 0;
            goto LABEL_69;
          }
          goto LABEL_258;
        }
        goto LABEL_260;
      }
LABEL_258:
      v55 = 0;
      v59 = 0;
      v58 = 0LL;
      goto LABEL_69;
    }
    if ( a12 == 1 )
    {
      v128 = v147;
      if ( v182 >= 2 * (unsigned __int64)v147 )
      {
        if ( (unsigned int)EXLATEOBJ::bMakeXlate(&v149, v151[0], v54, v50, v147, v138) )
        {
          v58 = (XLATEOBJ *)v149;
          v144 = (XLATEOBJ *)v149;
          if ( gbMultiMonMismatchColor
            && (*(_DWORD *)(v38 + 40) & 1) != 0
            && PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v165, v139, v138, 0LL, v159, v158, v157, v141, 1) )
          {
            v129 = *(_QWORD *)(v50 + 128);
            if ( !v129 )
              v129 = *(_QWORD *)(v38 + 1808);
            XEPALOBJ::vGetEntriesFrom(&v165, v54, v129, v151[0], v128);
            v59 = 1;
            v140 = 1;
            goto LABEL_69;
          }
          goto LABEL_68;
        }
        v55 = 0;
        v59 = 0;
        v58 = 0LL;
LABEL_69:
        v161 = 0LL;
        v162 = 0;
        v163 = 0;
        SURFMEM::bCreateDIB(
          (SURFMEM *)&v161,
          (struct _DEVBITMAPINFO *)&v153,
          (void *)v173.m128i_i64[0],
          0LL,
          0,
          0LL,
          0LL,
          0,
          1,
          0,
          0);
        if ( v55 && v161 )
        {
          *(_DWORD *)(v161 + 92) = 0;
          if ( (v167[24] & 1) == 0 )
            goto LABEL_302;
          v60 = v145;
          v61 = (int *)((char *)v145 + 1024);
          if ( (*((_DWORD *)v145 + 10) & 1) == 0 )
            v61 = (int *)((char *)v145 + 1016);
          v62 = *v61;
          if ( (unsigned __int64)(v62 + v172.left + 0x80000000LL) <= 0xFFFFFFFF
            && (unsigned __int64)(v62 + v172.right + 0x80000000LL) <= 0xFFFFFFFF
            && (v63 = v61[1], (unsigned __int64)(v63 + v172.top + 0x80000000LL) <= 0xFFFFFFFF)
            && (unsigned __int64)(v63 + v172.bottom + 0x80000000LL) <= 0xFFFFFFFF )
          {
            left = v62 + v172.left;
            v172.left += v62;
            right = *v61 + v172.right;
            v172.right = right;
            v172.top += v61[1];
            bottom = v61[1] + v172.bottom;
            v172.bottom = bottom;
            if ( v59 )
            {
              *(_QWORD *)(v161 + 128) = v165;
              v60 = v145;
              bottom = v172.bottom;
              right = v172.right;
              left = v172.left;
            }
            v67 = *(_QWORD *)(v50 + 48);
            v171.right = v160 + v143;
            v171.bottom = v164 - a7;
            v171.left = v160;
            v171.top = v164 - a5 - a7;
            if ( v150 )
            {
              v112 = XDCOBJ::prgnEffRao(&v145);
              v180 = 1;
              v178 = 0LL;
              v179 = 0;
              v181 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)v176, v112, (struct ERECTL *)&v172, 0);
              if ( !ERECTL::bEmpty((ERECTL *)&v177) )
              {
                if ( (*((_DWORD *)v145 + 9) & 0xE0) != 0 )
                {
                  *(_OWORD *)v174 = v177;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)&v145, v113, (__m128i *)v174);
                }
                ++*(_DWORD *)(v50 + 92);
                if ( v161 )
                  v114 = (struct _SURFOBJ *)(v161 + 24);
                else
                  v114 = 0LL;
                if ( bClipSrcDstRectsAndValidate(
                       (struct _SURFOBJ *)(v50 + 24),
                       v114,
                       (struct DCOBJ *)&v145,
                       0LL,
                       v136,
                       &v172,
                       &v171) )
                {
                  if ( (unsigned int)DC::bDpiScaleTransform(v145) )
                  {
                    if ( (v115 & 2) != 0 )
                      v130 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v67 + 2848);
                    else
                      v130 = EngStretchBlt;
                    v131 = 0LL;
                    if ( v161 )
                      v131 = v161 + 24;
                    ((void (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, XLATEOBJ *, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))v130)(
                      v50 + 24,
                      v131,
                      0LL,
                      v176,
                      v58,
                      0LL,
                      0LL,
                      &v172,
                      &v171,
                      0LL,
                      3);
                  }
                  else
                  {
                    v173.m128i_i64[0] = *(_QWORD *)&v171.left;
                    if ( (v115 & 0x400) != 0 )
                      v116 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v67 + 2840);
                    else
                      v116 = EngCopyBits;
                    if ( v161 )
                      v117 = v161 + 24;
                    else
                      v117 = 0LL;
                    ((void (__fastcall *)(__int64, __int64, _BYTE *, XLATEOBJ *, struct _RECTL *, __m128i *))v116)(
                      v50 + 24,
                      v117,
                      v176,
                      v58,
                      &v172,
                      &v173);
                  }
                }
              }
            }
            else
            {
              v68 = v164 - v148 - v137;
              LODWORD(v174[0]) = 0;
              HIDWORD(v174[1]) = v164 - v148;
              HIDWORD(v174[0]) = v68;
              LODWORD(v174[1]) = v152;
              v175 = v171;
              ERECTL::operator*=(&v171, v174);
              if ( v171.left != v171.right && v171.top != v171.bottom )
              {
                v69 = v171.left - v175.left;
                v70 = *((_DWORD *)v60 + 130);
                v71 = v171.right - v175.right;
                v72 = v171.top - v175.top;
                v73 = v171.bottom - v175.bottom;
                LODWORD(v151[0]) = v171.left - v175.left;
                LODWORD(v151[1]) = v171.right - v175.right;
                HIDWORD(v151[0]) = v171.top - v175.top;
                HIDWORD(v151[1]) = v171.bottom - v175.bottom;
                if ( (v70 & 1) != 0 && (v70 & 2) == 0 )
                {
                  v173.m128i_i64[0] = *(_QWORD *)((char *)v60 + 524);
                  ERECTL::vScale((ERECTL *)v151, (const struct POINTFL *)&v173);
                  v73 = HIDWORD(v151[1]);
                  v71 = (int)v151[1];
                  v72 = HIDWORD(v151[0]);
                  v69 = (int)v151[0];
                }
                v74 = v69 + left;
                v75 = v72 + v172.top;
                v172.left = v74;
                v172.right = v71 + right;
                v172.top += v72;
                v172.bottom = v73 + bottom;
                if ( v74 != v71 + right && v75 != v73 + bottom )
                {
                  v76 = DC::prgnRao(v60) ? DC::prgnRao(v60) : DC::prgnVisSnap(v60);
                  v180 = 1;
                  v178 = 0LL;
                  v179 = 0;
                  v181 = 0LL;
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v176, v76, (struct ERECTL *)&v172, 0);
                  if ( (_DWORD)v177 != DWORD2(v177) && DWORD1(v177) != HIDWORD(v177) )
                  {
                    if ( (*((_DWORD *)v145 + 9) & 0xE0) != 0 )
                    {
                      *(_OWORD *)v174 = v177;
                      XDCOBJ::vAccumulateTight((XDCOBJ *)&v145, v77, (__m128i *)v174);
                    }
                    if ( v142 - 4 <= 1 )
                    {
                      v78 = v68;
                      v171.bottom += v68 - v171.top;
                      v171.top = v68;
                    }
                    else
                    {
                      v171.bottom -= v68;
                      v78 = v171.top - v68;
                      v171.top -= v68;
                    }
                    ++*(_DWORD *)(v50 + 92);
                    if ( v161 )
                      v79 = v161 + 24;
                    else
                      v79 = 0LL;
                    v80 = v172;
                    v81 = v171.left;
                    *(struct _RECTL *)v174 = v172;
                    v151[0] = 0LL;
                    v82 = SURFOBJ_TO_SURFACE_NOT_NULL(v50 + 24);
                    v83 = 0;
                    v84 = 0;
                    if ( *(int *)(v82 + 112) < 0 )
                    {
                      v118 = *(_DWORD **)(v50 + 48);
                      if ( v118 )
                      {
                        if ( (v118[10] & 0x20000) != 0 )
                        {
                          v83 = v118[646];
                          v84 = v118[647];
                          v151[0] = (struct tagRGBQUAD *)__PAIR64__(v84, v83);
                        }
                      }
                    }
                    v85 = v83 + *(_DWORD *)(v50 + 56);
                    *(_QWORD *)&v175.left = 0LL;
                    LODWORD(v151[1]) = v85;
                    HIDWORD(v151[1]) = v84 + *(_DWORD *)(v50 + 60);
                    v86 = SURFOBJ_TO_SURFACE_NOT_NULL(v79);
                    v87 = 0;
                    v88 = 0;
                    if ( *(int *)(v86 + 112) < 0 )
                    {
                      v132 = *(_DWORD **)(v79 + 24);
                      if ( v132 )
                      {
                        if ( (v132[10] & 0x20000) != 0 )
                        {
                          v87 = v132[646];
                          v88 = v132[647];
                          *(_QWORD *)&v175.left = __PAIR64__(v88, v87);
                        }
                      }
                    }
                    v89 = v145;
                    v175.right = v87 + *(_DWORD *)(v79 + 32);
                    v90 = *((_DWORD *)v145 + 130);
                    v175.bottom = v88 + *(_DWORD *)(v79 + 36);
                    v160 = v90;
                    v91 = v90 & 1;
                    if ( (v90 & 1) != 0 && (v90 & 2) == 0 )
                    {
                      *(float *)&v133 = 1.0 / *((float *)v145 + 132);
                      *(float *)v173.m128i_i32 = 1.0 / *((float *)v145 + 131);
                      v173.m128i_i32[1] = v133;
                      ERECTL::vScale((ERECTL *)v151, (const struct POINTFL *)&v173);
                      ERECTL::vScale((ERECTL *)v174, (const struct POINTFL *)&v173);
                      v80 = *(struct _RECTL *)v174;
                    }
                    v173 = (__m128i)v80;
                    v92 = v81 - _mm_cvtsi128_si32((__m128i)v80);
                    v93 = v78 - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v80, 4));
                    ERECTL::operator*=(&v173, v151);
                    v173.m128i_i32[0] += v92;
                    v173.m128i_i32[2] += v92;
                    v173.m128i_i32[1] += v93;
                    v173.m128i_i32[3] += v93;
                    ERECTL::operator*=(&v173, &v175);
                    v94 = (struct _RECTL)v173;
                    v95 = v173.m128i_i32[1] - v93;
                    v96 = v173.m128i_i32[3] - v93;
                    v97 = _mm_cvtsi128_si32(v173);
                    v173.m128i_i32[2] -= v92;
                    v173.m128i_i32[1] -= v93;
                    v173.m128i_i32[3] -= v93;
                    v173.m128i_i32[0] = v97 - v92;
                    v98 = (struct _RECTL)v173;
                    *(__m128i *)v174 = v173;
                    v175 = v94;
                    if ( v97 - v92 < v173.m128i_i32[2] && v95 < v96 )
                    {
                      if ( v91 && (v160 & 2) == 0 )
                      {
                        v173.m128i_i64[0] = *(_QWORD *)((char *)v89 + 524);
                        ERECTL::vScale((ERECTL *)v174, (const struct POINTFL *)&v173);
                        v98 = *(struct _RECTL *)v174;
                      }
                      v171 = v94;
                      v172 = v98;
                      v99 = *((_DWORD *)v89 + 130);
                      v100 = (v99 & 1) != 0 && (v99 & 2) == 0;
                      v101 = *(_DWORD *)(v50 + 112);
                      if ( v100 )
                      {
                        if ( (v101 & 2) != 0 )
                          v134 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v67 + 2848);
                        else
                          v134 = EngStretchBlt;
                        v135 = 0LL;
                        if ( v161 )
                          v135 = v161 + 24;
                        v104 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, XLATEOBJ *, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))v134)(
                                 v50 + 24,
                                 v135,
                                 0LL,
                                 v176,
                                 v144,
                                 0LL,
                                 0LL,
                                 &v172,
                                 &v171,
                                 0LL,
                                 3);
                      }
                      else
                      {
                        v173.m128i_i64[0] = *(_QWORD *)&v175.left;
                        if ( (v101 & 0x400) != 0 )
                          v102 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v67 + 2840);
                        else
                          v102 = EngCopyBits;
                        if ( v161 )
                          v103 = v161 + 24;
                        else
                          v103 = 0LL;
                        v104 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, XLATEOBJ *, struct _RECTL *, __m128i *))v102)(
                                 v50 + 24,
                                 v103,
                                 v176,
                                 v144,
                                 &v172,
                                 &v173);
                      }
                      if ( !v104 )
                        v137 = 0;
                    }
                  }
                }
              }
            }
            v42 = v137;
            if ( v140 )
              *(_QWORD *)(v161 + 128) = 0LL;
          }
          else
          {
LABEL_302:
            v42 = v137;
          }
        }
        else
        {
          v42 = 0;
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v161);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v149);
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v165);
LABEL_115:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v167);
        v105 = v168;
        if ( v168 )
        {
          if ( (_BYTE)v170 )
          {
            *((_DWORD *)v168 + 10) &= ~2u;
            v105 = v168;
            LOBYTE(v170) = 0;
          }
          if ( v105 )
          {
            if ( (_DWORD)v169 && (*((_DWORD *)v105 + 11) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v168);
              *((_DWORD *)v168 + 11) &= ~2u;
              v105 = v168;
              LODWORD(v169) = 0;
            }
            v143 = 0;
            v106 = *v105;
            HmgDecrementExclusiveReferenceCountEx(v105, HIDWORD(v169), &v143);
            if ( v143 )
              bDeleteDCInternalEx(v106, 0LL);
          }
        }
        v36 = v145;
        goto LABEL_123;
      }
LABEL_260:
      EngSetLastError(0x57u);
      v55 = 0;
      v59 = 0;
      v58 = 0LL;
      goto LABEL_69;
    }
    v127 = *(_DWORD *)(v50 + 96);
    if ( v127 != (_DWORD)v153 )
    {
      if ( v127 == 2 )
      {
        if ( (_DWORD)v153 == 7 )
          goto LABEL_254;
      }
      else if ( v127 == 3 && (_DWORD)v153 == 8 )
      {
        goto LABEL_254;
      }
      EngSetLastError(0x57u);
      goto LABEL_258;
    }
LABEL_254:
    v58 = xloIdent;
    v144 = xloIdent;
    goto LABEL_68;
  }
  EngSetLastError(0x57u);
  v36 = v145;
  v42 = 0;
LABEL_123:
  if ( v36 )
  {
    if ( (_DWORD)v146 && (*((_DWORD *)v36 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v146) )
      {
        v110 = XDCOBJ::GetUserAttr((XDCOBJ *)&v145);
        if ( v110 )
          DC::RestoreAttributes(v145, v110);
        v36 = v145;
      }
      *((_DWORD *)v36 + 11) &= ~2u;
      v36 = v145;
      LODWORD(v146) = 0;
    }
    v143 = 0;
    v107 = *(_QWORD *)v36;
    HmgDecrementExclusiveReferenceCountEx(v36, HIDWORD(v146), &v143);
    if ( v143 )
      bDeleteDCInternalEx(v107, 0LL);
  }
  return v42;
}
