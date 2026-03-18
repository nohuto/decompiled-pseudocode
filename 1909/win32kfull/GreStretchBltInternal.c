/*
 * XREFs of GreStretchBltInternal @ 0x1C00BB5E8
 * Callers:
 *     BltIcon @ 0x1C0022AC0 (BltIcon.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00250E0 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00A2EB4 (GreStretchDIBitsInternal.c)
 *     NtGdiAlphaBlend @ 0x1C00B4130 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     BitBltSysBmp @ 0x1C00EA9DC (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C00EAB30 (NtUserBitBltSysBmp.c)
 *     NtGdiStretchBlt @ 0x1C00EC880 (NtGdiStretchBlt.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C023A994 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C0273B20 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0008AF8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0031A18 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     GreMovePointer @ 0x1C008B190 (GreMovePointer.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00A22B4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A22F8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00A2320 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00A4618 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00A5E44 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00AC2F0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B7F30 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B8F80 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     NtGdiPatBlt @ 0x1C00BB170 (NtGdiPatBlt.c)
 *     bCvtPts1 @ 0x1C00BC6A0 (bCvtPts1.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00BC8F0 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C00BF334 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00DE2F0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00DE848 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C010EC70 (--0UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ??1UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C0111570 (--1UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C012548C (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C0125BA8 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0274FC0 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0289C24 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 */

__int64 __fastcall GreStretchBltInternal(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        HDC a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  unsigned int v15; // r13d
  unsigned int v16; // ebx
  unsigned int v17; // r10d
  int v18; // eax
  char v19; // r15
  int v20; // r15d
  DC *v21; // rcx
  __int64 v22; // rdx
  int valid; // eax
  __int64 v24; // rdx
  __int64 v25; // r9
  unsigned __int64 v26; // r8
  DC *v27; // rbx
  struct SURFACE *v28; // rbx
  struct SURFACE *v29; // rcx
  DC *v30; // r9
  __int64 v31; // rbx
  __int64 v32; // r12
  SURFACE *v33; // r10
  struct SURFACE *v34; // rsi
  __int64 v35; // rbx
  __int64 v36; // rdi
  struct SURFACE *v37; // rax
  struct SURFACE *v38; // rax
  int v39; // edx
  __int64 v40; // r9
  __int64 v41; // r11
  unsigned int v42; // esi
  unsigned int v43; // r10d
  unsigned __int8 v44; // r9
  unsigned int v45; // eax
  unsigned int v46; // esi
  BOOL v47; // r12d
  DC *v48; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v50; // rbx
  DC *v51; // rcx
  struct _DC_ATTR *v52; // rax
  __int64 v53; // rbx
  int v55; // r11d
  __int64 v56; // rdx
  int v57; // esi
  DC *v58; // r8
  __int64 v59; // rcx
  SURFACE *v60; // rax
  DC *v61; // rcx
  DC *v62; // r8
  __int64 v63; // rcx
  ULONG v64; // ecx
  __int64 v65; // rbx
  unsigned int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r8
  int v70; // edx
  DC *v71; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+68h] [rbp-98h]
  BOOL v73; // [rsp+70h] [rbp-90h]
  unsigned int v74; // [rsp+74h] [rbp-8Ch] BYREF
  DC *v75; // [rsp+78h] [rbp-88h] BYREF
  __int64 v76; // [rsp+80h] [rbp-80h]
  int v77; // [rsp+88h] [rbp-78h]
  int v78; // [rsp+8Ch] [rbp-74h]
  int v79; // [rsp+90h] [rbp-70h]
  unsigned int v80; // [rsp+94h] [rbp-6Ch]
  unsigned int v81; // [rsp+98h] [rbp-68h]
  int v82; // [rsp+9Ch] [rbp-64h]
  __int64 v83; // [rsp+A0h] [rbp-60h]
  _BYTE v84[24]; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v85[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v86; // [rsp+E0h] [rbp-20h]
  __int64 v87; // [rsp+E8h] [rbp-18h]
  char v88; // [rsp+F0h] [rbp-10h]
  int v89; // [rsp+F4h] [rbp-Ch]
  __int64 v90; // [rsp+F8h] [rbp-8h]
  __int64 v91; // [rsp+100h] [rbp+0h]
  int v92; // [rsp+108h] [rbp+8h]
  __int64 v93; // [rsp+110h] [rbp+10h]
  __int64 v94; // [rsp+118h] [rbp+18h]
  __int16 v95; // [rsp+120h] [rbp+20h]
  __int64 v96; // [rsp+128h] [rbp+28h]
  __int64 v97; // [rsp+130h] [rbp+30h]
  __int16 v98; // [rsp+138h] [rbp+38h]
  __int64 v99; // [rsp+140h] [rbp+40h]
  __int64 v100; // [rsp+148h] [rbp+48h]
  __int64 v101; // [rsp+150h] [rbp+50h]
  __int64 v102; // [rsp+158h] [rbp+58h]
  __int128 v103; // [rsp+160h] [rbp+60h]
  __int64 v104; // [rsp+170h] [rbp+70h]
  unsigned __int64 v105; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v106; // [rsp+188h] [rbp+88h]
  int v107; // [rsp+18Ch] [rbp+8Ch]
  struct _POINTFIX v108[2]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v109; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v110; // [rsp+1B0h] [rbp+B0h]
  __int64 v111; // [rsp+1B8h] [rbp+B8h]
  __int64 v112; // [rsp+1C0h] [rbp+C0h]
  __int64 v113; // [rsp+1C8h] [rbp+C8h]
  struct SURFACE *v114; // [rsp+1D0h] [rbp+D0h]
  struct SURFACE *v115; // [rsp+1D8h] [rbp+D8h]
  __int64 v116; // [rsp+1E0h] [rbp+E0h]
  __int64 v117; // [rsp+1E8h] [rbp+E8h] BYREF
  char *v118; // [rsp+1F0h] [rbp+F0h]
  _DWORD v119[6]; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v120; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v121; // [rsp+244h] [rbp+144h]
  unsigned int v122; // [rsp+248h] [rbp+148h]
  unsigned int v123; // [rsp+24Ch] [rbp+14Ch]
  __int64 v124; // [rsp+260h] [rbp+160h]
  unsigned int v125; // [rsp+268h] [rbp+168h]
  int v126; // [rsp+26Ch] [rbp+16Ch]

  v79 = a3;
  v77 = a4;
  v82 = a11 & 0x40000000;
  v15 = a2;
  v78 = a5;
  v116 = 0LL;
  v126 = 0;
  v74 = 0;
  v16 = a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF);
  v73 = (a11 & 0x40000000) != 0;
  v125 = ((v16 >> 8) | v16 & 0xFF0000) >> 8;
  v18 = (unsigned __int8)gajRop3[(unsigned __int16)(v16 >> 8) >> 8];
  v19 = v18 | gajRop3[(unsigned __int64)v125 >> 8];
  v81 = v18 | (unsigned __int8)gajRop3[(unsigned __int64)v125 >> 8];
  v20 = v19 & 0xD4;
  if ( !v20 )
  {
    v17 = (((unsigned int)(a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF)) >> 8) | a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF) & 0xFF0000) >> 8;
    if ( (unsigned __int8)v17 == v17 >> 8 )
    {
      v46 = NtGdiPatBlt(a1, a2, a3, a4, a5, a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF));
      goto LABEL_76;
    }
  }
  v71 = 0LL;
  v72 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v71, a1);
  if ( ((gajRop3[(unsigned __int8)v16] | gajRop3[BYTE1(v16)]) & 2) != 0 && v16 != 16711778 && v16 != 66 )
    bSpDwmValidateSurface((struct XDCOBJ *)&v71, v15, a3, v77, v78);
  v75 = 0LL;
  v76 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v75, a6);
  bSpDwmValidateSurface((struct XDCOBJ *)&v75, a7, a8, a9, a10);
  v21 = v71;
  if ( !v71 )
    goto LABEL_135;
  if ( (*((_DWORD *)v71 + 9) & 0x10000) == 0 )
  {
    v22 = *((_QWORD *)v71 + 122);
    if ( (*(_DWORD *)(v22 + 152) & 0x1000) != 0 )
    {
      GreDCSelectBrush(v71, *(_QWORD *)(v22 + 160));
      v21 = v71;
    }
  }
  if ( !v21 || (*((_DWORD *)v21 + 9) & 0x10000) != 0 || !v75 && v20 )
  {
LABEL_135:
    EngSetLastError(6u);
    v48 = v75;
    if ( !v20 || (v46 = 0, v75) )
      v46 = 1;
    goto LABEL_58;
  }
  v87 = 0LL;
  memset(v85, 0, sizeof(v85));
  v103 = 0LL;
  v88 = 0;
  v89 = 0;
  v94 = 0LL;
  v95 = 256;
  v97 = 0LL;
  v98 = 256;
  v86 = 0LL;
  v92 = 0;
  v90 = 0LL;
  v91 = 0LL;
  v99 = 0LL;
  v102 = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  v104 = 0LL;
  v93 = 0LL;
  v96 = 0LL;
  if ( v20 )
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v85, (struct XDCOBJ *)&v71, (struct XDCOBJ *)&v75);
  else
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v85, (struct XDCOBJ *)&v71);
  if ( (v92 & 1) == 0 )
  {
    v64 = 8;
    goto LABEL_144;
  }
  valid = XDCOBJ::bValidSurf((XDCOBJ *)&v71);
  v26 = (unsigned __int64)v71;
  v27 = v75;
  if ( valid
    && (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)&v75)
    && (*(_DWORD *)(*((_QWORD *)v27 + 62) + 112LL) & 0x10000000) == 0 )
  {
    goto LABEL_16;
  }
  if ( !*(_QWORD *)(v26 + 496) || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)&v75) )
  {
    if ( (*(_DWORD *)(v26 + 36) & 0xE0) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v84, (struct XDCOBJ *)&v71, 0x204u);
      v106 = v15 + v77;
      v105 = __PAIR64__(v79, v15);
      v107 = v79 + v78;
      if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v84, (struct ERECTL *)&v105) )
      {
        ERECTL::vOrder((ERECTL *)&v105);
        XDCOBJ::vAccumulate((XDCOBJ *)&v71, (struct ERECTL *)&v105);
      }
    }
    v46 = 1;
    goto LABEL_57;
  }
  if ( (*((_DWORD *)v27 + 9) & 1) != 0 )
  {
LABEL_16:
    if ( v20 )
    {
      v28 = (struct SURFACE *)*((_QWORD *)v27 + 62);
      if ( !v28 )
        v28 = SURFACE::pdibDefault;
      if ( *((_DWORD *)v28 + 164) && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v28 + 164)
        || !(unsigned int)_SurfaceAccessCheck(v28) )
      {
        goto LABEL_141;
      }
      v26 = (unsigned __int64)v71;
    }
    v29 = *(struct SURFACE **)(v26 + 496);
    if ( !v29 )
      v29 = SURFACE::pdibDefault;
    if ( (unsigned int)DestSurfaceAccessCheck(v29) )
    {
      if ( (unsigned __int8)v125 == BYTE1(v125) )
      {
        v30 = v71;
        if ( (a11 < 0 && (v31 = *((_QWORD *)v71 + 122), (*(_DWORD *)(v31 + 108) & 1) != 0)
           || (v31 = *((_QWORD *)v71 + 122), (*(_BYTE *)(v31 + 108) & 9) == 9))
          && a6 != a1 )
        {
          v65 = *(_QWORD *)(v31 + 308);
          v66 = DC::dwSetLayout(v71, -1, 0);
          v30 = v71;
          v15 = v65 - v77 - v15;
          v74 = v66;
          v80 = 0x80000000;
        }
        else
        {
          v80 = 0;
        }
        v32 = 0LL;
        v33 = (SURFACE *)*((_QWORD *)v75 + 62);
        if ( v33 )
          v34 = (struct SURFACE *)*((_QWORD *)v75 + 62);
        else
          v34 = SURFACE::pdibDefault;
        v35 = *((_QWORD *)v34 + 6);
        LODWORD(v36) = 0;
        v105 = (unsigned __int64)v34;
        v83 = 0LL;
        if ( !v82 )
          goto LABEL_32;
        v55 = *((_DWORD *)v75 + 9);
        if ( (v55 & 1) == 0
          || (v56 = *((_QWORD *)v75 + 6), (*(_DWORD *)(v56 + 40) & 0x80u) != 0)
          || v56 != *((_QWORD *)v30 + 6)
          && (!(unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v71) || v67 != *(_QWORD *)(v68 + 3520))
          || !v35 )
        {
          v73 = 0;
          goto LABEL_32;
        }
        if ( v20 && (v55 & 0x4000) != 0 && v33 != *((SURFACE **)v30 + 62) )
        {
          SURFACE::bUnMap(v33, 0LL, 0LL);
          v30 = v71;
        }
        if ( (*((_DWORD *)v30 + 9) & 0x4000) != 0 )
          SURFACE::bUnMap(*((SURFACE **)v30 + 62), 0LL, v30);
        GreAcquireSemaphore(*(_QWORD *)(v35 + 64));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoSrc.hsemPointer()", *(_QWORD *)(v35 + 64), 4LL);
        v36 = *(_QWORD *)(v35 + 72);
        v83 = v36;
        UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v84);
        if ( (a13 & 2) == 0 || !HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
          GreMovePointer(*((HDEV *)v34 + 6), -1, -1, 0);
        SURFACE::vSetIncludeSprites();
        v57 = 0;
        if ( v20 && (*((_DWORD *)v75 + 9) & 0x4000) != 0 )
        {
          v58 = v71;
          v59 = *((_QWORD *)v75 + 62);
          if ( v59 == *((_QWORD *)v71 + 62) )
          {
LABEL_106:
            if ( (*((_DWORD *)v58 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v58 + 62)) == 2 )
            {
              v57 = 1;
              *((_DWORD *)v71 + 11) |= 1u;
            }
            UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v84);
            if ( v57 )
            {
              v46 = v81;
              goto LABEL_54;
            }
LABEL_32:
            EXFORMOBJ::vInit((EXFORMOBJ *)v108, (struct XDCOBJ *)&v71, 0x204u, 0);
            v37 = (struct SURFACE *)*((_QWORD *)v71 + 62);
            if ( !v37 )
              v37 = SURFACE::pdibDefault;
            v114 = v37;
            v110 = *((_QWORD *)v37 + 16);
            v111 = *((_QWORD *)v71 + 11);
            EXFORMOBJ::vInit((EXFORMOBJ *)&v109, (struct XDCOBJ *)&v75, 0x204u, 0);
            v38 = (struct SURFACE *)*((_QWORD *)v75 + 62);
            if ( !v38 )
              v38 = SURFACE::pdibDefault;
            v39 = a12;
            v115 = v38;
            v40 = *((_QWORD *)v38 + 16);
            v112 = v40;
            v41 = *((_QWORD *)v75 + 11);
            v113 = v41;
            if ( a12 == -1 )
              v39 = *(_DWORD *)(*((_QWORD *)v75 + 122) + 180LL);
            if ( (a13 & 1) != 0 )
              v32 = *(_QWORD *)(*((_QWORD *)v71 + 122) + 248LL);
            if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                  &v117,
                                  v32,
                                  *((_DWORD *)v71 + 30),
                                  v40,
                                  v110,
                                  v41,
                                  v111,
                                  *(_DWORD *)(*((_QWORD *)v71 + 122) + 184LL),
                                  *(_DWORD *)(*((_QWORD *)v71 + 122) + 176LL),
                                  v39,
                                  0) )
              goto LABEL_163;
            v42 = v81;
            v126 |= 2u;
            if ( (v81 & 0xE8) != 0 )
            {
              v118 = (char *)v71 + 1184;
              v69 = *((_QWORD *)v71 + 122);
              v70 = *(_DWORD *)(v69 + 152);
              if ( (v70 & 1) != 0 || (*((_DWORD *)v71 + 79) & 1) != 0 )
              {
                *(_DWORD *)(v69 + 152) = v70 & 0xFFFFFFFE;
                *((_DWORD *)v71 + 79) &= ~1u;
                EBRUSHOBJ::vInitBrush(v118, v71, *((_QWORD *)v71 + 17), v111, v110, v114, 1);
              }
              v124 = *((_QWORD *)v71 + 147);
            }
            else
            {
              v118 = 0LL;
            }
            v116 = 0LL;
            if ( (*(_DWORD *)(v109 + 32) & 1) != 0 )
            {
              v25 = a7;
              v43 = a8;
              v24 = a7 + a9;
              v26 = a8 + a10;
              v122 = a7 + a9;
              v123 = a8 + a10;
              v120 = a7;
              v121 = a8;
              if ( (*(_BYTE *)(v109 + 32) & 0x43) == 0x43 )
              {
LABEL_45:
                if ( v20 && ((_DWORD)v25 == (_DWORD)v24 || v43 == (_DWORD)v26) )
                {
                  v46 = 1;
                  goto LABEL_54;
                }
                if ( (*(_DWORD *)(*(_QWORD *)v108 + 32LL) & 1) != 0 )
                {
                  v119[0] = v15;
                  v119[2] = v15 + v77;
                  v119[1] = v79;
                  v119[3] = v79 + v78;
                  if ( (*(_BYTE *)(*(_QWORD *)v108 + 32LL) & 0x43) != 0x43
                    && !(unsigned int)bCvtPts1(*(_QWORD *)v108, v119, 2LL) )
                  {
                    goto LABEL_162;
                  }
                  v44 = *(_BYTE *)(*((_QWORD *)v71 + 122) + 215LL);
                  if ( v44 == 4 || !(unsigned int)BLTRECORD::bEqualExtents((BLTRECORD *)v108) )
                    v45 = BLTRECORD::bStretch((BLTRECORD *)v108, (struct DCOBJ *)&v71, (struct DCOBJ *)&v75, v42, v44);
                  else
                    v45 = BLTRECORD::bBitBlt((BLTRECORD *)v108, &v71, (struct DCOBJ *)&v75, v42);
                }
                else
                {
                  BLTRECORD::TrgPlg((BLTRECORD *)v108, v15, v79, v77, v78);
                  v45 = BLTRECORD::bRotate(
                          v108,
                          (struct DCOBJ *)&v71,
                          (struct DCOBJ *)&v75,
                          v42,
                          *(_BYTE *)(*((_QWORD *)v71 + 122) + 215LL));
                }
                v46 = v45;
                goto LABEL_54;
              }
              if ( (unsigned int)bCvtPts1(v109, &v120, 2LL) )
              {
                v26 = v123;
                v24 = v122;
                v43 = v121;
                v25 = v120;
                goto LABEL_45;
              }
            }
LABEL_162:
            EngSetLastError(0x57u);
LABEL_163:
            v46 = 0;
LABEL_54:
            v47 = v73;
            if ( v80 )
              DC::dwSetLayout(v71, -1, v74);
            if ( !v47 )
              goto LABEL_57;
            SURFACE::vClearIncludeSprites();
            if ( v20 && (*((_DWORD *)v75 + 9) & 0x4000) != 0 )
            {
              v60 = (SURFACE *)*((_QWORD *)v75 + 62);
              v61 = v71;
              if ( v60 == *((SURFACE **)v71 + 62) )
                goto LABEL_114;
              SURFACE::bUnMap(v60, 0LL, 0LL);
            }
            v61 = v71;
LABEL_114:
            if ( (*((_DWORD *)v61 + 9) & 0x4000) != 0 )
              SURFACE::bUnMap(*((SURFACE **)v61 + 62), 0LL, v61);
            UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v84);
            if ( (a13 & 2) == 0 || !HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
              GreMovePointer(*(HDEV *)(v105 + 48), v36, SHIDWORD(v83), 0);
            EtwTraceGreLockReleaseSemaphore(L"pdoSrc.hsemPointer()", *(_QWORD *)(v35 + 64));
            GreReleaseSemaphoreInternal(*(_QWORD *)(v35 + 64));
            if ( v20 && (*((_DWORD *)v75 + 9) & 0x4000) != 0 )
            {
              v62 = v71;
              v63 = *((_QWORD *)v75 + 62);
              if ( v63 == *((_QWORD *)v71 + 62) )
                goto LABEL_124;
              if ( (unsigned int)SURFACE::Map(v63) == 2 )
                *((_DWORD *)v75 + 11) |= 1u;
            }
            v62 = v71;
LABEL_124:
            if ( (*((_DWORD *)v62 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v62 + 62)) == 2 )
              *((_DWORD *)v71 + 11) |= 1u;
            UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v84);
            goto LABEL_57;
          }
          if ( (unsigned int)SURFACE::Map(v59) == 2 )
          {
            v57 = 1;
            *((_DWORD *)v75 + 11) |= 1u;
          }
        }
        v58 = v71;
        goto LABEL_106;
      }
      v64 = 87;
LABEL_144:
      EngSetLastError(v64);
      v46 = 0;
      goto LABEL_57;
    }
LABEL_141:
    v64 = 5;
    goto LABEL_144;
  }
  v46 = 0;
LABEL_57:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v85, v24, (SURFACE **)v26, v25);
  v48 = v75;
LABEL_58:
  if ( v48 )
  {
    if ( (_DWORD)v76 && (*((_DWORD *)v48 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v76) )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v75);
        v48 = v75;
        if ( UserAttr )
        {
          DC::RestoreAttributes(v75, UserAttr);
          v48 = v75;
        }
      }
      *((_DWORD *)v48 + 11) &= ~2u;
      v48 = v75;
      LODWORD(v76) = 0;
    }
    v74 = 0;
    v50 = *(_QWORD *)v48;
    HmgDecrementExclusiveReferenceCountEx(v48, HIDWORD(v76), &v74);
    if ( v74 )
      bDeleteDCInternalEx(v50, 0LL);
  }
  v51 = v71;
  if ( v71 )
  {
    if ( (_DWORD)v72 && (*((_DWORD *)v71 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v72) )
      {
        v52 = XDCOBJ::GetUserAttr((XDCOBJ *)&v71);
        v51 = v71;
        if ( v52 )
        {
          DC::RestoreAttributes(v71, v52);
          v51 = v71;
        }
      }
      *((_DWORD *)v51 + 11) &= ~2u;
      v51 = v71;
      LODWORD(v72) = 0;
    }
    v74 = 0;
    v53 = *(_QWORD *)v51;
    HmgDecrementExclusiveReferenceCountEx(v51, HIDWORD(v72), &v74);
    if ( v74 )
      bDeleteDCInternalEx(v53, 0LL);
  }
LABEL_76:
  BLTRECORD::~BLTRECORD((BLTRECORD *)v108);
  return v46;
}
