/*
 * XREFs of GreStretchDIBitsInternal @ 0x1C00A2EB4
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1C00A2BF0 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C0026080 (GreCreateDIBitmapReal.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00A22B4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A3D3C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00A3D64 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A8A00 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A8DA0 (GreSetDIBitsToDeviceInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C00AD64C (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B5580 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C00BB170 (NtGdiPatBlt.c)
 *     GreStretchBltInternal @ 0x1C00BB5E8 (GreStretchBltInternal.c)
 *     bCvtPts1 @ 0x1C00BC6A0 (bCvtPts1.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngCopyBits @ 0x1C00BF3E0 (EngCopyBits.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00C0728 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00DE2F0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     GreCreateDIBitmapComp @ 0x1C0107A08 (GreCreateDIBitmapComp.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C01288CC (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02B5854 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02B5910 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02B7B6C (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02B908C (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
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
        int a15,
        __int64 a16)
{
  unsigned int v17; // edi
  char v18; // al
  unsigned int v19; // eax
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  char *v23; // r9
  unsigned int v24; // edx
  __int64 v25; // rdi
  int v26; // r8d
  signed int v27; // eax
  int v28; // r12d
  struct _DC_ATTR *v29; // rax
  __int64 v30; // rbx
  int v32; // r12d
  BOOL v33; // edi
  int v34; // ecx
  int v35; // r8d
  __int64 v36; // rdi
  unsigned int v37; // edx
  __int64 v38; // rsi
  int v39; // eax
  unsigned int v40; // r10d
  unsigned int v41; // eax
  unsigned int v42; // r15d
  unsigned int v43; // r14d
  unsigned int v44; // edx
  unsigned __int64 v45; // rdx
  unsigned int v46; // edi
  int v47; // ebx
  __int64 v48; // r9
  __int64 v49; // rsi
  BOOL v50; // edx
  int v51; // ecx
  int v52; // eax
  int v53; // r8d
  int v54; // edx
  unsigned int v55; // r8d
  struct SURFACE *v56; // r13
  __int64 v57; // rdi
  struct PALETTE *v58; // rbx
  __int64 XlateObject; // rax
  int v60; // r14d
  XLATEOBJ *v61; // rdi
  int v62; // esi
  int v63; // r8d
  char *v64; // rcx
  unsigned int v65; // r14d
  int v66; // eax
  int v67; // r9d
  int v68; // ecx
  char v69; // bl
  int v70; // edx
  struct REGION *v71; // rax
  struct ECLIPOBJ *v72; // rdx
  __int64 v73; // rax
  BOOL (__stdcall *v74)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  int v75; // r11d
  char *v76; // r8
  __int64 v77; // rdx
  unsigned int v78; // ebx
  __int64 *v79; // rcx
  __int64 v80; // rbx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v82; // rbx
  int v83; // esi
  int v84; // edx
  HDC CompatibleDC; // r14
  __int64 DIBitmapComp; // rax
  __int64 v87; // rdi
  int v88; // ebx
  unsigned int v89; // eax
  unsigned int v90; // edx
  unsigned int v91; // eax
  unsigned __int64 v92; // rdx
  __int64 v93; // rcx
  DC *v94; // r9
  unsigned int v95; // edx
  unsigned __int64 v96; // rdx
  DC *v97; // rcx
  bool v98; // zf
  DC *v99; // rcx
  int v100; // eax
  SURFOBJ *v101; // rdx
  SURFOBJ *v102; // rcx
  __int64 v103; // r8
  int v104; // eax
  int v105; // ecx
  int v106; // ecx
  unsigned int v107; // [rsp+80h] [rbp-80h]
  unsigned int v108; // [rsp+84h] [rbp-7Ch]
  int v109; // [rsp+8Ch] [rbp-74h]
  int v110; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v111; // [rsp+94h] [rbp-6Ch]
  DC *v112; // [rsp+98h] [rbp-68h] BYREF
  __int64 v113; // [rsp+A0h] [rbp-60h]
  int v114; // [rsp+A8h] [rbp-58h]
  int v115; // [rsp+ACh] [rbp-54h]
  int v116; // [rsp+B0h] [rbp-50h]
  unsigned int v117; // [rsp+B4h] [rbp-4Ch]
  unsigned int v118; // [rsp+B8h] [rbp-48h]
  DC *v119; // [rsp+C0h] [rbp-40h] BYREF
  int v120; // [rsp+C8h] [rbp-38h]
  _OWORD v121[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v122; // [rsp+F0h] [rbp-10h]
  unsigned int v123; // [rsp+F4h] [rbp-Ch]
  unsigned int v124; // [rsp+F8h] [rbp-8h]
  unsigned int v125; // [rsp+FCh] [rbp-4h]
  int v126; // [rsp+100h] [rbp+0h]
  int v127; // [rsp+104h] [rbp+4h]
  int v128; // [rsp+108h] [rbp+8h]
  __int64 v129; // [rsp+110h] [rbp+10h]
  __int64 v130; // [rsp+118h] [rbp+18h] BYREF
  char v131; // [rsp+120h] [rbp+20h]
  int v132; // [rsp+124h] [rbp+24h]
  __int64 v133; // [rsp+128h] [rbp+28h] BYREF
  char v134; // [rsp+130h] [rbp+30h]
  int v135; // [rsp+134h] [rbp+34h]
  char *v136; // [rsp+138h] [rbp+38h] BYREF
  int v137; // [rsp+140h] [rbp+40h]
  int v138; // [rsp+144h] [rbp+44h]
  _BYTE v139[32]; // [rsp+150h] [rbp+50h] BYREF
  __int64 *v140; // [rsp+170h] [rbp+70h] BYREF
  __int64 v141; // [rsp+178h] [rbp+78h]
  __int16 v142; // [rsp+180h] [rbp+80h]
  __int64 v143; // [rsp+1A0h] [rbp+A0h] BYREF
  int v144; // [rsp+1ACh] [rbp+ACh]
  _OWORD v145[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v146; // [rsp+1D0h] [rbp+D0h] BYREF
  int v147; // [rsp+1D4h] [rbp+D4h]
  int v148; // [rsp+1D8h] [rbp+D8h]
  int v149; // [rsp+1DCh] [rbp+DCh]
  struct tagRGBQUAD *v150; // [rsp+1E0h] [rbp+E0h] BYREF
  int v151; // [rsp+1E8h] [rbp+E8h]
  int v152; // [rsp+1ECh] [rbp+ECh]
  RECTL prclDest; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v154[4]; // [rsp+200h] [rbp+100h] BYREF
  RECTL v155; // [rsp+204h] [rbp+104h] BYREF
  __int64 v156; // [rsp+250h] [rbp+150h]
  int v157; // [rsp+258h] [rbp+158h]
  int v158; // [rsp+280h] [rbp+180h]
  __int64 v159; // [rsp+290h] [rbp+190h]

  v17 = 0;
  *(_QWORD *)&prclDest.left = a10;
  v115 = a15;
  v129 = a16;
  v127 = a4;
  v128 = a3;
  v110 = a2;
  v18 = gajRop3[BYTE2(a13)];
  v109 = a12;
  v126 = a5;
  v116 = a14;
  v111 = 0;
  if ( (v18 & 0xD4) == 0 )
    return (unsigned int)NtGdiPatBlt(a1, a2, a3, a4, a5, a13);
  v112 = 0LL;
  v113 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v112, a1);
  if ( !v112 )
    return v17;
  if ( !a11 )
    goto LABEL_148;
  if ( !*(_QWORD *)&prclDest.left )
    goto LABEL_148;
  if ( a12 > 2 )
    goto LABEL_148;
  if ( a14 < 0xC )
    goto LABEL_148;
  v19 = *(_DWORD *)a11;
  v118 = v19;
  if ( a14 < v19 || v19 < 0x28 || *(int *)(a11 + 4) <= 0 || !*(_DWORD *)(a11 + 8) )
    goto LABEL_148;
  v20 = *((_QWORD *)v112 + 122);
  v21 = *(unsigned __int8 *)(v20 + 215);
  v137 = *(_DWORD *)(v20 + 208);
  v22 = *((_QWORD *)v112 + 122);
  v122 = v21;
  v138 = *(_DWORD *)(v22 + 108) & 1;
  if ( (*(_DWORD *)(*((_QWORD *)v112 + 122) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v136, (struct XDCOBJ *)&v112, 0x204u, 0);
    v23 = v136;
  }
  else
  {
    v23 = (char *)v112 + 320;
    v136 = (char *)v112 + 320;
  }
  v24 = *(_DWORD *)(a11 + 16);
  if ( v24 - 4 > 1 )
  {
    v25 = v129;
    goto LABEL_15;
  }
  if ( (unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)&v112, v24) )
  {
    if ( BYTE2(a13) == 204 && (*((_DWORD *)v23 + 8) & 1) != 0 && !a12 )
    {
      v25 = v129;
      if ( !v129 )
      {
LABEL_15:
        if ( v127 == a8 )
        {
          v26 = a9;
          if ( v126 == a9
            && a9 > 0
            && a8 > 0
            && !(a7 | a6)
            && BYTE2(a13) == 204
            && v122 != 4
            && (*((_DWORD *)v23 + 8) & 2) != 0 )
          {
            v27 = abs32(*(_DWORD *)(a11 + 8));
            if ( a9 >= v27 )
              v26 = v27;
            v28 = GreSetDIBitsToDeviceInternal(
                    a1,
                    v126,
                    a6,
                    a7,
                    a7,
                    v26,
                    *(__int64 *)&prclDest.left,
                    a11,
                    a12,
                    v115,
                    a14,
                    1,
                    v25);
            goto LABEL_26;
          }
        }
        v32 = 1;
        v33 = 0;
        if ( a12 == 1 )
        {
          v141 = 0LL;
          v140 = 0LL;
          v142 = 256;
          DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v139, (struct XDCOBJ *)&v112, 0);
          v93 = *((_QWORD *)v112 + 62);
          if ( v93 )
            v33 = *(_DWORD *)(v93 + 96) == 1;
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v139);
          if ( v140 )
            DLODCOBJ::vUnlock((DLODCOBJ *)&v140);
          v23 = v136;
        }
        if ( BYTE2(a13) != 204 || (*((_DWORD *)v23 + 8) & 1) == 0 || v33 )
        {
          v28 = *(_DWORD *)(a11 + 8);
          if ( v28 <= 0 )
            v83 = a7;
          else
            v83 = v28 - a7 - a9;
          CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
          if ( (unsigned int)(*(_DWORD *)(a11 + 16) - 1) <= 1 )
            DIBitmapComp = GreCreateDIBitmapComp(a1, *(__int64 *)&prclDest.left, a11, a12, v116, v115);
          else
            DIBitmapComp = GreCreateDIBitmapReal(
                             a1,
                             v84,
                             *(void **)&prclDest.left,
                             (unsigned int *)a11,
                             a12,
                             v116,
                             v115,
                             0LL,
                             0,
                             0LL,
                             0,
                             0LL,
                             0LL);
          v87 = DIBitmapComp;
          if ( CompatibleDC && DIBitmapComp )
          {
            GreSelectBitmap(CompatibleDC, DIBitmapComp);
            v88 = GreStretchBltInternal(a1, v110, v128, v126, CompatibleDC, a6, v83, a8, a9, a13, 0xFFFFFF, 1);
            bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
            GreDeleteObject(v87);
            if ( !v88 )
              v28 = 0;
          }
          else
          {
            bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
            GreDeleteObject(v87);
            v28 = v111;
          }
          goto LABEL_26;
        }
        memset(v121, 0, sizeof(v121));
        v34 = *(_DWORD *)(a11 + 8);
        v35 = *(_DWORD *)(a11 + 16);
        v36 = *(unsigned int *)(a11 + 4);
        v37 = *(_DWORD *)(a11 + 32);
        v38 = *(unsigned __int16 *)(a11 + 14);
        v150 = (struct tagRGBQUAD *)(a11 + v118);
        v39 = DWORD2(v121[1]);
        if ( v34 < 0 )
          v39 = 1;
        v114 = v35;
        v40 = -v34;
        LODWORD(v130) = v36;
        v117 = v37;
        DWORD2(v121[1]) = v39;
        if ( v34 >= 0 )
          v40 = v34;
        v108 = v40;
        switch ( v35 )
        {
          case 3:
            if ( (unsigned int)v116 < 0x34 )
            {
LABEL_214:
              EngSetLastError(0x57u);
              goto LABEL_215;
            }
            v89 = 0;
            if ( a12 != 1 )
              v89 = a12;
            v109 = v89;
            if ( (_DWORD)v38 == 32 )
            {
              LODWORD(v121[0]) = 6;
            }
            else if ( (_DWORD)v38 == 16 )
            {
              LODWORD(v121[0]) = 4;
            }
            else
            {
              EngSetLastError(0x57u);
              v40 = v108;
              v32 = 0;
            }
            v107 = 2;
            v47 = 0;
            v125 = *(_DWORD *)(a11 + 40);
            v90 = v38 * v36;
            v124 = *(_DWORD *)(a11 + 44);
            v42 = 0;
            v91 = *(_DWORD *)(a11 + 48);
            v43 = 512;
            v150 = (struct tagRGBQUAD *)(a11 + 40);
            v123 = v91;
            if ( (unsigned __int64)(v38 * v36) > 0xFFFFFFFF || v90 + 31 < v90 )
              goto LABEL_223;
            v92 = v40 * (((unsigned __int64)(v90 + 31) >> 3) & 0x1FFFFFFC);
            if ( v92 > 0xFFFFFFFF )
              goto LABEL_201;
            HIDWORD(v121[0]) = v92;
LABEL_197:
            v46 = v107;
            goto LABEL_61;
          case 0:
            switch ( (_DWORD)v38 )
            {
              case 1:
                LODWORD(v121[0]) = 1;
                v42 = 2;
                break;
              case 4:
                LODWORD(v121[0]) = 2;
                v42 = 16;
                break;
              case 8:
                LODWORD(v121[0]) = 3;
                v42 = 256;
                break;
              default:
                v41 = 0;
                if ( a12 != 1 )
                  v41 = a12;
                v109 = v41;
                switch ( (_DWORD)v38 )
                {
                  case 0x18:
                    LODWORD(v121[0]) = 5;
                    break;
                  case 0x20:
                    LODWORD(v121[0]) = 6;
                    break;
                  case 0x10:
                    LODWORD(v121[0]) = 4;
                    v107 = 2;
                    goto LABEL_54;
                  default:
                    EngSetLastError(0x57u);
                    v32 = 0;
                    v42 = v108;
                    v43 = v108;
                    v107 = v108;
                    goto LABEL_59;
                }
                v107 = 8;
LABEL_54:
                v42 = 0;
                v109 = v41;
                v43 = 512;
                goto LABEL_55;
            }
            v107 = 1;
            v43 = 1024;
LABEL_55:
            v44 = v38 * v36;
            if ( (unsigned __int64)(v38 * v36) > 0xFFFFFFFF || v44 + 31 < v44 )
              goto LABEL_223;
            v45 = v40 * (((unsigned __int64)(v44 + 31) >> 3) & 0x1FFFFFFC);
            if ( v45 <= 0xFFFFFFFF )
            {
              HIDWORD(v121[0]) = v45;
LABEL_59:
              v46 = v107;
              v125 = 31744;
              v124 = 992;
              v123 = 31;
LABEL_60:
              v47 = 0;
LABEL_61:
              if ( !v32 )
              {
LABEL_215:
                v17 = v111;
                goto LABEL_148;
              }
              v37 = v117;
              v35 = v114;
              v40 = v108;
              goto LABEL_63;
            }
LABEL_201:
            HIDWORD(v121[0]) = -1;
LABEL_223:
            EngSetLastError(0x216u);
            v28 = 0;
            goto LABEL_26;
          case 10:
            DCOBJ::DCOBJ((DCOBJ *)&v119, a1);
            v47 = 0;
            if ( !v119 || !(unsigned int)DC::bIsCMYKColor(v119) )
              goto LABEL_244;
            if ( (_DWORD)v38 == 1 )
            {
              v42 = 2;
              LODWORD(v121[0]) = 1;
              v107 = 1;
            }
            else
            {
              switch ( (_DWORD)v38 )
              {
                case 4:
                  LODWORD(v121[0]) = 2;
                  v42 = 16;
                  break;
                case 8:
                  LODWORD(v121[0]) = 3;
                  v42 = 256;
                  break;
                case 0x20:
                  LODWORD(v121[0]) = 6;
                  v42 = 0;
                  v107 = 16;
                  v43 = 512;
LABEL_237:
                  v95 = v38 * v36;
                  if ( (unsigned __int64)(v38 * v36) <= 0xFFFFFFFF && v95 + 31 >= v95 )
                  {
                    v96 = v108 * (((unsigned __int64)(v95 + 31) >> 3) & 0x1FFFFFFC);
                    if ( v96 <= 0xFFFFFFFF )
                    {
                      HIDWORD(v121[0]) = v96;
                      goto LABEL_245;
                    }
                    HIDWORD(v121[0]) = -1;
                  }
                  EngSetLastError(0x216u);
                  v28 = 0;
                  if ( v119 )
                    XDCOBJ::vUnlockFast((XDCOBJ *)&v119);
                  goto LABEL_26;
                default:
LABEL_244:
                  EngSetLastError(0x57u);
                  v32 = 0;
                  v94 = v119;
                  v43 = v108;
                  v42 = v108;
                  v107 = v108;
LABEL_245:
                  if ( v94 )
                    XDCOBJ::vUnlockFast((XDCOBJ *)&v119);
                  goto LABEL_197;
              }
              v107 = 1;
            }
            v43 = 1024;
            goto LABEL_237;
        }
        if ( v35 != 2 )
        {
          if ( v35 != 12 )
          {
            if ( v35 == 1 )
              goto LABEL_263;
            if ( v35 != 11 )
            {
              if ( v35 == 4 )
              {
                LODWORD(v121[0]) = 9;
              }
              else
              {
                if ( v35 != 5 )
                {
                  EngSetLastError(0x57u);
                  v46 = v108;
                  v42 = v108;
                  v32 = 0;
                  v43 = v108;
                  v47 = 0;
                  v107 = v108;
                  goto LABEL_61;
                }
                LODWORD(v121[0]) = 10;
              }
              v46 = 8;
              v107 = 8;
              v42 = 0;
              v43 = 512;
              HIDWORD(v121[0]) = *(_DWORD *)(a11 + 20);
              v47 = 0;
LABEL_63:
              v48 = v129;
              v116 -= v118;
              if ( !v129 )
              {
                v48 = *(_QWORD *)(*((_QWORD *)v112 + 122) + 248LL);
                v129 = v48;
              }
              v118 = *((_DWORD *)v112 + 30);
              if ( (v118 & 0x10000000) != 0 && (!v48 || (unsigned int)(v35 - 10) > 2) )
                v118 = v118 & 0xFFFFFFF | 0x20000000;
              *(_QWORD *)((char *)v121 + 4) = __PAIR64__(v40, v130);
              if ( v37 )
              {
                if ( v37 > v42 )
                  v37 = v42;
                v117 = v37;
              }
              else
              {
                v117 = v42;
              }
              if ( (unsigned int)v115 >= HIDWORD(v121[0]) )
              {
                v49 = *((_QWORD *)v112 + 6);
                v148 = v110 + v127;
                v146 = v110;
                v147 = v128;
                v149 = v128 + v126;
                EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v143, (struct XDCOBJ *)&v112, 0x204u);
                v50 = (*(_BYTE *)(v143 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v143, &v146, 2LL);
                v51 = v146;
                v52 = v148;
                if ( v144 )
                {
                  v51 = v146 + 1;
                  v52 = v148 + 1;
                  ++v146;
                  ++v148;
                }
                if ( !v50 )
                  goto LABEL_147;
                if ( v51 != v52 )
                {
                  v53 = v147;
                  if ( v147 != v149 )
                  {
                    v54 = 0;
                    v115 = 0;
                    if ( v51 > v52 )
                    {
                      v146 = v52;
                      v148 = v51;
                      if ( !v144 )
                      {
                        v146 = v52 + 1;
                        v148 = v51 + 1;
                      }
                      v54 = 1;
                      v115 = 1;
                    }
                    if ( v147 > v149 )
                    {
                      v147 = v149 + 1;
                      v149 = v53 + 1;
                      v115 = v54 ^ 2;
                    }
                    v120 = 0;
                    v119 = 0LL;
                    if ( !v109 )
                      v32 = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v119, v46, v42, 0LL, v125, v124, v123, v43, 1) != 0
                          ? v32
                          : 0;
                    if ( !v32 )
                      goto LABEL_146;
                    v141 = 0LL;
                    v140 = 0LL;
                    v142 = 256;
                    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v139, (struct XDCOBJ *)&v112, 0);
                    DWORD2(v121[1]) |= 8 * (*(_DWORD *)(*((_QWORD *)v112 + 6) + 40LL) & 0x8000);
                    *(_QWORD *)&v121[1] = 0LL;
                    v133 = 0LL;
                    v134 = 0;
                    v135 = 0;
                    if ( v47 )
                    {
                      v130 = 0LL;
                      v131 = 0;
                      v145[0] = v121[0];
                      v132 = 0;
                      v145[1] = v121[1];
                      if ( SURFMEM::bCreateDIB(
                             (SURFMEM *)&v130,
                             (struct _DEVBITMAPINFO *)v145,
                             *(void **)&prclDest.left,
                             0LL,
                             0,
                             0LL,
                             0LL,
                             0,
                             1,
                             0,
                             0)
                        && (LODWORD(v121[0]) = (LODWORD(v121[0]) != 7) + 2,
                            SURFMEM::bCreateDIB(
                              (SURFMEM *)&v133,
                              (struct _DEVBITMAPINFO *)v121,
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
                        v101 = 0LL;
                        *(_QWORD *)&prclDest.left = 0LL;
                        *(_QWORD *)&prclDest.right = *(_QWORD *)((char *)v121 + 4);
                        if ( v130 )
                          v101 = (SURFOBJ *)(v130 + 24);
                        v102 = 0LL;
                        if ( v133 )
                          v102 = (SURFOBJ *)(v133 + 24);
                        EngCopyBits(v102, v101, 0LL, 0LL, &prclDest, &gptl00);
                      }
                      else
                      {
                        v32 = 0;
                      }
                      SURFMEM::~SURFMEM((SURFMEM *)&v130);
                    }
                    else
                    {
                      v32 = SURFMEM::bCreateDIB(
                              (SURFMEM *)&v133,
                              (struct _DEVBITMAPINFO *)v121,
                              *(void **)&prclDest.left,
                              0LL,
                              0,
                              0LL,
                              0LL,
                              0,
                              1,
                              0,
                              0) != 0
                          ? v32
                          : 0;
                    }
                    if ( !v32 )
                    {
LABEL_139:
                      SURFMEM::~SURFMEM((SURFMEM *)&v133);
                      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v139);
                      v79 = v140;
                      if ( v140 )
                      {
                        if ( (_BYTE)v142 )
                        {
                          *((_DWORD *)v140 + 10) &= ~2u;
                          v79 = v140;
                          LOBYTE(v142) = 0;
                        }
                        if ( v79 )
                        {
                          if ( (_DWORD)v141 && (*((_DWORD *)v79 + 11) & 2) != 0 )
                          {
                            XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v140);
                            *((_DWORD *)v140 + 11) &= ~2u;
                            v79 = v140;
                            LODWORD(v141) = 0;
                          }
                          v110 = 0;
                          v80 = *v79;
                          HmgDecrementExclusiveReferenceCountEx(v79, HIDWORD(v141), &v110);
                          if ( v110 )
                            bDeleteDCInternalEx(v80, 0LL);
                        }
                      }
LABEL_146:
                      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v119);
LABEL_147:
                      v17 = v111;
                      goto LABEL_148;
                    }
                    v56 = (struct SURFACE *)*((_QWORD *)v112 + 62);
                    if ( !v56 )
                      v56 = SURFACE::pdibDefault;
                    v57 = *((_QWORD *)v56 + 16);
                    v130 = 0LL;
                    v58 = (struct PALETTE *)*((_QWORD *)v112 + 11);
                    if ( v58 != ppalDefault )
                      *((_QWORD *)v56 + 22) = *(_QWORD *)v58;
                    if ( v109 )
                    {
                      if ( v109 != 1 )
                      {
                        v60 = v114;
                        v62 = 0;
                        if ( v109 == 2 )
                        {
                          v61 = xloIdent;
                          if ( *((_DWORD *)v56 + 24) != LODWORD(v121[0]) )
                            v32 = 0;
                        }
                        else
                        {
                          v61 = 0LL;
                        }
                        goto LABEL_94;
                      }
                      if ( (unsigned int)v116 >= 2 * (unsigned __int64)v117
                        && (unsigned int)EXLATEOBJ::bMakeXlate(&v130, v150, v58, v56, v117, v42) )
                      {
                        v61 = (XLATEOBJ *)v130;
                        if ( gbMultiMonMismatchColor && (*(_DWORD *)(v49 + 40) & 1) != 0 )
                        {
                          if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v119, v107, v42, 0LL, v125, v124, v123, v43, 1) )
                          {
                            v103 = *((_QWORD *)v56 + 16);
                            if ( !v103 )
                              v103 = *(_QWORD *)(v49 + 1808);
                            XEPALOBJ::vGetEntriesFrom(&v119, v58, v103, v150, v117);
                            v62 = 1;
                          }
                          else
                          {
                            v32 = 0;
                            v62 = 0;
                          }
                          v60 = v114;
                        }
                        else
                        {
                          v60 = v114;
                          v62 = 0;
                        }
                        goto LABEL_94;
                      }
                    }
                    else
                    {
                      if ( !v117 )
                      {
                        XlateObject = CreateXlateObject(v129, v118, v119, v57, v58, v58, 0, 0, 0xFFFFFF, 0);
                        v60 = v114;
                        v130 = XlateObject;
                        if ( !XlateObject )
                        {
                          v32 = 0;
                          v61 = 0LL;
                          goto LABEL_93;
                        }
LABEL_92:
                        v61 = (XLATEOBJ *)XlateObject;
LABEL_93:
                        v62 = 0;
LABEL_94:
                        if ( v32 )
                        {
                          if ( (*((_DWORD *)v112 + 9) & 0xE0) != 0 )
                            XDCOBJ::vAccumulate((XDCOBJ *)&v112, (struct ERECTL *)&v146);
                          if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)&v112) )
                          {
                            v111 = v108;
                          }
                          else if ( (v139[24] & 1) != 0 )
                          {
                            v63 = a6;
                            v64 = (char *)v112 + 1024;
                            if ( (*((_DWORD *)v112 + 10) & 1) == 0 )
                              v64 = (char *)v112 + 1016;
                            v146 += *(_DWORD *)v64;
                            v148 += *(_DWORD *)v64;
                            v147 += *((_DWORD *)v64 + 1);
                            v149 += *((_DWORD *)v64 + 1);
                            LODWORD(v150) = a6;
                            if ( v60 == 4 && (BYTE8(v121[1]) & 1) != 0 )
                            {
                              v67 = a7;
                              v66 = a9;
                              v65 = v108;
                            }
                            else
                            {
                              v65 = v108;
                              v66 = a9;
                              v67 = v108 - a7 - a9;
                            }
                            v68 = v67 + v66;
                            v69 = v115;
                            v70 = a6 + a8;
                            HIDWORD(v150) = v67;
                            v152 = v67 + v66;
                            v151 = a6 + a8;
                            if ( a6 > a6 + a8 )
                            {
                              v63 = v70 + 1;
                              v69 = v115 ^ 1;
                              v70 = a6 + 1;
                              LODWORD(v150) = v63;
                              v151 = a6 + 1;
                            }
                            if ( v67 > v68 )
                            {
                              v104 = v67;
                              v69 ^= 2u;
                              v67 = v68 + 1;
                              HIDWORD(v150) = v68 + 1;
                              v68 = v104 + 1;
                              v152 = v104 + 1;
                            }
                            if ( v70 > 0
                              && v68 > 0
                              && v63 < *(_DWORD *)(v133 + 56)
                              && v67 < *(_DWORD *)(v133 + 60)
                              && !(unsigned int)ERECTL::bEmpty((ERECTL *)&v150) )
                            {
                              v71 = XDCOBJ::prgnEffRao((XDCOBJ *)&v112);
                              v156 = 0LL;
                              v157 = 0;
                              v158 = 1;
                              v159 = 0LL;
                              XCLIPOBJ::vSetup((XCLIPOBJ *)v154, v71, (struct ERECTL *)&v146, 0);
                              if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v155) )
                              {
                                v111 = v65;
                              }
                              else
                              {
                                if ( (*((_DWORD *)v112 + 9) & 0xE0) != 0 )
                                {
                                  prclDest = v155;
                                  XDCOBJ::vAccumulateTight((XDCOBJ *)&v112, v72, (struct ERECTL *)&prclDest);
                                }
                                if ( v62 )
                                  *(_QWORD *)(v133 + 128) = v119;
                                v73 = *((_QWORD *)v56 + 6);
                                if ( (*((_DWORD *)v56 + 28) & 2) != 0 )
                                  v74 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v73 + 2848);
                                else
                                  v74 = EngStretchBlt;
                                v75 = v122;
                                if ( (*((_DWORD *)v56 + 28) & 2) != 0 && (*(_DWORD *)(v73 + 40) & 0x20000) == 0 )
                                {
                                  if ( v122 == 4 && (*((_BYTE *)v112 + 72) & 0x10) == 0 )
                                    v74 = EngStretchBlt;
                                  if ( (int)v150 < 0
                                    || SHIDWORD(v150) < 0
                                    || v151 > *(_DWORD *)(v133 + 56)
                                    || v152 > *(_DWORD *)(v133 + 60) )
                                  {
                                    v74 = EngStretchBlt;
                                  }
                                }
                                if ( (v69 & 1) != 0 )
                                {
                                  v105 = v146;
                                  v146 = v148;
                                  v148 = v105;
                                }
                                if ( (v69 & 2) != 0 )
                                {
                                  v106 = v147;
                                  v147 = v149;
                                  v149 = v106;
                                }
                                ++*((_DWORD *)v56 + 23);
                                v76 = 0LL;
                                if ( *((__int16 *)v112 + 89) >= 0 )
                                  v76 = (char *)v112 + 176;
                                v77 = 0LL;
                                if ( v133 )
                                  v77 = v133 + 24;
                                v78 = 0;
                                if ( ((unsigned int (__fastcall *)(char *, __int64, _QWORD, _BYTE *, XLATEOBJ *, char *, char *, int *, struct tagRGBQUAD **, _QWORD, int))v74)(
                                       (char *)v56 + 24,
                                       v77,
                                       0LL,
                                       v154,
                                       v61,
                                       v76,
                                       (char *)v112 + 1176,
                                       &v146,
                                       &v150,
                                       0LL,
                                       v75) )
                                {
                                  v78 = v65;
                                }
                                v111 = v78;
                                if ( v62 )
                                  *(_QWORD *)(v133 + 128) = 0LL;
                              }
                            }
                          }
                        }
                        goto LABEL_138;
                      }
                      if ( v116 >= 4 * v117 )
                      {
                        v60 = v114;
                        if ( (unsigned int)(v114 - 10) <= 2 )
                          XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v119, (const unsigned int *)&v150->rgbBlue, v55, v117);
                        else
                          XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v119, v150, 0, v117);
                        XlateObject = CreateXlateObject(v129, v118, v119, v57, v58, v58, 0, 0, 0xFFFFFF, 0);
                        v130 = XlateObject;
                        if ( !XlateObject )
                          v32 = 0;
                        goto LABEL_92;
                      }
                    }
LABEL_138:
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v130);
                    goto LABEL_139;
                  }
                }
                v17 = a9;
LABEL_148:
                if ( v112 )
                {
                  if ( (_DWORD)v113 && (*((_DWORD *)v112 + 11) & 2) != 0 )
                  {
                    if ( !HIDWORD(v113) )
                    {
                      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v112);
                      if ( UserAttr )
                        DC::RestoreAttributes(v112, UserAttr);
                    }
                    *((_DWORD *)v112 + 11) &= ~2u;
                    LODWORD(v113) = 0;
                  }
                  v110 = 0;
                  v82 = *(_QWORD *)v112;
                  HmgDecrementExclusiveReferenceCountEx(v112, HIDWORD(v113), &v110);
                  if ( v110 )
                    bDeleteDCInternalEx(v82, 0LL);
                }
                return v17;
              }
              goto LABEL_214;
            }
            DCOBJ::DCOBJ((DCOBJ *)&v119, a1);
            if ( !v119 || !(unsigned int)DC::bIsCMYKColor(v119) )
            {
              EngSetLastError(0x57u);
              v97 = v119;
              v32 = 0;
            }
            if ( v97 )
              XDCOBJ::vUnlockFast((XDCOBJ *)&v119);
            if ( v32 )
            {
LABEL_263:
              if ( (_DWORD)v38 != 8 )
                EngSetLastError(0x57u);
              LODWORD(v121[0]) = 8;
              v98 = (_DWORD)v38 == 8;
              v42 = 256;
LABEL_276:
              HIDWORD(v121[0]) = *(_DWORD *)(a11 + 20);
              v47 = 1;
              v100 = 0;
              v107 = 1;
              if ( v98 )
                v100 = v32;
              v43 = 1024;
              v32 = v100;
              v46 = 1;
              goto LABEL_61;
            }
LABEL_272:
            v46 = v108;
            v42 = v108;
            v43 = v108;
            v107 = v108;
            goto LABEL_60;
          }
          DCOBJ::DCOBJ((DCOBJ *)&v119, a1);
          if ( !v119 || !(unsigned int)DC::bIsCMYKColor(v119) )
          {
            EngSetLastError(0x57u);
            v99 = v119;
            v32 = 0;
          }
          if ( v99 )
            XDCOBJ::vUnlockFast((XDCOBJ *)&v119);
          if ( !v32 )
            goto LABEL_272;
        }
        if ( (_DWORD)v38 != 4 )
          EngSetLastError(0x57u);
        LODWORD(v121[0]) = 7;
        v98 = (_DWORD)v38 == 4;
        v42 = 16;
        goto LABEL_276;
      }
    }
  }
  v28 = 0;
LABEL_26:
  if ( v112 )
  {
    if ( (_DWORD)v113 && (*((_DWORD *)v112 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v113) )
      {
        v29 = XDCOBJ::GetUserAttr((XDCOBJ *)&v112);
        if ( v29 )
          DC::RestoreAttributes(v112, v29);
      }
      *((_DWORD *)v112 + 11) &= ~2u;
      LODWORD(v113) = 0;
    }
    v110 = 0;
    v30 = *(_QWORD *)v112;
    HmgDecrementExclusiveReferenceCountEx(v112, HIDWORD(v113), &v110);
    if ( v110 )
      bDeleteDCInternalEx(v30, 0LL);
  }
  return (unsigned int)v28;
}
