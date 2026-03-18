/*
 * XREFs of GreHintSpriteShape @ 0x1C00296D4
 * Callers:
 *     HintSpriteShape @ 0x1C0029310 (HintSpriteShape.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0064660 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0029BA0 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C002A528 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C002A608 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C002A650 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C002B1B4 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C002B1E4 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C003E320 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0043E6C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C0045EF4 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0048138 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0049270 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C01081E0 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0108384 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0108454 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026B2A8 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 GreHintSpriteShape(HDEV a1, struct PDEVOBJ *a2, HBITMAP a3, __int64 a4, int a5, ...)
{
  int v5; // r13d
  struct _SURFOBJ *v6; // r14
  unsigned int v7; // r15d
  HBITMAP v9; // r12
  HDEV v11; // rdi
  DWMSPRITE *v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // r9d
  struct SFMLOGICALSURFACE *v16; // rdi
  HDEV v17; // rsi
  int v18; // ecx
  int v19; // edx
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  _DWORD *v24; // rax
  __int64 v25; // rsi
  BOOL v26; // edi
  void *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rcx
  W32PIDLOCK *v30; // r12
  HLSURF HLSURFClone; // rax
  HDEV v32; // rdx
  HDEV v33; // rdx
  int v34; // eax
  int v35; // xmm1_4
  unsigned int v36; // [rsp+6Ch] [rbp-3Dh] BYREF
  int v37; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v38[4]; // [rsp+74h] [rbp-35h] BYREF
  struct SFMLOGICALSURFACE *v39; // [rsp+78h] [rbp-31h]
  DWMSPRITE *v40; // [rsp+80h] [rbp-29h] BYREF
  struct SFMLOGICALSURFACE *v41; // [rsp+88h] [rbp-21h] BYREF
  int v42; // [rsp+90h] [rbp-19h]
  _BYTE v43[80]; // [rsp+98h] [rbp-11h] BYREF
  __int64 v48; // [rsp+120h] [rbp+77h] BYREF
  va_list va; // [rsp+120h] [rbp+77h]
  __int64 v50; // [rsp+128h] [rbp+7Fh]
  va_list va1; // [rsp+130h] [rbp+87h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v48 = va_arg(va1, _QWORD);
  v50 = va_arg(va1, _QWORD);
  v5 = v50;
  v6 = 0LL;
  v41 = 0LL;
  v7 = 0;
  v42 = 0;
  v9 = a3;
  v11 = a1;
  if ( (_DWORD)v50 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  if ( (_DWORD)v48 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v38, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v40, (HWND)a2);
    v12 = v40;
    if ( !v40 )
    {
LABEL_19:
      v5 = v50;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v38);
      goto LABEL_20;
    }
    v13 = *((_QWORD *)v40 + 21);
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v43, (struct SFMLOGICALSURFACE *)v13);
    v7 = 1;
    if ( *(_QWORD *)(v13 + 184) )
    {
      v28 = ((__int64 (*)(void))SURFOBJ_TO_SURFACE_NOT_NULL)();
      if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v28) )
      {
        v30 = (W32PIDLOCK *)(v29 + 272);
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v29 + 272));
        if ( *(_DWORD *)(v28 + 324) )
        {
          *(_QWORD *)(v28 + 344) = a3;
          *(_QWORD *)(v28 + 328) = a1;
          *(_QWORD *)(v28 + 336) = a2;
          *(_OWORD *)(v28 + 352) = *(_OWORD *)a4;
          *(_OWORD *)(v28 + 368) = *(_OWORD *)(a4 + 16);
          *(_OWORD *)(v28 + 384) = *(_OWORD *)(a4 + 32);
          *(_OWORD *)(v28 + 400) = *(_OWORD *)(a4 + 48);
          *(_OWORD *)(v28 + 416) = *(_OWORD *)(a4 + 64);
          *(_OWORD *)(v28 + 432) = *(_OWORD *)(a4 + 80);
          *(_OWORD *)(v28 + 448) = *(_OWORD *)(a4 + 96);
          *(_OWORD *)(v28 + 464) = *(_OWORD *)(a4 + 112);
          *(_QWORD *)(v28 + 480) = *(_QWORD *)(a4 + 128);
          *(_DWORD *)(v28 + 488) = a5;
          *(_DWORD *)(v28 + 492) = v48;
          v34 = *(_DWORD *)(v28 + 112);
          if ( (v34 & 0x2000000) == 0 )
          {
            *(_DWORD *)(v28 + 112) = v34 | 0x2000000;
            _InterlockedIncrement(&glDelayedHintShape);
          }
          W32PIDLOCK::vUnlockSingleThread(v30);
          SFMLOGICALSURFACEREF_vDestructorWrap(v43);
          goto LABEL_18;
        }
        W32PIDLOCK::vUnlockSingleThread(v30);
        v9 = a3;
      }
      v11 = a1;
    }
    if ( !*(_QWORD *)(v13 + 184) && (*(_DWORD *)(v13 + 244) & 1) == 0 )
    {
      v16 = (struct SFMLOGICALSURFACE *)v13;
      v39 = (struct SFMLOGICALSURFACE *)v13;
      goto LABEL_10;
    }
    HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(v11, (struct SFMLOGICALSURFACE *)v13, 0, a5 & 2, 1);
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v41, HLSURFClone);
    v16 = v41;
    v39 = v41;
    if ( v41 )
    {
      DWMSPRITE::SetLogicalSurface(v12, v32, 0LL);
      DWMSPRITE::SetLogicalSurface(v12, v33, v16);
      goto LABEL_10;
    }
    if ( !v9 )
    {
      v39 = (struct SFMLOGICALSURFACE *)v13;
      v16 = (struct SFMLOGICALSURFACE *)v13;
      SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v13, a1, 0LL);
LABEL_10:
      if ( v9 )
      {
        LOBYTE(v14) = 5;
        v17 = a1;
        v6 = (struct _SURFOBJ *)(HmgReferenceCheckLock(v9, v14, 0LL) + 24);
        SFMLOGICALSURFACE::SetShape(v16, a1, v6);
        *((_DWORD *)v16 + 63) |= 8u;
        v24 = (_DWORD *)SURFOBJ_TO_SURFACE_NOT_NULL(v6);
        if ( (v24[29] & 0x800) != 0 )
        {
          v35 = v24[166];
          *((_DWORD *)v12 + 39) = v24[165];
          *((_DWORD *)v12 + 40) = v35;
          *((_DWORD *)v12 + 41) |= 0x20u;
        }
        else
        {
          *((_DWORD *)v12 + 39) = 0;
          *((_DWORD *)v12 + 40) = 0;
          *((_DWORD *)v12 + 41) &= ~0x20u;
        }
      }
      else
      {
        *((_DWORD *)v16 + 63) &= 0xFFFFFFF6;
        v17 = a1;
      }
      v18 = *(_DWORD *)(a4 + 8) - *(_DWORD *)a4;
      v19 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
      if ( v6 )
      {
        *((_DWORD *)v16 + 63) |= 1u;
        v20 = v19 + *((_DWORD *)v12 + 15);
        v21 = v18 + *((_DWORD *)v12 + 14);
      }
      else
      {
        v20 = *((_DWORD *)v12 + 15);
        v21 = *((_DWORD *)v12 + 14);
      }
      *((_DWORD *)v12 + 16) = v21;
      *((_DWORD *)v12 + 17) = v20;
      v22 = *((_DWORD *)v16 + 63);
      if ( (v22 & 1) != 0 && (*((_DWORD *)v12 + 41) & 0x10) == 0 && (v22 & 8) != 0 )
      {
        SFMLOGICALSURFACE::StartSfmStateTracking(v16, v17, gpSfmState, v15);
        SFMLOGICALSURFACE::GetRedirectionInfo(
          v16,
          (enum _HLSURF_REDIRECTIONSTYLE *)&v37,
          &v36,
          (unsigned int *)va,
          0LL,
          0LL);
        v25 = *((_QWORD *)v12 + 13);
        *((_QWORD *)v12 + 13) = 0LL;
        v26 = *((_DWORD *)v12 + 29) >= 1;
        v27 = (void *)UserReferenceDwmApiPort();
        v7 = (int)DwmAsyncUpdateSprite(v27, (__int64)v12 + 72, a4, v37, v36, v48, v26, v25) >= 0;
        *((_DWORD *)v39 + 63) &= ~8u;
      }
      if ( *((int *)v12 + 29) >= 1 )
        CheckAndProcessWindowResizeComplete(v12, 0, 0LL);
      SFMLOGICALSURFACEREF_vDestructorWrap(v43);
      if ( !v12 )
        goto LABEL_19;
      goto LABEL_18;
    }
    v7 = 0;
    SFMLOGICALSURFACEREF_vDestructorWrap(v43);
LABEL_18:
    _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
    goto LABEL_19;
  }
  v7 = GdiHintSpriteShape(v11, (HWND)a2, v9, 0, 0);
LABEL_20:
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  SFMLOGICALSURFACEREF_vDestructorWrap(&v41);
  return v7;
}
