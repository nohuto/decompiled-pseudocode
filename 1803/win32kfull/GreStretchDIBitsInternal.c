/*
 * XREFs of GreStretchDIBitsInternal @ 0x1C00A06E8
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1C00A0450 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C0016AA0 (GreCreateDIBitmapReal.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0017D34 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00893D0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008F930 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     EngCopyBits @ 0x1C008FEE0 (EngCopyBits.c)
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A42B0 (GreSetDIBitsToDeviceInternal.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C00A8418 (bCvtPts1.c)
 *     GreCreateDIBitmapComp @ 0x1C0102D6C (GreCreateDIBitmapComp.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C011D58C (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C028B33C (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C028B3F8 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C028DD78 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C028EFC4 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall GreStretchDIBitsInternal(
        HDC a1,
        unsigned int a2,
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
        int a15,
        __int64 a16)
{
  unsigned int v18; // r13d
  unsigned int v19; // edi
  char v20; // al
  struct _RECTL *v21; // r11
  __int64 v22; // r10
  unsigned int v23; // eax
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  LONG *p_right; // r8
  unsigned int v28; // edx
  __int64 v29; // r11
  int v30; // ecx
  int v31; // r14d
  signed int v32; // eax
  int v33; // r12d
  __int64 v34; // rbx
  BOOL v36; // edi
  int v37; // ecx
  int v38; // r8d
  __int64 v39; // rdi
  unsigned int v40; // edx
  __int64 v41; // rsi
  int v42; // r12d
  unsigned int v43; // r10d
  unsigned int v44; // eax
  unsigned int v45; // r15d
  unsigned int v46; // r14d
  unsigned int v47; // ecx
  unsigned __int64 v48; // rcx
  int v49; // eax
  unsigned int v50; // edi
  int v51; // ebx
  __int64 v52; // r9
  __int64 v53; // rsi
  int v54; // edx
  int v55; // ecx
  int v56; // eax
  int v57; // edx
  int v58; // r10d
  unsigned int v59; // r8d
  struct _RECTL *v60; // rdx
  struct SURFACE *v61; // r13
  struct PALETTE *v62; // rbx
  __int64 v63; // rdi
  XLATEOBJ *XlateObject; // rax
  int v65; // r14d
  XLATEOBJ *v66; // rdi
  int v67; // esi
  LONG top; // eax
  __int64 v69; // rcx
  int v70; // r8d
  unsigned int v71; // r14d
  int v72; // eax
  int v73; // r10d
  int v74; // ecx
  int v75; // eax
  int v76; // edx
  char v77; // bl
  struct REGION *v78; // rax
  struct ECLIPOBJ *v79; // rdx
  __int64 v80; // rax
  BOOL (__stdcall *v81)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  int v82; // r11d
  LONG *v83; // r8
  __int64 v84; // rdx
  unsigned int v85; // ebx
  __int64 v86; // rbx
  int v87; // eax
  int v88; // edi
  int v89; // edx
  HDC CompatibleDC; // r14
  __int64 DIBitmapComp; // rax
  __int64 v92; // rsi
  int v93; // ebx
  unsigned int v94; // eax
  unsigned int v95; // r8d
  unsigned int v96; // eax
  unsigned __int64 v97; // rcx
  unsigned int v98; // eax
  int v99; // r11d
  __int64 v100; // rcx
  DC *v101; // rbx
  unsigned int v102; // ecx
  unsigned __int64 v103; // rcx
  int v104; // eax
  DC *v105; // rdi
  bool v106; // zf
  int v107; // eax
  DC *v108; // rdi
  SURFOBJ *v109; // rdx
  SURFOBJ *v110; // rcx
  __int64 v111; // r8
  int v112; // eax
  int v113; // ecx
  int v114; // ecx
  int v115[2]; // [rsp+30h] [rbp-D0h]
  __int64 v116; // [rsp+38h] [rbp-C8h]
  int v117[2]; // [rsp+40h] [rbp-C0h]
  __int64 v118; // [rsp+48h] [rbp-B8h]
  unsigned int v119; // [rsp+80h] [rbp-80h]
  unsigned int v120; // [rsp+84h] [rbp-7Ch]
  unsigned int v121; // [rsp+8Ch] [rbp-74h]
  int v122; // [rsp+90h] [rbp-70h]
  int v123; // [rsp+94h] [rbp-6Ch] BYREF
  int v124; // [rsp+98h] [rbp-68h]
  struct _RECTL *v125; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v126; // [rsp+A8h] [rbp-58h]
  int v127; // [rsp+B0h] [rbp-50h]
  unsigned int v128; // [rsp+B4h] [rbp-4Ch]
  unsigned int v129; // [rsp+B8h] [rbp-48h]
  unsigned int left; // [rsp+BCh] [rbp-44h]
  DC *v131; // [rsp+C0h] [rbp-40h] BYREF
  int v132; // [rsp+C8h] [rbp-38h]
  _OWORD v133[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v134; // [rsp+F0h] [rbp-10h]
  unsigned int v135; // [rsp+F4h] [rbp-Ch]
  unsigned int v136; // [rsp+F8h] [rbp-8h]
  unsigned int v137; // [rsp+FCh] [rbp-4h]
  int v138; // [rsp+100h] [rbp+0h]
  int v139; // [rsp+104h] [rbp+4h]
  int v140; // [rsp+108h] [rbp+8h]
  __int64 v141; // [rsp+110h] [rbp+10h]
  XLATEOBJ *v142; // [rsp+118h] [rbp+18h] BYREF
  char v143; // [rsp+120h] [rbp+20h]
  int v144; // [rsp+124h] [rbp+24h]
  __int64 v145; // [rsp+128h] [rbp+28h] BYREF
  char v146; // [rsp+130h] [rbp+30h]
  int v147; // [rsp+134h] [rbp+34h]
  LONG *v148; // [rsp+138h] [rbp+38h] BYREF
  int v149; // [rsp+140h] [rbp+40h]
  int v150; // [rsp+144h] [rbp+44h]
  __int64 v151; // [rsp+148h] [rbp+48h] BYREF
  int v152; // [rsp+154h] [rbp+54h]
  _BYTE v153[32]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v154; // [rsp+180h] [rbp+80h]
  __int64 v155; // [rsp+188h] [rbp+88h]
  _OWORD v156[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v157; // [rsp+1D0h] [rbp+D0h] BYREF
  int v158; // [rsp+1D4h] [rbp+D4h]
  int v159; // [rsp+1D8h] [rbp+D8h]
  int v160; // [rsp+1DCh] [rbp+DCh]
  struct tagRGBQUAD *v161; // [rsp+1E0h] [rbp+E0h] BYREF
  int v162; // [rsp+1E8h] [rbp+E8h]
  int v163; // [rsp+1ECh] [rbp+ECh]
  RECTL prclDest; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v165[4]; // [rsp+200h] [rbp+100h] BYREF
  RECTL v166; // [rsp+204h] [rbp+104h] BYREF
  __int64 v167; // [rsp+250h] [rbp+150h]
  int v168; // [rsp+258h] [rbp+158h]
  int v169; // [rsp+280h] [rbp+180h]
  __int64 v170; // [rsp+290h] [rbp+190h]

  v18 = a12;
  *(_QWORD *)&prclDest.left = a10;
  v124 = a15;
  v141 = a16;
  v139 = a4;
  v123 = a2;
  v19 = 0;
  v20 = gajRop3[BYTE2(a13)];
  v140 = a3;
  v128 = a12;
  v138 = a5;
  v127 = a14;
  v121 = 0;
  if ( (v20 & 0xD4) == 0 )
    return (unsigned int)NtGdiPatBlt(a1, a2, a3, a4, a5, a13);
  v125 = 0LL;
  v126 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v125, a1);
  v21 = 0LL;
  if ( !v125 )
    return v19;
  if ( !a11
    || (v22 = *(_QWORD *)&prclDest.left) == 0
    || a12 > 2
    || a14 < 0xC
    || (v23 = *(_DWORD *)a11, left = v23, a14 < v23)
    || v23 < 0x28
    || *(int *)(a11 + 4) <= 0
    || !*(_DWORD *)(a11 + 8) )
  {
LABEL_140:
    if ( v125 != v21 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v125);
      v123 = 0;
      v86 = *(_QWORD *)&v125->left;
      HmgDecrementExclusiveReferenceCountEx(v125, HIDWORD(v126), &v123);
      if ( v123 )
        bDeleteDCInternalEx(v86, 0LL);
    }
    return v19;
  }
  v24 = *(_QWORD *)&v125[5].left;
  v25 = *(unsigned __int8 *)(v24 + 75);
  v149 = *(_DWORD *)(v24 + 68);
  v26 = *(_QWORD *)&v125[5].left;
  v134 = v25;
  v150 = *(_DWORD *)(v26 + 312) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)&v125[5].left + 352LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v148, (struct XDCOBJ *)&v125, 0x204u, 0);
    p_right = v148;
    v22 = *(_QWORD *)&prclDest.left;
  }
  else
  {
    p_right = &v125[20].right;
    v148 = &v125[20].right;
  }
  v28 = *(_DWORD *)(a11 + 16);
  if ( v28 - 4 > 1 )
  {
    v29 = v141;
    goto LABEL_15;
  }
  if ( !(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)&v125, v28)
    || BYTE2(a13) != 204
    || (p_right[8] & 1) == 0
    || a12 )
  {
LABEL_195:
    v33 = v99;
    goto LABEL_26;
  }
  v29 = v141;
  if ( v141 )
  {
    v99 = 0;
    goto LABEL_195;
  }
LABEL_15:
  if ( a4 == a8 && (v30 = a9, v138 == a9) && a9 > 0 )
  {
    v31 = a7;
    if ( a8 > 0 && !(a7 | a6) && BYTE2(a13) == 204 && v134 != 4 && (p_right[8] & 2) != 0 )
    {
      v32 = abs32(*(_DWORD *)(a11 + 8));
      if ( a9 >= v32 )
        v30 = v32;
      v33 = GreSetDIBitsToDeviceInternal(a1, v138, a6, a7, a7, v30, v22, a11, a12, v124, a14, 1, v29);
      goto LABEL_26;
    }
  }
  else
  {
    v31 = a7;
  }
  v36 = 0;
  if ( a12 == 1 )
  {
    v155 = 0LL;
    v154 = 0LL;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v153, (struct XDCOBJ *)&v125, 0);
    v100 = *(_QWORD *)&v125[31].right;
    if ( v100 )
      v36 = *(_DWORD *)(v100 + 96) == 1;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v153);
    p_right = v148;
  }
  if ( BYTE2(a13) == 204 && (p_right[8] & 1) != 0 && !v36 )
  {
    memset(v133, 0, sizeof(v133));
    v37 = *(_DWORD *)(a11 + 8);
    v38 = *(_DWORD *)(a11 + 16);
    v21 = 0LL;
    v39 = *(unsigned int *)(a11 + 4);
    v40 = *(_DWORD *)(a11 + 32);
    v41 = *(unsigned __int16 *)(a11 + 14);
    v161 = (struct tagRGBQUAD *)(a11 + left);
    v42 = 1;
    v122 = v38;
    LODWORD(v142) = v39;
    v43 = -v37;
    v129 = v40;
    DWORD2(v133[1]) = v37 < 0;
    if ( v37 >= 0 )
      v43 = v37;
    v120 = v43;
    switch ( v38 )
    {
      case 3:
        if ( (unsigned int)v127 < 0x34 )
          goto LABEL_199;
        v94 = 0;
        if ( a12 != 1 )
          v94 = a12;
        v128 = v94;
        v18 = v94;
        if ( (_DWORD)v41 == 32 )
        {
          LODWORD(v133[0]) = 6;
        }
        else if ( (_DWORD)v41 == 16 )
        {
          LODWORD(v133[0]) = 4;
        }
        else
        {
          EngSetLastError(0x57u);
          v43 = v120;
          v21 = 0LL;
          v42 = 0;
        }
        v119 = 2;
        v137 = *(_DWORD *)(a11 + 40);
        v95 = -1;
        v136 = *(_DWORD *)(a11 + 44);
        v45 = 0;
        v96 = *(_DWORD *)(a11 + 48);
        v161 = (struct tagRGBQUAD *)(a11 + 40);
        v46 = 512;
        if ( (unsigned __int64)(v41 * v39) <= 0xFFFFFFFF )
          v95 = v41 * v39;
        v135 = v96;
        if ( (unsigned __int64)(v41 * v39) <= 0xFFFFFFFF && v95 + 31 >= v95 )
        {
          v97 = v43 * (((unsigned __int64)(v95 + 31) >> 3) & 0x1FFFFFFC);
          v98 = -1;
          if ( v97 <= 0xFFFFFFFF )
            v98 = v43 * (((v95 + 31) >> 3) & 0x1FFFFFFC);
          HIDWORD(v133[0]) = v98;
          if ( v97 <= 0xFFFFFFFF )
            goto LABEL_54;
        }
LABEL_203:
        EngSetLastError(0x216u);
LABEL_305:
        v33 = 0;
        goto LABEL_26;
      case 0:
        switch ( (_DWORD)v41 )
        {
          case 1:
            LODWORD(v133[0]) = 1;
            v45 = 2;
            break;
          case 4:
            LODWORD(v133[0]) = 2;
            v45 = 16;
            break;
          case 8:
            LODWORD(v133[0]) = 3;
            v45 = 256;
            break;
          default:
            v44 = 0;
            if ( a12 != 1 )
              v44 = a12;
            v128 = v44;
            v18 = v44;
            switch ( (_DWORD)v41 )
            {
              case 0x18:
                LODWORD(v133[0]) = 5;
                break;
              case 0x20:
                LODWORD(v133[0]) = 6;
                break;
              case 0x10:
                LODWORD(v133[0]) = 4;
                v119 = 2;
                goto LABEL_47;
              default:
                EngSetLastError(0x57u);
                v21 = 0LL;
                v45 = v120;
                v42 = 0;
                v46 = v120;
                v119 = v120;
LABEL_53:
                v137 = 31744;
                v136 = 992;
                v135 = 31;
LABEL_54:
                v50 = v119;
LABEL_55:
                v51 = 0;
LABEL_56:
                if ( !v42 )
                {
LABEL_139:
                  v19 = v121;
                  goto LABEL_140;
                }
                v40 = v129;
                v38 = v122;
                v43 = v120;
LABEL_58:
                v52 = v141;
                v127 -= left;
                if ( !v141 )
                {
                  v52 = *(_QWORD *)(*(_QWORD *)&v125[5].left + 112LL);
                  v141 = v52;
                }
                left = v125[8].left;
                if ( (left & 0x10000000) != 0 && (!v52 || (unsigned int)(v38 - 10) > 2) )
                  left = left & 0xFFFFFFF | 0x20000000;
                *(_QWORD *)((char *)v133 + 4) = __PAIR64__(v43, (unsigned int)v142);
                if ( v40 )
                {
                  if ( v40 > v45 )
                    v40 = v45;
                  v129 = v40;
                }
                else
                {
                  v129 = v45;
                }
                if ( (unsigned int)v124 >= HIDWORD(v133[0]) )
                {
                  v53 = *(_QWORD *)&v125[3].left;
                  v159 = v123 + v139;
                  v157 = v123;
                  v158 = v140;
                  v160 = v140 + v138;
                  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v151, (struct XDCOBJ *)&v125, 516);
                  if ( (*(_BYTE *)(v151 + 32) & 0x43) == 0x43 )
                  {
                    v21 = 0LL;
                  }
                  else
                  {
                    v87 = bCvtPts1(v151, &v157, 2LL);
                    v21 = 0LL;
                    if ( !v87 )
                    {
                      v54 = 0;
LABEL_67:
                      v55 = v157;
                      v56 = v159;
                      if ( v152 )
                      {
                        v55 = v157 + 1;
                        v56 = v159 + 1;
                        ++v157;
                        ++v159;
                      }
                      if ( !v54 )
                        goto LABEL_139;
                      if ( v55 == v56 || (v57 = v158, v158 == v160) )
                      {
                        v19 = a9;
                        goto LABEL_140;
                      }
                      v124 = 0;
                      v58 = 0;
                      if ( v55 > v56 )
                      {
                        v157 = v56;
                        v159 = v55;
                        if ( !v152 )
                        {
                          v157 = v56 + 1;
                          v159 = v55 + 1;
                        }
                        v58 = 1;
                        v124 = 1;
                      }
                      if ( v158 > v160 )
                      {
                        v158 = v160 + 1;
                        v160 = v57 + 1;
                        v124 = v58 ^ 2;
                      }
                      v132 = 0;
                      v131 = 0LL;
                      if ( !v18 )
                        v42 = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v131, v50, v45, 0LL, v137, v136, v135, v46, 1) != 0
                            ? v42
                            : 0;
                      if ( !v42 )
                        goto LABEL_137;
                      v154 = 0LL;
                      v155 = 0LL;
                      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v153, (struct XDCOBJ *)&v125, 0);
                      DWORD2(v133[1]) |= 8 * (*(_DWORD *)(*(_QWORD *)&v125[3].left + 40LL) & 0x8000);
                      *(_QWORD *)&v133[1] = 0LL;
                      v145 = 0LL;
                      v146 = 0;
                      v147 = 0;
                      if ( v51 )
                      {
                        v142 = 0LL;
                        v143 = 0;
                        v156[0] = v133[0];
                        v144 = 0;
                        v156[1] = v133[1];
                        if ( SURFMEM::bCreateDIB(
                               (SURFMEM *)&v142,
                               (struct _DEVBITMAPINFO *)v156,
                               *(void **)&prclDest.left,
                               0LL,
                               0,
                               0LL,
                               0LL,
                               0,
                               1,
                               0,
                               0)
                          && (LODWORD(v133[0]) = (LODWORD(v133[0]) != 7) + 2,
                              SURFMEM::bCreateDIB(
                                (SURFMEM *)&v145,
                                (struct _DEVBITMAPINFO *)v133,
                                0LL,
                                0LL,
                                0,
                                0LL,
                                0LL,
                                0,
                                1,
                                0,
                                0)) )
                        {
                          v109 = 0LL;
                          *(_QWORD *)&prclDest.right = *(_QWORD *)((char *)v133 + 4);
                          *(_QWORD *)&prclDest.left = 0LL;
                          if ( v142 )
                            v109 = (SURFOBJ *)&v142[1];
                          v110 = 0LL;
                          if ( v145 )
                            v110 = (SURFOBJ *)(v145 + 24);
                          EngCopyBits(v110, v109, 0LL, 0LL, &prclDest, &gptl00);
                        }
                        else
                        {
                          v42 = 0;
                        }
                        SURFMEM::~SURFMEM((SURFMEM *)&v142);
                      }
                      else
                      {
                        v42 = SURFMEM::bCreateDIB(
                                (SURFMEM *)&v145,
                                (struct _DEVBITMAPINFO *)v133,
                                *(void **)&prclDest.left,
                                0LL,
                                0,
                                0LL,
                                0LL,
                                0,
                                1,
                                0,
                                0) != 0
                            ? v42
                            : 0;
                      }
                      if ( !v42 )
                      {
LABEL_136:
                        SURFMEM::~SURFMEM((SURFMEM *)&v145);
                        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v153);
LABEL_137:
                        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v131);
LABEL_138:
                        v21 = 0LL;
                        goto LABEL_139;
                      }
                      v60 = v125;
                      v61 = *(struct SURFACE **)&v125[31].right;
                      if ( !v61 )
                        v61 = SURFACE::pdibDefault;
                      v62 = *(struct PALETTE **)&v125[6].left;
                      v63 = *((_QWORD *)v61 + 16);
                      v142 = 0LL;
                      if ( v62 != ppalDefault )
                      {
                        *((_QWORD *)v61 + 22) = *(_QWORD *)v62;
                        v60 = v125;
                      }
                      if ( v128 )
                      {
                        if ( v128 != 1 )
                        {
                          v65 = v122;
                          v67 = 0;
                          if ( v128 == 2 )
                          {
                            v66 = xloIdent;
                            if ( *((_DWORD *)v61 + 24) != LODWORD(v133[0]) )
                              v42 = 0;
                          }
                          else
                          {
                            v66 = 0LL;
                          }
                          goto LABEL_90;
                        }
                        if ( (unsigned int)v127 >= 2 * (unsigned __int64)v129
                          && (unsigned int)EXLATEOBJ::bMakeXlate(&v142, v161, v62, v61, v129, v45) )
                        {
                          v66 = v142;
                          if ( gbMultiMonMismatchColor && (*(_DWORD *)(v53 + 40) & 1) != 0 )
                          {
                            if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v131, v119, v45, 0LL, v137, v136, v135, v46, 1) )
                            {
                              v111 = *((_QWORD *)v61 + 16);
                              if ( !v111 )
                                v111 = *(_QWORD *)(v53 + 1800);
                              XEPALOBJ::vGetEntriesFrom(&v131, v62, v111, v161, v129);
                              v67 = 1;
                            }
                            else
                            {
                              v42 = 0;
                              v67 = 0;
                            }
                            v60 = v125;
                            v65 = v122;
                          }
                          else
                          {
                            v60 = v125;
                            v67 = 0;
                            v65 = v122;
                          }
                          goto LABEL_90;
                        }
                      }
                      else
                      {
                        if ( !v129 )
                        {
                          LODWORD(v118) = 0;
                          v117[0] = 0xFFFFFF;
                          LODWORD(v116) = 0;
                          v115[0] = 0;
                          XlateObject = (XLATEOBJ *)CreateXlateObject(
                                                      v141,
                                                      left,
                                                      (__int64)v131,
                                                      v63,
                                                      v62,
                                                      v62,
                                                      *(_QWORD *)v115,
                                                      v116,
                                                      *(_QWORD *)v117,
                                                      v118);
                          v65 = v122;
                          v142 = XlateObject;
                          if ( !XlateObject )
                          {
                            v42 = 0;
                            v66 = 0LL;
                            goto LABEL_89;
                          }
LABEL_88:
                          v66 = XlateObject;
LABEL_89:
                          v60 = v125;
                          v67 = 0;
LABEL_90:
                          if ( v42 )
                          {
                            if ( (v60[2].top & 0xE0) != 0 )
                            {
                              XDCOBJ::vAccumulate((XDCOBJ *)&v125, (struct ERECTL *)&v157);
                              v60 = v125;
                            }
                            if ( *(_QWORD *)&v60[31].right
                              && ((top = v60[2].top, (top & 0x1000) == 0) || (top & 0x4000) != 0) )
                            {
                              if ( (v153[24] & 1) != 0 )
                              {
                                v69 = v60[2].right & 1LL;
                                v70 = a6;
                                v157 += *(&v60[89].left + 2 * v69);
                                v159 += *(&v60[89].left + 2 * v69);
                                v158 += *(&v60[89].top + 2 * v69);
                                v160 += *(&v60[89].top + 2 * v69);
                                LODWORD(v161) = a6;
                                if ( v65 == 4 && (BYTE8(v133[1]) & 1) != 0 )
                                {
                                  v73 = a7;
                                  v72 = a9;
                                  v71 = v120;
                                }
                                else
                                {
                                  v71 = v120;
                                  v72 = a9;
                                  v73 = v120 - a7 - a9;
                                }
                                v74 = v73 + v72;
                                HIDWORD(v161) = v73;
                                v75 = a6 + a8;
                                v163 = v74;
                                v162 = a6 + a8;
                                v76 = a6 + a8;
                                if ( a6 > a6 + a8 )
                                {
                                  v70 = v75 + 1;
                                  v76 = a6 + 1;
                                  LODWORD(v161) = v75 + 1;
                                  v162 = a6 + 1;
                                }
                                v77 = v124 ^ 1;
                                if ( a6 <= v75 )
                                  v77 = v124;
                                if ( v73 > v74 )
                                {
                                  v112 = v73;
                                  v77 ^= 2u;
                                  v73 = v74 + 1;
                                  HIDWORD(v161) = v74 + 1;
                                  v74 = v112 + 1;
                                  v163 = v112 + 1;
                                }
                                if ( v76 > 0
                                  && v74 > 0
                                  && v70 < *(_DWORD *)(v145 + 56)
                                  && v73 < *(_DWORD *)(v145 + 60)
                                  && !(unsigned int)ERECTL::bEmpty((ERECTL *)&v161) )
                                {
                                  v78 = XDCOBJ::prgnEffRao((DC **)&v125);
                                  v167 = 0LL;
                                  v168 = 0;
                                  v169 = 1;
                                  v170 = 0LL;
                                  XCLIPOBJ::vSetup((XCLIPOBJ *)v165, v78, (struct ERECTL *)&v157, 0);
                                  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v166) )
                                  {
                                    v121 = v71;
                                  }
                                  else
                                  {
                                    if ( (v125[2].top & 0xE0) != 0 )
                                    {
                                      prclDest = v166;
                                      XDCOBJ::vAccumulateTight(&v125, v79, (__m128i *)&prclDest);
                                    }
                                    if ( v67 )
                                      *(_QWORD *)(v145 + 128) = v131;
                                    v80 = *((_QWORD *)v61 + 6);
                                    if ( (*((_DWORD *)v61 + 28) & 2) != 0 )
                                      v81 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v80 + 2840);
                                    else
                                      v81 = EngStretchBlt;
                                    v82 = v134;
                                    if ( (*((_DWORD *)v61 + 28) & 2) != 0 && (*(_DWORD *)(v80 + 40) & 0x20000) == 0 )
                                    {
                                      if ( v134 == 4 && (v125[4].right & 0x10) == 0 )
                                        v81 = EngStretchBlt;
                                      if ( (int)v161 < 0
                                        || SHIDWORD(v161) < 0
                                        || v162 > *(_DWORD *)(v145 + 56)
                                        || v163 > *(_DWORD *)(v145 + 60) )
                                      {
                                        v81 = EngStretchBlt;
                                      }
                                    }
                                    if ( (v77 & 1) != 0 )
                                    {
                                      v113 = v157;
                                      v157 = v159;
                                      v159 = v113;
                                    }
                                    if ( (v77 & 2) != 0 )
                                    {
                                      v114 = v158;
                                      v158 = v160;
                                      v160 = v114;
                                    }
                                    ++*((_DWORD *)v61 + 23);
                                    v83 = 0LL;
                                    if ( v125[11].right >= 0 )
                                      v83 = &v125[11].right;
                                    v84 = 0LL;
                                    if ( v145 )
                                      v84 = v145 + 24;
                                    v85 = 0;
                                    if ( ((unsigned int (__fastcall *)(char *, __int64, _QWORD, _BYTE *, XLATEOBJ *, LONG *, struct _RECTL *, int *, struct tagRGBQUAD **, _QWORD, int))v81)(
                                           (char *)v61 + 24,
                                           v84,
                                           0LL,
                                           v165,
                                           v66,
                                           v83,
                                           &v125[99],
                                           &v157,
                                           &v161,
                                           0LL,
                                           v82) )
                                    {
                                      v85 = v71;
                                    }
                                    v121 = v85;
                                    if ( v67 )
                                      *(_QWORD *)(v145 + 128) = 0LL;
                                  }
                                }
                              }
                            }
                            else
                            {
                              v121 = v120;
                            }
                          }
                          goto LABEL_135;
                        }
                        if ( v127 >= 4 * v129 )
                        {
                          v65 = v122;
                          if ( (unsigned int)(v122 - 10) <= 2 )
                            XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v131, (unsigned int *)&v161->rgbBlue, v59, v129);
                          else
                            XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v131, v161, 0, v129);
                          LODWORD(v118) = 0;
                          v117[0] = 0xFFFFFF;
                          LODWORD(v116) = 0;
                          v115[0] = 0;
                          XlateObject = (XLATEOBJ *)CreateXlateObject(
                                                      v141,
                                                      left,
                                                      (__int64)v131,
                                                      v63,
                                                      v62,
                                                      v62,
                                                      *(_QWORD *)v115,
                                                      v116,
                                                      *(_QWORD *)v117,
                                                      v118);
                          v142 = XlateObject;
                          if ( !XlateObject )
                            v42 = 0;
                          goto LABEL_88;
                        }
                      }
LABEL_135:
                      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v142);
                      goto LABEL_136;
                    }
                  }
                  v54 = 1;
                  goto LABEL_67;
                }
LABEL_199:
                EngSetLastError(0x57u);
                goto LABEL_138;
            }
            v119 = 8;
LABEL_47:
            v45 = 0;
            v128 = v44;
            v46 = 512;
            goto LABEL_48;
        }
        v119 = 1;
        v46 = 1024;
LABEL_48:
        v47 = v41 * v39;
        if ( (unsigned __int64)(v41 * v39) <= 0xFFFFFFFF && v47 + 31 >= v47 )
        {
          v48 = v43 * (((unsigned __int64)(v47 + 31) >> 3) & 0x1FFFFFFC);
          v49 = -1;
          if ( v48 <= 0xFFFFFFFF )
            v49 = v48;
          HIDWORD(v133[0]) = v49;
          if ( v48 <= 0xFFFFFFFF )
            goto LABEL_53;
        }
        goto LABEL_203;
      case 10:
        MDCOBJ::MDCOBJ((MDCOBJ *)&v131, a1);
        v101 = v131;
        if ( !v131 || !(unsigned int)DC::bIsCMYKColor(v131) )
          goto LABEL_224;
        if ( (_DWORD)v41 == 1 )
        {
          v45 = 2;
          LODWORD(v133[0]) = 1;
          v119 = 1;
        }
        else
        {
          switch ( (_DWORD)v41 )
          {
            case 4:
              LODWORD(v133[0]) = 2;
              v45 = 16;
              break;
            case 8:
              LODWORD(v133[0]) = 3;
              v45 = 256;
              break;
            case 0x20:
              LODWORD(v133[0]) = 6;
              v45 = (unsigned int)v21;
              v119 = 16;
              v46 = 512;
              goto LABEL_218;
            default:
LABEL_224:
              EngSetLastError(0x57u);
              v21 = 0LL;
              v46 = v120;
              v42 = 0;
              v45 = v120;
              v119 = v120;
              goto LABEL_225;
          }
          v119 = 1;
        }
        v46 = 1024;
LABEL_218:
        v102 = v41 * v39;
        if ( (unsigned __int64)(v41 * v39) > 0xFFFFFFFF || v102 + 31 < v102 )
          goto LABEL_223;
        v103 = v120 * (((unsigned __int64)(v102 + 31) >> 3) & 0x1FFFFFFC);
        v104 = -1;
        if ( v103 <= 0xFFFFFFFF )
          v104 = v103;
        HIDWORD(v133[0]) = v104;
        if ( v103 > 0xFFFFFFFF )
        {
LABEL_223:
          EngSetLastError(0x216u);
          v33 = 0;
          XDCOBJ::vUnlockFast((XDCOBJ *)&v131);
          goto LABEL_26;
        }
LABEL_225:
        if ( v101 )
        {
          XDCOBJ::vUnlockFast((XDCOBJ *)&v131);
          v21 = 0LL;
        }
        goto LABEL_54;
    }
    if ( v38 != 2 )
    {
      if ( v38 != 12 )
      {
        if ( v38 != 1 )
        {
          if ( v38 != 11 )
          {
            if ( v38 == 4 )
            {
              LODWORD(v133[0]) = 9;
            }
            else
            {
              if ( v38 != 5 )
              {
                EngSetLastError(0x57u);
                v50 = v120;
                v21 = 0LL;
                v45 = v120;
                v42 = 0;
                v46 = v120;
                v51 = 0;
                v119 = v120;
                goto LABEL_56;
              }
              LODWORD(v133[0]) = 10;
            }
            v50 = 8;
            v119 = 8;
            v45 = 0;
            v46 = 512;
            HIDWORD(v133[0]) = *(_DWORD *)(a11 + 20);
            v51 = 0;
            goto LABEL_58;
          }
          MDCOBJ::MDCOBJ((MDCOBJ *)&v131, a1);
          v105 = v131;
          if ( !v131 || !(unsigned int)DC::bIsCMYKColor(v131) )
          {
            EngSetLastError(0x57u);
            v21 = 0LL;
            v42 = 0;
          }
          if ( v105 )
          {
            XDCOBJ::vUnlockFast((XDCOBJ *)&v131);
            v21 = 0LL;
          }
          if ( !v42 )
            goto LABEL_243;
        }
        if ( (_DWORD)v41 != 8 )
        {
          EngSetLastError(0x57u);
          v21 = 0LL;
        }
        LODWORD(v133[0]) = 8;
        v45 = 256;
        v106 = (_DWORD)v41 == 8;
LABEL_248:
        HIDWORD(v133[0]) = *(_DWORD *)(a11 + 20);
        v51 = 1;
        v107 = (int)v21;
        v119 = 1;
        if ( v106 )
          v107 = v42;
        v46 = 1024;
        v42 = v107;
        v50 = 1;
        goto LABEL_56;
      }
      MDCOBJ::MDCOBJ((MDCOBJ *)&v131, a1);
      v108 = v131;
      if ( !v131 || !(unsigned int)DC::bIsCMYKColor(v131) )
      {
        EngSetLastError(0x57u);
        v21 = 0LL;
        v42 = 0;
      }
      if ( v108 )
      {
        XDCOBJ::vUnlockFast((XDCOBJ *)&v131);
        v21 = 0LL;
      }
      if ( !v42 )
      {
LABEL_243:
        v50 = v120;
        v45 = v120;
        v46 = v120;
        v119 = v120;
        goto LABEL_55;
      }
    }
    if ( (_DWORD)v41 != 4 )
    {
      EngSetLastError(0x57u);
      v21 = 0LL;
    }
    LODWORD(v133[0]) = 7;
    v45 = 16;
    v106 = (_DWORD)v41 == 4;
    goto LABEL_248;
  }
  v33 = *(_DWORD *)(a11 + 8);
  if ( v33 <= 0 )
    v88 = v31;
  else
    v88 = v33 - v31 - a9;
  CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
  if ( (unsigned int)(*(_DWORD *)(a11 + 16) - 1) <= 1 )
    DIBitmapComp = GreCreateDIBitmapComp(a1, *(__int64 *)&prclDest.left, a11, a12, v127, v124);
  else
    DIBitmapComp = GreCreateDIBitmapReal(
                     a1,
                     v89,
                     *(void **)&prclDest.left,
                     (unsigned int *)a11,
                     a12,
                     v127,
                     v124,
                     0LL,
                     0,
                     0LL,
                     0,
                     0LL,
                     0LL);
  v92 = DIBitmapComp;
  if ( !CompatibleDC || !DIBitmapComp )
  {
    bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
    GreDeleteObject(v92);
    goto LABEL_305;
  }
  GreSelectBitmap(CompatibleDC, DIBitmapComp);
  v93 = GreStretchBltInternal(a1, v123, v140, v139, v138, CompatibleDC, a6, v88, a8, a9, a13, 0xFFFFFF, 1);
  bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
  GreDeleteObject(v92);
  if ( !v93 )
    goto LABEL_305;
LABEL_26:
  if ( v125 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v125);
    v123 = 0;
    v34 = *(_QWORD *)&v125->left;
    HmgDecrementExclusiveReferenceCountEx(v125, HIDWORD(v126), &v123);
    if ( v123 )
      bDeleteDCInternalEx(v34, 0LL);
  }
  return (unsigned int)v33;
}
