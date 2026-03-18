/*
 * XREFs of GreStretchBltInternal @ 0x1C009B858
 * Callers:
 *     NtUserBitBltSysBmp @ 0x1C000D180 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x1C000D26C (BitBltSysBmp.c)
 *     BltIcon @ 0x1C001316C (BltIcon.c)
 *     _InternalGetIconInfo @ 0x1C0015C34 (_InternalGetIconInfo.c)
 *     NtGdiAlphaBlend @ 0x1C0095810 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00A06E8 (GreStretchDIBitsInternal.c)
 *     NtGdiStretchBlt @ 0x1C00F0820 (NtGdiStretchBlt.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C01FA9E8 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C0242BA0 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C008F8E0 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C008F90C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0090DC0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0099254 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00992C4 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0099850 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C009A7B0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C009C0F8 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C009C1DC (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009C4B0 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C009C938 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009C984 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009D44C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009DA8C (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A512C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     bCvtPts1 @ 0x1C00A8418 (bCvtPts1.c)
 *     GreMovePointer @ 0x1C00C5F10 (GreMovePointer.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C0100F24 (--0UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ??1UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C0100F6C (--1UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0243E8C (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C025C294 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0260588 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 */

__int64 __fastcall GreStretchBltInternal(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
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
  unsigned int v15; // ebx
  int v17; // r14d
  int v18; // eax
  char v19; // r15
  int v20; // r15d
  int v21; // ebx
  DC *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r9
  struct SURFACE *v25; // rbx
  struct SURFACE *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r12
  struct SURFACE *v29; // rdi
  DC *v30; // r9
  __int64 v31; // rbx
  __int64 v32; // r11
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // edi
  unsigned __int8 v38; // r9
  unsigned int v39; // eax
  unsigned int v40; // edi
  BOOL v41; // r14d
  __int64 v42; // rax
  bool v44; // zf
  DC *v45; // r8
  __int64 v46; // r8
  int v47; // r11d
  __int64 v48; // rdx
  SURFACE *v49; // rcx
  int v50; // edi
  DC *v51; // r8
  __int64 v52; // rcx
  DC *v53; // rcx
  DC *v54; // r8
  __int64 v55; // rcx
  ULONG v56; // ecx
  __int64 v57; // r9
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // r10
  __int64 v61; // r8
  int v62; // edx
  char v63[8]; // [rsp+20h] [rbp-E0h]
  __int64 v64; // [rsp+28h] [rbp-D8h]
  __int64 v65; // [rsp+30h] [rbp-D0h]
  DC *v66[2]; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v67; // [rsp+70h] [rbp-90h]
  int v68; // [rsp+74h] [rbp-8Ch]
  _QWORD v69[2]; // [rsp+78h] [rbp-88h] BYREF
  int v70; // [rsp+88h] [rbp-78h]
  int v71; // [rsp+8Ch] [rbp-74h]
  unsigned int v72; // [rsp+90h] [rbp-70h]
  unsigned int v73; // [rsp+94h] [rbp-6Ch]
  int v74[2]; // [rsp+98h] [rbp-68h]
  _BYTE v75[16]; // [rsp+A0h] [rbp-60h] BYREF
  HDC v76[9]; // [rsp+B0h] [rbp-50h] BYREF
  char v77; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v78; // [rsp+160h] [rbp+60h] BYREF
  int v79; // [rsp+168h] [rbp+68h]
  unsigned int v80; // [rsp+16Ch] [rbp+6Ch]
  _QWORD v81[2]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v82; // [rsp+180h] [rbp+80h] BYREF
  __int64 v83; // [rsp+190h] [rbp+90h]
  __int64 v84; // [rsp+198h] [rbp+98h]
  __int64 v85; // [rsp+1A0h] [rbp+A0h]
  __int64 v86; // [rsp+1A8h] [rbp+A8h]
  struct SURFACE *v87; // [rsp+1B0h] [rbp+B0h]
  struct SURFACE *v88; // [rsp+1B8h] [rbp+B8h]
  __int64 v89; // [rsp+1C0h] [rbp+C0h]
  _BYTE v90[8]; // [rsp+1C8h] [rbp+C8h] BYREF
  char *v91; // [rsp+1D0h] [rbp+D0h]
  _DWORD v92[6]; // [rsp+208h] [rbp+108h] BYREF
  _DWORD v93[8]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v94; // [rsp+240h] [rbp+140h]
  unsigned int v95; // [rsp+248h] [rbp+148h]
  int v96; // [rsp+24Ch] [rbp+14Ch]

  v71 = a11;
  v70 = a4;
  v89 = 0LL;
  v96 = 0;
  v72 = 0;
  v74[0] = a11 & 0x40000000;
  v15 = a11 & 0x3FFFFFFF;
  v17 = a2;
  if ( (a11 & 0x40000000) == 0 )
    v15 = a11 & 0x7FFFFFFF;
  v68 = a5;
  v67 = (a11 & 0x40000000) != 0;
  v95 = ((v15 >> 8) | v15 & 0xFF0000) >> 8;
  v18 = (unsigned __int8)gajRop3[(unsigned __int16)(v15 >> 8) >> 8];
  v19 = v18 | gajRop3[(unsigned __int64)v95 >> 8];
  v73 = v18 | (unsigned __int8)gajRop3[(unsigned __int64)v95 >> 8];
  v20 = v19 & 0xD4;
  if ( !v20 && (unsigned __int8)((unsigned __int16)(v15 >> 8) >> 8) == ((v15 >> 8) | v15 & 0xFF0000) >> 16 )
  {
    v40 = NtGdiPatBlt(a1, a2, a3, a4, a5, v15);
    goto LABEL_51;
  }
  v66[0] = 0LL;
  v66[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v66, a1);
  if ( ((gajRop3[(unsigned __int8)v15] | gajRop3[BYTE1(v15)]) & 2) == 0 || v15 == 16711778 )
  {
    v21 = v68;
  }
  else
  {
    v44 = v15 == 66;
    v21 = v68;
    if ( !v44 )
      bSpDwmValidateSurface((struct XDCOBJ *)v66, v17, a3, a4, v68);
  }
  v69[0] = 0LL;
  v69[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v69, a6);
  bSpDwmValidateSurface((struct XDCOBJ *)v69, a7, a8, a9, a10);
  v22 = v66[0];
  if ( !v66[0] )
    goto LABEL_105;
  if ( (*((_DWORD *)v66[0] + 9) & 0x10000) == 0 )
  {
    v23 = *((_QWORD *)v66[0] + 10);
    if ( (*(_DWORD *)(v23 + 8) & 0x1000) != 0 )
    {
      GreDCSelectBrush(v66[0], *(_QWORD *)(v23 + 16));
      v22 = v66[0];
    }
  }
  if ( !v22 || (*((_DWORD *)v22 + 9) & 0x10000) != 0 || !v69[0] && v20 )
  {
LABEL_105:
    EngSetLastError(6u);
    v42 = v69[0];
    v40 = !v20 || v69[0];
    goto LABEL_47;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v76);
  if ( v20 )
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v76, (struct XDCOBJ *)v66, (struct XDCOBJ *)v69);
  else
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v76, (struct XDCOBJ *)v66);
  if ( (v77 & 1) != 0 )
  {
    if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v66)
      || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v69)
      || (*(_DWORD *)(*(_QWORD *)(v24 + 504) + 112LL) & 0x10000000) != 0 )
    {
      v45 = v66[0];
      if ( !*((_QWORD *)v66[0] + 63) || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v69) )
      {
        if ( (*((_DWORD *)v45 + 9) & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v75, (struct XDCOBJ *)v66, 0x204u);
          v78 = __PAIR64__(a3, v17);
          v79 = v17 + v70;
          v80 = v21 + a3;
          if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v75, (struct ERECTL *)&v78) )
          {
            ERECTL::vOrder((ERECTL *)&v78);
            XDCOBJ::vAccumulate((XDCOBJ *)v66, (struct ERECTL *)&v78);
          }
        }
        v40 = 1;
        goto LABEL_46;
      }
      if ( (*(_DWORD *)(v57 + 36) & 1) == 0 )
        goto LABEL_117;
    }
    if ( (!v20
       || ((v25 = XDCOBJ::pSurfaceEff((XDCOBJ *)v69), !*((_DWORD *)v25 + 164))
        || ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) == *((_DWORD *)v25 + 164))
       && (unsigned int)_SurfaceAccessCheck(v25))
      && (v26 = XDCOBJ::pSurfaceEff((XDCOBJ *)v66), (unsigned int)DestSurfaceAccessCheck(v26)) )
    {
      if ( (unsigned __int8)v95 == BYTE1(v95) )
      {
        if ( (v71 < 0 && (v27 = *((_QWORD *)v66[0] + 10), (*(_DWORD *)(v27 + 312) & 1) != 0)
           || (v27 = *((_QWORD *)v66[0] + 10), (*(_BYTE *)(v27 + 312) & 9) == 9))
          && a6 != a1 )
        {
          v58 = *(_QWORD *)(v27 + 320);
          v72 = DC::dwSetLayout(v66[0], -1, 0);
          v17 = v58 - v17 - v70;
          v71 = 0x80000000;
        }
        else
        {
          v71 = 0;
        }
        v28 = 0LL;
        v29 = XDCOBJ::pSurfaceEff((XDCOBJ *)v69);
        v78 = (unsigned __int64)v29;
        v31 = *((_QWORD *)v29 + 6);
        if ( !v74[0] )
          goto LABEL_28;
        v46 = v69[0];
        v47 = *(_DWORD *)(v69[0] + 36LL);
        if ( (v47 & 1) == 0
          || (v48 = *(_QWORD *)(v69[0] + 48LL), (*(_DWORD *)(v48 + 40) & 0x80u) != 0)
          || v48 != *((_QWORD *)v30 + 6)
          && (!(unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v66) || v59 != *(_QWORD *)(v60 + 3512))
          || !v31 )
        {
          v67 = 0;
          goto LABEL_28;
        }
        if ( v20 )
        {
          if ( (v47 & 0x4000) != 0 )
          {
            v49 = *(SURFACE **)(v46 + 504);
            if ( v49 != *((SURFACE **)v30 + 63) )
            {
              SURFACE::bUnMap(v49, 0LL, 0LL);
              v30 = v66[0];
            }
          }
        }
        if ( (*((_DWORD *)v30 + 9) & 0x4000) != 0 )
          SURFACE::bUnMap(*((SURFACE **)v30 + 63), 0LL, v30);
        GreAcquireSemaphore(*(_QWORD *)(v31 + 56));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoSrc.hsemPointer()", *(_QWORD *)(v31 + 56), 4LL);
        *(_QWORD *)v74 = *(_QWORD *)(v31 + 64);
        UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v75);
        if ( (a13 & 2) == 0 || !gbForceSoftwareCursor )
          GreMovePointer(*((HDEV *)v29 + 6), -1, -1, 0);
        SURFACE::vSetIncludeSprites();
        v50 = 0;
        if ( v20 && (*(_DWORD *)(v69[0] + 36LL) & 0x4000) != 0 )
        {
          v51 = v66[0];
          v52 = *(_QWORD *)(v69[0] + 504LL);
          if ( v52 == *((_QWORD *)v66[0] + 63) )
          {
LABEL_81:
            if ( (*((_DWORD *)v51 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v51 + 63), 0LL) == 2 )
            {
              v50 = 1;
              *((_DWORD *)v66[0] + 11) |= 1u;
            }
            UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v75);
            if ( v50 )
            {
              v40 = v73;
              goto LABEL_43;
            }
LABEL_28:
            EXFORMOBJ::vInit((EXFORMOBJ *)v81, (struct XDCOBJ *)v66, 0x204u, 0);
            v87 = XDCOBJ::pSurfaceEff((XDCOBJ *)v66);
            v83 = *((_QWORD *)v87 + 16);
            v84 = *((_QWORD *)v66[0] + 12);
            EXFORMOBJ::vInit((EXFORMOBJ *)&v82, (struct XDCOBJ *)v69, 0x204u, 0);
            v88 = XDCOBJ::pSurfaceEff((XDCOBJ *)v69);
            v85 = *((_QWORD *)v88 + 16);
            v32 = *(_QWORD *)(v69[0] + 96LL);
            v86 = v32;
            if ( (a13 & 1) != 0 )
              v28 = *(_QWORD *)(*((_QWORD *)v66[0] + 10) + 112LL);
            v65 = v84;
            v64 = v32;
            *(_QWORD *)v63 = v83;
            if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(v90, v28, *((unsigned int *)v66[0] + 32)) )
              goto LABEL_135;
            v37 = v73;
            v96 |= 2u;
            if ( (v73 & 0xE8) != 0 )
            {
              v91 = (char *)v66[0] + 1592;
              v61 = *((_QWORD *)v66[0] + 10);
              v62 = *(_DWORD *)(v61 + 8);
              if ( (v62 & 1) != 0 || (*((_DWORD *)v66[0] + 81) & 1) != 0 )
              {
                *(_DWORD *)(v61 + 8) = v62 & 0xFFFFFFFE;
                *((_DWORD *)v66[0] + 81) &= ~1u;
                EBRUSHOBJ::vInitBrush(v91, v66[0], *((_QWORD *)v66[0] + 18), v84, v83, v87, 1);
              }
              v94 = *((_QWORD *)v66[0] + 198);
            }
            else
            {
              v91 = 0LL;
            }
            v89 = 0LL;
            if ( (*(_DWORD *)(v82 + 32) & 1) == 0
              || (v93[0] = a7, v93[2] = a9 + a7, v93[1] = a8, v93[3] = a8 + a10, (*(_BYTE *)(v82 + 32) & 0x43) != 0x43)
              && !(unsigned int)bCvtPts1(v82, v93, 2LL) )
            {
LABEL_134:
              EngSetLastError(0x57u);
LABEL_135:
              v40 = 0;
LABEL_43:
              v41 = v67;
              if ( v71 )
                DC::dwSetLayout(v66[0], -1, v72);
              if ( !v41 )
                goto LABEL_46;
              SURFACE::vClearIncludeSprites(v34, v33, v35, v36, *(_QWORD *)v63, v64, v65);
              if ( v20 && (*(_DWORD *)(v69[0] + 36LL) & 0x4000) != 0 )
              {
                v53 = v66[0];
                if ( *(_QWORD *)(v69[0] + 504LL) == *((_QWORD *)v66[0] + 63) )
                  goto LABEL_89;
                SURFACE::bUnMap(*(SURFACE **)(v69[0] + 504LL), 0LL, 0LL);
              }
              v53 = v66[0];
LABEL_89:
              if ( (*((_DWORD *)v53 + 9) & 0x4000) != 0 )
                SURFACE::bUnMap(*((SURFACE **)v53 + 63), 0LL, v53);
              UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v75);
              if ( (a13 & 2) == 0 || !gbForceSoftwareCursor )
                GreMovePointer(*(HDEV *)(v78 + 48), v74[0], v74[1], 0);
              EtwTraceGreLockReleaseSemaphore(L"pdoSrc.hsemPointer()", *(_QWORD *)(v31 + 56));
              GreReleaseSemaphoreInternal(*(_QWORD *)(v31 + 56));
              if ( v20 && (*(_DWORD *)(v69[0] + 36LL) & 0x4000) != 0 )
              {
                v54 = v66[0];
                v55 = *(_QWORD *)(v69[0] + 504LL);
                if ( v55 == *((_QWORD *)v66[0] + 63) )
                  goto LABEL_99;
                if ( (unsigned int)SURFACE::Map(v55, 0LL) == 2 )
                  *(_DWORD *)(v69[0] + 44LL) |= 1u;
              }
              v54 = v66[0];
LABEL_99:
              if ( (*((_DWORD *)v54 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v54 + 63), 0LL) == 2 )
                *((_DWORD *)v66[0] + 11) |= 1u;
              UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v75);
              goto LABEL_46;
            }
            if ( v20 && (unsigned int)ERECTL::bEmpty((ERECTL *)v93) )
            {
              v40 = 1;
              goto LABEL_43;
            }
            if ( (*(_DWORD *)(v81[0] + 32LL) & 1) != 0 )
            {
              v92[0] = v17;
              v92[2] = v17 + v70;
              v92[1] = a3;
              v92[3] = a3 + v68;
              if ( (*(_BYTE *)(v81[0] + 32LL) & 0x43) != 0x43 && !(unsigned int)bCvtPts1(v81[0], v92, 2LL) )
                goto LABEL_134;
              v38 = *(_BYTE *)(*((_QWORD *)v66[0] + 10) + 75LL);
              if ( v38 == 4 || !(unsigned int)BLTRECORD::bEqualExtents((BLTRECORD *)v81) )
                v39 = BLTRECORD::bStretch((BLTRECORD *)v81, (struct DCOBJ *)v66, (struct DCOBJ *)v69, v37, v38);
              else
                v39 = BLTRECORD::bBitBlt((BLTRECORD *)v81, (struct DCOBJ *)v66, (struct DCOBJ *)v69, v37);
            }
            else
            {
              BLTRECORD::TrgPlg((BLTRECORD *)v81, v17, a3, v70, v68);
              v39 = BLTRECORD::bRotate(
                      (BLTRECORD *)v81,
                      (struct DCOBJ *)v66,
                      (struct DCOBJ *)v69,
                      v37,
                      *(_BYTE *)(*((_QWORD *)v66[0] + 10) + 75LL));
            }
            v40 = v39;
            goto LABEL_43;
          }
          if ( (unsigned int)SURFACE::Map(v52, 0LL) == 2 )
          {
            v50 = 1;
            *(_DWORD *)(v69[0] + 44LL) |= 1u;
          }
        }
        v51 = v66[0];
        goto LABEL_81;
      }
      v56 = 87;
    }
    else
    {
      v56 = 5;
    }
  }
  else
  {
    v56 = 8;
  }
  EngSetLastError(v56);
LABEL_117:
  v40 = 0;
LABEL_46:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v76);
  v42 = v69[0];
LABEL_47:
  if ( v42 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v69);
  if ( v66[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v66);
LABEL_51:
  BLTRECORD::~BLTRECORD((BLTRECORD *)v81);
  return v40;
}
