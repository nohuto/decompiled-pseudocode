/*
 * XREFs of NtGdiTransparentBlt @ 0x1C014E240
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1C025A990 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004B574 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004CB44 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C004CBF8 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005F050 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0064590 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0098B8C (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009E31C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C009F1D0 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C014EF6C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bRotationOrMirroring@EXFORMOBJ@@QEBAHXZ @ 0x1C014EFE4 (-bRotationOrMirroring@EXFORMOBJ@@QEBAHXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C014F010 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C014F068 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C025BFC0 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     EngPlgBlt @ 0x1C0270A50 (EngPlgBlt.c)
 */

__int64 __fastcall NtGdiTransparentBlt(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11)
{
  int v11; // r12d
  FIX x; // r9d
  FIX v16; // edi
  FIX y; // r11d
  FIX v18; // r8d
  int v19; // r10d
  int v20; // r8d
  int v21; // r9d
  int v22; // eax
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  HDC v28; // rdi
  __int64 v29; // r14
  __int64 v30; // r15
  HDC v31; // r13
  int v32; // r11d
  __int64 v33; // rdi
  LONG v34; // ecx
  LONG v35; // edx
  bool v36; // cc
  int v37; // esi
  int v38; // esi
  __int64 v39; // rbx
  __int64 v40; // rsi
  struct REGION *v41; // rax
  struct ECLIPOBJ *v42; // rdx
  unsigned int v43; // edi
  int v44; // eax
  _QWORD *v45; // rax
  bool v46; // zf
  BOOL (__stdcall *v47)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v48; // edx
  HDC v49; // r9
  unsigned int v50; // edx
  int *v51; // rdi
  unsigned int v52; // edx
  __int64 k; // rcx
  _BYTE *v54; // r8
  _BYTE *j; // r11
  _BYTE *v56; // rdx
  unsigned __int64 v57; // rcx
  _BYTE *v58; // rdx
  unsigned int v59; // edx
  _WORD *v60; // rdi
  __int64 i; // rcx
  size_t v62; // r8
  int v63; // edx
  SURFOBJ *v64; // rcx
  POINTFIX v65; // r9
  int inited; // eax
  ULONG v67; // ecx
  HDC v68; // rdi
  __int64 v69; // rdx
  __int64 v70; // r8
  int v71; // eax
  ULONG v72; // ecx
  int v73; // r12d
  int NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  int v76[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v77; // [rsp+70h] [rbp-90h] BYREF
  HDC v78; // [rsp+80h] [rbp-80h]
  HDC v79; // [rsp+88h] [rbp-78h] BYREF
  char v80; // [rsp+90h] [rbp-70h]
  int v81; // [rsp+94h] [rbp-6Ch]
  DC *v82[2]; // [rsp+98h] [rbp-68h] BYREF
  char v83[32]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v84; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v85[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v86[2]; // [rsp+E0h] [rbp-20h] BYREF
  char v87[32]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v88[4]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v89[4]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v90[16]; // [rsp+150h] [rbp+50h] BYREF
  HDC v91[34]; // [rsp+160h] [rbp+60h] BYREF
  RECTL prcl; // [rsp+270h] [rbp+170h] BYREF
  __int128 v93; // [rsp+280h] [rbp+180h] BYREF
  RECTL v94; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v95[4]; // [rsp+2A0h] [rbp+1A0h] BYREF
  RECTL v96; // [rsp+2A4h] [rbp+1A4h] BYREF
  __int64 v97; // [rsp+2D8h] [rbp+1D8h]
  __int64 v98; // [rsp+2F0h] [rbp+1F0h]
  int v99; // [rsp+2F8h] [rbp+1F8h]
  int v100; // [rsp+320h] [rbp+220h]
  __int64 v101; // [rsp+330h] [rbp+230h]
  struct _POINTFIX v102; // [rsp+340h] [rbp+240h] BYREF
  FIX v103; // [rsp+348h] [rbp+248h]
  int v104; // [rsp+34Ch] [rbp+24Ch]
  int v105; // [rsp+350h] [rbp+250h]
  FIX v106; // [rsp+354h] [rbp+254h]
  FIX v107; // [rsp+358h] [rbp+258h]
  int v108; // [rsp+35Ch] [rbp+25Ch]
  __int128 v109; // [rsp+360h] [rbp+260h] BYREF
  unsigned int v110; // [rsp+370h] [rbp+270h]
  int v111; // [rsp+374h] [rbp+274h]
  POINTFIX pptfx; // [rsp+380h] [rbp+280h] BYREF
  POINTFIX v113; // [rsp+388h] [rbp+288h]
  POINTFIX v114; // [rsp+390h] [rbp+290h]

  v11 = 0;
  v78 = a6;
  v76[0] = a8;
  if ( a4 >= 0 && a5 >= 0 && a9 >= 0 && a10 >= 0 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v82, a1);
    DCOBJ::DCOBJ((DCOBJ *)v86, v78);
    if ( !v82[0]
      || (*((_DWORD *)v82[0] + 9) & 0x10000) != 0
      || !v86[0]
      || (bSpDwmValidateSurface((struct XDCOBJ *)v86, a7, v76[0], a9, a10),
          bSpDwmValidateSurface((struct XDCOBJ *)v82, a2, a3, a4, a5),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v85, (struct XDCOBJ *)v82, 516),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v90, (struct XDCOBJ *)v86, 516),
          (unsigned int)EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v90)) )
    {
      EngSetLastError(0x57u);
      goto LABEL_126;
    }
    prcl.left = a7;
    prcl.right = a9 + a7;
    prcl.top = v76[0];
    prcl.bottom = a10 + v76[0];
    EXFORMOBJ::bXform((EXFORMOBJ *)v90, (struct _POINTL *)&prcl);
    ERECTL::vOrder((ERECTL *)&prcl);
    `vector constructor iterator'(&v102, 8uLL, 4uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
    v76[0] = EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v85);
    if ( v76[0] )
    {
      DWORD2(v109) = a2 + a4;
      v111 = a3 + a5;
      *(_QWORD *)&v109 = __PAIR64__(a3, a2);
      HIDWORD(v109) = a3;
      v110 = a2;
      EXFORMOBJ::bXform((EXFORMOBJ *)v85, (struct _POINTL *)&v109, &v102, 3uLL);
      x = v102.x;
      v16 = v103;
      if ( (*(_DWORD *)(v85[0] + 32LL) & 1) != 0 )
      {
        if ( v102.x > v103 )
        {
          x = v102.x + 16;
          v16 = v103 + 16;
          v105 += 16;
          v102.x += 16;
          v103 += 16;
        }
        y = v102.y;
        v18 = v106;
        v19 = v104;
        if ( v102.y > v106 )
        {
          y = v102.y + 16;
          v19 = v104 + 16;
          v18 = v106 + 16;
          v102.y += 16;
          v106 += 16;
          v104 += 16;
        }
      }
      else
      {
        v18 = v106;
        v19 = v104;
        y = v102.y;
      }
      v107 = v16 + v105 - x;
      v108 = v18 + v19 - y;
      v20 = (v16 <= v107) ^ (v16 > x);
      v21 = (v19 <= v108) ^ (v19 > y);
      v22 = v20 ^ 3;
      if ( *(&v102.x + 2 * v20) <= *(&v102.x + 2 * (v20 ^ 3LL)) )
        v22 = v20;
      v23 = v22;
      LODWORD(v77) = (*(&v102.x + 2 * v22) + 15) >> 4;
      v24 = v21 ^ 3;
      if ( *(&v102.y + 2 * v21) <= *(&v102.y + 2 * (v21 ^ 3LL)) )
        v24 = (v19 <= v108) ^ (v19 > y);
      DWORD1(v77) = (*(&v102.y + 2 * v24) + 15) >> 4;
      DWORD2(v77) = (*(&v102.x + 2 * (v23 ^ 3)) + 15) >> 4;
      HIDWORD(v77) = (*(&v102.y + 2 * (v24 ^ 3LL)) + 15) >> 4;
      v93 = v77;
    }
    else
    {
      DWORD2(v77) = a2 + a4;
      HIDWORD(v77) = a3 + a5;
      *(_QWORD *)&v77 = __PAIR64__(a3, a2);
      v93 = v77;
      EXFORMOBJ::bXform((EXFORMOBJ *)v85, (struct _POINTL *)&v93);
      ERECTL::vOrder((ERECTL *)&v93);
    }
    if ( ERECTL::bEmpty((ERECTL *)&v93) )
    {
      v11 = 1;
      goto LABEL_124;
    }
    if ( (*((_DWORD *)v82[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v82, (struct ERECTL *)&v93);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v91);
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v91, (struct XDCOBJ *)v82, (struct XDCOBJ *)v86) )
    {
      v73 = XDCOBJ::bFullScreen((XDCOBJ *)v86);
      v11 = XDCOBJ::bFullScreen((XDCOBJ *)v82) | v73;
      goto LABEL_122;
    }
    v28 = (HDC)*((_QWORD *)v82[0] + 62);
    v78 = v28;
    if ( !v28 || (v29 = *((_QWORD *)v28 + 16), v30 = *((_QWORD *)v82[0] + 11), (v31 = *(HDC *)(v86[0] + 496LL)) == 0LL) )
    {
      v11 = 1;
      goto LABEL_122;
    }
    if ( !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v86[0] + 496LL), v25, v26, v27)
      || !(unsigned int)DestSurfaceAccessCheck((struct SURFACE *)v28) )
    {
      v72 = 6;
      goto LABEL_119;
    }
    v109 = v93;
    if ( !(unsigned int)ERECTL::bOffsetAdd(
                          (ERECTL *)&v93,
                          (const struct _POINTL *)v82[0] + (*((_DWORD *)v82[0] + 10) & 1) + 127,
                          1)
      || !(unsigned int)ERECTL::bOffsetAdd(
                          (ERECTL *)&prcl,
                          (const struct _POINTL *)(v86[0] + 1016LL + 8LL * (*(_DWORD *)(v86[0] + 40LL) & 1)),
                          1) )
    {
      v32 = 1;
    }
    v33 = *((_QWORD *)v31 + 6);
    if ( *((_WORD *)v31 + 50) == 1 && v33 && (*(_DWORD *)(v33 + 40) & 0x20000) != 0 )
    {
      v34 = *(_DWORD *)(v33 + 2584);
      if ( prcl.left >= v34 )
      {
        v35 = *(_DWORD *)(v33 + 2588);
        if ( prcl.top >= v35 && prcl.right <= *((_DWORD *)v31 + 14) + v34 )
        {
          v36 = prcl.bottom <= v35 + *((_DWORD *)v31 + 15);
          goto LABEL_44;
        }
      }
    }
    else if ( prcl.left >= 0 && prcl.top >= 0 && prcl.right <= *((_DWORD *)v31 + 14) )
    {
      v36 = prcl.bottom <= *((_DWORD *)v31 + 15);
LABEL_44:
      v37 = 0;
      if ( v36 )
        goto LABEL_46;
    }
    v37 = 1;
LABEL_46:
    v38 = v32 | v37;
    if ( v31 == v78 )
    {
      v94 = prcl;
      ERECTL::operator*=(&v94.left, (int *)&v93);
      if ( !ERECTL::bEmpty((ERECTL *)&v94) )
        v38 = 1;
    }
    if ( !v38 )
    {
      v39 = *((_QWORD *)v31 + 16);
      v40 = *(_QWORD *)(v86[0] + 88LL);
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v39, v40, a11, 1LL);
      v41 = XDCOBJ::prgnEffRao(v82);
      v97 = 0LL;
      v98 = 0LL;
      v99 = 0;
      v100 = 1;
      v101 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v95, v41, (struct ERECTL *)&v93, 0);
      if ( ERECTL::bEmpty((ERECTL *)&v96) )
      {
        v43 = 1;
LABEL_106:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v91);
        `vector destructor iterator'(&v102, 8uLL, 4uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_127:
        MDCOBJ::~MDCOBJ((MDCOBJ *)v86);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v87);
        MDCOBJ::~MDCOBJ((MDCOBJ *)v82);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v83);
        return v43;
      }
      if ( (*((_DWORD *)v82[0] + 9) & 0xE0) != 0 )
      {
        v94 = v96;
        XDCOBJ::vAccumulateTight((XDCOBJ *)v82, v42, (__m128i *)&v94);
      }
      *(_QWORD *)&v77 = 0LL;
      BYTE8(v77) = 0;
      HIDWORD(v77) = 0;
      if ( (GetAppCompatFlags2(1024LL, (__int64)v42) & 0x8000000) != 0 )
      {
        v44 = *(_DWORD *)(*((_QWORD *)v82[0] + 122) + 108LL);
        if ( (v44 & 1) != 0 && (v44 & 9) != 9 )
        {
          memset(v88, 0, sizeof(v88));
          HIDWORD(v88[0]) = v31[14];
          LODWORD(v88[1]) = v31[15];
          LODWORD(v88[0]) = v31[24];
          v45 = (_QWORD *)*((_QWORD *)v31 + 16);
          LODWORD(v88[3]) = 0;
          if ( v45 )
            v88[2] = *v45;
          else
            v88[2] = 0LL;
          SURFMEM::bCreateDIB((SURFMEM *)&v77, (struct _DEVBITMAPINFO *)v88, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !(_QWORD)v77 )
            goto LABEL_105;
          v46 = ((_DWORD)v31[28] & 0x400) == 0;
          *(_QWORD *)&v94.right = *((_QWORD *)v31 + 7);
          *(_QWORD *)&v94.left = 0LL;
          v84 = 0LL;
          v47 = v46
              ? EngCopyBits
              : *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v33 + 2840);
          if ( !((unsigned int (__fastcall *)(_QWORD, HDC, _QWORD, _QWORD, RECTL *, __int64 *))v47)(
                  v77 + 24,
                  v31 + 6,
                  0LL,
                  0LL,
                  &v94,
                  &v84) )
            goto LABEL_105;
          v48 = *(_DWORD *)(v77 + 96);
          if ( (unsigned int)(v48 - 1) > 5 )
            goto LABEL_105;
          ((void (*)(void))(&apfnMirror)[v48])();
          v31 = (HDC)v77;
        }
      }
      v79 = 0LL;
      v80 = 0;
      v81 = 0;
      if ( !v76[0] )
        goto LABEL_101;
      memset(v89, 0, sizeof(v89));
      HIDWORD(v89[0]) = DWORD2(v93) - v93;
      LODWORD(v89[1]) = HIDWORD(v93) - DWORD1(v93);
      LODWORD(v89[0]) = v31[24];
      LODWORD(v89[3]) = (_DWORD)v31[28] & 0x40000;
      v89[2] = 0LL;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v79, (struct _DEVBITMAPINFO *)v89, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        v49 = v79;
        v50 = *((_DWORD *)v79 + 16);
        switch ( *((_DWORD *)v31 + 24) )
        {
          case 1:
            v62 = *((unsigned int *)v79 + 16);
            if ( NearestIndexFromColorref )
              v63 = 255;
            else
              v63 = 0;
            break;
          case 2:
            v62 = *((unsigned int *)v79 + 16);
            v63 = NearestIndexFromColorref | (16 * NearestIndexFromColorref);
            break;
          case 3:
            v62 = *((unsigned int *)v79 + 16);
            v63 = NearestIndexFromColorref;
            break;
          default:
            switch ( *((_DWORD *)v31 + 24) )
            {
              case 4:
                v59 = v50 >> 1;
                v60 = (_WORD *)*((_QWORD *)v79 + 9);
                if ( v59 )
                {
                  for ( i = v59; i; --i )
                    *v60++ = NearestIndexFromColorref;
                }
                break;
              case 5:
                v54 = (_BYTE *)*((_QWORD *)v79 + 10);
                for ( j = &v54[*((_DWORD *)v79 + 15) * *((_DWORD *)v79 + 22)]; v54 != j; v54 += *((int *)v49 + 22) )
                {
                  v56 = v54;
                  v57 = (unsigned __int64)&v54[3 * *((_DWORD *)v49 + 14) - 2];
                  if ( (unsigned __int64)v54 < v57 )
                  {
                    do
                    {
                      *v56 = NearestIndexFromColorref;
                      v58 = v56 + 1;
                      *v58++ = BYTE1(NearestIndexFromColorref);
                      *v58 = BYTE2(NearestIndexFromColorref);
                      v56 = v58 + 1;
                    }
                    while ( (unsigned __int64)v56 < v57 );
                    v49 = v79;
                  }
                }
                break;
              case 6:
                v51 = (int *)*((_QWORD *)v79 + 9);
                v52 = v50 >> 2;
                if ( v52 )
                {
                  for ( k = v52; k; --k )
                    *v51++ = NearestIndexFromColorref;
                }
                break;
            }
            goto LABEL_97;
        }
        memset(*((void **)v79 + 9), v63, v62);
LABEL_97:
        `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
        v76[0] = v102.x - 16 * v109;
        v76[1] = v102.y - 16 * DWORD1(v109);
        pptfx = *(POINTFIX *)v76;
        v76[0] = v103 - 16 * v109;
        v76[1] = v104 - 16 * DWORD1(v109);
        v113 = *(POINTFIX *)v76;
        v76[0] = v105 - 16 * v109;
        v76[1] = v106 - 16 * DWORD1(v109);
        v114 = *(POINTFIX *)v76;
        if ( v79 )
          v64 = (SURFOBJ *)(v79 + 6);
        else
          v64 = 0LL;
        EngPlgBlt(v64, (SURFOBJ *)(v31 + 6), 0LL, 0LL, xloIdent, 0LL, 0LL, &pptfx, &prcl, 0LL, 3u);
        v31 = v79;
        prcl.right = DWORD2(v93) - v93;
        prcl.bottom = HIDWORD(v93) - DWORD1(v93);
        *(_QWORD *)&prcl.left = 0LL;
        `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_101:
        v65 = 0LL;
        *(_QWORD *)v76 = 0LL;
        if ( *(_QWORD *)(v86[0] + 496LL) == *((_QWORD *)v82[0] + 62)
          || (inited = EXLATEOBJ::bInitXlateObj(
                         (__int64 *)v76,
                         0LL,
                         0,
                         v39,
                         v29,
                         v40,
                         v30,
                         *(_DWORD *)(*((_QWORD *)v82[0] + 122) + 184LL),
                         *(_DWORD *)(*((_QWORD *)v82[0] + 122) + 176LL),
                         -1,
                         0),
              v65 = *(POINTFIX *)v76,
              inited) )
        {
          v68 = v78;
          ++*((_DWORD *)v78 + 23);
          if ( *((_QWORD *)v82[0] + 6) == *(_QWORD *)(v86[0] + 48LL)
            || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v82) && *(_QWORD *)(v69 + 3520) == v70 )
          {
            if ( ((_DWORD)v68[28] & 0x8000) != 0 )
              v71 = (*(__int64 (__fastcall **)(HDC, unsigned __int64, _BYTE *, POINTFIX, __int128 *, RECTL *, int, _DWORD))(*((_QWORD *)v68 + 6) + 3280LL))(
                      v68 + 6,
                      (unsigned __int64)(v31 + 6) & -(__int64)(v31 != 0LL),
                      v95,
                      v65,
                      &v93,
                      &prcl,
                      NearestIndexFromColorref,
                      0);
            else
              v71 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))EngTransparentBlt)(
                      v68 + 6,
                      (unsigned __int64)(v31 + 6) & -(__int64)(v31 != 0LL),
                      v95,
                      v65,
                      &v93,
                      &prcl,
                      NearestIndexFromColorref,
                      0);
            v11 = v71;
            goto LABEL_116;
          }
          v67 = 87;
        }
        else
        {
          v67 = 6;
        }
        EngSetLastError(v67);
LABEL_116:
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v76);
        SURFMEM::~SURFMEM((SURFMEM *)&v79);
        SURFMEM::~SURFMEM((SURFMEM *)&v77);
LABEL_122:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v91);
LABEL_124:
        `vector destructor iterator'(&v102, 8uLL, 4uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_126:
        v43 = v11;
        goto LABEL_127;
      }
      EngSetLastError(8u);
      SURFMEM::~SURFMEM((SURFMEM *)&v79);
LABEL_105:
      SURFMEM::~SURFMEM((SURFMEM *)&v77);
      v43 = 0;
      goto LABEL_106;
    }
    v72 = 87;
LABEL_119:
    EngSetLastError(v72);
    goto LABEL_122;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
