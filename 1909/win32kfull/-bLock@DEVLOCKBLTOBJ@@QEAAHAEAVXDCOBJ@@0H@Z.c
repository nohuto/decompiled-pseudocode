/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B8F80
 * Callers:
 *     GrePlgBlt @ 0x1C0008764 (GrePlgBlt.c)
 *     NtGdiAlphaBlend @ 0x1C00B4130 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C00BB5E8 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C0124474 (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C0148700 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C00AB4A0 (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00BA080 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C00BC91C (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00BCA9C (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00D26E8 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00EE354 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00F8610 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C010EB44 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269334 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C0270484 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C0294D5C (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, struct XDCOBJ *a3)
{
  DC **v6; // rsi
  int v7; // ebx
  int v8; // ebp
  __int64 v9; // r10
  __int64 v10; // r9
  int v11; // r8d
  int v12; // edx
  bool v13; // zf
  unsigned int v14; // r15d
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v32; // rax
  __int64 v33; // rax
  int v34; // eax
  int v35; // edx
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  struct _KTHREAD *v41; // rbx
  __int64 *v42; // rax
  __int64 v43; // rbx
  DC *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  struct _KTHREAD *v48; // rbx
  __int64 *v49; // rax
  __int64 v50; // rax
  int v51; // r8d
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned __int64 v54; // rax
  int v55; // ebp
  __int64 v56; // rdx
  int v57; // ecx
  __int64 v58; // rdx
  int v59; // ecx
  __int64 v60; // rbx
  __int64 v61; // rcx
  int v62; // edx
  struct SURFACE *v63; // rax
  DC *v64; // rax
  __int64 result; // rax
  bool v66; // zf
  __int64 v67; // rbx
  __int64 v68; // rcx
  int v69; // edx
  struct SURFACE *v70; // rax
  DC *v71; // r8
  __int64 v72; // rbx
  unsigned int v73; // eax
  unsigned int v74; // ebp
  int v75; // ecx
  __int64 v76; // rcx
  int v77; // edx
  __int64 v78; // rcx
  int v79; // eax
  DC *v80; // rax
  DC *v81; // rax
  int v82; // ebx
  int v83; // eax
  DC *v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rax
  int v87; // ebx
  int v88; // eax
  __int64 v89; // rcx
  signed __int32 v90[22]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v91; // [rsp+60h] [rbp+8h] BYREF
  __int64 v92; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 1;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = **(_QWORD **)a2;
  *((_QWORD *)this + 22) = **(_QWORD **)a3;
  if ( !TrapAppContainerRenderingWorker(a2, (HSURF *)this + 18, (HSURF *)this + 17, (unsigned int *)this + 19)
    || !TrapAppContainerRenderingWorker(a3, (HSURF *)this + 21, (HSURF *)this + 20, 0LL) )
  {
    return 0LL;
  }
  v6 = (DC **)((char *)this + 80);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v7 = 1;
  v8 = 0;
  if ( (!*(_QWORD *)a3 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
    && (!*(_QWORD *)a2 || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0) )
  {
    goto LABEL_27;
  }
  *((_QWORD *)this + 2) = ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  *((_DWORD *)this + 18) |= 8u;
  if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
    v8 = 1;
  }
  v9 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 )
  {
    v10 = *(_QWORD *)a2;
    if ( !*(_QWORD *)a2 )
    {
LABEL_24:
      v91 = *(_QWORD *)(v9 + 48);
      v7 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v91);
      goto LABEL_25;
    }
    v11 = *(_DWORD *)(v9 + 36);
    v12 = *(_DWORD *)(v10 + 36);
    if ( ((v12 ^ v11) & 0x200) != 0 )
    {
      if ( (**(_DWORD **)(v9 + 976) & 1) != 0 && (v12 & 0x8000) != 0 )
        goto LABEL_22;
      if ( (**(_DWORD **)(v10 + 976) & 1) == 0 )
      {
LABEL_23:
        v7 = 0;
        goto LABEL_24;
      }
      v13 = (v11 & 0x8000) == 0;
    }
    else
    {
      if ( (v11 & 0x200) == 0 || (v12 & 0x200) == 0 || (v11 & 0x8000) == 0 )
        goto LABEL_23;
      v13 = (*(_DWORD *)(v10 + 36) & 0x8000) == 0;
    }
    if ( !v13 )
    {
LABEL_22:
      v7 = 1;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
LABEL_25:
  if ( *(_QWORD *)a2 )
  {
    v92 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    v7 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v92);
  }
LABEL_27:
  v14 = 2;
  v15 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
  if ( (v15 & 0x200) != 0 )
  {
    if ( (v15 & 0x8000) == 0 || !v7 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
      *((_QWORD *)this + 1) = v16;
      *((_QWORD *)this + 4) = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
      v17 = v16;
      if ( v8 && v16 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v17 = *((_QWORD *)this + 1);
        v8 = 0;
      }
      GreAcquireSemaphore(v17);
      v18 = *((_QWORD *)this + 1);
      v19 = 2LL;
      if ( v18 != ghsemGreLock )
        v19 = 11LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemSrc", v18, v19);
    }
    if ( (!*(_QWORD *)a2 || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0) && !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 18) |= 0x1000u;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21);
      if ( ThreadWin32Thread )
      {
        *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
        *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    }
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x5000) == 0x1000 )
      goto LABEL_62;
  }
  v23 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
    goto LABEL_66;
  v24 = *(_DWORD *)(v23 + 36);
  if ( (v24 & 0x200) != 0 )
  {
    if ( (v24 & 0x8000) == 0 || !v7 )
    {
      v25 = *(_QWORD *)(v23 + 64);
      *(_QWORD *)this = v25;
      *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
      v26 = v25;
      if ( v8 && v25 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v26 = *(_QWORD *)this;
        v8 = 0;
      }
      GreAcquireSemaphore(v26);
      if ( *(_QWORD *)this != ghsemGreLock )
        v14 = 11;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v14);
      v27 = *((_DWORD *)this + 18);
      if ( (v27 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
        *((_DWORD *)this + 18) = v27 | 0x200;
    }
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 18) |= 0x1000u;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v29, v28, v30) )
      {
        v32 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v32 )
        {
          v33 = *v32;
          if ( v33 )
          {
            *(_QWORD *)(v33 + 320) = 0LL;
            *(_QWORD *)(v33 + 312) = 0LL;
          }
        }
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    }
    v23 = *(_QWORD *)a2;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x5000) == 0x1000 )
    {
LABEL_62:
      v34 = *((_DWORD *)this + 18);
      if ( (v34 & 0x1000) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        v34 = *((_DWORD *)this + 18);
      }
      *((_DWORD *)this + 18) = v34 & 0xFFFFFFFE;
LABEL_89:
      if ( v8 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      return 0LL;
    }
  }
  if ( v23 )
  {
    v36 = *((_DWORD *)this + 18);
    v35 = v36;
    if ( (v36 & 0x1000) != 0 && (*(_DWORD *)(v23 + 36) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        v36 = *((_DWORD *)this + 18);
      }
      *((_DWORD *)this + 18) = v36 & 0xFFFFFFFE;
      goto LABEL_89;
    }
  }
  else
  {
LABEL_66:
    v35 = *((_DWORD *)this + 18);
  }
  if ( (v35 & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      v35 = *((_DWORD *)this + 18);
    }
    *((_DWORD *)this + 18) = v35 & 0xFFFFFFFE;
    goto LABEL_89;
  }
  if ( v23
    && ((v35 & 0x1000) != 0 || (*(_DWORD *)(v23 + 36) & 0x200) == 0)
    && (*(_DWORD *)(v23 + 36) & 0x10) != 0
    && !DC::bCompute((DC *)v23)
    || ((*((_DWORD *)this + 18) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
    && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x10) != 0
    && !DC::bCompute(*(DC **)a3) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    }
    *((_DWORD *)this + 18) &= ~1u;
    goto LABEL_89;
  }
  v37 = *(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 18) & 0x1000) == 0 )
      goto LABEL_117;
    if ( (_DWORD)v37 )
    {
      if ( *((_QWORD *)this + 17) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(*(DC **)a2);
      v41 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v39, v38, v40) )
      {
        v42 = (__int64 *)PsGetThreadWin32Thread(v41);
        if ( v42 )
        {
          v43 = *v42;
          if ( *v42 )
          {
            *(_QWORD *)(v43 + 312) = v6;
            if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
            {
              *(_DWORD *)(v43 + 328) |= 1u;
              *(_QWORD *)(*(_QWORD *)a2 + 1960LL) = 0LL;
              GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
              *(_DWORD *)(v43 + 336) = giVisRgnUniqueness;
              EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
              GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
            }
          }
        }
      }
    }
    v44 = *(DC **)a3;
    if ( **(_QWORD **)a3 != **(_QWORD **)a2 && (*((_DWORD *)v44 + 9) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 20) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(v44);
      v48 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v46, v45, v47) )
      {
        v49 = (__int64 *)PsGetThreadWin32Thread(v48);
        if ( v49 )
        {
          v50 = *v49;
          if ( v50 )
            *(_QWORD *)(v50 + 320) = a3;
        }
      }
    }
  }
  else if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 18) |= 0x800000u;
    GreIncLockCount();
  }
  if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  }
LABEL_117:
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  v51 = *((_DWORD *)this + 18);
  if ( (v51 & 0x1000) == 0 )
    goto LABEL_217;
  if ( *(_QWORD *)a3 )
    v52 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
  else
    v52 = 0LL;
  v53 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    v54 = *(_QWORD *)(v53 + 496);
  else
    v54 = 0LL;
  v55 = 0;
  if ( v52 && v54 && v52 != v54 )
  {
    if ( v52 < v54 )
    {
      *((_DWORD *)this + 18) = v51 | 0x8000;
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
      {
        XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 104), **(HDC **)a3);
        v56 = *((_QWORD *)this + 13);
        if ( v56 && *((_BYTE *)this + 121) )
        {
          v57 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
          if ( (v57 & 1) != 0 && (v57 & 0x4000) == 0 && *((_QWORD *)this + 16) && !*((_QWORD *)this + 20) )
          {
            *(_DWORD *)(v56 + 36) |= 0x4000u;
            DC::pSurface(*((DC **)this + 13), *((struct SURFACE **)this + 16));
            *((_DWORD *)this + 18) |= 0x20u;
          }
          if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, v56) )
          {
            v55 = 1;
            *(_DWORD *)(*((_QWORD *)this + 13) + 44LL) |= 1u;
          }
          goto LABEL_142;
        }
        v55 = 1;
      }
      *((_QWORD *)this + 13) = 0LL;
LABEL_142:
      _InterlockedOr(v90, 0);
      v58 = *(_QWORD *)a2;
      v59 = 1;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
      {
        v60 = *(_QWORD *)(v58 + 48);
        XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 80), *(HDC *)v58);
        v61 = *(_QWORD *)(v60 + 1408);
        if ( *v6 && *((_BYTE *)this + 97) )
        {
          v62 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
          if ( (v62 & 1) != 0 && (v62 & 0x4000) == 0 && v61 && !*((_QWORD *)this + 17) )
          {
            *((_DWORD *)*v6 + 9) |= 0x4000u;
            v63 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v61);
            DC::pSurface(*v6, v63);
            *((_DWORD *)this + 18) |= 0x10u;
          }
          if ( !(unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
          {
            v64 = *v6;
LABEL_152:
            *((_DWORD *)v64 + 11) |= 1u;
LABEL_153:
            *((_DWORD *)this + 18) &= ~1u;
            return 0LL;
          }
          goto LABEL_204;
        }
        v59 = 0;
      }
      *v6 = 0LL;
      v66 = v59 == 0;
      goto LABEL_203;
    }
    if ( (*(_DWORD *)(v53 + 36) & 0x200) != 0 )
    {
      v67 = *(_QWORD *)(v53 + 48);
      XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 80), *(HDC *)v53);
      v68 = *(_QWORD *)(v67 + 1408);
      if ( *v6 && *((_BYTE *)this + 97) )
      {
        v69 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
        if ( (v69 & 1) != 0 && (v69 & 0x4000) == 0 && v68 && !*((_QWORD *)this + 17) )
        {
          *((_DWORD *)*v6 + 9) |= 0x4000u;
          v70 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v68);
          DC::pSurface(*v6, v70);
          *((_DWORD *)this + 18) |= 0x10u;
        }
        v71 = *v6;
        if ( *v6 )
        {
          if ( *((_BYTE *)this + 97) )
          {
            if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
            {
              v72 = *((_QWORD *)v71 + 62);
              if ( v72 )
              {
                v73 = SURFACE::Map(*((_QWORD *)v71 + 62));
                v74 = v73;
                if ( v73 <= 1 )
                {
                  if ( (*(_DWORD *)(v72 + 112) & 0x800) != 0
                    && *(_QWORD *)(v72 + 248)
                    && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 80)) )
                  {
                    *((_DWORD *)this + 18) |= 0x400u;
                  }
                  if ( (*(_DWORD *)(v72 + 112) & 0x10) != 0
                    && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 80)) )
                  {
                    *((_DWORD *)this + 18) |= 0x2000u;
                  }
                  if ( v74 == 1 )
                    *((_DWORD *)this + 18) |= 0x40u;
                }
                else if ( v73 == 2 )
                {
                  v55 = 1;
                  *((_DWORD *)*v6 + 11) |= 1u;
LABEL_184:
                  _InterlockedOr(v90, 0);
                  v75 = 1;
                  if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
                  {
                    XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 104), **(HDC **)a3);
                    v76 = *((_QWORD *)this + 13);
                    if ( v76 && *((_BYTE *)this + 121) )
                    {
                      v77 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
                      if ( (v77 & 1) != 0 && (v77 & 0x4000) == 0 && *((_QWORD *)this + 16) && !*((_QWORD *)this + 20) )
                      {
                        *(_DWORD *)(v76 + 36) |= 0x4000u;
                        DC::pSurface(*((DC **)this + 13), *((struct SURFACE **)this + 16));
                        *((_DWORD *)this + 18) |= 0x20u;
                      }
                      if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, v77) )
                      {
                        v64 = (DC *)*((_QWORD *)this + 13);
                        goto LABEL_152;
                      }
                      goto LABEL_204;
                    }
                    v75 = 0;
                  }
                  *((_QWORD *)this + 13) = 0LL;
                  if ( !v75 )
                    goto LABEL_153;
                  goto LABEL_204;
                }
              }
            }
          }
        }
        v55 = 0;
        goto LABEL_184;
      }
      v55 = 1;
    }
    *v6 = 0LL;
    goto LABEL_184;
  }
  if ( v53 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 1) )
    v55 = 1;
  if ( !*(_QWORD *)a2 || **(_QWORD **)a2 != **(_QWORD **)a3 )
  {
    v66 = (unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v51, 0) == 0;
LABEL_203:
    if ( v66 )
      goto LABEL_153;
  }
LABEL_204:
  if ( v55 )
    goto LABEL_153;
  v37 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 40LL) & 0x8000) != 0
    && *(_QWORD *)(*(_QWORD *)a2 + 496LL)
    && *(_QWORD *)this )
  {
    goto LABEL_153;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) != 0
    && *(_QWORD *)(v37 + 496)
    && *((_QWORD *)this + 1) )
  {
    *((_QWORD *)this + 8) = a3;
    *((_QWORD *)this + 7) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 32LL);
    if ( !bCopySurface(
            (DEVLOCKBLTOBJ *)((char *)this + 40),
            (struct _SURFOBJ *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 24LL)) )
    {
      v78 = *((_QWORD *)this + 5);
      if ( v78 )
      {
        DEC_SHARE_REF_CNT(v78);
        bDeleteSurface(*(_QWORD *)(*((_QWORD *)this + 5) + 32LL));
        *((_QWORD *)this + 5) = 0LL;
      }
      *((_QWORD *)this + 7) = 0LL;
      *((_QWORD *)this + 8) = 0LL;
      goto LABEL_153;
    }
    hbmSelectBitmap(**(_QWORD **)a3, *(_QWORD *)(*((_QWORD *)this + 5) + 32LL), 1LL, 0LL);
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)this + 1));
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
    v37 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    if ( v37 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v37);
      GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
      *((_QWORD *)this + 2) = 0LL;
    }
  }
LABEL_217:
  v79 = *((_DWORD *)this + 18);
  if ( (v79 & 0x1000) == 0 && (v79 & 0x800000) == 0 )
    return 1LL;
  v80 = *v6;
  if ( *v6 )
    goto LABEL_240;
  LOBYTE(v37) = 1;
  v81 = (DC *)HmgLockEx(**(_QWORD **)a2, v37, *((unsigned int *)this + 23));
  *v6 = v81;
  if ( v81 )
  {
    if ( *((_DWORD *)this + 23) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v81 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_225:
        _InterlockedDecrement((volatile signed __int32 *)v81 + 3);
        *v6 = 0LL;
        goto LABEL_241;
      }
      v82 = *((_DWORD *)v81 + 524);
      if ( v82 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v81 = *v6;
        goto LABEL_225;
      }
    }
    if ( (*((_DWORD *)*v6 + 11) & 2) == 0 )
    {
      if ( !XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 80)) )
      {
        v83 = 0;
LABEL_231:
        v84 = *v6;
        if ( !v83 )
        {
          _InterlockedDecrement((volatile signed __int32 *)v84 + 3);
          *v6 = 0LL;
          goto LABEL_241;
        }
        if ( (*((_DWORD *)v84 + 130) & 4) != 0 )
          DC::vMarkTransformDirty(v84);
        goto LABEL_238;
      }
      *((_DWORD *)*v6 + 11) |= 2u;
      *((_DWORD *)this + 22) = 1;
    }
    v83 = 1;
    goto LABEL_231;
  }
  if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    PsGetWin32KFilterSet();
LABEL_238:
  v80 = *v6;
  if ( !*v6 )
    goto LABEL_241;
  *((_BYTE *)this + 97) = 0;
LABEL_240:
  *((_DWORD *)v80 + 10) |= 2u;
  *((_BYTE *)this + 96) = 1;
LABEL_241:
  if ( **(_QWORD **)a3 == **(_QWORD **)a2 )
    return 1LL;
  v85 = *((_QWORD *)this + 13);
  if ( v85 )
  {
LABEL_263:
    *(_DWORD *)(v85 + 40) |= 2u;
    *((_BYTE *)this + 120) = 1;
    return 1LL;
  }
  LOBYTE(v37) = 1;
  v86 = HmgLockEx(**(_QWORD **)a3, v37, *((unsigned int *)this + 29));
  *((_QWORD *)this + 13) = v86;
  if ( !v86 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_261;
  }
  if ( *((_DWORD *)this + 29) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v86 + 48) + 40LL) & 0x8000) == 0 )
    {
LABEL_248:
      _InterlockedDecrement((volatile signed __int32 *)(v86 + 12));
      result = 1LL;
      *((_QWORD *)this + 13) = 0LL;
      return result;
    }
    v87 = *(_DWORD *)(v86 + 2096);
    if ( v87 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v86 = *((_QWORD *)this + 13);
      goto LABEL_248;
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 13) + 44LL) & 2) != 0 )
    goto LABEL_253;
  if ( XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 104)) )
  {
    *(_DWORD *)(*((_QWORD *)this + 13) + 44LL) |= 2u;
    *((_DWORD *)this + 28) = 1;
LABEL_253:
    v88 = 1;
    goto LABEL_254;
  }
  v88 = 0;
LABEL_254:
  v89 = *((_QWORD *)this + 13);
  if ( !v88 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v89 + 12));
    result = 1LL;
    *((_QWORD *)this + 13) = 0LL;
    return result;
  }
  if ( (*(_DWORD *)(v89 + 520) & 4) != 0 )
    DC::vMarkTransformDirty((DC *)v89);
LABEL_261:
  v85 = *((_QWORD *)this + 13);
  if ( v85 )
  {
    *((_BYTE *)this + 121) = 0;
    goto LABEL_263;
  }
  return 1LL;
}
