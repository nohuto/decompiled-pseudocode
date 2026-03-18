/*
 * XREFs of NtGdiTransparentBlt @ 0x1C0118C30
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1C0242BA0 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008F930 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0090DC0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0099254 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00992C4 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0099850 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C009C0F8 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009D44C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A512C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00AD89C (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     GetAppCompatFlags2 @ 0x1C00C3A80 (GetAppCompatFlags2.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C011920C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bRotationOrMirroring@EXFORMOBJ@@QEBAHXZ @ 0x1C01198DC (-bRotationOrMirroring@EXFORMOBJ@@QEBAHXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0119DA0 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0119DF8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0243E8C (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     EngPlgBlt @ 0x1C025CFE0 (EngPlgBlt.c)
 */

__int64 __fastcall NtGdiTransparentBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11)
{
  int v14; // ecx
  unsigned int v15; // r12d
  struct SURFACE *v16; // rsi
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // r13
  int v20; // r11d
  __int64 v21; // rdi
  bool v22; // cc
  int v23; // ebx
  int v24; // ebx
  __int64 v25; // rbx
  __int64 v26; // rsi
  struct REGION *v27; // rax
  struct ECLIPOBJ *v28; // rdx
  POINTFIX v29; // r9
  int inited; // eax
  struct SURFACE *v31; // rdi
  unsigned int v32; // eax
  FIX x; // r8d
  FIX v35; // edi
  FIX y; // r9d
  FIX v37; // r11d
  int v38; // r10d
  int v39; // r8d
  int v40; // r9d
  int v41; // eax
  __int64 v42; // r8
  int v43; // eax
  LONG v44; // ecx
  LONG v45; // edx
  int v46; // eax
  _QWORD *v47; // rax
  bool v48; // zf
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v50; // edx
  __int64 v51; // rdi
  unsigned int v52; // edx
  int *v53; // rdi
  unsigned int v54; // edx
  __int64 k; // rcx
  _BYTE *v56; // r8
  _BYTE *j; // r10
  _BYTE *v58; // rdx
  unsigned __int64 v59; // rcx
  _BYTE *v60; // rdx
  unsigned int v61; // edx
  _WORD *v62; // rdi
  __int64 i; // rcx
  size_t v64; // r8
  int v65; // edx
  SURFOBJ *v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // r8
  int v69; // r12d
  int NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  POINTFIX v71; // [rsp+68h] [rbp-98h] BYREF
  struct _RECTL *v72[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v73; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v74[2]; // [rsp+90h] [rbp-70h] BYREF
  HDC v75; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-58h] BYREF
  char v77; // [rsp+B0h] [rbp-50h]
  int v78; // [rsp+B4h] [rbp-4Ch]
  _QWORD v79[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct SURFACE *v80; // [rsp+C8h] [rbp-38h]
  _QWORD v81[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v82[4]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v83[16]; // [rsp+110h] [rbp+10h] BYREF
  HDC v84[22]; // [rsp+120h] [rbp+20h] BYREF
  RECTL prcl; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v86; // [rsp+1E0h] [rbp+E0h] BYREF
  RECTL v87; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v88[4]; // [rsp+200h] [rbp+100h] BYREF
  RECTL v89; // [rsp+204h] [rbp+104h] BYREF
  __int64 v90; // [rsp+250h] [rbp+150h]
  int v91; // [rsp+258h] [rbp+158h]
  int v92; // [rsp+280h] [rbp+180h]
  __int64 v93; // [rsp+290h] [rbp+190h]
  struct _POINTFIX v94; // [rsp+2A0h] [rbp+1A0h] BYREF
  FIX v95; // [rsp+2A8h] [rbp+1A8h]
  int v96; // [rsp+2ACh] [rbp+1ACh]
  int v97; // [rsp+2B0h] [rbp+1B0h]
  FIX v98; // [rsp+2B4h] [rbp+1B4h]
  FIX v99; // [rsp+2B8h] [rbp+1B8h]
  int v100; // [rsp+2BCh] [rbp+1BCh]
  __int128 v101; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v102; // [rsp+2D0h] [rbp+1D0h]
  int v103; // [rsp+2D4h] [rbp+1D4h]
  POINTFIX pptfx; // [rsp+2E0h] [rbp+1E0h] BYREF
  POINTFIX v105; // [rsp+2E8h] [rbp+1E8h]
  POINTFIX v106; // [rsp+2F0h] [rbp+1F0h]

  v75 = a6;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  MDCOBJ::MDCOBJ((MDCOBJ *)v72, a1);
  MDCOBJ::MDCOBJ((MDCOBJ *)v74, v75);
  if ( !v72[0]
    || (v72[0][2].top & 0x10000) != 0
    || !v74[0]
    || (bSpDwmValidateSurface((struct XDCOBJ *)v74, a7, a8, a9, a10),
        bSpDwmValidateSurface((struct XDCOBJ *)v72, a2, a3, a4, a5),
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v79, (struct XDCOBJ *)v72, 516),
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v83, (struct XDCOBJ *)v74, 516),
        (unsigned int)EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v83)) )
  {
    EngSetLastError(0x57u);
    v15 = 0;
    goto LABEL_44;
  }
  prcl.right = a9 + a7;
  prcl.top = a8;
  prcl.left = a7;
  prcl.bottom = a10 + a8;
  EXFORMOBJ::bXform((EXFORMOBJ *)v83, (struct _POINTL *)&prcl);
  ERECTL::vOrder((ERECTL *)&prcl);
  `vector constructor iterator'(&v94, 8uLL, 4uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
  v71.x = EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v79);
  v14 = a4 + a2;
  v15 = 1;
  if ( v71.x )
  {
    v103 = a5 + a3;
    LODWORD(v101) = a2;
    *(_QWORD *)((char *)&v101 + 4) = __PAIR64__(v14, a3);
    HIDWORD(v101) = a3;
    v102 = a2;
    EXFORMOBJ::bXform((EXFORMOBJ *)v79, (struct _POINTL *)&v101, &v94, 3uLL);
    x = v94.x;
    v35 = v95;
    if ( (*(_DWORD *)(v79[0] + 32LL) & 1) != 0 )
    {
      if ( v94.x > v95 )
      {
        x = v94.x + 16;
        v35 = v95 + 16;
        v97 += 16;
        v94.x += 16;
        v95 += 16;
      }
      y = v94.y;
      v37 = v98;
      v38 = v96;
      if ( v94.y > v98 )
      {
        y = v94.y + 16;
        v38 = v96 + 16;
        v37 = v98 + 16;
        v94.y += 16;
        v98 += 16;
        v96 += 16;
      }
    }
    else
    {
      v37 = v98;
      v38 = v96;
      y = v94.y;
    }
    v99 = v35 + v97 - x;
    v100 = v37 + v38 - y;
    v39 = (v35 > x) ^ (v35 <= v99);
    v40 = (v38 > y) ^ (v38 <= v100);
    v41 = v39 ^ 3;
    if ( *(&v94.x + 2 * v39) <= *(&v94.x + 2 * (v39 ^ 3LL)) )
      v41 = v39;
    v42 = v41;
    LODWORD(v73) = (*(&v94.x + 2 * v41) + 15) >> 4;
    v43 = v40 ^ 3;
    if ( *(&v94.y + 2 * v40) <= *(&v94.y + 2 * (v40 ^ 3LL)) )
      v43 = v40;
    DWORD1(v73) = (*(&v94.y + 2 * v43) + 15) >> 4;
    DWORD2(v73) = (*(&v94.x + 2 * (v42 ^ 3)) + 15) >> 4;
    HIDWORD(v73) = (*(&v94.y + 2 * (v43 ^ 3LL)) + 15) >> 4;
    v86 = v73;
  }
  else
  {
    HIDWORD(v73) = a5 + a3;
    LODWORD(v73) = a2;
    *(_QWORD *)((char *)&v73 + 4) = __PAIR64__(v14, a3);
    v86 = v73;
    EXFORMOBJ::bXform((EXFORMOBJ *)v79, (struct _POINTL *)&v86);
    ERECTL::vOrder((ERECTL *)&v86);
  }
  if ( !ERECTL::bEmpty((ERECTL *)&v86) )
  {
    if ( (v72[0][2].top & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v72, (struct ERECTL *)&v86);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v84);
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v84, (struct XDCOBJ *)v72, (struct XDCOBJ *)v74) )
    {
      v69 = XDCOBJ::bFullScreen((XDCOBJ *)v74);
      v15 = XDCOBJ::bFullScreen((XDCOBJ *)v72) | v69;
      goto LABEL_42;
    }
    v16 = *(struct SURFACE **)&v72[0][31].right;
    v80 = v16;
    if ( !v16 )
      goto LABEL_42;
    v17 = *((_QWORD *)v16 + 16);
    v18 = *(_QWORD *)&v72[0][6].left;
    v19 = *(_QWORD *)(v74[0] + 504LL);
    if ( !v19 )
      goto LABEL_42;
    if ( !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v74[0] + 504LL))
      || !(unsigned int)DestSurfaceAccessCheck(v16) )
    {
      EngSetLastError(6u);
      goto LABEL_125;
    }
    v101 = v86;
    if ( !(unsigned int)ERECTL::bOffsetAdd(
                          (ERECTL *)&v86,
                          (const struct _POINTL *)&v72[0][89] + (v72[0][2].right & 1LL),
                          1)
      || !(unsigned int)ERECTL::bOffsetAdd(
                          (ERECTL *)&prcl,
                          (const struct _POINTL *)(v74[0] + 1424LL + 8 * (*(_DWORD *)(v74[0] + 40LL) & 1LL)),
                          1) )
    {
      v20 = 1;
    }
    v21 = *(_QWORD *)(v19 + 48);
    if ( *(_WORD *)(v19 + 100) == 1 && v21 && (*(_DWORD *)(v21 + 40) & 0x20000) != 0 )
    {
      v44 = *(_DWORD *)(v21 + 2576);
      if ( prcl.left < v44 )
        goto LABEL_68;
      v45 = *(_DWORD *)(v21 + 2580);
      if ( prcl.top < v45 || prcl.right > *(_DWORD *)(v19 + 56) + v44 )
        goto LABEL_68;
      v22 = prcl.bottom <= v45 + *(_DWORD *)(v19 + 60);
    }
    else
    {
      if ( prcl.left < 0 || prcl.top < 0 || prcl.right > *(_DWORD *)(v19 + 56) )
        goto LABEL_68;
      v22 = prcl.bottom <= *(_DWORD *)(v19 + 60);
    }
    if ( v22 )
    {
      v23 = 0;
LABEL_28:
      v24 = v20 | v23;
      if ( (struct SURFACE *)v19 == v16 )
      {
        v87 = prcl;
        ERECTL::operator*=(&v87.left, (int *)&v86);
        if ( !ERECTL::bEmpty((ERECTL *)&v87) )
          v24 = 1;
      }
      if ( v24 )
      {
        EngSetLastError(0x57u);
        v15 = 0;
      }
      else
      {
        v25 = *(_QWORD *)(v19 + 128);
        v26 = *(_QWORD *)(v74[0] + 96LL);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v25, v26, a11, 1LL);
        v27 = XDCOBJ::prgnEffRao((DC **)v72);
        v92 = 1;
        v90 = 0LL;
        v91 = 0;
        v93 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v88, v27, (struct ERECTL *)&v86, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&v89) )
        {
          if ( (v72[0][2].top & 0xE0) != 0 )
          {
            v87 = v89;
            XDCOBJ::vAccumulateTight(v72, v28, (__m128i *)&v87);
          }
          *(_QWORD *)&v73 = 0LL;
          BYTE8(v73) = 0;
          HIDWORD(v73) = 0;
          if ( (GetAppCompatFlags2(0x400u, (__int64)v28) & 0x8000000) != 0 )
          {
            v46 = *(_DWORD *)(*(_QWORD *)&v72[0][5].left + 312LL);
            if ( (v46 & 1) != 0 && (v46 & 9) != 9 )
            {
              memset(v81, 0, sizeof(v81));
              HIDWORD(v81[0]) = *(_DWORD *)(v19 + 56);
              LODWORD(v81[1]) = *(_DWORD *)(v19 + 60);
              LODWORD(v81[0]) = *(_DWORD *)(v19 + 96);
              v47 = *(_QWORD **)(v19 + 128);
              LODWORD(v81[3]) = 0;
              if ( v47 )
                v81[2] = *v47;
              else
                v81[2] = 0LL;
              SURFMEM::bCreateDIB((SURFMEM *)&v73, (struct _DEVBITMAPINFO *)v81, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              if ( !(_QWORD)v73
                || ((v48 = (*(_DWORD *)(v19 + 112) & 0x400) == 0,
                     *(_QWORD *)&v87.right = *(_QWORD *)(v19 + 56),
                     *(_QWORD *)&v87.left = 0LL,
                     v75 = 0LL,
                     v48)
                  ? (v49 = EngCopyBits)
                  : (v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v21 + 2832)),
                    !((unsigned int (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, RECTL *, HDC *))v49)(
                       v73 + 24,
                       v19 + 24,
                       0LL,
                       0LL,
                       &v87,
                       &v75)
                 || (v50 = *(_DWORD *)(v73 + 96), (unsigned int)(v50 - 1) > 5)) )
              {
LABEL_118:
                SURFMEM::~SURFMEM((SURFMEM *)&v73);
LABEL_125:
                v15 = 0;
                goto LABEL_42;
              }
              ((void (*)(void))(&apfnMirror)[v50])();
              v19 = v73;
            }
          }
          v76 = 0LL;
          v77 = 0;
          v78 = 0;
          if ( !v71.x )
            goto LABEL_35;
          memset(v82, 0, sizeof(v82));
          HIDWORD(v82[0]) = DWORD2(v86) - v86;
          LODWORD(v82[1]) = HIDWORD(v86) - DWORD1(v86);
          LODWORD(v82[0]) = *(_DWORD *)(v19 + 96);
          LODWORD(v82[3]) = *(_DWORD *)(v19 + 112) & 0x40000;
          v82[2] = 0LL;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v76, (struct _DEVBITMAPINFO *)v82, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          {
            v51 = v76;
            v52 = *(_DWORD *)(v76 + 64);
            switch ( *(_DWORD *)(v19 + 96) )
            {
              case 1:
                v64 = *(unsigned int *)(v76 + 64);
                if ( NearestIndexFromColorref )
                  v65 = 255;
                else
                  v65 = 0;
                break;
              case 2:
                v64 = *(unsigned int *)(v76 + 64);
                v65 = NearestIndexFromColorref | (16 * NearestIndexFromColorref);
                break;
              case 3:
                v64 = *(unsigned int *)(v76 + 64);
                v65 = NearestIndexFromColorref;
                break;
              default:
                switch ( *(_DWORD *)(v19 + 96) )
                {
                  case 4:
                    v61 = v52 >> 1;
                    v62 = *(_WORD **)(v76 + 72);
                    if ( v61 )
                    {
                      for ( i = v61; i; --i )
                        *v62++ = NearestIndexFromColorref;
                    }
                    break;
                  case 5:
                    v56 = *(_BYTE **)(v76 + 80);
                    for ( j = &v56[*(_DWORD *)(v76 + 60) * *(_DWORD *)(v76 + 88)]; v56 != j; v56 += *(int *)(v51 + 88) )
                    {
                      v58 = v56;
                      v59 = (unsigned __int64)&v56[3 * *(_DWORD *)(v51 + 56) - 2];
                      if ( (unsigned __int64)v56 < v59 )
                      {
                        do
                        {
                          *v58 = NearestIndexFromColorref;
                          v60 = v58 + 1;
                          *v60++ = BYTE1(NearestIndexFromColorref);
                          *v60 = BYTE2(NearestIndexFromColorref);
                          v58 = v60 + 1;
                        }
                        while ( (unsigned __int64)v58 < v59 );
                        v51 = v76;
                      }
                    }
                    break;
                  case 6:
                    v53 = *(int **)(v76 + 72);
                    v54 = v52 >> 2;
                    if ( v54 )
                    {
                      for ( k = v54; k; --k )
                        *v53++ = NearestIndexFromColorref;
                    }
                    break;
                }
                goto LABEL_113;
            }
            memset(*(void **)(v76 + 72), v65, v64);
LABEL_113:
            `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
            v71.x = v94.x - 16 * v101;
            v71.y = v94.y - 16 * DWORD1(v101);
            pptfx = v71;
            v71.x = v95 - 16 * v101;
            v71.y = v96 - 16 * DWORD1(v101);
            v105 = v71;
            v71.x = v97 - 16 * v101;
            v71.y = v98 - 16 * DWORD1(v101);
            v106 = v71;
            if ( v76 )
              v66 = (SURFOBJ *)(v76 + 24);
            else
              v66 = 0LL;
            EngPlgBlt(v66, (SURFOBJ *)(v19 + 24), 0LL, 0LL, xloIdent, 0LL, 0LL, &pptfx, &prcl, 0LL, 3u);
            v19 = v76;
            prcl.right = DWORD2(v86) - v86;
            prcl.bottom = HIDWORD(v86) - DWORD1(v86);
            *(_QWORD *)&prcl.left = 0LL;
            `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))Scale_None);
LABEL_35:
            v29 = 0LL;
            v71 = 0LL;
            if ( *(_QWORD *)(v74[0] + 504LL) == *(_QWORD *)&v72[0][31].right
              || (inited = EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v71,
                             0LL,
                             0,
                             v25,
                             v17,
                             v26,
                             v18,
                             *(_DWORD *)(*(_QWORD *)&v72[0][5].left + 40LL),
                             *(_DWORD *)(*(_QWORD *)&v72[0][5].left + 32LL),
                             -1,
                             0),
                  v29 = v71,
                  inited) )
            {
              v31 = v80;
              ++*((_DWORD *)v80 + 23);
              if ( *(_QWORD *)&v72[0][3].left == *(_QWORD *)(v74[0] + 48LL)
                || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v72) && *(_QWORD *)(v67 + 3512) == v68 )
              {
                if ( (*((_DWORD *)v31 + 28) & 0x8000) != 0 )
                  v32 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, POINTFIX, __int128 *, RECTL *, int, _DWORD))(*((_QWORD *)v31 + 6) + 3272LL))(
                          (__int64)v31 + 24,
                          (v19 + 24) & -(__int64)(v19 != 0),
                          v88,
                          v29,
                          &v86,
                          &prcl,
                          NearestIndexFromColorref,
                          0);
                else
                  v32 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))EngTransparentBlt)(
                          (char *)v31 + 24,
                          (v19 + 24) & -(__int64)(v19 != 0),
                          v88,
                          v29,
                          &v86,
                          &prcl,
                          NearestIndexFromColorref,
                          0);
                v15 = v32;
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
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v71);
            SURFMEM::~SURFMEM((SURFMEM *)&v76);
            SURFMEM::~SURFMEM((SURFMEM *)&v73);
            goto LABEL_42;
          }
          EngSetLastError(8u);
          SURFMEM::~SURFMEM((SURFMEM *)&v76);
          goto LABEL_118;
        }
      }
LABEL_42:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v84);
      goto LABEL_43;
    }
LABEL_68:
    v23 = 1;
    goto LABEL_28;
  }
LABEL_43:
  `vector destructor iterator'(&v94, 8uLL, 4uLL, (void (*)(void *))Scale_None);
LABEL_44:
  if ( v74[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v74);
  if ( v72[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v72);
  return v15;
}
