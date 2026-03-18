/*
 * XREFs of GreHintSpriteShape @ 0x1C002FB44
 * Callers:
 *     HintSpriteShape @ 0x1C002F780 (HintSpriteShape.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00AEA20 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0030010 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0030998 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0030A78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0030AC0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0031624 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0031654 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00823E0 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0087E70 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C008A8C4 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C008CB08 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C008DD30 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E2090 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00E2234 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00E2304 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026AB78 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
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
  __int64 v16; // rcx
  struct SFMLOGICALSURFACE *v17; // rdi
  HDEV v18; // rsi
  int v19; // ecx
  int v20; // edx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  _DWORD *v25; // rax
  __int64 v26; // rsi
  BOOL v27; // edi
  void *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rcx
  W32PIDLOCK *v31; // r12
  HLSURF HLSURFClone; // rax
  HDEV v33; // rdx
  HDEV v34; // rdx
  int v35; // eax
  int v36; // xmm1_4
  unsigned int v37; // [rsp+6Ch] [rbp-3Dh] BYREF
  int v38; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v39[4]; // [rsp+74h] [rbp-35h] BYREF
  struct SFMLOGICALSURFACE *v40; // [rsp+78h] [rbp-31h]
  DWMSPRITE *v41; // [rsp+80h] [rbp-29h] BYREF
  struct SFMLOGICALSURFACE *v42; // [rsp+88h] [rbp-21h] BYREF
  int v43; // [rsp+90h] [rbp-19h]
  _BYTE v44[80]; // [rsp+98h] [rbp-11h] BYREF
  __int64 v49; // [rsp+120h] [rbp+77h] BYREF
  va_list va; // [rsp+120h] [rbp+77h]
  __int64 v51; // [rsp+128h] [rbp+7Fh]
  va_list va1; // [rsp+130h] [rbp+87h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v49 = va_arg(va1, _QWORD);
  v51 = va_arg(va1, _QWORD);
  v5 = v51;
  v6 = 0LL;
  v42 = 0LL;
  v7 = 0;
  v43 = 0;
  v9 = a3;
  v11 = a1;
  if ( (_DWORD)v51 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  if ( (_DWORD)v49 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v39, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v41, (HWND)a2);
    v12 = v41;
    if ( !v41 )
    {
LABEL_19:
      v5 = v51;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v39);
      goto LABEL_20;
    }
    v13 = *((_QWORD *)v41 + 21);
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v44, (struct SFMLOGICALSURFACE *)v13);
    v16 = *(_QWORD *)(v13 + 184);
    v7 = 1;
    if ( v16 )
    {
      v29 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
      if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v29) )
      {
        v31 = (W32PIDLOCK *)(v30 + 272);
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v30 + 272));
        if ( *(_DWORD *)(v29 + 324) )
        {
          *(_QWORD *)(v29 + 344) = a3;
          *(_QWORD *)(v29 + 328) = a1;
          *(_QWORD *)(v29 + 336) = a2;
          *(_OWORD *)(v29 + 352) = *(_OWORD *)a4;
          *(_OWORD *)(v29 + 368) = *(_OWORD *)(a4 + 16);
          *(_OWORD *)(v29 + 384) = *(_OWORD *)(a4 + 32);
          *(_OWORD *)(v29 + 400) = *(_OWORD *)(a4 + 48);
          *(_OWORD *)(v29 + 416) = *(_OWORD *)(a4 + 64);
          *(_OWORD *)(v29 + 432) = *(_OWORD *)(a4 + 80);
          *(_OWORD *)(v29 + 448) = *(_OWORD *)(a4 + 96);
          *(_OWORD *)(v29 + 464) = *(_OWORD *)(a4 + 112);
          *(_QWORD *)(v29 + 480) = *(_QWORD *)(a4 + 128);
          *(_DWORD *)(v29 + 488) = a5;
          *(_DWORD *)(v29 + 492) = v49;
          v35 = *(_DWORD *)(v29 + 112);
          if ( (v35 & 0x2000000) == 0 )
          {
            *(_DWORD *)(v29 + 112) = v35 | 0x2000000;
            _InterlockedIncrement(&glDelayedHintShape);
          }
          W32PIDLOCK::vUnlockSingleThread(v31);
          SFMLOGICALSURFACEREF_vDestructorWrap(v44);
          goto LABEL_18;
        }
        W32PIDLOCK::vUnlockSingleThread(v31);
        v9 = a3;
      }
      v11 = a1;
    }
    if ( !*(_QWORD *)(v13 + 184) && (*(_DWORD *)(v13 + 244) & 1) == 0 )
    {
      v17 = (struct SFMLOGICALSURFACE *)v13;
      v40 = (struct SFMLOGICALSURFACE *)v13;
      goto LABEL_10;
    }
    HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(v11, (struct SFMLOGICALSURFACE *)v13, 0, a5 & 2, 1);
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v42, HLSURFClone);
    v17 = v42;
    v40 = v42;
    if ( v42 )
    {
      DWMSPRITE::SetLogicalSurface(v12, v33, 0LL);
      DWMSPRITE::SetLogicalSurface(v12, v34, v17);
      goto LABEL_10;
    }
    if ( !v9 )
    {
      v40 = (struct SFMLOGICALSURFACE *)v13;
      v17 = (struct SFMLOGICALSURFACE *)v13;
      SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v13, a1, 0LL);
LABEL_10:
      if ( v9 )
      {
        LOBYTE(v14) = 5;
        v18 = a1;
        v6 = (struct _SURFOBJ *)(HmgReferenceCheckLock(v9, v14, 0LL) + 24);
        SFMLOGICALSURFACE::SetShape(v17, a1, v6);
        *((_DWORD *)v17 + 63) |= 8u;
        v25 = (_DWORD *)SURFOBJ_TO_SURFACE_NOT_NULL(v6);
        if ( (v25[29] & 0x800) != 0 )
        {
          v36 = v25[166];
          *((_DWORD *)v12 + 39) = v25[165];
          *((_DWORD *)v12 + 40) = v36;
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
        *((_DWORD *)v17 + 63) &= 0xFFFFFFF6;
        v18 = a1;
      }
      v19 = *(_DWORD *)(a4 + 8) - *(_DWORD *)a4;
      v20 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
      if ( v6 )
      {
        *((_DWORD *)v17 + 63) |= 1u;
        v21 = v20 + *((_DWORD *)v12 + 15);
        v22 = v19 + *((_DWORD *)v12 + 14);
      }
      else
      {
        v21 = *((_DWORD *)v12 + 15);
        v22 = *((_DWORD *)v12 + 14);
      }
      *((_DWORD *)v12 + 16) = v22;
      *((_DWORD *)v12 + 17) = v21;
      v23 = *((_DWORD *)v17 + 63);
      if ( (v23 & 1) != 0 && (*((_DWORD *)v12 + 41) & 0x10) == 0 && (v23 & 8) != 0 )
      {
        SFMLOGICALSURFACE::StartSfmStateTracking(v17, v18, gpSfmState, v15);
        SFMLOGICALSURFACE::GetRedirectionInfo(
          v17,
          (enum _HLSURF_REDIRECTIONSTYLE *)&v38,
          &v37,
          (unsigned int *)va,
          0LL,
          0LL);
        v26 = *((_QWORD *)v12 + 13);
        *((_QWORD *)v12 + 13) = 0LL;
        v27 = *((_DWORD *)v12 + 29) >= 1;
        v28 = (void *)UserReferenceDwmApiPort();
        v7 = (int)DwmAsyncUpdateSprite(v28, (__int64)v12 + 72, a4, v38, v37, v49, v27, v26) >= 0;
        *((_DWORD *)v40 + 63) &= ~8u;
      }
      if ( *((int *)v12 + 29) >= 1 )
        CheckAndProcessWindowResizeComplete(v12, 0, 0LL);
      SFMLOGICALSURFACEREF_vDestructorWrap(v44);
      if ( !v12 )
        goto LABEL_19;
      goto LABEL_18;
    }
    v7 = 0;
    SFMLOGICALSURFACEREF_vDestructorWrap(v44);
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
  SFMLOGICALSURFACEREF_vDestructorWrap(&v42);
  return v7;
}
