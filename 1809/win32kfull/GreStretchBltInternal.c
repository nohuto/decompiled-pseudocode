/*
 * XREFs of GreStretchBltInternal @ 0x1C004BE70
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     GreStretchDIBitsInternal @ 0x1C004DABC (GreStretchDIBitsInternal.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C006CF78 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     BltIcon @ 0x1C006DB60 (BltIcon.c)
 *     NtUserBitBltSysBmp @ 0x1C01065C0 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x1C01066B8 (BitBltSysBmp.c)
 *     NtGdiStretchBlt @ 0x1C01093A0 (NtGdiStretchBlt.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C02228D0 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C025A990 (DxgkEngBltViaGDI.c)
 * Callees:
 *     bCvtPts1 @ 0x1C00477FC (bCvtPts1.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004B574 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C004CA70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C004CA9C (--1BLTRECORD@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004CB44 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C004CBF8 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C004D274 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     NtGdiPatBlt @ 0x1C0056440 (NtGdiPatBlt.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005F050 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0064590 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C0098BC4 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009D094 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009E31C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C009F1D0 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009F644 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00A0014 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     GreMovePointer @ 0x1C00A1790 (GreMovePointer.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C0123344 (--0UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ??1UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C01254C8 (--1UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C025BFC0 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C026FC58 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0274118 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 */

__int64 __fastcall GreStretchBltInternal(
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
        int a11,
        int a12,
        char a13)
{
  unsigned int v16; // ebx
  unsigned int v17; // r10d
  int v18; // eax
  char v19; // r15
  int v20; // r15d
  unsigned int v21; // edi
  DC *v22; // rcx
  __int64 v23; // rdx
  int v24; // r8d
  int v25; // r9d
  int valid; // eax
  DC *v27; // r8
  __int64 v28; // rbx
  struct SURFACE *v29; // rbx
  struct SURFACE *v30; // rcx
  ULONG v31; // ecx
  DC *v32; // r9
  __int64 v33; // rbx
  __int64 v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // r12
  SURFACE *v37; // r10
  struct SURFACE *v38; // r13
  __int64 v39; // rbx
  int v40; // r11d
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // r8
  int v44; // edi
  DC *v45; // r8
  __int64 v46; // rcx
  struct SURFACE *v47; // rax
  struct SURFACE *v48; // rax
  int v49; // edx
  __int64 v50; // r9
  __int64 v51; // r11
  unsigned int v52; // edi
  __int64 v53; // r8
  int v54; // edx
  int v55; // r9d
  int v56; // r10d
  int v57; // edx
  int v58; // r8d
  unsigned int v59; // eax
  unsigned __int8 v60; // r9
  SURFACE *v61; // rax
  DC *v62; // rcx
  DC *v63; // r8
  __int64 v64; // rcx
  BOOL v66; // [rsp+60h] [rbp-A0h]
  DC *v69[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v70[32]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v71; // [rsp+A0h] [rbp-60h]
  unsigned int v72; // [rsp+A4h] [rbp-5Ch]
  unsigned int v73; // [rsp+A8h] [rbp-58h]
  _QWORD v74[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v75[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v76[16]; // [rsp+E0h] [rbp-20h] BYREF
  HDC v77[14]; // [rsp+F0h] [rbp-10h] BYREF
  char v78; // [rsp+160h] [rbp+60h]
  unsigned __int64 v79; // [rsp+200h] [rbp+100h] BYREF
  int v80; // [rsp+208h] [rbp+108h]
  int v81; // [rsp+20Ch] [rbp+10Ch]
  unsigned __int64 v82[2]; // [rsp+210h] [rbp+110h] BYREF
  unsigned __int64 v83; // [rsp+220h] [rbp+120h] BYREF
  __int64 v84; // [rsp+230h] [rbp+130h]
  __int64 v85; // [rsp+238h] [rbp+138h]
  __int64 v86; // [rsp+240h] [rbp+140h]
  __int64 v87; // [rsp+248h] [rbp+148h]
  struct SURFACE *v88; // [rsp+250h] [rbp+150h]
  struct SURFACE *v89; // [rsp+258h] [rbp+158h]
  __int64 v90; // [rsp+260h] [rbp+160h]
  __int64 v91; // [rsp+268h] [rbp+168h] BYREF
  char *v92; // [rsp+270h] [rbp+170h]
  _DWORD v93[6]; // [rsp+2A8h] [rbp+1A8h] BYREF
  int v94; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v95; // [rsp+2C4h] [rbp+1C4h]
  int v96; // [rsp+2C8h] [rbp+1C8h]
  int v97; // [rsp+2CCh] [rbp+1CCh]
  __int64 v98; // [rsp+2E0h] [rbp+1E0h]
  unsigned int v99; // [rsp+2E8h] [rbp+1E8h]
  int v100; // [rsp+2ECh] [rbp+1ECh]

  LODWORD(v79) = a11 & 0x40000000;
  v90 = 0LL;
  v100 = 0;
  v72 = 0;
  v16 = a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF);
  v66 = (a11 & 0x40000000) != 0;
  v99 = ((v16 >> 8) | v16 & 0xFF0000) >> 8;
  v18 = gajRop3[(unsigned __int16)(v16 >> 8) >> 8];
  v19 = v18 | gajRop3[(unsigned __int64)v99 >> 8];
  v73 = v18 | gajRop3[(unsigned __int64)v99 >> 8];
  v20 = v19 & 0xD4;
  if ( v20
    || (v17 = (((unsigned int)(a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF)) >> 8) | a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF) & 0xFF0000) >> 8,
        (unsigned __int8)v17 != v17 >> 8) )
  {
    v69[0] = 0LL;
    v69[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v70);
    XDCOBJ::vLock((XDCOBJ *)v69, a1);
    if ( ((gajRop3[(unsigned __int8)v16] | gajRop3[BYTE1(v16)]) & 2) != 0 && v16 != 16711778 && v16 != 66 )
      bSpDwmValidateSurface((struct XDCOBJ *)v69, a2, a3, a4, a5);
    v74[0] = 0LL;
    v74[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v75);
    XDCOBJ::vLock((XDCOBJ *)v74, a6);
    bSpDwmValidateSurface((struct XDCOBJ *)v74, a7, a8, a9, a10);
    v22 = v69[0];
    if ( !v69[0] )
      goto LABEL_142;
    if ( (*((_DWORD *)v69[0] + 9) & 0x10000) == 0 )
    {
      v23 = *((_QWORD *)v69[0] + 122);
      if ( (*(_DWORD *)(v23 + 152) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v69[0], *(_QWORD *)(v23 + 160));
        v22 = v69[0];
      }
    }
    if ( !v22 || (*((_DWORD *)v22 + 9) & 0x10000) != 0 || !v74[0] && v20 )
    {
LABEL_142:
      EngSetLastError(6u);
      if ( !v20 || (v21 = 0, v74[0]) )
        v21 = 1;
      goto LABEL_145;
    }
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v77);
    if ( v20 )
      DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v77, (struct XDCOBJ *)v69, (struct XDCOBJ *)v74, v25);
    else
      DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v77, (struct XDCOBJ *)v69, v24);
    if ( (v78 & 1) == 0 )
    {
      EngSetLastError(8u);
      v21 = 0;
LABEL_141:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v77);
LABEL_145:
      MDCOBJ::~MDCOBJ((MDCOBJ *)v74);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v75);
      MDCOBJ::~MDCOBJ((MDCOBJ *)v69);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v70);
      goto LABEL_146;
    }
    valid = XDCOBJ::bValidSurf((XDCOBJ *)v69);
    v27 = v69[0];
    v28 = v74[0];
    if ( !valid
      || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v74)
      || (*(_DWORD *)(*(_QWORD *)(v28 + 496) + 112LL) & 0x10000000) != 0 )
    {
      if ( !*((_QWORD *)v27 + 62) || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v74) )
      {
        if ( (*((_DWORD *)v27 + 9) & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v76, (struct XDCOBJ *)v69, 0x204u);
          v80 = a2 + a4;
          v79 = __PAIR64__(a3, a2);
          v81 = a3 + a5;
          if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v76, (struct ERECTL *)&v79) )
          {
            ERECTL::vOrder((ERECTL *)&v79);
            XDCOBJ::vAccumulate((XDCOBJ *)v69, (struct ERECTL *)&v79);
          }
        }
        v21 = 1;
        goto LABEL_141;
      }
      if ( (*(_DWORD *)(v28 + 36) & 1) == 0 )
      {
LABEL_41:
        v21 = 0;
        goto LABEL_141;
      }
    }
    if ( v20 )
    {
      v29 = *(struct SURFACE **)(v28 + 496);
      if ( !v29 )
        v29 = SURFACE::pdibDefault;
      if ( *((_DWORD *)v29 + 164) && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v29 + 164)
        || !(unsigned int)_SurfaceAccessCheck(v29) )
      {
        goto LABEL_37;
      }
      v27 = v69[0];
    }
    v30 = (struct SURFACE *)*((_QWORD *)v27 + 62);
    if ( !v30 )
      v30 = SURFACE::pdibDefault;
    if ( !(unsigned int)DestSurfaceAccessCheck(v30) )
    {
LABEL_37:
      v31 = 5;
LABEL_40:
      EngSetLastError(v31);
      goto LABEL_41;
    }
    if ( (unsigned __int8)v99 != BYTE1(v99) )
    {
      v31 = 87;
      goto LABEL_40;
    }
    v32 = v69[0];
    if ( (a11 < 0 && (v33 = *((_QWORD *)v69[0] + 122), (*(_DWORD *)(v33 + 108) & 1) != 0)
       || (v33 = *((_QWORD *)v69[0] + 122), (*(_BYTE *)(v33 + 108) & 9) == 9))
      && a6 != a1 )
    {
      v34 = *(_QWORD *)(v33 + 308);
      v35 = DC::dwSetLayout(v69[0], -1, 0);
      v32 = v69[0];
      v72 = v35;
      a2 = v34 - a2 - a4;
      v71 = 0x80000000;
    }
    else
    {
      v71 = 0;
    }
    v36 = 0LL;
    v37 = *(SURFACE **)(v74[0] + 496LL);
    if ( v37 )
      v38 = *(struct SURFACE **)(v74[0] + 496LL);
    else
      v38 = SURFACE::pdibDefault;
    v39 = *((_QWORD *)v38 + 6);
    if ( !(_DWORD)v79 )
      goto LABEL_80;
    v40 = *(_DWORD *)(v74[0] + 36LL);
    if ( (v40 & 1) == 0
      || (v41 = *(_QWORD *)(v74[0] + 48LL), (*(_DWORD *)(v41 + 40) & 0x80u) != 0)
      || v41 != *((_QWORD *)v32 + 6)
      && (!(unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v69) || v42 != *(_QWORD *)(v43 + 3520))
      || !v39 )
    {
      v66 = 0;
      goto LABEL_80;
    }
    if ( v20 && (v40 & 0x4000) != 0 && v37 != *((SURFACE **)v32 + 62) )
    {
      SURFACE::bUnMap(v37, 0LL, 0LL);
      v32 = v69[0];
    }
    if ( (*((_DWORD *)v32 + 9) & 0x4000) != 0 )
      SURFACE::bUnMap(*((SURFACE **)v32 + 62), 0LL, v32);
    GreAcquireSemaphore(*(_QWORD *)(v39 + 64));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoSrc.hsemPointer()", *(_QWORD *)(v39 + 64), 4LL);
    v79 = *(_QWORD *)(v39 + 72);
    UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v76);
    if ( (a13 & 2) == 0 || !gbForceSoftwareCursor )
      GreMovePointer(*((HDEV *)v38 + 6), -1, -1);
    SURFACE::vSetIncludeSprites();
    v44 = 0;
    if ( v20 && (*(_DWORD *)(v74[0] + 36LL) & 0x4000) != 0 )
    {
      v45 = v69[0];
      v46 = *(_QWORD *)(v74[0] + 496LL);
      if ( v46 == *((_QWORD *)v69[0] + 62) )
      {
LABEL_73:
        if ( (*((_DWORD *)v45 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v45 + 62), 0LL, v45) == 2 )
        {
          v44 = 1;
          *((_DWORD *)v69[0] + 11) |= 1u;
        }
        UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v76);
        if ( v44 )
        {
          v21 = v73;
          goto LABEL_114;
        }
LABEL_80:
        EXFORMOBJ::vInit((EXFORMOBJ *)v82, (struct XDCOBJ *)v69, 0x204u, 0);
        v47 = (struct SURFACE *)*((_QWORD *)v69[0] + 62);
        if ( !v47 )
          v47 = SURFACE::pdibDefault;
        v88 = v47;
        v84 = *((_QWORD *)v47 + 16);
        v85 = *((_QWORD *)v69[0] + 11);
        EXFORMOBJ::vInit((EXFORMOBJ *)&v83, (struct XDCOBJ *)v74, 0x204u, 0);
        v48 = *(struct SURFACE **)(v74[0] + 496LL);
        if ( !v48 )
          v48 = SURFACE::pdibDefault;
        v49 = a12;
        v89 = v48;
        v50 = *((_QWORD *)v48 + 16);
        v86 = v50;
        v51 = *(_QWORD *)(v74[0] + 88LL);
        v87 = v51;
        if ( a12 == -1 )
          v49 = *(_DWORD *)(*(_QWORD *)(v74[0] + 976LL) + 180LL);
        if ( (a13 & 1) != 0 )
          v36 = *(_QWORD *)(*((_QWORD *)v69[0] + 122) + 248LL);
        if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                              &v91,
                              v36,
                              *((_DWORD *)v69[0] + 30),
                              v50,
                              v84,
                              v51,
                              v85,
                              *(_DWORD *)(*((_QWORD *)v69[0] + 122) + 184LL),
                              *(_DWORD *)(*((_QWORD *)v69[0] + 122) + 176LL),
                              v49,
                              0) )
          goto LABEL_113;
        v52 = v73;
        v100 |= 2u;
        if ( (v73 & 0xE8) != 0 )
        {
          v92 = (char *)v69[0] + 1208;
          v53 = *((_QWORD *)v69[0] + 122);
          v54 = *(_DWORD *)(v53 + 152);
          if ( (v54 & 1) != 0 || (*((_DWORD *)v69[0] + 79) & 1) != 0 )
          {
            *(_DWORD *)(v53 + 152) = v54 & 0xFFFFFFFE;
            *((_DWORD *)v69[0] + 79) &= ~1u;
            EBRUSHOBJ::vInitBrush(v92, v69[0], *((_QWORD *)v69[0] + 17), v85, v84, v88, 1);
          }
          v98 = *((_QWORD *)v69[0] + 150);
        }
        else
        {
          v92 = 0LL;
        }
        v90 = 0LL;
        if ( (*(_DWORD *)(v83 + 32) & 1) != 0 )
        {
          v55 = a7;
          v56 = a8;
          v57 = a7 + a9;
          v58 = a8 + a10;
          v96 = a7 + a9;
          v97 = a8 + a10;
          v94 = a7;
          v95 = a8;
          if ( (*(_BYTE *)(v83 + 32) & 0x43) == 0x43 )
            goto LABEL_99;
          if ( (unsigned int)bCvtPts1(v83, &v94, 2LL) )
          {
            v58 = v97;
            v57 = v96;
            v56 = v95;
            v55 = v94;
LABEL_99:
            if ( v20 && (v55 == v57 || v56 == v58) )
            {
              v21 = 1;
              goto LABEL_114;
            }
            if ( (*(_DWORD *)(v82[0] + 32) & 1) == 0 )
            {
              BLTRECORD::TrgPlg((BLTRECORD *)v82, a2, a3, a4, a5);
              v59 = BLTRECORD::bRotate(
                      (BLTRECORD *)v82,
                      (struct DCOBJ *)v69,
                      (struct DCOBJ *)v74,
                      v52,
                      *(_BYTE *)(*((_QWORD *)v69[0] + 122) + 215LL));
LABEL_105:
              v21 = v59;
              goto LABEL_114;
            }
            v93[0] = a2;
            v93[2] = a2 + a4;
            v93[1] = a3;
            v93[3] = a3 + a5;
            if ( (*(_BYTE *)(v82[0] + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v82[0], v93, 2LL) )
            {
              v60 = *(_BYTE *)(*((_QWORD *)v69[0] + 122) + 215LL);
              if ( v60 == 4 || !(unsigned int)BLTRECORD::bEqualExtents((BLTRECORD *)v82) )
                v59 = BLTRECORD::bStretch((BLTRECORD *)v82, (struct DCOBJ *)v69, (struct DCOBJ *)v74, v52, v60);
              else
                v59 = BLTRECORD::bBitBlt((BLTRECORD *)v82, (struct DCOBJ *)v69, (struct DCOBJ *)v74, v52);
              goto LABEL_105;
            }
          }
        }
        EngSetLastError(0x57u);
LABEL_113:
        v21 = 0;
LABEL_114:
        if ( v71 )
          DC::dwSetLayout(v69[0], -1, v72);
        if ( !v66 )
          goto LABEL_141;
        SURFACE::vClearIncludeSprites();
        if ( v20 && (*(_DWORD *)(v74[0] + 36LL) & 0x4000) != 0 )
        {
          v61 = *(SURFACE **)(v74[0] + 496LL);
          v62 = v69[0];
          if ( v61 == *((SURFACE **)v69[0] + 62) )
            goto LABEL_122;
          SURFACE::bUnMap(v61, 0LL, 0LL);
        }
        v62 = v69[0];
LABEL_122:
        if ( (*((_DWORD *)v62 + 9) & 0x4000) != 0 )
          SURFACE::bUnMap(*((SURFACE **)v62 + 62), 0LL, v62);
        UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v76);
        if ( (a13 & 2) == 0 || !gbForceSoftwareCursor )
          GreMovePointer(*((HDEV *)v38 + 6), v79, HIDWORD(v79));
        EtwTraceGreLockReleaseSemaphore(L"pdoSrc.hsemPointer()", *(_QWORD *)(v39 + 64));
        GreReleaseSemaphoreInternal(*(_QWORD *)(v39 + 64));
        if ( v20 && (*(_DWORD *)(v74[0] + 36LL) & 0x4000) != 0 )
        {
          v63 = v69[0];
          v64 = *(_QWORD *)(v74[0] + 496LL);
          if ( v64 == *((_QWORD *)v69[0] + 62) )
            goto LABEL_133;
          if ( (unsigned int)SURFACE::Map(v64, 0LL, 0LL) == 2 )
            *(_DWORD *)(v74[0] + 44LL) |= 1u;
        }
        v63 = v69[0];
LABEL_133:
        if ( (*((_DWORD *)v63 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v63 + 62), 0LL, v63) == 2 )
          *((_DWORD *)v69[0] + 11) |= 1u;
        UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v76);
        goto LABEL_141;
      }
      if ( (unsigned int)SURFACE::Map(v46, 0LL, 0LL) == 2 )
      {
        v44 = 1;
        *(_DWORD *)(v74[0] + 44LL) |= 1u;
      }
    }
    v45 = v69[0];
    goto LABEL_73;
  }
  v21 = NtGdiPatBlt(a1, a5, a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF));
LABEL_146:
  BLTRECORD::~BLTRECORD((BLTRECORD *)v82);
  return v21;
}
