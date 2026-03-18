/*
 * XREFs of ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006B6E0
 * Callers:
 *     GreUpdateSprite @ 0x1C002AEB8 (GreUpdateSprite.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0064960 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GreUpdateSpriteCallout@@YAXPEAX@Z @ 0x1C026B440 (-GreUpdateSpriteCallout@@YAXPEAX@Z.c)
 * Callees:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0029094 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C002A934 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C002B9F4 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C003F044 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0045D38 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0046E0C (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C0046E44 (DwmAsyncDirtySprite.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C0047EEC (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C005A43C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C006C2C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C01081E0 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0108384 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0108454 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C01222E0 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0127FEC (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C012BB90 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0139DF8 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C015B768 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C026BFF0 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 */

__int64 __fastcall GreUpdateSpriteInternal(
        HDEV a1,
        HWND a2,
        _QWORD *a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12,
        struct tagMINIWINDOWINFO *a13,
        int a14,
        int a15)
{
  _QWORD *v15; // r15
  HWND v16; // r12
  struct tagRECT *v17; // rdi
  int v18; // r13d
  unsigned int v19; // r14d
  unsigned int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // ebx
  int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // rbx
  _QWORD *v28; // rsi
  char *v29; // rdi
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  struct tagPOINT *v33; // r9
  struct SFMLOGICALSURFACE *v34; // rcx
  struct SFMLOGICALSURFACE *FirstLSurf; // rsi
  _QWORD *v36; // rdi
  struct tagRECT v37; // xmm0
  int v38; // edx
  struct _BLENDFUNCTION *v39; // r8
  unsigned int v40; // eax
  int v41; // eax
  char v42; // dl
  int v43; // eax
  struct tagPOINT *v44; // r8
  int v45; // eax
  __int64 v46; // rcx
  _BYTE *v47; // rcx
  SFMLOGICALSURFACE *v48; // rdi
  int v49; // eax
  HLSURF v50; // rsi
  struct SFMLOGICALSURFACE *v51; // rsi
  __int64 v52; // rcx
  unsigned int v53; // edi
  unsigned int v54; // r13d
  struct _BLENDFUNCTION *v56; // rax
  struct _BLENDFUNCTION v57; // ecx
  __int64 ThreadWin32Thread; // rax
  bool v59; // cc
  void *v60; // rax
  __int64 v61; // r8
  __int64 v62; // r8
  LONG y; // edx
  struct _RECTL *v64; // rax
  LONG v65; // ecx
  int v66; // eax
  bool v67; // zf
  LONG x; // eax
  int v69; // edx
  int v70; // eax
  int v71; // ecx
  bool v72; // dl
  SURFACE *v73; // rax
  int updated; // eax
  void *v75; // rax
  __int64 v76; // r8
  int v77; // [rsp+20h] [rbp-E0h]
  int v78; // [rsp+60h] [rbp-A0h]
  char v79; // [rsp+64h] [rbp-9Ch]
  int v80; // [rsp+68h] [rbp-98h]
  int v81; // [rsp+68h] [rbp-98h]
  SFMLOGICALSURFACE *v82; // [rsp+70h] [rbp-90h]
  SFMLOGICALSURFACE *v83; // [rsp+70h] [rbp-90h]
  SFMLOGICALSURFACE *v84; // [rsp+70h] [rbp-90h]
  int v85; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v86; // [rsp+7Ch] [rbp-84h] BYREF
  struct SFMLOGICALSURFACE *v87; // [rsp+80h] [rbp-80h] BYREF
  __int64 v88; // [rsp+88h] [rbp-78h]
  struct _BLENDFUNCTION *v89; // [rsp+90h] [rbp-70h]
  HDEV v90; // [rsp+98h] [rbp-68h]
  unsigned int v91; // [rsp+A0h] [rbp-60h]
  int v92; // [rsp+A4h] [rbp-5Ch]
  int v93; // [rsp+A8h] [rbp-58h]
  struct tagRECT *v94; // [rsp+B0h] [rbp-50h]
  struct tagSIZE *v95; // [rsp+B8h] [rbp-48h]
  unsigned int v96; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v97; // [rsp+C4h] [rbp-3Ch] BYREF
  int v98; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD *v99; // [rsp+D0h] [rbp-30h]
  struct tagPOINT *v100; // [rsp+D8h] [rbp-28h]
  HDC v101; // [rsp+E0h] [rbp-20h]
  struct tagPOINT *v102; // [rsp+E8h] [rbp-18h]
  _QWORD *v103; // [rsp+F0h] [rbp-10h]
  HDEV v104; // [rsp+F8h] [rbp-8h] BYREF
  SFMLOGICALSURFACE *v105; // [rsp+100h] [rbp+0h]
  HWND v106; // [rsp+108h] [rbp+8h]
  _QWORD v107[3]; // [rsp+110h] [rbp+10h] BYREF
  HDC v108; // [rsp+128h] [rbp+28h]
  _QWORD Buffer[2]; // [rsp+130h] [rbp+30h] BYREF
  struct _RECTL v110; // [rsp+140h] [rbp+40h] BYREF
  struct tagRECT v111; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v112[144]; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v113; // [rsp+2A0h] [rbp+1A0h]

  v15 = a3;
  v16 = a2;
  v17 = a12;
  v18 = 0;
  v102 = a5;
  v19 = a11 & 0x200000;
  v95 = a6;
  v20 = 0;
  v101 = a7;
  v100 = a8;
  v89 = a10;
  v99 = a3;
  v106 = a2;
  v90 = a1;
  v88 = (__int64)a13;
  v108 = a4;
  v94 = a12;
  v78 = 0;
  v93 = 1;
  v91 = a11 & 0x200000;
  memset(v112, 0, 0x88uLL);
  v24 = a11 & 0xFFDFFFFF;
  v85 = 0;
  v86 = 0;
  v79 = 0;
  v113 = a11 & 0xFFDFFFFF;
  if ( !a14 || !g_pDwmState )
    goto LABEL_136;
  v92 = 0;
  if ( !v19 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    v92 = 1;
  }
  v25 = 0;
  v104 = v90;
  if ( !v19 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23);
    if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v25 = 1;
    }
  }
  if ( v19 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", ghsemDwmState);
  }
  else
  {
    GreAcquireSemaphore(ghsemDwmState);
  }
  if ( g_pDwmState )
  {
    v27 = 0LL;
    v28 = v99;
    if ( v106 )
    {
      Buffer[1] = 0LL;
      v28 = 0LL;
      Buffer[0] = v106;
      v29 = (char *)g_pDwmState + 72;
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v29, 0LL);
      }
      v30 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
      if ( v30 )
        v28 = (_QWORD *)v30[1];
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        ExReleasePushLockExclusiveEx(v29, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( !v28 )
      goto LABEL_84;
    LOBYTE(v26) = 15;
    v31 = HmgShareLockCheck(v28, v26);
    v27 = v31;
    if ( !v31 || (*(_DWORD *)(v31 + 164) & 0x10) != 0 )
      goto LABEL_84;
    v93 = 0;
    v78 = 1;
    if ( v31 != -88 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v27 + 88, 0LL);
    }
    v34 = *(struct SFMLOGICALSURFACE **)(v27 + 168);
    v99 = *(_QWORD **)v27;
    FirstLSurf = v34;
    v82 = v34;
    v87 = v34;
    v105 = 0LL;
    if ( v34 && *(_QWORD *)v34 )
    {
      LOBYTE(v32) = 18;
      v105 = (SFMLOGICALSURFACE *)HmgLock(*(_QWORD *)v34, v32);
      v34 = FirstLSurf;
    }
    v36 = (_QWORD *)((char *)v34 + 256);
    if ( v34 != (struct SFMLOGICALSURFACE *)-256LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v36, 0LL);
      v34 = FirstLSurf;
    }
    if ( v94 )
    {
      v37 = *v94;
      v94 = &v111;
      v111 = v37;
    }
    v38 = v113;
    if ( v113 == 0x2000000 )
    {
      v113 = 570425346;
      v89 = (struct _BLENDFUNCTION *)&v85;
      v85 = 33488896;
      v72 = v95 || v102;
      vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v27, v72);
      v38 = 570425346;
      v34 = FirstLSurf;
    }
    if ( (v38 & 0x20000000) != 0 )
    {
      v38 &= ~0x20000000u;
      v113 = v38;
    }
    else if ( (v38 & 0x40000000) != 0 || !v38 )
    {
      v38 = *(_DWORD *)(v27 + 72);
      v39 = (struct _BLENDFUNCTION *)(v27 + 76);
      v40 = *(_DWORD *)(v27 + 80);
      v89 = (struct _BLENDFUNCTION *)(v27 + 76);
      v113 = v38;
      a9 = v40;
      goto LABEL_32;
    }
    v39 = v89;
LABEL_32:
    v41 = v38 & 2;
    v80 = v41;
    if ( (v38 & 2) == 0 )
    {
LABEL_33:
      if ( *((_QWORD *)v34 + 23) )
      {
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v34 + 23)) + 116) & 1) == 0 )
          SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)FirstLSurf + 23));
        v41 = v80;
        v34 = FirstLSurf;
      }
      v42 = v113;
      *(_DWORD *)(v27 + 72) = v113;
      if ( v41 )
      {
        if ( *(_BYTE *)(v27 + 79) != v89->AlphaFormat )
        {
          v70 = bSpDwmCreateLogicalSurface(v90, (struct DWMSPRITE *)v27, v34, 0LL, &v87);
          v42 = v113;
          FirstLSurf = v87;
          v78 = v70;
        }
        v56 = v89;
        *(struct _BLENDFUNCTION *)(v27 + 76) = *v89;
        v57 = *v56;
        *((_DWORD *)FirstLSurf + 61) |= 0x40u;
        *((struct _BLENDFUNCTION *)FirstLSurf + 60) = v57;
      }
      if ( (v42 & 1) != 0 )
      {
        *(_DWORD *)(v27 + 80) = a9;
        if ( *((_QWORD *)v82 + 23) )
        {
          if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v82)
            && !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v104) )
          {
            v84 = (SFMLOGICALSURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v82 + 23));
            if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v104) )
            {
              v71 = *((_DWORD *)v84 + 29);
              if ( (v71 & 0x20) == 0 )
              {
                *((_DWORD *)v84 + 29) = v71 | 0x20;
                pConvertDfbSurfaceToDibPostNKAPC(*((HSURF *)v84 + 4));
                v79 = 1;
              }
            }
            else
            {
              v73 = (SURFACE *)pProcessDfbSurfaces(v84, 1LL);
              if ( v73 )
              {
                FirstLSurf = SURFACE::GetFirstLSurf(v73);
                v87 = FirstLSurf;
              }
            }
          }
        }
      }
      v43 = v78;
      if ( !v78 )
        goto LABEL_53;
      v44 = v102;
      if ( v102 )
      {
        x = v102->x;
        v69 = v102->y - *(_DWORD *)(v27 + 60);
        *(_DWORD *)(v27 + 64) += v102->x - *(_DWORD *)(v27 + 56);
        *(_DWORD *)(v27 + 68) += v69;
        *(_DWORD *)(v27 + 60) += v69;
        *(_DWORD *)(v27 + 56) = x;
      }
      if ( (*((_DWORD *)FirstLSurf + 63) & 1) != 0 )
      {
        if ( v94 && *((_QWORD *)FirstLSurf + 23) )
          vSpUpdateDirtyRgn((struct DWMSPRITE *)v27, FirstLSurf, v101, v94, &v86, a15);
        goto LABEL_46;
      }
      if ( (v113 & 0x2000000) != 0 )
      {
        if ( v44 && v95 )
        {
          updated = bSpDwmUpdateDragRectShape(v90, (struct DWMSPRITE *)v27, FirstLSurf, v33, v95, &v86, &v87);
          FirstLSurf = v87;
          v78 = updated;
        }
        goto LABEL_46;
      }
      if ( !v100 || !v95 )
      {
LABEL_46:
        v43 = v78;
        if ( v78 )
        {
          v45 = *((_DWORD *)FirstLSurf + 63);
          if ( (v45 & 1) != 0 && (v45 & 0x40) == 0 )
            *((_DWORD *)FirstLSurf + 63) = v45 | 0x40;
          v46 = *((_QWORD *)FirstLSurf + 23);
          if ( v46 && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v46) + 116) & 1) == 0 )
          {
            v67 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)FirstLSurf + 23)) + 248) == 0LL;
            v43 = v78;
            if ( v67 )
              *((_DWORD *)FirstLSurf + 63) |= 8u;
          }
          else
          {
            v43 = v78;
          }
        }
        goto LABEL_53;
      }
      DCOBJ::DCOBJ((DCOBJ *)v107, v101);
      v78 = 0;
      if ( v107[0] )
      {
        if ( !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v107) )
        {
          v62 = *(_QWORD *)(v61 + 496);
          y = v100->y;
          v64 = (struct _RECTL *)&v111;
          v110.left = v100->x;
          v110.right = v95->cx + v110.left;
          v65 = y + v95->cy;
          v110.top = y;
          if ( !v94 )
            v64 = 0LL;
          v110.bottom = v65;
          v66 = bSpDwmUpdateSpriteShape(
                  v90,
                  (struct DWMSPRITE *)v27,
                  FirstLSurf,
                  (struct _SURFOBJ *)(v62 + 24),
                  &v110,
                  *(struct PALETTE **)(v62 + 128),
                  &v86,
                  v64,
                  &v87);
          v61 = v107[0];
          FirstLSurf = v87;
          v78 = v66;
        }
        if ( v61 )
          XDCOBJ::vUnlockFast((XDCOBJ *)v107);
        goto LABEL_46;
      }
      v43 = 0;
LABEL_53:
      if ( *(_QWORD *)(v27 + 40) )
      {
        v47 = (_BYTE *)v88;
      }
      else
      {
        vSpDwmGetMiniWinInfoForNonWindowSprite(v112, v27 + 56);
        v43 = v78;
        v47 = v112;
        v88 = (__int64)v112;
      }
      if ( v43 && !v79 && (v47 || (*((_DWORD *)FirstLSurf + 63) & 8) != 0) )
      {
        if ( (*((_DWORD *)FirstLSurf + 63) & 8) != 0 )
          SFMLOGICALSURFACE::StartSfmStateTracking(FirstLSurf, v90, gpSfmState, (int)v33);
        SFMLOGICALSURFACE::GetRedirectionInfo(FirstLSurf, (enum _HLSURF_REDIRECTIONSTYLE *)&v98, &v97, &v96, 0LL, 0LL);
        v83 = *(SFMLOGICALSURFACE **)(v27 + 104);
        v59 = *(_DWORD *)(v27 + 116) < 1;
        *(_QWORD *)(v27 + 104) = 0LL;
        v81 = !v59;
        v107[2] = *(_QWORD *)v87;
        v103 = *(_QWORD **)v27;
        v60 = (void *)UserReferenceDwmApiPort();
        DwmAsyncUpdateSprite(v60, v27 + 72, v88, v98, v97, v96, v81, (__int64)v83);
      }
      if ( v36 )
      {
        ExReleasePushLockExclusiveEx(v36, 0LL);
        KeLeaveCriticalRegion();
      }
      v48 = v105;
      if ( v105 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v105 + 3);
        v49 = *((_DWORD *)v48 + 61);
        if ( (v49 & 0x80u) != 0 && (v49 & 8) != 0 && (v49 & 0x10) != 0 )
        {
          *((_DWORD *)v48 + 61) = v49 & 0xFFFFFFEF;
          SFMLOGICALSURFACE::StopSfmStateTracking(v48, 0LL, gpSfmState);
        }
        v50 = *(HLSURF *)v48;
        if ( *(_QWORD *)v48 )
        {
          LOBYTE(v77) = 18;
          v48 = (SFMLOGICALSURFACE *)HmgRemoveObject(v50, 0LL, 0LL, 1LL, v77, 0LL);
        }
        if ( v48 )
        {
          SFMLOGICALSURFACE::DeInitialize((HDEV *)v48, v50, 0);
          FreeObject(v48, 18LL);
          EtwLogicalSurfDestroyEvent(v50, 0LL);
        }
      }
      v51 = v87;
      v52 = *((_QWORD *)v87 + 23);
      if ( v52 )
        v88 = *(_QWORD *)(v52 + 8);
      else
        v88 = 0LL;
      v103 = *(_QWORD **)v27;
      if ( v52 && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v52) + 116) & 1) != 0 )
        v18 = 1;
      v53 = v86 & 0xFFFFFFFE;
      if ( !v18 )
        v53 = v86;
      v54 = v53;
      if ( (v53 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)v51 + 63)) )
      {
        GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v51, 1u, v88);
        v54 = v53 & 0xFFFFFFFE;
      }
      if ( v54 )
      {
        v75 = (void *)UserReferenceDwmApiPort();
        DwmAsyncDirtySprite(v75, (__int64)v103, v76, v54, v88);
      }
      if ( v51 != (struct SFMLOGICALSURFACE *)-256LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)v51 + 256, 0LL);
      }
      *((_DWORD *)v51 + 63) &= ~8u;
      if ( v51 != (struct SFMLOGICALSURFACE *)-256LL )
      {
        ExReleasePushLockExclusiveEx((char *)v51 + 256, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v27 != -88 )
      {
        ExReleasePushLockExclusiveEx(v27 + 88, 0LL);
        KeLeaveCriticalRegion();
      }
      v19 = v91;
LABEL_84:
      if ( v27 )
        DEC_SHARE_REF_CNT(v27);
      v20 = v78;
      v24 = v113;
      goto LABEL_87;
    }
    if ( v39 )
    {
      if ( (v39->AlphaFormat & 1) == 0 )
        goto LABEL_33;
      if ( (*((_DWORD *)v34 + 63) & 1) == 0 )
      {
        v41 = v38 & 2;
        goto LABEL_33;
      }
    }
    v43 = 0;
    v78 = 0;
    goto LABEL_53;
  }
LABEL_87:
  if ( v92 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( v25 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  if ( !v93 )
    return v20;
  v17 = v94;
  v15 = v99;
  v16 = v106;
LABEL_136:
  if ( v19 )
    v24 |= 0x200000u;
  return GdiUpdateSprite(
           v90,
           v16,
           v15,
           v108,
           (struct _POINTL *)v102,
           v95,
           v101,
           (struct _POINTL *)v100,
           a9,
           v89,
           v24,
           v17);
}
