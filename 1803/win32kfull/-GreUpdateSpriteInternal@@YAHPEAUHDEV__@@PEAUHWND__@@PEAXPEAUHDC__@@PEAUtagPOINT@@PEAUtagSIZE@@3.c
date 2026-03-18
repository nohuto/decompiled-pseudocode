/*
 * XREFs of ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0089860
 * Callers:
 *     GreUpdateSprite @ 0x1C007B280 (GreUpdateSprite.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C008A810 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GreUpdateSpriteCallout@@YAXPEAX@Z @ 0x1C023AB20 (-GreUpdateSpriteCallout@@YAXPEAX@Z.c)
 * Callees:
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C000949C (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C007780C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C007C97C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C007D1FC (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C008A2E0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C00C5554 (DwmAsyncDirtySprite.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C00C7924 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00C7A78 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00C7AAC (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00C7CE0 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C00C7E18 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E68C4 (DwmAsyncUpdateSprite.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C00FEAB8 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C0133CE0 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0137060 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0138130 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C023B688 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C024AF80 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 */

int __fastcall GreUpdateSpriteInternal(
        HDEV a1,
        HWND a2,
        void *a3,
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
  HDEV v15; // rbx
  int v16; // r13d
  unsigned int v17; // r14d
  unsigned int v18; // esi
  __int64 v19; // rdx
  unsigned int v20; // edi
  int v21; // r12d
  __int64 v22; // rdx
  __int64 v23; // rdi
  void *v24; // rsi
  char *v25; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  struct tagPOINT *v29; // r9
  struct SFMLOGICALSURFACE *v30; // rcx
  struct SFMLOGICALSURFACE *FirstLSurf; // rbx
  _QWORD *v32; // rsi
  struct tagRECT v33; // xmm0
  int v34; // r8d
  __int64 v35; // rdx
  unsigned int v36; // eax
  int v37; // eax
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rcx
  _BYTE *v41; // rax
  SFMLOGICALSURFACE *v42; // rbx
  int v43; // eax
  __int64 v44; // rsi
  struct SFMLOGICALSURFACE *v45; // rsi
  __int64 v46; // rcx
  unsigned int v47; // ebx
  unsigned int v48; // r13d
  __int64 ThreadWin32Thread; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  struct SFMLOGICALSURFACE *v53; // rax
  __int64 v54; // r8
  __int64 v55; // r9
  void *v56; // rax
  struct _BLENDFUNCTION *v57; // rax
  struct _BLENDFUNCTION v58; // ecx
  __int64 v59; // r8
  __int64 v60; // r8
  LONG y; // edx
  struct _RECTL *v62; // rax
  LONG v63; // ecx
  unsigned int v64; // eax
  __int64 v65; // rax
  LONG x; // eax
  unsigned int v67; // eax
  int v68; // ecx
  void *v69; // rax
  bool v70; // dl
  SURFACE *v71; // rax
  int updated; // eax
  unsigned int v73; // eax
  int v74; // [rsp+20h] [rbp-E0h]
  unsigned int v75; // [rsp+60h] [rbp-A0h]
  char v76; // [rsp+64h] [rbp-9Ch]
  SFMLOGICALSURFACE *v77; // [rsp+68h] [rbp-98h]
  SFMLOGICALSURFACE *v78; // [rsp+68h] [rbp-98h]
  SFMLOGICALSURFACE *v79; // [rsp+68h] [rbp-98h]
  struct SFMLOGICALSURFACE *v80; // [rsp+70h] [rbp-90h] BYREF
  int v81; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v82; // [rsp+7Ch] [rbp-84h] BYREF
  struct _BLENDFUNCTION *v83; // [rsp+80h] [rbp-80h]
  __int64 v84; // [rsp+88h] [rbp-78h]
  __int64 v85; // [rsp+90h] [rbp-70h]
  unsigned int v86; // [rsp+98h] [rbp-68h]
  int v87; // [rsp+9Ch] [rbp-64h]
  int v88; // [rsp+A0h] [rbp-60h]
  HDEV v89; // [rsp+A8h] [rbp-58h]
  struct tagRECT *v90; // [rsp+B0h] [rbp-50h]
  struct tagSIZE *v91; // [rsp+B8h] [rbp-48h]
  unsigned int v92; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v93; // [rsp+C4h] [rbp-3Ch] BYREF
  int v94; // [rsp+C8h] [rbp-38h] BYREF
  struct tagPOINT *v95; // [rsp+D0h] [rbp-30h]
  HDC v96; // [rsp+D8h] [rbp-28h]
  struct tagPOINT *v97; // [rsp+E0h] [rbp-20h]
  void *v98; // [rsp+E8h] [rbp-18h]
  void *v99; // [rsp+F0h] [rbp-10h]
  HDEV v100; // [rsp+F8h] [rbp-8h] BYREF
  SFMLOGICALSURFACE *v101; // [rsp+100h] [rbp+0h]
  HWND v102; // [rsp+108h] [rbp+8h]
  HDC v103; // [rsp+110h] [rbp+10h]
  _QWORD v104[2]; // [rsp+118h] [rbp+18h] BYREF
  HWND Buffer[2]; // [rsp+128h] [rbp+28h] BYREF
  struct _RECTL v106; // [rsp+138h] [rbp+38h] BYREF
  struct tagRECT v107; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v108[144]; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v109; // [rsp+2A0h] [rbp+1A0h]

  v15 = a1;
  v16 = 0;
  v97 = a5;
  v17 = a11 & 0x200000;
  v91 = a6;
  v18 = 0;
  v96 = a7;
  v95 = a8;
  v102 = a2;
  v83 = a10;
  v98 = a3;
  v89 = a1;
  v84 = (__int64)a13;
  v90 = a12;
  v103 = a4;
  v75 = 0;
  v88 = 1;
  v86 = a11 & 0x200000;
  memset(v108, 0, 0x88uLL);
  v20 = a11 & 0xFFDFFFFF;
  v82 = 0;
  v76 = 0;
  v109 = a11 & 0xFFDFFFFF;
  if ( !a14 || !g_pDwmState )
    goto LABEL_150;
  v87 = 0;
  if ( !v17 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    v87 = 1;
  }
  v100 = v15;
  v21 = 0;
  if ( !v17 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19);
    if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v21 = 1;
    }
  }
  if ( v17 )
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
    v23 = 0LL;
    v24 = v98;
    if ( v102 )
    {
      Buffer[0] = v102;
      v24 = 0LL;
      v25 = (char *)g_pDwmState + 72;
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v25, 0LL);
      }
      v26 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
      if ( v26 )
        v24 = (void *)v26[1];
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        ExReleasePushLockExclusiveEx(v25, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( !v24 )
      goto LABEL_84;
    LOBYTE(v22) = 15;
    v27 = HmgShareLockCheck(v24, v22);
    v23 = v27;
    if ( !v27 || (*(_DWORD *)(v27 + 164) & 0x10) != 0 )
      goto LABEL_84;
    v88 = 0;
    v75 = 1;
    if ( v27 != -88 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v23 + 88, 0LL);
    }
    v30 = *(struct SFMLOGICALSURFACE **)(v23 + 168);
    FirstLSurf = v30;
    v98 = *(void **)v23;
    v77 = v30;
    v80 = v30;
    v101 = 0LL;
    if ( v30 && *(_QWORD *)v30 )
    {
      LOBYTE(v28) = 18;
      v101 = (SFMLOGICALSURFACE *)HmgLock(*(_QWORD *)v30, v28);
      v30 = FirstLSurf;
    }
    v32 = (_QWORD *)((char *)v30 + 256);
    if ( v30 != (struct SFMLOGICALSURFACE *)-256LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v32, 0LL);
      v30 = FirstLSurf;
    }
    if ( v90 )
    {
      v33 = *v90;
      v90 = &v107;
      v107 = v33;
    }
    v34 = v109;
    if ( v109 == 0x2000000 )
    {
      v81 = 33488896;
      v83 = (struct _BLENDFUNCTION *)&v81;
      v109 = 570425346;
      v70 = v91 || v97;
      vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v23, v70);
      v34 = 570425346;
      v30 = FirstLSurf;
    }
    if ( (v34 & 0x20000000) != 0 )
    {
      v34 &= ~0x20000000u;
      v109 = v34;
    }
    else if ( (v34 & 0x40000000) != 0 || !v34 )
    {
      v34 = *(_DWORD *)(v23 + 72);
      v35 = v23 + 76;
      v36 = *(_DWORD *)(v23 + 80);
      v83 = (struct _BLENDFUNCTION *)(v23 + 76);
      v109 = v34;
      a9 = v36;
      goto LABEL_32;
    }
    v35 = (__int64)v83;
LABEL_32:
    v37 = v34 & 2;
    LODWORD(v85) = v37;
    if ( (v34 & 2) == 0 )
    {
LABEL_33:
      v35 = *((_QWORD *)v30 + 23);
      if ( v35 )
      {
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v30 + 23)) + 116) & 1) == 0 )
          SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)FirstLSurf + 23));
        v34 = v109;
        v30 = FirstLSurf;
        v37 = v85;
      }
      *(_DWORD *)(v23 + 72) = v34;
      if ( v37 )
      {
        if ( *(_BYTE *)(v23 + 79) != v83->AlphaFormat )
        {
          v67 = bSpDwmCreateLogicalSurface(v89, (struct DWMSPRITE *)v23, v30, 0LL, &v80);
          v34 = v109;
          FirstLSurf = v80;
          v75 = v67;
        }
        v57 = v83;
        *(struct _BLENDFUNCTION *)(v23 + 76) = *v83;
        v58 = *v57;
        *((_DWORD *)FirstLSurf + 61) |= 0x40u;
        *((struct _BLENDFUNCTION *)FirstLSurf + 60) = v58;
      }
      if ( (v34 & 1) != 0 )
      {
        *(_DWORD *)(v23 + 80) = a9;
        if ( *((_QWORD *)v77 + 23) )
        {
          if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v77)
            && !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v100) )
          {
            v79 = (SFMLOGICALSURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v77 + 23));
            if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v100) )
            {
              v68 = *((_DWORD *)v79 + 29);
              if ( (v68 & 0x20) == 0 )
              {
                *((_DWORD *)v79 + 29) = v68 | 0x20;
                pConvertDfbSurfaceToDibPostNKAPC(*((HSURF *)v79 + 4));
                v76 = 1;
              }
            }
            else
            {
              v71 = (SURFACE *)pProcessDfbSurfaces(v79, 1LL);
              if ( v71 )
              {
                FirstLSurf = SURFACE::GetFirstLSurf(v71);
                v80 = FirstLSurf;
              }
            }
          }
          v34 = v109;
        }
      }
      if ( v75 )
      {
        v29 = v97;
        if ( v97 )
        {
          x = v97->x;
          v35 = (unsigned int)(v97->y - *(_DWORD *)(v23 + 60));
          *(_DWORD *)(v23 + 64) += v97->x - *(_DWORD *)(v23 + 56);
          *(_DWORD *)(v23 + 68) += v35;
          *(_DWORD *)(v23 + 60) += v35;
          *(_DWORD *)(v23 + 56) = x;
        }
        if ( (*((_DWORD *)FirstLSurf + 63) & 1) != 0 )
        {
          if ( v90 && *((_QWORD *)FirstLSurf + 23) )
            vSpUpdateDirtyRgn((struct DWMSPRITE *)v23, FirstLSurf, v96, v90, &v82, a15);
        }
        else if ( (v34 & 0x2000000) != 0 )
        {
          if ( v29 && v91 )
          {
            updated = bSpDwmUpdateDragRectShape(v89, (struct DWMSPRITE *)v23, FirstLSurf, v29, v91, &v82, &v80);
            FirstLSurf = v80;
            v75 = updated;
          }
        }
        else if ( v95 && v91 )
        {
          MDCOBJ::MDCOBJ((MDCOBJ *)v104, v96);
          v75 = 0;
          if ( !v104[0] )
          {
            v38 = 0LL;
            goto LABEL_53;
          }
          if ( !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v104) )
          {
            v60 = *(_QWORD *)(v59 + 504);
            y = v95->y;
            v62 = (struct _RECTL *)&v107;
            v106.left = v95->x;
            v106.right = v91->cx + v106.left;
            v63 = y + v91->cy;
            v106.top = y;
            if ( !v90 )
              v62 = 0LL;
            v106.bottom = v63;
            v64 = bSpDwmUpdateSpriteShape(
                    v89,
                    (struct DWMSPRITE *)v23,
                    FirstLSurf,
                    (struct _SURFOBJ *)(v60 + 24),
                    &v106,
                    *(struct PALETTE **)(v60 + 128),
                    &v82,
                    v62,
                    &v80);
            FirstLSurf = v80;
            v75 = v64;
          }
          XDCOBJ::vUnlockFast((XDCOBJ *)v104);
        }
        v38 = v75;
        if ( !v75 )
          goto LABEL_53;
        v39 = *((_DWORD *)FirstLSurf + 63);
        if ( (v39 & 1) != 0 && (v39 & 0x40) == 0 )
          *((_DWORD *)FirstLSurf + 63) = v39 | 0x40;
        v40 = *((_QWORD *)FirstLSurf + 23);
        if ( !v40 )
          goto LABEL_53;
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v40) + 116) & 1) == 0 )
        {
          v65 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)FirstLSurf + 23));
          v38 = v75;
          if ( !*(_QWORD *)(v65 + 248) )
            *((_DWORD *)FirstLSurf + 63) |= 8u;
          goto LABEL_53;
        }
      }
      v38 = v75;
LABEL_53:
      if ( *(_QWORD *)(v23 + 40) )
      {
        v41 = (_BYTE *)v84;
      }
      else
      {
        vSpDwmGetMiniWinInfoForNonWindowSprite(v108, v23 + 56);
        v41 = v108;
        v84 = (__int64)v108;
      }
      if ( (_DWORD)v38 && !v76 && (v41 || (*((_DWORD *)FirstLSurf + 63) & 8) != 0) )
      {
        if ( (*((_DWORD *)FirstLSurf + 63) & 8) != 0 )
          SFMLOGICALSURFACE::StartSfmStateTracking(FirstLSurf, v89, gpSfmState, (int)v29);
        SFMLOGICALSURFACE::GetRedirectionInfo(FirstLSurf, (enum _HLSURF_REDIRECTIONSTYLE *)&v94, &v93, &v92, 0LL, 0LL);
        v51 = *((_DWORD *)FirstLSurf + 63) & 1;
        v52 = *((_DWORD *)FirstLSurf + 63) & 0xC;
        v78 = *(SFMLOGICALSURFACE **)(v23 + 104);
        v53 = v80;
        *(_QWORD *)(v23 + 104) = 0LL;
        v85 = *(_QWORD *)v53;
        v99 = *(void **)v23;
        v56 = (void *)UserReferenceDwmApiPort(v52, v51, v54, v55);
        DwmAsyncUpdateSprite(v56, v23 + 72, v84, v94, v93, v92, *(_DWORD *)(v23 + 116), (__int64)v78);
      }
      if ( v32 )
      {
        ExReleasePushLockExclusiveEx(v32, 0LL);
        KeLeaveCriticalRegion();
      }
      v42 = v101;
      if ( v101 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v101 + 3);
        v43 = *((_DWORD *)v42 + 61);
        if ( (v43 & 0x80u) != 0 && (v43 & 8) != 0 && (v43 & 0x10) != 0 )
        {
          *((_DWORD *)v42 + 61) = v43 & 0xFFFFFFEF;
          SFMLOGICALSURFACE::StopSfmStateTracking(v42, 0LL, gpSfmState);
        }
        v44 = *(_QWORD *)v42;
        if ( *(_QWORD *)v42 )
        {
          LOBYTE(v74) = 18;
          v42 = (SFMLOGICALSURFACE *)HmgRemoveObject(v44, 0LL, 0LL, 1LL, v74, 0LL);
        }
        if ( v42 )
        {
          SFMLOGICALSURFACE::DeInitialize(v42, v44, 0LL);
          FreeObject(v42, 18LL);
          EtwLogicalSurfDestroyEvent(v44, 0LL);
        }
      }
      v45 = v80;
      v46 = *((_QWORD *)v80 + 23);
      if ( v46 )
      {
        v35 = *(_QWORD *)(v46 + 8);
        v84 = v35;
      }
      else
      {
        v84 = 0LL;
      }
      v99 = *(void **)v23;
      if ( v46 )
      {
        v46 = *(unsigned int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v46) + 116);
        if ( (v46 & 1) != 0 )
          v16 = 1;
      }
      v47 = v82 & 0xFFFFFFFE;
      if ( !v16 )
        v47 = v82;
      v48 = v47;
      if ( (v47 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)v45 + 63)) )
      {
        GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v45, 1u, v84);
        v48 = v47 & 0xFFFFFFFE;
      }
      if ( v48 )
      {
        v69 = (void *)UserReferenceDwmApiPort(v46, v35, v38, v29);
        DwmAsyncDirtySprite(v69, v84);
      }
      if ( v45 != (struct SFMLOGICALSURFACE *)-256LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)v45 + 256, 0LL);
      }
      *((_DWORD *)v45 + 63) &= ~8u;
      if ( v45 != (struct SFMLOGICALSURFACE *)-256LL )
      {
        ExReleasePushLockExclusiveEx((char *)v45 + 256, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v23 != -88 )
      {
        ExReleasePushLockExclusiveEx(v23 + 88, 0LL);
        KeLeaveCriticalRegion();
      }
      v17 = v86;
LABEL_84:
      if ( v23 )
        DEC_SHARE_REF_CNT(v23);
      v18 = v75;
      v20 = v109;
      goto LABEL_87;
    }
    if ( v35 )
    {
      if ( (*(_BYTE *)(v35 + 3) & 1) == 0 )
        goto LABEL_33;
      if ( (*((_DWORD *)v30 + 63) & 1) == 0 )
      {
        v37 = v85;
        goto LABEL_33;
      }
    }
    v38 = 0LL;
    v75 = 0;
    FirstLSurf = v30;
    v80 = v30;
    goto LABEL_53;
  }
LABEL_87:
  if ( v87 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( v21 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  if ( !v88 )
    return v18;
  v15 = v89;
LABEL_150:
  v73 = v20 | 0x200000;
  if ( !v17 )
    v73 = v20;
  return GdiUpdateSprite(v15, v102, v98, v103, v97, v91, v96, v95, a9, v83, v73, v90);
}
