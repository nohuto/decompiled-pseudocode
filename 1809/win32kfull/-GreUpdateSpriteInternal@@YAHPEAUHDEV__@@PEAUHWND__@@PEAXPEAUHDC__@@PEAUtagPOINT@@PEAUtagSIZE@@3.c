/*
 * XREFs of ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00596B0
 * Callers:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00591F0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreUpdateSprite @ 0x1C0076350 (GreUpdateSprite.c)
 *     ?GreUpdateSpriteCallout@@YAXPEAX@Z @ 0x1C0251BD0 (-GreUpdateSpriteCallout@@YAXPEAX@Z.c)
 * Callees:
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C000AC94 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C000B964 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C000B9F0 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncUpdateSprite @ 0x1C000BABC (DwmAsyncUpdateSprite.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C000E2D4 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C005A330 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00743A0 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0074C48 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C007CF18 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C0096670 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00A1DA0 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C00A1DD8 (DwmAsyncDirtySprite.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C00A21FC (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C011A688 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C011E9E8 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C012D1A4 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C0155690 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015F07C (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C02527B0 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
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
  HDEV v15; // r15
  struct _BLENDFUNCTION *v16; // r14
  unsigned int v17; // ebx
  int v18; // r13d
  unsigned int v19; // edi
  int v20; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  void *v23; // rdi
  char *v24; // rbx
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  struct SFMLOGICALSURFACE *v28; // rbx
  struct SFMLOGICALSURFACE *v29; // r13
  __int64 v30; // rdx
  _QWORD *v31; // rsi
  struct tagRECT v32; // xmm0
  int v33; // r8d
  unsigned __int8 v34; // dl
  int *v35; // rcx
  int updated; // r13d
  struct SFMLOGICALSURFACE *FirstLSurf; // r10
  unsigned int v38; // eax
  __int64 v39; // rcx
  bool v40; // zf
  int v41; // eax
  int *v42; // rax
  int v43; // ecx
  __int64 v44; // rbx
  int v45; // ecx
  struct tagPOINT *v46; // r9
  LONG x; // eax
  int v48; // edx
  SURFACE *v49; // rax
  struct tagSIZE *v50; // rbx
  struct tagRECT *v51; // r8
  __int64 v52; // r9
  __int64 v53; // r9
  LONG y; // edx
  struct _RECTL *v55; // rax
  LONG v56; // ecx
  int v57; // eax
  __int64 v58; // rcx
  struct SFMLOGICALSURFACE *v59; // r13
  __int64 v60; // rax
  _BYTE *v61; // rax
  struct SFMLOGICALSURFACE *v62; // r13
  int v63; // ebx
  bool v64; // sf
  bool v65; // of
  void *v66; // rax
  HDEV *v67; // rbx
  int v68; // eax
  HDEV v69; // rsi
  struct SFMLOGICALSURFACE *v70; // rsi
  int v71; // r13d
  __int64 v72; // rcx
  unsigned int v73; // ebx
  unsigned int v74; // r13d
  void *v75; // rax
  unsigned int v77; // eax
  int v78; // [rsp+20h] [rbp-E0h]
  struct SFMLOGICALSURFACE *v79; // [rsp+60h] [rbp-A0h] BYREF
  char v80; // [rsp+68h] [rbp-98h]
  int v81; // [rsp+6Ch] [rbp-94h]
  int v82; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v83; // [rsp+74h] [rbp-8Ch] BYREF
  int *v84; // [rsp+78h] [rbp-88h]
  __int64 v85; // [rsp+80h] [rbp-80h]
  int v86; // [rsp+88h] [rbp-78h]
  int v87; // [rsp+8Ch] [rbp-74h]
  HDEV v88; // [rsp+90h] [rbp-70h]
  struct tagRECT *v89; // [rsp+98h] [rbp-68h]
  struct tagSIZE *v90; // [rsp+A0h] [rbp-60h]
  __int64 v91; // [rsp+A8h] [rbp-58h]
  unsigned int v92; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v93; // [rsp+B4h] [rbp-4Ch] BYREF
  int v94; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v95; // [rsp+BCh] [rbp-44h]
  struct tagPOINT *v96; // [rsp+C0h] [rbp-40h]
  HDC v97; // [rsp+C8h] [rbp-38h]
  struct tagPOINT *v98; // [rsp+D0h] [rbp-30h]
  void *v99; // [rsp+D8h] [rbp-28h]
  void *v100; // [rsp+E0h] [rbp-20h]
  HDEV v101; // [rsp+E8h] [rbp-18h] BYREF
  HWND v102; // [rsp+F0h] [rbp-10h]
  __int64 v103; // [rsp+F8h] [rbp-8h]
  HDC v104; // [rsp+100h] [rbp+0h]
  _BYTE v105[32]; // [rsp+108h] [rbp+8h] BYREF
  SFMLOGICALSURFACE *v106; // [rsp+128h] [rbp+28h]
  int v107; // [rsp+130h] [rbp+30h]
  HWND Buffer[2]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v109[2]; // [rsp+148h] [rbp+48h] BYREF
  char v110[32]; // [rsp+158h] [rbp+58h] BYREF
  struct _RECTL v111; // [rsp+178h] [rbp+78h] BYREF
  struct tagRECT v112; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v113[144]; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v114; // [rsp+2E0h] [rbp+1E0h]

  v15 = a1;
  v16 = a10;
  v98 = a5;
  v17 = a11 & 0x200000;
  v18 = 0;
  v90 = a6;
  v97 = a7;
  v102 = a2;
  v96 = a8;
  v99 = a3;
  v88 = a1;
  v85 = (__int64)a13;
  v89 = a12;
  v104 = a4;
  v84 = (int *)a10;
  v87 = 1;
  v95 = a11 & 0x200000;
  memset(v113, 0, 0x88uLL);
  v19 = a11 & 0xFFDFFFFF;
  v83 = 0;
  v80 = 0;
  v114 = a11 & 0xFFDFFFFF;
  if ( !a14 || !g_pDwmState )
    goto LABEL_151;
  v86 = 0;
  if ( !v17 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    v86 = 1;
  }
  v101 = v15;
  v20 = 0;
  if ( !v17 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v20 = 1;
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
    v23 = v99;
    if ( v102 )
    {
      Buffer[0] = v102;
      v23 = 0LL;
      v24 = (char *)g_pDwmState + 72;
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v24, 0LL);
      }
      v25 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
      if ( v25 )
        v23 = (void *)v25[1];
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        ExReleasePushLockExclusiveEx(v24, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( !v23 )
      goto LABEL_143;
    LOBYTE(v22) = 15;
    v26 = HmgShareLockCheck(v23, v22);
    v27 = v26;
    if ( !v26 )
      goto LABEL_143;
    if ( (*(_DWORD *)(v26 + 164) & 0x10) != 0 )
    {
LABEL_142:
      DEC_SHARE_REF_CNT(v27);
LABEL_143:
      v19 = v114;
      goto LABEL_144;
    }
    v87 = 0;
    v81 = 1;
    if ( v26 != -88 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v27 + 88, 0LL);
    }
    v28 = *(struct SFMLOGICALSURFACE **)(v27 + 168);
    v29 = v28;
    v99 = *(void **)v27;
    v79 = v28;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v105);
    v106 = 0LL;
    v107 = 1;
    if ( v28 && *(_QWORD *)v28 )
    {
      LOBYTE(v30) = 18;
      v106 = (SFMLOGICALSURFACE *)HmgLock(*(_QWORD *)v28, v30);
    }
    v31 = (_QWORD *)((char *)v28 + 256);
    if ( v28 != (struct SFMLOGICALSURFACE *)-256LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v28 + 256, 0LL);
    }
    if ( v89 )
    {
      v32 = *v89;
      v89 = &v112;
      v112 = v32;
    }
    v33 = v114;
    if ( v114 == 0x2000000 )
    {
      v84 = &v82;
      v82 = 33488896;
      v114 = 570425346;
      v34 = v90 || v98;
      vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v27, v34);
      v33 = 570425346;
    }
    if ( (v33 & 0x20000000) != 0 )
    {
      v33 &= ~0x20000000u;
      v114 = v33;
    }
    else if ( (v33 & 0x40000000) != 0 || !v33 )
    {
      v33 = *(_DWORD *)(v27 + 72);
      v35 = (int *)(v27 + 76);
      v38 = *(_DWORD *)(v27 + 80);
      v84 = (int *)(v27 + 76);
      v114 = v33;
      a9 = v38;
      goto LABEL_42;
    }
    v35 = v84;
LABEL_42:
    LODWORD(v91) = v33 & 2;
    if ( (v33 & 2) != 0 && (!v35 || (*((_BYTE *)v35 + 3) & 1) != 0 && (*((_DWORD *)v28 + 63) & 1) != 0) )
    {
      updated = 0;
      v79 = v28;
      v81 = 0;
      FirstLSurf = v28;
LABEL_100:
      if ( *(_QWORD *)(v27 + 40) )
      {
        v61 = (_BYTE *)v85;
      }
      else
      {
        vSpDwmGetMiniWinInfoForNonWindowSprite(v113, v27 + 56);
        v61 = v113;
        v85 = (__int64)v113;
      }
      if ( updated && !v80 && (v61 || (*((_DWORD *)FirstLSurf + 63) & 8) != 0) )
      {
        if ( (*((_DWORD *)FirstLSurf + 63) & 8) != 0 )
        {
          SFMLOGICALSURFACE::StartSfmStateTracking(FirstLSurf, v88, gpSfmState);
          FirstLSurf = v79;
        }
        SFMLOGICALSURFACE::GetRedirectionInfo(FirstLSurf, (enum _HLSURF_REDIRECTIONSTYLE *)&v94, &v93, &v92, 0LL, 0LL);
        v62 = v79;
        v63 = *((_DWORD *)v79 + 63) & 0xC | *(_DWORD *)(v27 + 164) & 1 | (2
                                                                        * (*((_DWORD *)v79 + 63) & 1 | (4 * (*(_DWORD *)(v27 + 164) & 0xE))));
        v91 = *(_QWORD *)(v27 + 104);
        v65 = __OFSUB__(*(_DWORD *)(v27 + 116), 1);
        v64 = *(_DWORD *)(v27 + 116) - 1 < 0;
        *(_QWORD *)(v27 + 104) = 0LL;
        v103 = *(_QWORD *)v62;
        LODWORD(v62) = v64 == v65;
        v100 = *(void **)v27;
        v66 = (void *)UserReferenceDwmApiPort(0LL);
        DwmAsyncUpdateSprite(v66, (__int64)v100, v103, v63, v27 + 72, (__int128 *)v85, v94, v93, v92, (int)v62, v91);
      }
      if ( v31 )
      {
        ExReleasePushLockExclusiveEx(v31, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v106 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v106 + 3);
        if ( v107 == 1 )
        {
          v67 = (HDEV *)v106;
          v68 = *((_DWORD *)v106 + 61);
          if ( (v68 & 0x80u) != 0 && (v68 & 8) != 0 && (v68 & 0x10) != 0 )
          {
            *((_DWORD *)v106 + 61) = v68 & 0xFFFFFFEF;
            SFMLOGICALSURFACE::StopSfmStateTracking(v106, 0LL, gpSfmState);
            v67 = (HDEV *)v106;
          }
          v69 = *v67;
          if ( *v67 )
          {
            LOBYTE(v78) = 18;
            v67 = (HDEV *)HmgRemoveObject(v69, 0LL, 0LL, 1LL, v78, 0LL);
          }
          if ( v67 )
          {
            SFMLOGICALSURFACE::DeInitialize(v67, (HLSURF)v69, 0);
            FreeObject(v67, 18LL);
            EtwLogicalSurfDestroyEvent(v69, 0LL);
          }
        }
      }
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v105);
      v70 = v79;
      v71 = 0;
      v72 = *((_QWORD *)v79 + 23);
      if ( v72 )
        v85 = *(_QWORD *)(v72 + 8);
      else
        v85 = 0LL;
      v100 = *(void **)v27;
      if ( v72 )
      {
        v72 = *(unsigned int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v72) + 116);
        if ( (v72 & 1) != 0 )
          v71 = 1;
      }
      v73 = v83 & 0xFFFFFFFE;
      if ( !v71 )
        v73 = v83;
      v74 = v73;
      if ( (v73 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)v70 + 63)) )
      {
        GreAddLogicalSurfaceToDirtyQueue(*(HLSURF *)v70);
        v74 = v73 & 0xFFFFFFFE;
      }
      if ( v74 )
      {
        v75 = (void *)UserReferenceDwmApiPort(v72);
        DwmAsyncDirtySprite(v75, v85);
      }
      if ( v70 != (struct SFMLOGICALSURFACE *)-256LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)v70 + 256, 0LL);
      }
      *((_DWORD *)v70 + 63) &= ~8u;
      if ( v70 != (struct SFMLOGICALSURFACE *)-256LL )
      {
        ExReleasePushLockExclusiveEx((char *)v70 + 256, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v27 != -88 )
      {
        ExReleasePushLockExclusiveEx(v27 + 88, 0LL);
        KeLeaveCriticalRegion();
      }
      v16 = (struct _BLENDFUNCTION *)v84;
      v18 = v81;
      goto LABEL_142;
    }
    v39 = *((_QWORD *)v28 + 23);
    if ( v39 )
    {
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v39) + 116) & 1) == 0 )
        SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v28 + 23));
      v33 = v114;
    }
    v40 = (_DWORD)v91 == 0;
    *(_DWORD *)(v27 + 72) = v33;
    if ( !v40 )
    {
      if ( *(_BYTE *)(v27 + 79) != *((_BYTE *)v84 + 3) )
      {
        v41 = bSpDwmCreateLogicalSurface(v88, (struct DWMSPRITE *)v27, v28, 0LL, &v79);
        v33 = v114;
        v29 = v79;
        v81 = v41;
      }
      v42 = v84;
      *(_DWORD *)(v27 + 76) = *v84;
      v43 = *v42;
      *((_DWORD *)v29 + 61) |= 0x40u;
      *((_DWORD *)v29 + 60) = v43;
    }
    if ( (v33 & 1) != 0 )
    {
      *(_DWORD *)(v27 + 80) = a9;
      if ( *((_QWORD *)v28 + 23) )
      {
        if ( !(unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v28) )
          goto LABEL_65;
        if ( !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v101) )
        {
          v44 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v28 + 23));
          if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v101) )
          {
            v45 = *(_DWORD *)(v44 + 116);
            if ( (v45 & 0x20) == 0 )
            {
              *(_DWORD *)(v44 + 116) = v45 | 0x20;
              pConvertDfbSurfaceToDibPostNKAPC(*(HSURF *)(v44 + 32));
              v80 = 1;
            }
          }
          else
          {
            v49 = (SURFACE *)pProcessDfbSurfaces(v44, 1LL);
            if ( v49 )
            {
              FirstLSurf = SURFACE::GetFirstLSurf(v49);
              v79 = FirstLSurf;
              goto LABEL_66;
            }
          }
LABEL_65:
          FirstLSurf = v79;
LABEL_66:
          v33 = v114;
          goto LABEL_67;
        }
        v33 = v114;
      }
    }
    FirstLSurf = v79;
LABEL_67:
    updated = v81;
    if ( !v81 )
      goto LABEL_100;
    v46 = v98;
    if ( v98 )
    {
      x = v98->x;
      v48 = v98->y - *(_DWORD *)(v27 + 60);
      *(_DWORD *)(v27 + 64) += v98->x - *(_DWORD *)(v27 + 56);
      *(_DWORD *)(v27 + 68) += v48;
      *(_DWORD *)(v27 + 60) += v48;
      *(_DWORD *)(v27 + 56) = x;
    }
    if ( (*((_DWORD *)FirstLSurf + 63) & 1) != 0 )
    {
      if ( v89 && *((_QWORD *)FirstLSurf + 23) )
      {
        vSpUpdateDirtyRgn((struct DWMSPRITE *)v27, FirstLSurf, v97, v89, &v83, a15);
        goto LABEL_90;
      }
    }
    else if ( (v33 & 0x2000000) != 0 )
    {
      if ( v46 && v90 )
      {
        updated = bSpDwmUpdateDragRectShape(v88, (struct DWMSPRITE *)v27, FirstLSurf, v46, v90, &v83, &v79);
        v81 = updated;
LABEL_90:
        FirstLSurf = v79;
      }
    }
    else if ( v96 )
    {
      v50 = v90;
      if ( v90 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v109, v97);
        v81 = 0;
        updated = 0;
        if ( v109[0] && !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v109) )
        {
          v53 = *(_QWORD *)(v52 + 496);
          y = v96->y;
          v55 = (struct _RECTL *)&v112;
          v111.left = v96->x;
          v111.right = v50->cx + v111.left;
          v56 = y + v50->cy;
          v111.top = y;
          if ( v89 == v51 )
            v55 = (struct _RECTL *)v51;
          v111.bottom = v56;
          updated = bSpDwmUpdateSpriteShape(
                      v88,
                      (struct DWMSPRITE *)v27,
                      v79,
                      (struct _SURFOBJ *)(v53 + 24),
                      &v111,
                      *(struct PALETTE **)(v53 + 128),
                      &v83,
                      v55,
                      &v79);
          v81 = updated;
        }
        MDCOBJ::~MDCOBJ((MDCOBJ *)v109);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v110);
        goto LABEL_90;
      }
    }
    if ( updated )
    {
      v57 = *((_DWORD *)FirstLSurf + 63);
      if ( (v57 & 1) != 0 && (v57 & 0x40) == 0 )
        *((_DWORD *)FirstLSurf + 63) = v57 | 0x40;
      v58 = *((_QWORD *)FirstLSurf + 23);
      if ( v58 )
      {
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v58) + 116) & 1) != 0 )
        {
          FirstLSurf = v79;
        }
        else
        {
          v59 = v79;
          v60 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v79 + 23));
          FirstLSurf = v59;
          updated = v81;
          if ( !*(_QWORD *)(v60 + 248) )
            *((_DWORD *)FirstLSurf + 63) |= 8u;
        }
      }
    }
    goto LABEL_100;
  }
LABEL_144:
  if ( v86 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( v20 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  if ( !v87 )
    return v18;
  v17 = v95;
  v15 = v88;
LABEL_151:
  v77 = v19 | 0x200000;
  if ( !v17 )
    v77 = v19;
  return GdiUpdateSprite(v15, v102, v99, v104, v98, v90, v97, v96, a9, v16, v77, v89);
}
