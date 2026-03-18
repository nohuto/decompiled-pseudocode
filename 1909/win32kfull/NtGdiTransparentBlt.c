/*
 * XREFs of NtGdiTransparentBlt @ 0x1C0148700
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1C0273B20 (DxgkEngBltViaGDI.c)
 * Callees:
 *     EngPlgBlt @ 0x1C0002DF0 (EngPlgBlt.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00A22B4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A22F8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A3D3C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00A3D64 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00A4618 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A8A00 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A9DD4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00AC2F0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B7F30 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B8F80 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00DE2F0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C012548C (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C01256F4 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0125BF4 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     GetAppCompatFlags2 @ 0x1C012DD40 (GetAppCompatFlags2.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0148D00 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bRotationOrMirroring@EXFORMOBJ@@QEBAHXZ @ 0x1C0148D78 (-bRotationOrMirroring@EXFORMOBJ@@QEBAHXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0148DA4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0148DFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0274FC0 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
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
  unsigned int v14; // ecx
  unsigned int v15; // r12d
  struct ECLIPOBJ *v16; // rdx
  SURFACE **v17; // r8
  __int64 v18; // r9
  struct SURFACE *v19; // rsi
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // r13
  int v23; // r11d
  __int64 v24; // rdi
  bool v25; // cc
  int v26; // ebx
  int v27; // ebx
  __int64 v28; // rbx
  __int64 v29; // rsi
  struct REGION *v30; // rax
  POINTFIX v31; // r9
  int inited; // eax
  struct SURFACE *v33; // rdi
  unsigned int v34; // eax
  FIX x; // r9d
  FIX v37; // edi
  FIX y; // r11d
  FIX v39; // r8d
  int v40; // r10d
  int v41; // r8d
  int v42; // r9d
  int v43; // eax
  __int64 v44; // r8
  int v45; // eax
  LONG v46; // ecx
  LONG v47; // edx
  int v48; // eax
  __int64 *v49; // rax
  bool v50; // zf
  BOOL (__stdcall *v51)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v52; // edx
  __int64 v53; // rdi
  unsigned int v54; // edx
  int *v55; // rdi
  unsigned int v56; // edx
  __int64 k; // rcx
  _BYTE *v58; // r8
  _BYTE *j; // r10
  _BYTE *v60; // rdx
  unsigned __int64 v61; // rcx
  _BYTE *v62; // rdx
  unsigned int v63; // edx
  _WORD *v64; // rdi
  __int64 i; // rcx
  size_t v66; // r8
  int v67; // edx
  SURFOBJ *v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // r8
  int v71; // r12d
  int NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  POINTFIX v73; // [rsp+68h] [rbp-98h] BYREF
  DC *v74[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v75; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v76[2]; // [rsp+90h] [rbp-70h] BYREF
  HDC v77; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-58h] BYREF
  char v79; // [rsp+B0h] [rbp-50h]
  int v80; // [rsp+B4h] [rbp-4Ch]
  _QWORD v81[2]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v82[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v83; // [rsp+D8h] [rbp-28h]
  __int64 v84; // [rsp+E0h] [rbp-20h]
  struct SURFACE *v85; // [rsp+E8h] [rbp-18h]
  _DWORD v86[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v87; // [rsp+100h] [rbp+0h]
  int v88; // [rsp+108h] [rbp+8h]
  int v89; // [rsp+10Ch] [rbp+Ch]
  _BYTE v90[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v91[192]; // [rsp+120h] [rbp+20h] BYREF
  RECTL prcl; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v93; // [rsp+1F0h] [rbp+F0h] BYREF
  RECTL v94; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v95[4]; // [rsp+210h] [rbp+110h] BYREF
  RECTL v96; // [rsp+214h] [rbp+114h] BYREF
  __int64 v97; // [rsp+260h] [rbp+160h]
  int v98; // [rsp+268h] [rbp+168h]
  int v99; // [rsp+290h] [rbp+190h]
  __int64 v100; // [rsp+2A0h] [rbp+1A0h]
  struct _POINTFIX v101; // [rsp+2B0h] [rbp+1B0h] BYREF
  FIX v102; // [rsp+2B8h] [rbp+1B8h]
  int v103; // [rsp+2BCh] [rbp+1BCh]
  int v104; // [rsp+2C0h] [rbp+1C0h]
  FIX v105; // [rsp+2C4h] [rbp+1C4h]
  FIX v106; // [rsp+2C8h] [rbp+1C8h]
  int v107; // [rsp+2CCh] [rbp+1CCh]
  __int128 v108; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned int v109; // [rsp+2E0h] [rbp+1E0h]
  int v110; // [rsp+2E4h] [rbp+1E4h]
  POINTFIX pptfx; // [rsp+2F0h] [rbp+1F0h] BYREF
  POINTFIX v112; // [rsp+2F8h] [rbp+1F8h]
  POINTFIX v113; // [rsp+300h] [rbp+200h]

  v77 = a6;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  DCOBJ::DCOBJ((DCOBJ *)v74, a1);
  DCOBJ::DCOBJ((DCOBJ *)v76, v77);
  if ( !v74[0]
    || (*((_DWORD *)v74[0] + 9) & 0x10000) != 0
    || !v76[0]
    || (bSpDwmValidateSurface((struct XDCOBJ *)v76, a7, a8, a9, a10),
        bSpDwmValidateSurface((struct XDCOBJ *)v74, a2, a3, a4, a5),
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v81, (struct XDCOBJ *)v74, 516),
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v90, (struct XDCOBJ *)v76, 516),
        (unsigned int)EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v90)) )
  {
    EngSetLastError(0x57u);
    v15 = 0;
    goto LABEL_44;
  }
  prcl.right = a9 + a7;
  prcl.top = a8;
  prcl.left = a7;
  prcl.bottom = a10 + a8;
  EXFORMOBJ::bXform((EXFORMOBJ *)v90, (struct _POINTL *)&prcl);
  ERECTL::vOrder((ERECTL *)&prcl);
  `vector constructor iterator'(&v101, 8uLL, 4uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
  v73.x = EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v81);
  v14 = a4 + a2;
  v15 = 1;
  if ( v73.x )
  {
    v110 = a5 + a3;
    LODWORD(v108) = a2;
    *(_QWORD *)((char *)&v108 + 4) = __PAIR64__(v14, a3);
    HIDWORD(v108) = a3;
    v109 = a2;
    EXFORMOBJ::bXform((EXFORMOBJ *)v81, (struct _POINTL *)&v108, &v101, 3uLL);
    x = v101.x;
    v37 = v102;
    if ( (*(_DWORD *)(v81[0] + 32LL) & 1) != 0 )
    {
      if ( v101.x > v102 )
      {
        x = v101.x + 16;
        v37 = v102 + 16;
        v104 += 16;
        v101.x += 16;
        v102 += 16;
      }
      y = v101.y;
      v39 = v105;
      v40 = v103;
      if ( v101.y > v105 )
      {
        y = v101.y + 16;
        v40 = v103 + 16;
        v39 = v105 + 16;
        v101.y += 16;
        v105 += 16;
        v103 += 16;
      }
    }
    else
    {
      v39 = v105;
      v40 = v103;
      y = v101.y;
    }
    v106 = v37 + v104 - x;
    v107 = v39 + v40 - y;
    v41 = (v37 <= v106) ^ (v37 > x);
    v42 = (v40 <= v107) ^ (v40 > y);
    v43 = v41 ^ 3;
    if ( *(&v101.x + 2 * v41) <= *(&v101.x + 2 * (v41 ^ 3LL)) )
      v43 = v41;
    v44 = v43;
    LODWORD(v75) = (*(&v101.x + 2 * v43) + 15) >> 4;
    v45 = v42 ^ 3;
    if ( *(&v101.y + 2 * v42) <= *(&v101.y + 2 * (v42 ^ 3LL)) )
      v45 = (v40 <= v107) ^ (v40 > y);
    DWORD1(v75) = (*(&v101.y + 2 * v45) + 15) >> 4;
    DWORD2(v75) = (*(&v101.x + 2 * (v44 ^ 3)) + 15) >> 4;
    HIDWORD(v75) = (*(&v101.y + 2 * (v45 ^ 3LL)) + 15) >> 4;
    v93 = v75;
  }
  else
  {
    HIDWORD(v75) = a5 + a3;
    LODWORD(v75) = a2;
    *(_QWORD *)((char *)&v75 + 4) = __PAIR64__(v14, a3);
    v93 = v75;
    EXFORMOBJ::bXform((EXFORMOBJ *)v81, (struct _POINTL *)&v93);
    ERECTL::vOrder((ERECTL *)&v93);
  }
  if ( !ERECTL::bEmpty((ERECTL *)&v93) )
  {
    if ( (*((_DWORD *)v74[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v74, (struct ERECTL *)&v93);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v91);
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v91, (struct XDCOBJ *)v74, (struct XDCOBJ *)v76) )
    {
      v71 = XDCOBJ::bFullScreen((XDCOBJ *)v76);
      v15 = XDCOBJ::bFullScreen((XDCOBJ *)v74) | v71;
      goto LABEL_42;
    }
    v19 = (struct SURFACE *)*((_QWORD *)v74[0] + 62);
    v85 = v19;
    if ( !v19 )
      goto LABEL_42;
    v20 = *((_QWORD *)v19 + 16);
    v21 = *((_QWORD *)v74[0] + 11);
    v22 = *(_QWORD *)(v76[0] + 496LL);
    if ( !v22 )
      goto LABEL_42;
    if ( !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v76[0] + 496LL))
      || !(unsigned int)DestSurfaceAccessCheck(v19) )
    {
      EngSetLastError(6u);
      goto LABEL_125;
    }
    v108 = v93;
    if ( !(unsigned int)ERECTL::bOffsetAdd(
                          (ERECTL *)&v93,
                          (const struct _POINTL *)v74[0] + (*((_DWORD *)v74[0] + 10) & 1LL) + 127,
                          1)
      || !(unsigned int)ERECTL::bOffsetAdd(
                          (ERECTL *)&prcl,
                          (const struct _POINTL *)(v76[0] + 1016LL + 8 * (*(_DWORD *)(v76[0] + 40LL) & 1LL)),
                          1) )
    {
      v23 = 1;
    }
    v24 = *(_QWORD *)(v22 + 48);
    if ( *(_WORD *)(v22 + 100) == 1 && v24 && (*(_DWORD *)(v24 + 40) & 0x20000) != 0 )
    {
      v46 = *(_DWORD *)(v24 + 2584);
      if ( prcl.left < v46 )
        goto LABEL_68;
      v47 = *(_DWORD *)(v24 + 2588);
      if ( prcl.top < v47 || prcl.right > *(_DWORD *)(v22 + 56) + v46 )
        goto LABEL_68;
      v25 = prcl.bottom <= v47 + *(_DWORD *)(v22 + 60);
    }
    else
    {
      if ( prcl.left < 0 || prcl.top < 0 || prcl.right > *(_DWORD *)(v22 + 56) )
        goto LABEL_68;
      v25 = prcl.bottom <= *(_DWORD *)(v22 + 60);
    }
    if ( v25 )
    {
      v26 = 0;
LABEL_28:
      v27 = v23 | v26;
      if ( (struct SURFACE *)v22 == v19 )
      {
        v94 = prcl;
        ERECTL::operator*=(&v94.left, (int *)&v93);
        if ( !ERECTL::bEmpty((ERECTL *)&v94) )
          v27 = 1;
      }
      if ( v27 )
      {
        EngSetLastError(0x57u);
        v15 = 0;
      }
      else
      {
        v28 = *(_QWORD *)(v22 + 128);
        v29 = *(_QWORD *)(v76[0] + 88LL);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v28, v29, a11, 1LL);
        v30 = XDCOBJ::prgnEffRao(v74);
        v99 = 1;
        v97 = 0LL;
        v98 = 0;
        v100 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v95, v30, (struct ERECTL *)&v93, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&v96) )
        {
          if ( (*((_DWORD *)v74[0] + 9) & 0xE0) != 0 )
          {
            v94 = v96;
            XDCOBJ::vAccumulateTight((XDCOBJ *)v74, v16, (__m128i *)&v94);
          }
          *(_QWORD *)&v75 = 0LL;
          BYTE8(v75) = 0;
          HIDWORD(v75) = 0;
          if ( (GetAppCompatFlags2(1024LL, (int)v16) & 0x8000000) != 0 )
          {
            v48 = *(_DWORD *)(*((_QWORD *)v74[0] + 122) + 108LL);
            if ( (v48 & 1) != 0 && (v48 & 9) != 9 )
            {
              v82[1] = *(_DWORD *)(v22 + 56);
              v82[2] = *(_DWORD *)(v22 + 60);
              v82[0] = *(_DWORD *)(v22 + 96);
              v49 = *(__int64 **)(v22 + 128);
              v82[3] = 0;
              v84 = 0LL;
              if ( v49 )
                v83 = *v49;
              else
                v83 = 0LL;
              SURFMEM::bCreateDIB((SURFMEM *)&v75, (struct _DEVBITMAPINFO *)v82, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              if ( !(_QWORD)v75
                || ((v50 = (*(_DWORD *)(v22 + 112) & 0x400) == 0,
                     *(_QWORD *)&v94.right = *(_QWORD *)(v22 + 56),
                     *(_QWORD *)&v94.left = 0LL,
                     v77 = 0LL,
                     v50)
                  ? (v51 = EngCopyBits)
                  : (v51 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v24 + 2840)),
                    !((unsigned int (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, RECTL *, HDC *))v51)(
                       v75 + 24,
                       v22 + 24,
                       0LL,
                       0LL,
                       &v94,
                       &v77)
                 || (v52 = *(_DWORD *)(v75 + 96), (unsigned int)(v52 - 1) > 5)) )
              {
LABEL_118:
                SURFMEM::~SURFMEM((SURFMEM *)&v75);
LABEL_125:
                v15 = 0;
                goto LABEL_42;
              }
              ((void (*)(void))(&apfnMirror)[v52])();
              v22 = v75;
            }
          }
          v78 = 0LL;
          v79 = 0;
          v80 = 0;
          if ( !v73.x )
            goto LABEL_35;
          v86[1] = DWORD2(v93) - v93;
          v86[2] = HIDWORD(v93) - DWORD1(v93);
          v86[0] = *(_DWORD *)(v22 + 96);
          v88 = *(_DWORD *)(v22 + 112) & 0x40000;
          v86[3] = 0;
          v89 = 0;
          v87 = 0LL;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v78, (struct _DEVBITMAPINFO *)v86, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          {
            v53 = v78;
            v54 = *(_DWORD *)(v78 + 64);
            switch ( *(_DWORD *)(v22 + 96) )
            {
              case 1:
                v66 = *(unsigned int *)(v78 + 64);
                if ( NearestIndexFromColorref )
                  v67 = 255;
                else
                  v67 = 0;
                break;
              case 2:
                v66 = *(unsigned int *)(v78 + 64);
                v67 = NearestIndexFromColorref | (16 * NearestIndexFromColorref);
                break;
              case 3:
                v66 = *(unsigned int *)(v78 + 64);
                v67 = NearestIndexFromColorref;
                break;
              default:
                switch ( *(_DWORD *)(v22 + 96) )
                {
                  case 4:
                    v63 = v54 >> 1;
                    v64 = *(_WORD **)(v78 + 72);
                    if ( v63 )
                    {
                      for ( i = v63; i; --i )
                        *v64++ = NearestIndexFromColorref;
                    }
                    break;
                  case 5:
                    v58 = *(_BYTE **)(v78 + 80);
                    for ( j = &v58[*(_DWORD *)(v78 + 60) * *(_DWORD *)(v78 + 88)]; v58 != j; v58 += *(int *)(v53 + 88) )
                    {
                      v60 = v58;
                      v61 = (unsigned __int64)&v58[3 * *(_DWORD *)(v53 + 56) - 2];
                      if ( (unsigned __int64)v58 < v61 )
                      {
                        do
                        {
                          *v60 = NearestIndexFromColorref;
                          v62 = v60 + 1;
                          *v62++ = BYTE1(NearestIndexFromColorref);
                          *v62 = BYTE2(NearestIndexFromColorref);
                          v60 = v62 + 1;
                        }
                        while ( (unsigned __int64)v60 < v61 );
                        v53 = v78;
                      }
                    }
                    break;
                  case 6:
                    v55 = *(int **)(v78 + 72);
                    v56 = v54 >> 2;
                    if ( v56 )
                    {
                      for ( k = v56; k; --k )
                        *v55++ = NearestIndexFromColorref;
                    }
                    break;
                }
                goto LABEL_113;
            }
            memset(*(void **)(v78 + 72), v67, v66);
LABEL_113:
            `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
            v73.x = v101.x - 16 * v108;
            v73.y = v101.y - 16 * DWORD1(v108);
            pptfx = v73;
            v73.x = v102 - 16 * v108;
            v73.y = v103 - 16 * DWORD1(v108);
            v112 = v73;
            v73.x = v104 - 16 * v108;
            v73.y = v105 - 16 * DWORD1(v108);
            v113 = v73;
            if ( v78 )
              v68 = (SURFOBJ *)(v78 + 24);
            else
              v68 = 0LL;
            EngPlgBlt(v68, (SURFOBJ *)(v22 + 24), 0LL, 0LL, xloIdent, 0LL, 0LL, &pptfx, &prcl, 0LL, 3u);
            v22 = v78;
            prcl.right = DWORD2(v93) - v93;
            prcl.bottom = HIDWORD(v93) - DWORD1(v93);
            *(_QWORD *)&prcl.left = 0LL;
            `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_35:
            v31 = 0LL;
            v73 = 0LL;
            if ( *(_QWORD *)(v76[0] + 496LL) == *((_QWORD *)v74[0] + 62)
              || (inited = EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v73,
                             0LL,
                             0,
                             v28,
                             v20,
                             v29,
                             v21,
                             *(_DWORD *)(*((_QWORD *)v74[0] + 122) + 184LL),
                             *(_DWORD *)(*((_QWORD *)v74[0] + 122) + 176LL),
                             -1,
                             0),
                  v31 = v73,
                  inited) )
            {
              v33 = v85;
              ++*((_DWORD *)v85 + 23);
              if ( *((_QWORD *)v74[0] + 6) == *(_QWORD *)(v76[0] + 48LL)
                || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v74) && *(_QWORD *)(v69 + 3520) == v70 )
              {
                if ( (*((_DWORD *)v33 + 28) & 0x8000) != 0 )
                  v34 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, POINTFIX, __int128 *, RECTL *, int, _DWORD))(*((_QWORD *)v33 + 6) + 3280LL))(
                          (__int64)v33 + 24,
                          (v22 + 24) & -(__int64)(v22 != 0),
                          v95,
                          v31,
                          &v93,
                          &prcl,
                          NearestIndexFromColorref,
                          0);
                else
                  v34 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))EngTransparentBlt)(
                          (char *)v33 + 24,
                          (v22 + 24) & -(__int64)(v22 != 0),
                          v95,
                          v31,
                          &v93,
                          &prcl,
                          NearestIndexFromColorref,
                          0);
                v15 = v34;
              }
              else
              {
                EngSetLastError(0x57u);
                v15 = 0;
              }
            }
            else
            {
              EngSetLastError(6u);
              v15 = 0;
            }
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v73);
            SURFMEM::~SURFMEM((SURFMEM *)&v78);
            SURFMEM::~SURFMEM((SURFMEM *)&v75);
            goto LABEL_42;
          }
          EngSetLastError(8u);
          SURFMEM::~SURFMEM((SURFMEM *)&v78);
          goto LABEL_118;
        }
      }
LABEL_42:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v91, (__int64)v16, v17, v18);
      goto LABEL_43;
    }
LABEL_68:
    v26 = 1;
    goto LABEL_28;
  }
LABEL_43:
  `vector destructor iterator'(&v101, 8uLL, 4uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_44:
  if ( v76[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v76);
  if ( v74[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v74);
  return v15;
}
