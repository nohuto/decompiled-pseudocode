/*
 * XREFs of GreHintSpriteShape @ 0x1C0077BD8
 * Callers:
 *     HintSpriteShape @ 0x1C0077790 (HintSpriteShape.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C008B990 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C009AF40 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0079C08 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0079C40 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0079C8C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0079CB8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0079DCC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0079E08 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00AB63C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00C6194 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C00C771C (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00C7AAC (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00C7B74 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00C7CE0 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E68C4 (DwmAsyncUpdateSprite.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C024A3D4 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 */

__int64 GreHintSpriteShape(HDEV a1, struct PDEVOBJ *a2, HBITMAP a3, __int64 a4, int a5, ...)
{
  int v5; // r12d
  __int64 v6; // r14
  unsigned int v7; // r15d
  HBITMAP v9; // rdi
  HDEV v11; // r13
  DWMSPRITE *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // r9d
  __int64 v16; // rcx
  struct SFMLOGICALSURFACE *v17; // r13
  HDEV v18; // rdi
  int v19; // ecx
  int v20; // edx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  __int64 v25; // rax
  _DWORD *v26; // rax
  int v27; // ecx
  __int64 v28; // rdi
  __int64 v29; // r8
  __int64 v30; // r9
  void *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rcx
  W32PIDLOCK *v34; // r13
  HLSURF HLSURFClone; // rax
  HDEV v36; // rdx
  HDEV v37; // rdx
  int v38; // eax
  int v39; // xmm1_4
  unsigned int v40; // [rsp+6Ch] [rbp-3Dh] BYREF
  int v41; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v42[4]; // [rsp+74h] [rbp-35h] BYREF
  DWMSPRITE *v43; // [rsp+78h] [rbp-31h] BYREF
  struct SFMLOGICALSURFACE *v44; // [rsp+80h] [rbp-29h] BYREF
  int v45; // [rsp+88h] [rbp-21h]
  _BYTE v46[88]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v51; // [rsp+120h] [rbp+77h] BYREF
  va_list va; // [rsp+120h] [rbp+77h]
  __int64 v53; // [rsp+128h] [rbp+7Fh]
  va_list va1; // [rsp+130h] [rbp+87h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v51 = va_arg(va1, _QWORD);
  v53 = va_arg(va1, _QWORD);
  v5 = v53;
  v6 = 0LL;
  v44 = 0LL;
  v7 = 0;
  v45 = 0;
  v9 = a3;
  v11 = a1;
  if ( (_DWORD)v53 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  if ( (_DWORD)v51 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v42, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v43, (HWND)a2);
    v12 = v43;
    if ( !v43 )
    {
LABEL_17:
      v5 = v53;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v42);
      goto LABEL_18;
    }
    v13 = *((_QWORD *)v43 + 21);
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v46, (struct SFMLOGICALSURFACE *)v13);
    v16 = *(_QWORD *)(v13 + 184);
    v7 = 1;
    if ( v16 )
    {
      v32 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
      if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v32) )
      {
        v34 = (W32PIDLOCK *)(v33 + 272);
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v33 + 272));
        if ( *(_DWORD *)(v32 + 324) )
        {
          *(_QWORD *)(v32 + 344) = a3;
          *(_QWORD *)(v32 + 328) = a1;
          *(_QWORD *)(v32 + 336) = a2;
          *(_OWORD *)(v32 + 352) = *(_OWORD *)a4;
          *(_OWORD *)(v32 + 368) = *(_OWORD *)(a4 + 16);
          *(_OWORD *)(v32 + 384) = *(_OWORD *)(a4 + 32);
          *(_OWORD *)(v32 + 400) = *(_OWORD *)(a4 + 48);
          *(_OWORD *)(v32 + 416) = *(_OWORD *)(a4 + 64);
          *(_OWORD *)(v32 + 432) = *(_OWORD *)(a4 + 80);
          *(_OWORD *)(v32 + 448) = *(_OWORD *)(a4 + 96);
          *(_OWORD *)(v32 + 464) = *(_OWORD *)(a4 + 112);
          *(_QWORD *)(v32 + 480) = *(_QWORD *)(a4 + 128);
          *(_DWORD *)(v32 + 488) = a5;
          *(_DWORD *)(v32 + 492) = v51;
          v38 = *(_DWORD *)(v32 + 112);
          if ( (v38 & 0x2000000) == 0 )
          {
            *(_DWORD *)(v32 + 112) = v38 | 0x2000000;
            _InterlockedIncrement(&glDelayedHintShape);
          }
          W32PIDLOCK::vUnlockSingleThread(v34);
          SFMLOGICALSURFACEREF_vDestructorWrap(v46);
          goto LABEL_16;
        }
        W32PIDLOCK::vUnlockSingleThread(v34);
        v11 = a1;
      }
      v9 = a3;
    }
    if ( !*(_QWORD *)(v13 + 184) && (*(_DWORD *)(v13 + 244) & 1) == 0 )
    {
      v17 = (struct SFMLOGICALSURFACE *)v13;
      goto LABEL_10;
    }
    HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(v11, (struct SFMLOGICALSURFACE *)v13, 0, a5 & 2, 1);
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v44, HLSURFClone);
    v17 = v44;
    if ( v44 )
    {
      DWMSPRITE::SetLogicalSurface(v12, v36, 0LL);
      DWMSPRITE::SetLogicalSurface(v12, v37, v17);
      goto LABEL_10;
    }
    if ( !v9 )
    {
      v17 = (struct SFMLOGICALSURFACE *)v13;
      SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v13, a1, 0LL);
LABEL_10:
      if ( v9 )
      {
        LOBYTE(v14) = 5;
        v25 = HmgReferenceCheckLock(v9, v14, 0LL);
        v18 = a1;
        v6 = v25 + 24;
        SFMLOGICALSURFACE::SetShape(v17, a1, (struct _SURFOBJ *)(v25 + 24));
        *((_DWORD *)v17 + 63) |= 8u;
        v26 = (_DWORD *)SURFOBJ_TO_SURFACE_NOT_NULL(v6);
        if ( (v26[29] & 0x800) != 0 )
        {
          v39 = v26[166];
          *((_DWORD *)v12 + 39) = v26[165];
          *((_DWORD *)v12 + 40) = v39;
          *((_DWORD *)v12 + 41) |= 0x20u;
        }
        else
        {
          *(_QWORD *)((char *)v12 + 156) = 0LL;
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
          (enum _HLSURF_REDIRECTIONSTYLE *)&v41,
          &v40,
          (unsigned int *)va,
          0LL,
          0LL);
        v27 = *((_DWORD *)v17 + 63);
        v28 = *((_QWORD *)v12 + 13);
        *((_QWORD *)v12 + 13) = 0LL;
        v31 = (void *)UserReferenceDwmApiPort(v27 & 0xC, v27 & 1, v29, v30);
        v7 = (int)DwmAsyncUpdateSprite(v31, (__int64)v12 + 72, a4, v41, v40, v51, *((_DWORD *)v12 + 29), v28) >= 0;
        *((_DWORD *)v17 + 63) &= ~8u;
      }
      SFMLOGICALSURFACEREF_vDestructorWrap(v46);
      if ( !v12 )
        goto LABEL_17;
      goto LABEL_16;
    }
    v7 = 0;
    SFMLOGICALSURFACEREF_vDestructorWrap(v46);
LABEL_16:
    _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
    goto LABEL_17;
  }
  v7 = GdiHintSpriteShape(v11, (HWND)a2, v9, 0, 0);
LABEL_18:
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  SFMLOGICALSURFACEREF_vDestructorWrap(&v44);
  return v7;
}
