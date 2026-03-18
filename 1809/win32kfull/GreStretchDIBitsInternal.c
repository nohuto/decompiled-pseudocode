/*
 * XREFs of GreStretchDIBitsInternal @ 0x1C004DABC
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1C004D840 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     EngCopyBits @ 0x1C0045EE0 (EngCopyBits.c)
 *     bCvtPts1 @ 0x1C00477FC (bCvtPts1.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C004AB70 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     GreCreateDIBitmapReal @ 0x1C004F05C (GreCreateDIBitmapReal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00524A0 (GreSetDIBitsToDeviceInternal.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     NtGdiPatBlt @ 0x1C0056440 (NtGdiPatBlt.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0099C60 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     GreCreateDIBitmapComp @ 0x1C0100130 (GreCreateDIBitmapComp.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C0143190 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C029F094 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C029F150 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02A13BC (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02A28E0 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall GreStretchDIBitsInternal(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        int a13,
        unsigned int a14,
        unsigned int a15,
        __int64 a16)
{
  unsigned int v16; // r14d
  unsigned int v18; // edi
  unsigned __int8 v19; // al
  unsigned int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rdi
  int v27; // r9d
  signed int v28; // eax
  int v29; // r12d
  BOOL v30; // edi
  __int64 v31; // rcx
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // r9
  unsigned int v35; // edx
  __int64 v36; // rsi
  unsigned int v37; // r11d
  unsigned int v39; // eax
  unsigned __int64 v40; // rcx
  unsigned int v41; // r8d
  unsigned int v42; // r13d
  unsigned int v43; // eax
  unsigned int v44; // r15d
  unsigned __int64 v45; // rcx
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // ecx
  unsigned __int64 v49; // rcx
  int v50; // eax
  unsigned int v51; // edi
  int v52; // ebx
  __int64 v53; // r10
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  int v56; // eax
  bool v57; // zf
  int v58; // eax
  __int64 v59; // rsi
  BOOL v60; // eax
  int v61; // edx
  int v62; // r8d
  int v63; // r9d
  char v64; // cl
  int v65; // edx
  int v66; // eax
  SURFOBJ *v67; // rdx
  SURFOBJ *v68; // rcx
  unsigned int v69; // r8d
  struct SURFACE *v70; // rdx
  __int64 v71; // rdi
  struct PALETTE *v72; // rbx
  struct SURFACE *v73; // rdi
  int v74; // esi
  int v75; // r15d
  XLATEOBJ *v76; // rbx
  __int64 v77; // r8
  XLATEOBJ *XlateObject; // rax
  unsigned int v79; // r12d
  int v80; // r8d
  _DWORD *v81; // rcx
  int v82; // r9d
  int v83; // eax
  int v84; // ecx
  char v85; // si
  int v86; // edx
  int v87; // eax
  struct REGION *v88; // rax
  struct ECLIPOBJ *v89; // rdx
  __int64 v90; // rax
  BOOL (__stdcall *v91)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  int v92; // r11d
  int v93; // ecx
  int v94; // ecx
  __int64 v95; // r8
  __int64 v96; // rdx
  int v97; // eax
  unsigned int v98; // ebx
  int v99; // r12d
  int v100; // esi
  HDC CompatibleDC; // r15
  __int64 DIBitmapComp; // rax
  __int64 v103; // rdi
  int v104; // ebx
  unsigned int v105; // [rsp+80h] [rbp-80h]
  unsigned int v106; // [rsp+84h] [rbp-7Ch]
  int v107; // [rsp+8Ch] [rbp-74h]
  unsigned int v108; // [rsp+90h] [rbp-70h]
  int v109; // [rsp+94h] [rbp-6Ch]
  char v110; // [rsp+98h] [rbp-68h]
  unsigned int v111; // [rsp+9Ch] [rbp-64h]
  unsigned int v112; // [rsp+A0h] [rbp-60h]
  int v113; // [rsp+A0h] [rbp-60h]
  unsigned int v114; // [rsp+A4h] [rbp-5Ch]
  unsigned int v115; // [rsp+A4h] [rbp-5Ch]
  struct SURFACE *v117; // [rsp+A8h] [rbp-58h]
  _OWORD v118[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v119; // [rsp+D0h] [rbp-30h]
  __int64 v120; // [rsp+D8h] [rbp-28h] BYREF
  char v121; // [rsp+E0h] [rbp-20h]
  int v122; // [rsp+E4h] [rbp-1Ch]
  unsigned int v123; // [rsp+E8h] [rbp-18h]
  unsigned int v124; // [rsp+ECh] [rbp-14h]
  unsigned int v125; // [rsp+F0h] [rbp-10h]
  int v126; // [rsp+F4h] [rbp-Ch]
  int v127; // [rsp+F8h] [rbp-8h]
  int v128; // [rsp+FCh] [rbp-4h]
  __int64 v129; // [rsp+100h] [rbp+0h] BYREF
  char v130; // [rsp+108h] [rbp+8h]
  int v131; // [rsp+10Ch] [rbp+Ch]
  __int64 v132; // [rsp+110h] [rbp+10h] BYREF
  int v133; // [rsp+118h] [rbp+18h]
  _QWORD v134[2]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v135[32]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v136[2]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v137; // [rsp+160h] [rbp+60h] BYREF
  int v138; // [rsp+168h] [rbp+68h]
  int v139; // [rsp+16Ch] [rbp+6Ch]
  DC *v140[2]; // [rsp+170h] [rbp+70h] BYREF
  _OWORD v141[2]; // [rsp+180h] [rbp+80h] BYREF
  unsigned __int64 v142; // [rsp+1A0h] [rbp+A0h] BYREF
  int v143; // [rsp+1ACh] [rbp+ACh]
  _BYTE v144[32]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v145[80]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v146; // [rsp+220h] [rbp+120h] BYREF
  int v147; // [rsp+224h] [rbp+124h]
  int v148; // [rsp+228h] [rbp+128h]
  int v149; // [rsp+22Ch] [rbp+12Ch]
  struct tagRGBQUAD *v150; // [rsp+230h] [rbp+130h] BYREF
  int v151; // [rsp+238h] [rbp+138h]
  int v152; // [rsp+23Ch] [rbp+13Ch]
  RECTL prclDest; // [rsp+240h] [rbp+140h] BYREF
  _BYTE v154[4]; // [rsp+250h] [rbp+150h] BYREF
  __int128 v155[3]; // [rsp+254h] [rbp+154h] BYREF
  __int64 v156; // [rsp+288h] [rbp+188h]
  __int64 v157; // [rsp+2A0h] [rbp+1A0h]
  int v158; // [rsp+2A8h] [rbp+1A8h]
  int v159; // [rsp+2D0h] [rbp+1D0h]
  __int64 v160; // [rsp+2E0h] [rbp+1E0h]

  v16 = 0;
  v18 = 0;
  *(_QWORD *)&prclDest.left = a10;
  v136[0] = a16;
  v127 = a4;
  v19 = gajRop3[BYTE2(a13)];
  v128 = a3;
  v107 = a12;
  v126 = a5;
  v108 = 0;
  if ( (v19 & 0xD4) == 0 )
    return (unsigned int)NtGdiPatBlt(a1, a5, a13);
  v134[0] = 0LL;
  v134[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v135);
  XDCOBJ::vLock((XDCOBJ *)v134, a1);
  if ( !v134[0]
    || !a11
    || !*(_QWORD *)&prclDest.left
    || a12 > 2
    || a14 < 0xC
    || (v20 = *(_DWORD *)a11, LODWORD(v120) = v20, a14 < v20)
    || v20 < 0x28
    || *(int *)(a11 + 4) <= 0
    || !*(_DWORD *)(a11 + 8) )
  {
LABEL_47:
    MDCOBJ::~MDCOBJ((MDCOBJ *)v134);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v135);
    return v18;
  }
  v21 = *(_QWORD *)(v134[0] + 976LL);
  v22 = *(unsigned __int8 *)(v21 + 215);
  v138 = *(_DWORD *)(v21 + 208);
  v23 = *(_QWORD *)(v134[0] + 976LL);
  v119 = v22;
  v139 = *(_DWORD *)(v23 + 108) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v134[0] + 976LL) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v137, (struct XDCOBJ *)v134, 0x204u, 0);
    v24 = v137;
  }
  else
  {
    v24 = v134[0] + 320LL;
    v137 = v134[0] + 320LL;
  }
  v25 = *(unsigned int *)(a11 + 16);
  if ( (unsigned int)(v25 - 4) > 1 )
  {
    v26 = v136[0];
  }
  else
  {
    if ( !(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)v134, v25) )
      goto LABEL_286;
    if ( BYTE2(a13) != 204 )
      goto LABEL_286;
    if ( (*(_DWORD *)(v24 + 32) & 1) == 0 )
      goto LABEL_286;
    if ( a12 )
      goto LABEL_286;
    v26 = v136[0];
    if ( v136[0] )
      goto LABEL_286;
  }
  if ( v127 == a8 )
  {
    v27 = a9;
    if ( v126 == a9
      && a9 > 0
      && a8 > 0
      && !(a7 | a6)
      && BYTE2(a13) == 204
      && v119 != 4
      && (*(_DWORD *)(v24 + 32) & 2) != 0 )
    {
      v28 = abs32(*(_DWORD *)(a11 + 8));
      if ( a9 >= v28 )
        v27 = v28;
      v16 = GreSetDIBitsToDeviceInternal(
              a1,
              v126,
              a6,
              a7,
              a7,
              v27,
              *(__int64 *)&prclDest.left,
              a11,
              a12,
              a15,
              a14,
              1,
              v26);
      goto LABEL_286;
    }
  }
  v29 = 1;
  v30 = 0;
  if ( a12 == 1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v145);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v144, (struct XDCOBJ *)v134, 0);
    v31 = *(_QWORD *)(v134[0] + 496LL);
    if ( v31 )
      v30 = *(_DWORD *)(v31 + 96) == 1;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v144);
    DCOBJ::~DCOBJ((DCOBJ *)v145);
    v24 = v137;
  }
  if ( BYTE2(a13) != 204 || (*(_DWORD *)(v24 + 32) & 1) == 0 || v30 )
  {
    v99 = *(_DWORD *)(a11 + 8);
    if ( v99 <= 0 )
      v100 = a7;
    else
      v100 = v99 - a7 - a9;
    CompatibleDC = (HDC)GreCreateCompatibleDC(a1, v25, v24);
    if ( (unsigned int)(*(_DWORD *)(a11 + 16) - 1) <= 1 )
      DIBitmapComp = GreCreateDIBitmapComp(a1, *(__int64 *)&prclDest.left, a11, a12, a14, a15);
    else
      DIBitmapComp = GreCreateDIBitmapReal(a1, a12, a14, a15, 0LL, 0, 0LL, 0, 0LL, 0LL);
    v103 = DIBitmapComp;
    if ( CompatibleDC && DIBitmapComp )
    {
      GreSelectBitmap(CompatibleDC, DIBitmapComp);
      v104 = GreStretchBltInternal(a1, a2, v128, v127, v126, CompatibleDC, a6, v100, a8, a9, a13, 0xFFFFFF, 1);
      bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
      GreDeleteObject(v103);
      if ( v104 )
        goto LABEL_285;
    }
    else
    {
      bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
      GreDeleteObject(v103);
    }
    v99 = 0;
LABEL_285:
    v16 = v99;
    goto LABEL_286;
  }
  memset(v118, 0, sizeof(v118));
  v32 = *(_DWORD *)(a11 + 8);
  v33 = *(_DWORD *)(a11 + 16);
  v34 = *(unsigned int *)(a11 + 4);
  v35 = *(_DWORD *)(a11 + 32);
  v36 = *(unsigned __int16 *)(a11 + 14);
  v150 = (struct tagRGBQUAD *)(a11 + (unsigned int)v120);
  v109 = v33;
  v37 = -v32;
  v112 = v34;
  v114 = v35;
  DWORD2(v118[1]) = v32 < 0;
  if ( v32 >= 0 )
    v37 = v32;
  v106 = v37;
  if ( v33 == 3 )
  {
    if ( a14 < 0x34 )
    {
LABEL_45:
      EngSetLastError(0x57u);
LABEL_46:
      v18 = 0;
      goto LABEL_47;
    }
    v39 = 0;
    if ( a12 != 1 )
      v39 = a12;
    v107 = v39;
    if ( (_DWORD)v36 == 16 )
    {
      LODWORD(v118[0]) = 4;
    }
    else if ( (_DWORD)v36 == 32 )
    {
      LODWORD(v118[0]) = 6;
    }
    else
    {
      EngSetLastError(0x57u);
      LODWORD(v34) = v112;
      v29 = 0;
      v37 = v106;
    }
    v40 = v36 * (unsigned int)v34;
    v125 = *(_DWORD *)(a11 + 40);
    v41 = -1;
    v124 = *(_DWORD *)(a11 + 44);
    v42 = 0;
    v43 = *(_DWORD *)(a11 + 48);
    if ( v40 <= 0xFFFFFFFF )
      v41 = v36 * v34;
    v150 = (struct tagRGBQUAD *)(a11 + 40);
    v44 = 512;
    v123 = v43;
    v105 = 2;
    if ( v40 > 0xFFFFFFFF || v41 + 31 < v41 )
      goto LABEL_63;
    v45 = v37 * (((unsigned __int64)(v41 + 31) >> 3) & 0x1FFFFFFC);
    v46 = -1;
    if ( v45 <= 0xFFFFFFFF )
      v46 = v37 * (((v41 + 31) >> 3) & 0x1FFFFFFC);
    HIDWORD(v118[0]) = v46;
    if ( v45 > 0xFFFFFFFF )
      goto LABEL_63;
    goto LABEL_89;
  }
  if ( v33 )
  {
    if ( v33 == 10 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v140, a1);
      if ( !v140[0] || !(unsigned int)DC::bIsCMYKColor(v140[0]) )
        goto LABEL_122;
      if ( (_DWORD)v36 == 1 )
      {
        v42 = 2;
        LODWORD(v118[0]) = 1;
        v105 = 1;
      }
      else
      {
        switch ( (_DWORD)v36 )
        {
          case 4:
            LODWORD(v118[0]) = 2;
            v42 = 16;
            break;
          case 8:
            LODWORD(v118[0]) = 3;
            v42 = 256;
            break;
          case 0x20:
            LODWORD(v118[0]) = 6;
            v42 = 0;
            v105 = 16;
            v44 = 512;
            goto LABEL_116;
          default:
LABEL_122:
            EngSetLastError(0x57u);
            v29 = 0;
            v44 = v106;
            v42 = v106;
            v105 = v106;
LABEL_123:
            MDCOBJ::~MDCOBJ((MDCOBJ *)v140);
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v141);
            goto LABEL_89;
        }
        v105 = 1;
      }
      v44 = 1024;
LABEL_116:
      v54 = v36 * v112;
      if ( v54 > 0xFFFFFFFF || (int)v54 + 31 < (unsigned int)v54 )
        goto LABEL_121;
      v55 = v106 * (((unsigned __int64)(unsigned int)(v54 + 31) >> 3) & 0x1FFFFFFC);
      v56 = -1;
      if ( v55 <= 0xFFFFFFFF )
        v56 = v55;
      HIDWORD(v118[0]) = v56;
      if ( v55 > 0xFFFFFFFF )
      {
LABEL_121:
        EngSetLastError(0x216u);
        MDCOBJ::~MDCOBJ((MDCOBJ *)v140);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v141);
        goto LABEL_286;
      }
      goto LABEL_123;
    }
    if ( v33 != 2 )
    {
      if ( v33 != 12 )
      {
        if ( v33 != 1 )
        {
          if ( v33 != 11 )
          {
            if ( v33 == 4 )
            {
              LODWORD(v118[0]) = 9;
LABEL_130:
              v51 = 8;
              v105 = 8;
              v42 = 0;
              v44 = 512;
              HIDWORD(v118[0]) = *(_DWORD *)(a11 + 20);
              v52 = 0;
              goto LABEL_93;
            }
            if ( v33 == 5 )
            {
              LODWORD(v118[0]) = 10;
              goto LABEL_130;
            }
            EngSetLastError(0x57u);
            v29 = 0;
LABEL_134:
            v51 = v106;
            v42 = v106;
            v44 = v106;
            v105 = v106;
            goto LABEL_90;
          }
          DCOBJ::DCOBJ((DCOBJ *)v140, a1);
          if ( !v140[0] || !(unsigned int)DC::bIsCMYKColor(v140[0]) )
          {
            EngSetLastError(0x57u);
            v29 = 0;
          }
          MDCOBJ::~MDCOBJ((MDCOBJ *)v140);
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v141);
          if ( !v29 )
            goto LABEL_134;
        }
        if ( (_DWORD)v36 != 8 )
          EngSetLastError(0x57u);
        LODWORD(v118[0]) = 8;
        v42 = 256;
        v57 = (_DWORD)v36 == 8;
LABEL_142:
        HIDWORD(v118[0]) = *(_DWORD *)(a11 + 20);
        v52 = 1;
        v58 = 0;
        v105 = 1;
        if ( v57 )
          v58 = v29;
        v44 = 1024;
        v29 = v58;
        v51 = 1;
        goto LABEL_91;
      }
      DCOBJ::DCOBJ((DCOBJ *)v140, a1);
      if ( !v140[0] || !(unsigned int)DC::bIsCMYKColor(v140[0]) )
      {
        EngSetLastError(0x57u);
        v29 = 0;
      }
      MDCOBJ::~MDCOBJ((MDCOBJ *)v140);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v141);
      if ( !v29 )
        goto LABEL_134;
    }
    if ( (_DWORD)v36 != 4 )
      EngSetLastError(0x57u);
    LODWORD(v118[0]) = 7;
    v42 = 16;
    v57 = (_DWORD)v36 == 4;
    goto LABEL_142;
  }
  switch ( (_DWORD)v36 )
  {
    case 1:
      LODWORD(v118[0]) = 1;
      v42 = 2;
      goto LABEL_82;
    case 4:
      LODWORD(v118[0]) = 2;
      v42 = 16;
      goto LABEL_82;
    case 8:
      LODWORD(v118[0]) = 3;
      v42 = 256;
LABEL_82:
      v105 = 1;
      v44 = 1024;
      goto LABEL_83;
  }
  v47 = 0;
  if ( a12 != 1 )
    v47 = a12;
  v107 = v47;
  if ( (_DWORD)v36 == 16 )
  {
    LODWORD(v118[0]) = 4;
    v105 = 2;
  }
  else
  {
    if ( (_DWORD)v36 == 24 )
    {
      LODWORD(v118[0]) = 5;
    }
    else
    {
      if ( (_DWORD)v36 != 32 )
      {
        EngSetLastError(0x57u);
        v29 = 0;
        v42 = v106;
        v44 = v106;
        v105 = v106;
LABEL_88:
        v125 = 31744;
        v124 = 992;
        v123 = 31;
LABEL_89:
        v51 = v105;
LABEL_90:
        v52 = 0;
LABEL_91:
        if ( !v29 )
          goto LABEL_46;
        v35 = v114;
        v33 = v109;
        LODWORD(v34) = v112;
        v37 = v106;
LABEL_93:
        v53 = v136[0];
        v111 = a14 - v120;
        if ( !v136[0] )
        {
          v53 = *(_QWORD *)(*(_QWORD *)(v134[0] + 976LL) + 248LL);
          v136[0] = v53;
        }
        v113 = *(_DWORD *)(v134[0] + 120LL);
        if ( (v113 & 0x10000000) != 0 && (!v53 || (unsigned int)(v33 - 10) > 2) )
          v113 = v113 & 0xFFFFFFF | 0x20000000;
        *(_QWORD *)((char *)v118 + 4) = __PAIR64__(v37, v34);
        if ( v35 )
        {
          if ( v35 > v42 )
            v35 = v42;
          v115 = v35;
        }
        else
        {
          v115 = v42;
        }
        if ( a15 < HIDWORD(v118[0]) )
          goto LABEL_45;
        v59 = *(_QWORD *)(v134[0] + 48LL);
        v148 = a2 + v127;
        v146 = a2;
        v147 = v128;
        v149 = v128 + v126;
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v142, (struct XDCOBJ *)v134, 0x204u);
        v60 = (*(_BYTE *)(v142 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v142, &v146, 2LL);
        if ( v143 )
        {
          ++v146;
          ++v148;
        }
        if ( !v60 )
          goto LABEL_46;
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v146) )
        {
          v18 = a9;
          goto LABEL_47;
        }
        v64 = 0;
        v110 = 0;
        if ( v62 > v61 )
        {
          v146 = v61;
          v148 = v62;
          if ( !v143 )
          {
            v146 = v63 + v61;
            v148 = v62 + 1;
          }
          v64 = v63;
          v110 = v63;
        }
        v65 = v147;
        if ( v147 > v149 )
        {
          v147 = v149 + 1;
          v110 = v64 ^ 2;
          v149 = v65 + 1;
        }
        v133 = 0;
        v132 = 0LL;
        if ( !v107 )
          v29 = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v132, v51, v42, 0LL, v125, v124, v123, v44, v63) != 0 ? v29 : 0;
        if ( !v29 )
        {
LABEL_272:
          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v132);
          v18 = v108;
          goto LABEL_47;
        }
        DCOBJ::DCOBJ((DCOBJ *)v145);
        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v144, (struct XDCOBJ *)v134, 0);
        v66 = *(_DWORD *)(*(_QWORD *)(v134[0] + 48LL) + 40LL) & 0x8000;
        *(_QWORD *)&v118[1] = 0LL;
        DWORD2(v118[1]) |= 8 * v66;
        v129 = 0LL;
        v130 = 0;
        v131 = 0;
        if ( v52 )
        {
          v120 = 0LL;
          v121 = 0;
          v122 = 0;
          *(_OWORD *)v140 = v118[0];
          v141[0] = v118[1];
          if ( SURFMEM::bCreateDIB(
                 (SURFMEM *)&v120,
                 (struct _DEVBITMAPINFO *)v140,
                 *(void **)&prclDest.left,
                 0LL,
                 0,
                 0LL,
                 0LL,
                 0,
                 1,
                 0,
                 0)
            && (LODWORD(v118[0]) = (LODWORD(v118[0]) != 7) + 2,
                SURFMEM::bCreateDIB((SURFMEM *)&v129, (struct _DEVBITMAPINFO *)v118, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)) )
          {
            v67 = 0LL;
            *(_QWORD *)&prclDest.right = *(_QWORD *)((char *)v118 + 4);
            *(_QWORD *)&prclDest.left = 0LL;
            if ( v120 )
              v67 = (SURFOBJ *)(v120 + 24);
            v68 = 0LL;
            if ( v129 )
              v68 = (SURFOBJ *)(v129 + 24);
            EngCopyBits(v68, v67, 0LL, 0LL, &prclDest, &gptl00);
          }
          else
          {
            v29 = 0;
          }
          SURFMEM::~SURFMEM((SURFMEM *)&v120);
        }
        else
        {
          v29 = SURFMEM::bCreateDIB(
                  (SURFMEM *)&v129,
                  (struct _DEVBITMAPINFO *)v118,
                  *(void **)&prclDest.left,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  0,
                  1,
                  0,
                  0) != 0
              ? v29
              : 0;
        }
        if ( !v29 )
        {
LABEL_271:
          SURFMEM::~SURFMEM((SURFMEM *)&v129);
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v144);
          DCOBJ::~DCOBJ((DCOBJ *)v145);
          goto LABEL_272;
        }
        v70 = *(struct SURFACE **)(v134[0] + 496LL);
        v117 = v70;
        if ( !v70 )
        {
          v70 = SURFACE::pdibDefault;
          v117 = SURFACE::pdibDefault;
        }
        v71 = *((_QWORD *)v70 + 16);
        *(_QWORD *)&prclDest.left = 0LL;
        v72 = *(struct PALETTE **)(v134[0] + 88LL);
        if ( v72 != ppalDefault )
          *((_QWORD *)v70 + 22) = *(_QWORD *)v72;
        if ( v107 )
        {
          if ( v107 != 1 )
          {
            v73 = v117;
            v74 = v109;
            v75 = 0;
            if ( v107 == 2 )
            {
              v76 = xloIdent;
              if ( *((_DWORD *)v70 + 24) != LODWORD(v118[0]) )
                v29 = 0;
            }
            else
            {
              v76 = 0LL;
            }
            goto LABEL_218;
          }
          if ( v111 < 2 * (unsigned __int64)v115
            || !(unsigned int)EXLATEOBJ::bMakeXlate(&prclDest, v150, v72, v70, v115, v42) )
          {
            goto LABEL_270;
          }
          v120 = *(_QWORD *)&prclDest.left;
          if ( gbMultiMonMismatchColor && (*(_DWORD *)(v59 + 40) & 1) != 0 )
          {
            v73 = v117;
            if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v132, v105, v42, 0LL, v125, v124, v123, v44, 1) )
            {
              v77 = *((_QWORD *)v117 + 16);
              if ( !v77 )
                v77 = *(_QWORD *)(v59 + 1808);
              XEPALOBJ::vGetEntriesFrom(&v132, v72, v77, v150, v115);
              v76 = (XLATEOBJ *)v120;
              v74 = v109;
              v75 = 1;
LABEL_218:
              if ( v29 )
              {
                if ( (*(_DWORD *)(v134[0] + 36LL) & 0xE0) != 0 )
                  XDCOBJ::vAccumulate((XDCOBJ *)v134, (struct ERECTL *)&v146);
                if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v134) )
                {
                  v79 = v106;
                }
                else
                {
                  if ( (v144[24] & 1) == 0 )
                    goto LABEL_270;
                  v80 = a6;
                  v81 = (_DWORD *)(v134[0] + 1024LL);
                  if ( (*(_DWORD *)(v134[0] + 40LL) & 1) == 0 )
                    v81 = (_DWORD *)(v134[0] + 1016LL);
                  v146 += *v81;
                  v148 += *v81;
                  v147 += v81[1];
                  v149 += v81[1];
                  LODWORD(v150) = a6;
                  if ( v74 == 4 && (BYTE8(v118[1]) & 1) != 0 )
                  {
                    v82 = a7;
                    v83 = a9;
                    v79 = v106;
                  }
                  else
                  {
                    v79 = v106;
                    v83 = a9;
                    v82 = v106 - a7 - a9;
                  }
                  v84 = v82 + v83;
                  v85 = v110;
                  v86 = a6 + a8;
                  HIDWORD(v150) = v82;
                  v152 = v82 + v83;
                  v151 = a6 + a8;
                  if ( a6 > a6 + a8 )
                  {
                    v80 = v86 + 1;
                    v85 = v110 ^ 1;
                    v86 = a6 + 1;
                    LODWORD(v150) = v80;
                    v151 = a6 + 1;
                  }
                  if ( v82 > v84 )
                  {
                    v87 = v82;
                    v85 ^= 2u;
                    v82 = v84 + 1;
                    HIDWORD(v150) = v84 + 1;
                    v84 = v87 + 1;
                    v152 = v87 + 1;
                  }
                  if ( v86 <= 0
                    || v84 <= 0
                    || v80 >= *(_DWORD *)(v129 + 56)
                    || v82 >= *(_DWORD *)(v129 + 60)
                    || (unsigned int)ERECTL::bEmpty((ERECTL *)&v150) )
                  {
                    goto LABEL_270;
                  }
                  v88 = XDCOBJ::prgnEffRao((XDCOBJ *)v134);
                  v156 = 0LL;
                  v157 = 0LL;
                  v158 = 0;
                  v159 = 1;
                  v160 = 0LL;
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v154, v88, (struct ERECTL *)&v146, 0);
                  if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v155) )
                  {
                    if ( (*(_DWORD *)(v134[0] + 36LL) & 0xE0) != 0 )
                    {
                      *(_OWORD *)v136 = v155[0];
                      XDCOBJ::vAccumulateTight((XDCOBJ *)v134, v89, (struct ERECTL *)v136);
                    }
                    if ( v75 )
                      *(_QWORD *)(v129 + 128) = v132;
                    v90 = *((_QWORD *)v73 + 6);
                    if ( (*((_DWORD *)v73 + 28) & 2) != 0 )
                      v91 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v90 + 2848);
                    else
                      v91 = EngStretchBlt;
                    v92 = v119;
                    if ( (*((_DWORD *)v73 + 28) & 2) != 0 && (*(_DWORD *)(v90 + 40) & 0x20000) == 0 )
                    {
                      if ( v119 == 4 && (*(_BYTE *)(v134[0] + 72LL) & 0x10) == 0 )
                        v91 = EngStretchBlt;
                      if ( (int)v150 < 0
                        || SHIDWORD(v150) < 0
                        || v151 > *(_DWORD *)(v129 + 56)
                        || v152 > *(_DWORD *)(v129 + 60) )
                      {
                        v91 = EngStretchBlt;
                      }
                    }
                    if ( (v85 & 1) != 0 )
                    {
                      v93 = v146;
                      v146 = v148;
                      v148 = v93;
                    }
                    if ( (v85 & 2) != 0 )
                    {
                      v94 = v147;
                      v147 = v149;
                      v149 = v94;
                    }
                    ++*((_DWORD *)v73 + 23);
                    v95 = 0LL;
                    if ( *(__int16 *)(v134[0] + 178LL) >= 0 )
                      v95 = v134[0] + 176LL;
                    v96 = 0LL;
                    if ( v129 )
                      v96 = v129 + 24;
                    v97 = ((__int64 (__fastcall *)(char *, __int64, _QWORD, _BYTE *, XLATEOBJ *, __int64, __int64, int *, struct tagRGBQUAD **, _QWORD, int))v91)(
                            (char *)v73 + 24,
                            v96,
                            0LL,
                            v154,
                            v76,
                            v95,
                            v134[0] + 1200LL,
                            &v146,
                            &v150,
                            0LL,
                            v92);
                    v98 = 0;
                    if ( v97 )
                      v98 = v79;
                    v108 = v98;
                    if ( v75 )
                      *(_QWORD *)(v129 + 128) = 0LL;
                    goto LABEL_270;
                  }
                }
                v108 = v79;
              }
LABEL_270:
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&prclDest);
              goto LABEL_271;
            }
            v29 = 0;
          }
          else
          {
            v73 = v117;
          }
          v76 = (XLATEOBJ *)v120;
          v74 = v109;
LABEL_204:
          v75 = 0;
          goto LABEL_218;
        }
        if ( v115 )
        {
          if ( v111 < 4 * v115 )
            goto LABEL_270;
          v74 = v109;
          if ( (unsigned int)(v109 - 10) <= 2 )
            XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v132, (const unsigned int *)&v150->rgbBlue, v69, v115);
          else
            XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v132, v150, 0, v115);
          XlateObject = (XLATEOBJ *)CreateXlateObject(
                                      (void *)v136[0],
                                      v113,
                                      v132,
                                      v71,
                                      (__int64)v72,
                                      (__int64)v72,
                                      0,
                                      0,
                                      0xFFFFFFu,
                                      0);
          *(_QWORD *)&prclDest.left = XlateObject;
          if ( !XlateObject )
            v29 = 0;
        }
        else
        {
          XlateObject = (XLATEOBJ *)CreateXlateObject(
                                      (void *)v136[0],
                                      v113,
                                      v132,
                                      v71,
                                      (__int64)v72,
                                      (__int64)v72,
                                      0,
                                      0,
                                      0xFFFFFFu,
                                      0);
          v74 = v109;
          *(_QWORD *)&prclDest.left = XlateObject;
          if ( !XlateObject )
          {
            v29 = 0;
            v76 = 0LL;
            goto LABEL_214;
          }
        }
        v76 = XlateObject;
LABEL_214:
        v73 = v117;
        goto LABEL_204;
      }
      LODWORD(v118[0]) = 6;
    }
    v105 = 8;
  }
  v42 = 0;
  v107 = v47;
  v44 = 512;
LABEL_83:
  v48 = v36 * v34;
  if ( (unsigned __int64)(v36 * v34) <= 0xFFFFFFFF && v48 + 31 >= v48 )
  {
    v49 = v37 * (((unsigned __int64)(v48 + 31) >> 3) & 0x1FFFFFFC);
    v50 = -1;
    if ( v49 <= 0xFFFFFFFF )
      v50 = v49;
    HIDWORD(v118[0]) = v50;
    if ( v49 <= 0xFFFFFFFF )
      goto LABEL_88;
  }
LABEL_63:
  EngSetLastError(0x216u);
LABEL_286:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v134);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v135);
  return v16;
}
