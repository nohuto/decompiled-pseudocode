/*
 * XREFs of GreHintSpriteShape @ 0x1C0074E38
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0058EF0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0065A50 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     HintSpriteShape @ 0x1C0074624 (HintSpriteShape.c)
 * Callees:
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C000B964 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C000B9F0 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncUpdateSprite @ 0x1C000BABC (DwmAsyncUpdateSprite.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C000E604 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00106C4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0074C00 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0075440 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0075DF8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0075EE0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C007685C (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00768A4 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C007C928 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00963A8 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C010E78C (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C02519F0 (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C0251A34 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 GreHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, __int64 a4, int a5, ...)
{
  HDEV v5; // rdi
  unsigned int v6; // r12d
  HBITMAP v8; // r15
  struct _SURFOBJ *v10; // r14
  struct PDEVOBJ *v11; // rdx
  DWMSPRITE *v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rcx
  W32PIDLOCK *v18; // r15
  int v19; // eax
  struct SFMLOGICALSURFACE *v20; // rdi
  HLSURF HLSURFClone; // rax
  HDEV v22; // rdx
  HDEV v23; // rdx
  HDEV v24; // rsi
  _DWORD *v25; // rax
  int v26; // xmm1_4
  int v27; // ecx
  int v28; // edx
  int v29; // r8d
  int v30; // edx
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  __int64 v34; // rsi
  int v35; // edx
  __int64 v36; // r15
  __int64 v37; // r12
  __int64 v38; // rcx
  int v39; // ebx
  BOOL v40; // edi
  void *v41; // rax
  unsigned int v43; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v44[2]; // [rsp+70h] [rbp-98h] BYREF
  struct SFMLOGICALSURFACE *v45; // [rsp+78h] [rbp-90h]
  _BYTE v46[32]; // [rsp+80h] [rbp-88h] BYREF
  DWMSPRITE *v47; // [rsp+A0h] [rbp-68h]
  _BYTE v48[48]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v49[32]; // [rsp+D8h] [rbp-30h] BYREF
  struct SFMLOGICALSURFACE *v50; // [rsp+F8h] [rbp-10h]
  __int64 v55; // [rsp+180h] [rbp+78h] BYREF
  va_list va; // [rsp+180h] [rbp+78h]
  __int64 v57; // [rsp+188h] [rbp+80h]
  va_list va1; // [rsp+190h] [rbp+88h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v55 = va_arg(va1, _QWORD);
  v57 = va_arg(va1, _QWORD);
  v5 = a1;
  v6 = 0;
  v8 = a3;
  v10 = 0LL;
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v49);
  if ( (_DWORD)v57 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  if ( (_DWORD)v55 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v44[1], v11, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v46, a2);
    v12 = v47;
    if ( v47 )
    {
      v13 = *((_QWORD *)v47 + 21);
      SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v48, (struct SFMLOGICALSURFACE *)v13);
      v15 = *(_QWORD *)(v13 + 184);
      v6 = 1;
      if ( v15 )
      {
        v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v15);
        if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v16) )
        {
          v18 = (W32PIDLOCK *)(v17 + 272);
          W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v17 + 272));
          if ( *(_DWORD *)(v16 + 324) )
          {
            *(_QWORD *)(v16 + 344) = a3;
            *(_QWORD *)(v16 + 328) = a1;
            *(_QWORD *)(v16 + 336) = a2;
            *(_OWORD *)(v16 + 352) = *(_OWORD *)a4;
            *(_OWORD *)(v16 + 368) = *(_OWORD *)(a4 + 16);
            *(_OWORD *)(v16 + 384) = *(_OWORD *)(a4 + 32);
            *(_OWORD *)(v16 + 400) = *(_OWORD *)(a4 + 48);
            *(_OWORD *)(v16 + 416) = *(_OWORD *)(a4 + 64);
            *(_OWORD *)(v16 + 432) = *(_OWORD *)(a4 + 80);
            *(_OWORD *)(v16 + 448) = *(_OWORD *)(a4 + 96);
            *(_OWORD *)(v16 + 464) = *(_OWORD *)(a4 + 112);
            *(_QWORD *)(v16 + 480) = *(_QWORD *)(a4 + 128);
            *(_DWORD *)(v16 + 488) = a5;
            *(_DWORD *)(v16 + 492) = v55;
            v19 = *(_DWORD *)(v16 + 112);
            if ( (v19 & 0x2000000) == 0 )
            {
              *(_DWORD *)(v16 + 112) = v19 | 0x2000000;
              _InterlockedIncrement(&glDelayedHintShape);
            }
            W32PIDLOCK::vUnlockSingleThread(v18);
            SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v48);
            if ( v47 )
              _InterlockedDecrement((volatile signed __int32 *)v47 + 3);
            v47 = 0LL;
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v46);
            goto LABEL_44;
          }
          W32PIDLOCK::vUnlockSingleThread(v18);
          v8 = a3;
        }
        v5 = a1;
      }
      if ( *(_QWORD *)(v13 + 184) || (*(_DWORD *)(v13 + 244) & 1) != 0 )
      {
        HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(v5, (struct SFMLOGICALSURFACE *)v13, 0, a5 & 2, 1);
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v49, HLSURFClone);
        v20 = v50;
        v45 = v50;
        if ( v50 )
        {
          DWMSPRITE::SetLogicalSurface(v12, v22, 0LL);
          DWMSPRITE::SetLogicalSurface(v12, v23, v20);
        }
        else
        {
          if ( v8 )
          {
            v6 = 0;
            SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v48);
            if ( v47 )
              _InterlockedDecrement((volatile signed __int32 *)v47 + 3);
            v47 = 0LL;
            goto LABEL_43;
          }
          v45 = (struct SFMLOGICALSURFACE *)v13;
          v20 = (struct SFMLOGICALSURFACE *)v13;
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v13, a1, 0LL);
        }
      }
      else
      {
        v20 = (struct SFMLOGICALSURFACE *)v13;
        v45 = (struct SFMLOGICALSURFACE *)v13;
      }
      if ( v8 )
      {
        LOBYTE(v14) = 5;
        v24 = a1;
        v10 = (struct _SURFOBJ *)(HmgReferenceCheckLock(v8, v14, 0LL) + 24);
        SFMLOGICALSURFACE::SetShape(v20, a1, v10);
        *((_DWORD *)v20 + 63) |= 8u;
        v25 = (_DWORD *)SURFOBJ_TO_SURFACE_NOT_NULL(v10);
        if ( (v25[29] & 0x800) != 0 )
        {
          v26 = v25[166];
          *((_DWORD *)v12 + 39) = v25[165];
          *((_DWORD *)v12 + 40) = v26;
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
        *((_DWORD *)v20 + 63) &= 0xFFFFFFF6;
        v24 = a1;
      }
      v27 = *(_DWORD *)(a4 + 8) - *(_DWORD *)a4;
      v28 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
      if ( v10 )
      {
        *((_DWORD *)v20 + 63) |= 1u;
        v29 = v28 + *((_DWORD *)v12 + 15);
        v30 = v27 + *((_DWORD *)v12 + 14);
      }
      else
      {
        v29 = *((_DWORD *)v12 + 15);
        v30 = *((_DWORD *)v12 + 14);
      }
      *((_DWORD *)v12 + 16) = v30;
      *((_DWORD *)v12 + 17) = v29;
      v31 = *((_DWORD *)v20 + 63);
      if ( (v31 & 1) != 0 && (*((_DWORD *)v12 + 41) & 0x10) == 0 && (v31 & 8) != 0 )
      {
        SFMLOGICALSURFACE::StartSfmStateTracking(v20, v24, gpSfmState);
        SFMLOGICALSURFACE::GetRedirectionInfo(
          v20,
          (enum _HLSURF_REDIRECTIONSTYLE *)v44,
          &v43,
          (unsigned int *)va,
          0LL,
          0LL);
        v32 = *((_DWORD *)v20 + 63);
        v33 = *((_DWORD *)v12 + 41);
        v34 = *((_QWORD *)v12 + 13);
        v35 = v32 & 1;
        *((_QWORD *)v12 + 13) = 0LL;
        v36 = *(_QWORD *)v20;
        v37 = *(_QWORD *)v12;
        v38 = v32 & 0xC;
        v39 = v38 | v33 & 1 | (2 * (v35 | (4 * (v33 & 0xE))));
        v40 = *((_DWORD *)v12 + 29) >= 1;
        v41 = (void *)UserReferenceDwmApiPort(v38);
        v6 = (int)DwmAsyncUpdateSprite(
                    v41,
                    v37,
                    v36,
                    v39,
                    (__int64)v12 + 72,
                    (__int128 *)a4,
                    v44[0],
                    v43,
                    v55,
                    v40,
                    v34) >= 0;
        *((_DWORD *)v45 + 63) &= ~8u;
      }
      if ( *((int *)v12 + 29) >= 1 )
        CheckAndProcessWindowResizeComplete(v12, 0, 0LL);
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v48);
      if ( v47 )
        _InterlockedDecrement((volatile signed __int32 *)v47 + 3);
    }
    v47 = 0LL;
LABEL_43:
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v46);
LABEL_44:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v44[1]);
    goto LABEL_46;
  }
  v6 = GdiHintSpriteShape(v5, a2, v8, 0, 0);
LABEL_46:
  if ( (_DWORD)v57 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v49);
  return v6;
}
