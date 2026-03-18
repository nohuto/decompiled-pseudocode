/*
 * XREFs of ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00B5AA0
 * Callers:
 *     GreUpdateSprite @ 0x1C0031328 (GreUpdateSprite.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00AED20 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GreUpdateSpriteCallout@@YAXPEAX@Z @ 0x1C026AD10 (-GreUpdateSpriteCallout@@YAXPEAX@Z.c)
 * Callees:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C002F504 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0030DA4 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0031E64 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C00830D8 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C008A708 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C008B7DC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C008B814 (DwmAsyncDirtySprite.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C008C8BC (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A3D3C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00B6680 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E2090 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00E2234 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00E2304 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C00FD2E0 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0103098 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0106B60 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0113DF8 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C015C718 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C026B8C0 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
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
  unsigned int v23; // ebx
  int v24; // r12d
  __int64 v25; // rdx
  __int64 v26; // rbx
  _QWORD *v27; // rsi
  char *v28; // rdi
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  struct tagPOINT *v32; // r9
  struct SFMLOGICALSURFACE *v33; // rcx
  struct SFMLOGICALSURFACE *FirstLSurf; // rsi
  _QWORD *v35; // rdi
  struct tagRECT v36; // xmm0
  int v37; // edx
  struct _BLENDFUNCTION *v38; // r8
  unsigned int v39; // eax
  int v40; // eax
  char v41; // dl
  int v42; // eax
  struct tagPOINT *v43; // r8
  int v44; // eax
  __int64 v45; // rcx
  _BYTE *v46; // rcx
  SFMLOGICALSURFACE *v47; // rdi
  int v48; // eax
  HLSURF v49; // rsi
  struct SFMLOGICALSURFACE *v50; // rsi
  __int64 v51; // rcx
  unsigned int v52; // edi
  unsigned int v53; // r13d
  struct _BLENDFUNCTION *v55; // rax
  struct _BLENDFUNCTION v56; // ecx
  __int64 ThreadWin32Thread; // rax
  bool v58; // cc
  void *v59; // rax
  __int64 v60; // r8
  __int64 v61; // r8
  LONG y; // edx
  struct _RECTL *v63; // rax
  LONG v64; // ecx
  int v65; // eax
  bool v66; // zf
  LONG x; // eax
  int v68; // edx
  int v69; // eax
  int v70; // ecx
  bool v71; // dl
  SURFACE *v72; // rax
  int updated; // eax
  void *v74; // rax
  __int64 v75; // r8
  int v76; // [rsp+20h] [rbp-E0h]
  int v77; // [rsp+60h] [rbp-A0h]
  char v78; // [rsp+64h] [rbp-9Ch]
  int v79; // [rsp+68h] [rbp-98h]
  int v80; // [rsp+68h] [rbp-98h]
  SFMLOGICALSURFACE *v81; // [rsp+70h] [rbp-90h]
  SFMLOGICALSURFACE *v82; // [rsp+70h] [rbp-90h]
  SFMLOGICALSURFACE *v83; // [rsp+70h] [rbp-90h]
  int v84; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v85; // [rsp+7Ch] [rbp-84h] BYREF
  struct SFMLOGICALSURFACE *v86; // [rsp+80h] [rbp-80h] BYREF
  __int64 v87; // [rsp+88h] [rbp-78h]
  struct _BLENDFUNCTION *v88; // [rsp+90h] [rbp-70h]
  HDEV v89; // [rsp+98h] [rbp-68h]
  unsigned int v90; // [rsp+A0h] [rbp-60h]
  int v91; // [rsp+A4h] [rbp-5Ch]
  int v92; // [rsp+A8h] [rbp-58h]
  struct tagRECT *v93; // [rsp+B0h] [rbp-50h]
  struct tagSIZE *v94; // [rsp+B8h] [rbp-48h]
  unsigned int v95; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v96; // [rsp+C4h] [rbp-3Ch] BYREF
  int v97; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD *v98; // [rsp+D0h] [rbp-30h]
  struct tagPOINT *v99; // [rsp+D8h] [rbp-28h]
  HDC v100; // [rsp+E0h] [rbp-20h]
  struct tagPOINT *v101; // [rsp+E8h] [rbp-18h]
  _QWORD *v102; // [rsp+F0h] [rbp-10h]
  HDEV v103; // [rsp+F8h] [rbp-8h] BYREF
  SFMLOGICALSURFACE *v104; // [rsp+100h] [rbp+0h]
  HWND v105; // [rsp+108h] [rbp+8h]
  _QWORD v106[3]; // [rsp+110h] [rbp+10h] BYREF
  HDC v107; // [rsp+128h] [rbp+28h]
  _QWORD Buffer[2]; // [rsp+130h] [rbp+30h] BYREF
  struct _RECTL v109; // [rsp+140h] [rbp+40h] BYREF
  struct tagRECT v110; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v111[144]; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v112; // [rsp+2A0h] [rbp+1A0h]

  v15 = a3;
  v16 = a2;
  v17 = a12;
  v18 = 0;
  v101 = a5;
  v19 = a11 & 0x200000;
  v94 = a6;
  v20 = 0;
  v100 = a7;
  v99 = a8;
  v88 = a10;
  v98 = a3;
  v105 = a2;
  v89 = a1;
  v87 = (__int64)a13;
  v107 = a4;
  v93 = a12;
  v77 = 0;
  v92 = 1;
  v90 = a11 & 0x200000;
  memset(v111, 0, 0x88uLL);
  v23 = a11 & 0xFFDFFFFF;
  v84 = 0;
  v85 = 0;
  v78 = 0;
  v112 = a11 & 0xFFDFFFFF;
  if ( !a14 || !g_pDwmState )
    goto LABEL_136;
  v91 = 0;
  if ( !v19 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    v91 = 1;
  }
  v24 = 0;
  v103 = v89;
  if ( !v19 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22);
    if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v24 = 1;
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
    v26 = 0LL;
    v27 = v98;
    if ( v105 )
    {
      Buffer[1] = 0LL;
      v27 = 0LL;
      Buffer[0] = v105;
      v28 = (char *)g_pDwmState + 72;
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v28, 0LL);
      }
      v29 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
      if ( v29 )
        v27 = (_QWORD *)v29[1];
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        ExReleasePushLockExclusiveEx(v28, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( !v27 )
      goto LABEL_84;
    LOBYTE(v25) = 15;
    v30 = HmgShareLockCheck(v27, v25);
    v26 = v30;
    if ( !v30 || (*(_DWORD *)(v30 + 164) & 0x10) != 0 )
      goto LABEL_84;
    v92 = 0;
    v77 = 1;
    if ( v30 != -88 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v26 + 88, 0LL);
    }
    v33 = *(struct SFMLOGICALSURFACE **)(v26 + 168);
    v98 = *(_QWORD **)v26;
    FirstLSurf = v33;
    v81 = v33;
    v86 = v33;
    v104 = 0LL;
    if ( v33 && *(_QWORD *)v33 )
    {
      LOBYTE(v31) = 18;
      v104 = (SFMLOGICALSURFACE *)HmgLock(*(_QWORD *)v33, v31);
      v33 = FirstLSurf;
    }
    v35 = (_QWORD *)((char *)v33 + 256);
    if ( v33 != (struct SFMLOGICALSURFACE *)-256LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v35, 0LL);
      v33 = FirstLSurf;
    }
    if ( v93 )
    {
      v36 = *v93;
      v93 = &v110;
      v110 = v36;
    }
    v37 = v112;
    if ( v112 == 0x2000000 )
    {
      v112 = 570425346;
      v88 = (struct _BLENDFUNCTION *)&v84;
      v84 = 33488896;
      v71 = v94 || v101;
      vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v26, v71);
      v37 = 570425346;
      v33 = FirstLSurf;
    }
    if ( (v37 & 0x20000000) != 0 )
    {
      v37 &= ~0x20000000u;
      v112 = v37;
    }
    else if ( (v37 & 0x40000000) != 0 || !v37 )
    {
      v37 = *(_DWORD *)(v26 + 72);
      v38 = (struct _BLENDFUNCTION *)(v26 + 76);
      v39 = *(_DWORD *)(v26 + 80);
      v88 = (struct _BLENDFUNCTION *)(v26 + 76);
      v112 = v37;
      a9 = v39;
      goto LABEL_32;
    }
    v38 = v88;
LABEL_32:
    v40 = v37 & 2;
    v79 = v40;
    if ( (v37 & 2) == 0 )
    {
LABEL_33:
      if ( *((_QWORD *)v33 + 23) )
      {
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v33 + 23)) + 116) & 1) == 0 )
          SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)FirstLSurf + 23));
        v40 = v79;
        v33 = FirstLSurf;
      }
      v41 = v112;
      *(_DWORD *)(v26 + 72) = v112;
      if ( v40 )
      {
        if ( *(_BYTE *)(v26 + 79) != v88->AlphaFormat )
        {
          v69 = bSpDwmCreateLogicalSurface(v89, (struct DWMSPRITE *)v26, v33, 0LL, &v86);
          v41 = v112;
          FirstLSurf = v86;
          v77 = v69;
        }
        v55 = v88;
        *(struct _BLENDFUNCTION *)(v26 + 76) = *v88;
        v56 = *v55;
        *((_DWORD *)FirstLSurf + 61) |= 0x40u;
        *((struct _BLENDFUNCTION *)FirstLSurf + 60) = v56;
      }
      if ( (v41 & 1) != 0 )
      {
        *(_DWORD *)(v26 + 80) = a9;
        if ( *((_QWORD *)v81 + 23) )
        {
          if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v81)
            && !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v103) )
          {
            v83 = (SFMLOGICALSURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v81 + 23));
            if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v103) )
            {
              v70 = *((_DWORD *)v83 + 29);
              if ( (v70 & 0x20) == 0 )
              {
                *((_DWORD *)v83 + 29) = v70 | 0x20;
                pConvertDfbSurfaceToDibPostNKAPC(*((HSURF *)v83 + 4));
                v78 = 1;
              }
            }
            else
            {
              v72 = (SURFACE *)pProcessDfbSurfaces(v83, 1LL);
              if ( v72 )
              {
                FirstLSurf = SURFACE::GetFirstLSurf(v72);
                v86 = FirstLSurf;
              }
            }
          }
        }
      }
      v42 = v77;
      if ( !v77 )
        goto LABEL_53;
      v43 = v101;
      if ( v101 )
      {
        x = v101->x;
        v68 = v101->y - *(_DWORD *)(v26 + 60);
        *(_DWORD *)(v26 + 64) += v101->x - *(_DWORD *)(v26 + 56);
        *(_DWORD *)(v26 + 68) += v68;
        *(_DWORD *)(v26 + 60) += v68;
        *(_DWORD *)(v26 + 56) = x;
      }
      if ( (*((_DWORD *)FirstLSurf + 63) & 1) != 0 )
      {
        if ( v93 && *((_QWORD *)FirstLSurf + 23) )
          vSpUpdateDirtyRgn((struct DWMSPRITE *)v26, FirstLSurf, v100, v93, &v85, a15);
        goto LABEL_46;
      }
      if ( (v112 & 0x2000000) != 0 )
      {
        if ( v43 && v94 )
        {
          updated = bSpDwmUpdateDragRectShape(v89, (struct DWMSPRITE *)v26, FirstLSurf, v32, v94, &v85, &v86);
          FirstLSurf = v86;
          v77 = updated;
        }
        goto LABEL_46;
      }
      if ( !v99 || !v94 )
      {
LABEL_46:
        v42 = v77;
        if ( v77 )
        {
          v44 = *((_DWORD *)FirstLSurf + 63);
          if ( (v44 & 1) != 0 && (v44 & 0x40) == 0 )
            *((_DWORD *)FirstLSurf + 63) = v44 | 0x40;
          v45 = *((_QWORD *)FirstLSurf + 23);
          if ( v45 && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v45) + 116) & 1) == 0 )
          {
            v66 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)FirstLSurf + 23)) + 248) == 0LL;
            v42 = v77;
            if ( v66 )
              *((_DWORD *)FirstLSurf + 63) |= 8u;
          }
          else
          {
            v42 = v77;
          }
        }
        goto LABEL_53;
      }
      DCOBJ::DCOBJ((DCOBJ *)v106, v100);
      v77 = 0;
      if ( v106[0] )
      {
        if ( !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v106) )
        {
          v61 = *(_QWORD *)(v60 + 496);
          y = v99->y;
          v63 = (struct _RECTL *)&v110;
          v109.left = v99->x;
          v109.right = v94->cx + v109.left;
          v64 = y + v94->cy;
          v109.top = y;
          if ( !v93 )
            v63 = 0LL;
          v109.bottom = v64;
          v65 = bSpDwmUpdateSpriteShape(
                  v89,
                  (struct DWMSPRITE *)v26,
                  FirstLSurf,
                  (struct _SURFOBJ *)(v61 + 24),
                  &v109,
                  *(struct PALETTE **)(v61 + 128),
                  &v85,
                  v63,
                  &v86);
          v60 = v106[0];
          FirstLSurf = v86;
          v77 = v65;
        }
        if ( v60 )
          XDCOBJ::vUnlockFast((XDCOBJ *)v106);
        goto LABEL_46;
      }
      v42 = 0;
LABEL_53:
      if ( *(_QWORD *)(v26 + 40) )
      {
        v46 = (_BYTE *)v87;
      }
      else
      {
        vSpDwmGetMiniWinInfoForNonWindowSprite(v111, v26 + 56);
        v42 = v77;
        v46 = v111;
        v87 = (__int64)v111;
      }
      if ( v42 && !v78 && (v46 || (*((_DWORD *)FirstLSurf + 63) & 8) != 0) )
      {
        if ( (*((_DWORD *)FirstLSurf + 63) & 8) != 0 )
          SFMLOGICALSURFACE::StartSfmStateTracking(FirstLSurf, v89, gpSfmState, (int)v32);
        SFMLOGICALSURFACE::GetRedirectionInfo(FirstLSurf, (enum _HLSURF_REDIRECTIONSTYLE *)&v97, &v96, &v95, 0LL, 0LL);
        v82 = *(SFMLOGICALSURFACE **)(v26 + 104);
        v58 = *(_DWORD *)(v26 + 116) < 1;
        *(_QWORD *)(v26 + 104) = 0LL;
        v80 = !v58;
        v106[2] = *(_QWORD *)v86;
        v102 = *(_QWORD **)v26;
        v59 = (void *)UserReferenceDwmApiPort();
        DwmAsyncUpdateSprite(v59, v26 + 72, v87, v97, v96, v95, v80, (__int64)v82);
      }
      if ( v35 )
      {
        ExReleasePushLockExclusiveEx(v35, 0LL);
        KeLeaveCriticalRegion();
      }
      v47 = v104;
      if ( v104 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v104 + 3);
        v48 = *((_DWORD *)v47 + 61);
        if ( (v48 & 0x80u) != 0 && (v48 & 8) != 0 && (v48 & 0x10) != 0 )
        {
          *((_DWORD *)v47 + 61) = v48 & 0xFFFFFFEF;
          SFMLOGICALSURFACE::StopSfmStateTracking(v47, 0LL, gpSfmState);
        }
        v49 = *(HLSURF *)v47;
        if ( *(_QWORD *)v47 )
        {
          LOBYTE(v76) = 18;
          v47 = (SFMLOGICALSURFACE *)HmgRemoveObject(v49, 0LL, 0LL, 1LL, v76, 0LL);
        }
        if ( v47 )
        {
          SFMLOGICALSURFACE::DeInitialize((HDEV *)v47, v49, 0);
          FreeObject(v47, 18LL);
          EtwLogicalSurfDestroyEvent(v49, 0LL);
        }
      }
      v50 = v86;
      v51 = *((_QWORD *)v86 + 23);
      if ( v51 )
        v87 = *(_QWORD *)(v51 + 8);
      else
        v87 = 0LL;
      v102 = *(_QWORD **)v26;
      if ( v51 && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v51) + 116) & 1) != 0 )
        v18 = 1;
      v52 = v85 & 0xFFFFFFFE;
      if ( !v18 )
        v52 = v85;
      v53 = v52;
      if ( (v52 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)v50 + 63)) )
      {
        GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v50, 1u, v87);
        v53 = v52 & 0xFFFFFFFE;
      }
      if ( v53 )
      {
        v74 = (void *)UserReferenceDwmApiPort();
        DwmAsyncDirtySprite(v74, (__int64)v102, v75, v53, v87);
      }
      if ( v50 != (struct SFMLOGICALSURFACE *)-256LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)v50 + 256, 0LL);
      }
      *((_DWORD *)v50 + 63) &= ~8u;
      if ( v50 != (struct SFMLOGICALSURFACE *)-256LL )
      {
        ExReleasePushLockExclusiveEx((char *)v50 + 256, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v26 != -88 )
      {
        ExReleasePushLockExclusiveEx(v26 + 88, 0LL);
        KeLeaveCriticalRegion();
      }
      v19 = v90;
LABEL_84:
      if ( v26 )
        DEC_SHARE_REF_CNT(v26);
      v20 = v77;
      v23 = v112;
      goto LABEL_87;
    }
    if ( v38 )
    {
      if ( (v38->AlphaFormat & 1) == 0 )
        goto LABEL_33;
      if ( (*((_DWORD *)v33 + 63) & 1) == 0 )
      {
        v40 = v37 & 2;
        goto LABEL_33;
      }
    }
    v42 = 0;
    v77 = 0;
    goto LABEL_53;
  }
LABEL_87:
  if ( v91 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( v24 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  if ( !v92 )
    return v20;
  v17 = v93;
  v15 = v98;
  v16 = v105;
LABEL_136:
  if ( v19 )
    v23 |= 0x200000u;
  return GdiUpdateSprite(
           v89,
           v16,
           v15,
           v107,
           (struct _POINTL *)v101,
           v94,
           v100,
           (struct _POINTL *)v99,
           a9,
           v88,
           v23,
           v17);
}
