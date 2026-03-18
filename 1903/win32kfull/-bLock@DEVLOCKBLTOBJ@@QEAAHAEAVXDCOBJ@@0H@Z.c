/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C006EFF0
 * Callers:
 *     GrePlgBlt @ 0x1C0008764 (GrePlgBlt.c)
 *     NtGdiAlphaBlend @ 0x1C0069D70 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C0071658 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C007EAC4 (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C0147950 (NtGdiTransparentBlt.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00700F0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C0072BA8 (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0072C10 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00730A8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00F25F8 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C010FD10 (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C010FD5C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0133FFC (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269A64 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C0270B94 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029530C (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
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
  __int64 v22; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // rcx
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v34; // rax
  __int64 v35; // rax
  int v36; // eax
  int v37; // edx
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _KTHREAD *v44; // rbx
  __int64 *v45; // rax
  __int64 v46; // rbx
  DC *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  struct _KTHREAD *v52; // rbx
  __int64 *v53; // rax
  __int64 v54; // rax
  int v55; // r8d
  unsigned __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int64 v58; // rax
  int v59; // ebp
  __int64 v60; // rdx
  int v61; // ecx
  __int64 v62; // rdx
  int v63; // ecx
  __int64 v64; // rbx
  __int64 v65; // rcx
  int v66; // edx
  struct SURFACE *v67; // rax
  DC *v68; // rax
  __int64 result; // rax
  bool v70; // zf
  __int64 v71; // rbx
  __int64 v72; // rcx
  int v73; // edx
  struct SURFACE *v74; // rax
  DC *v75; // r8
  __int64 v76; // rbx
  unsigned int v77; // eax
  unsigned int v78; // ebp
  int v79; // ecx
  __int64 v80; // rcx
  int v81; // edx
  __int64 v82; // rcx
  int v83; // eax
  DC *v84; // rax
  DC *v85; // rax
  int v86; // ebx
  int v87; // eax
  DC *v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rax
  int v91; // ebx
  int v92; // eax
  __int64 v93; // rcx
  signed __int32 v94[22]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v95; // [rsp+60h] [rbp+8h] BYREF
  __int64 v96; // [rsp+68h] [rbp+10h] BYREF

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
      v95 = *(_QWORD *)(v9 + 48);
      v7 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v95);
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
    v96 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    v7 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v96);
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
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22);
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
  v24 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
    goto LABEL_66;
  v25 = *(_DWORD *)(v24 + 36);
  if ( (v25 & 0x200) != 0 )
  {
    if ( (v25 & 0x8000) == 0 || !v7 )
    {
      v26 = *(_QWORD *)(v24 + 64);
      *(_QWORD *)this = v26;
      *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
      v27 = v26;
      if ( v8 && v26 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v27 = *(_QWORD *)this;
        v8 = 0;
      }
      GreAcquireSemaphore(v27);
      if ( *(_QWORD *)this != ghsemGreLock )
        v14 = 11;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v14);
      v28 = *((_DWORD *)this + 18);
      if ( (v28 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
        *((_DWORD *)this + 18) = v28 | 0x200;
    }
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 18) |= 0x1000u;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v30, v29, v31, v32) )
      {
        v34 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v34 )
        {
          v35 = *v34;
          if ( v35 )
          {
            *(_QWORD *)(v35 + 320) = 0LL;
            *(_QWORD *)(v35 + 312) = 0LL;
          }
        }
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    }
    v24 = *(_QWORD *)a2;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x5000) == 0x1000 )
    {
LABEL_62:
      v36 = *((_DWORD *)this + 18);
      if ( (v36 & 0x1000) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        v36 = *((_DWORD *)this + 18);
      }
      *((_DWORD *)this + 18) = v36 & 0xFFFFFFFE;
LABEL_89:
      if ( v8 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      return 0LL;
    }
  }
  if ( v24 )
  {
    v38 = *((_DWORD *)this + 18);
    v37 = v38;
    if ( (v38 & 0x1000) != 0 && (*(_DWORD *)(v24 + 36) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        v38 = *((_DWORD *)this + 18);
      }
      *((_DWORD *)this + 18) = v38 & 0xFFFFFFFE;
      goto LABEL_89;
    }
  }
  else
  {
LABEL_66:
    v37 = *((_DWORD *)this + 18);
  }
  if ( (v37 & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      v37 = *((_DWORD *)this + 18);
    }
    *((_DWORD *)this + 18) = v37 & 0xFFFFFFFE;
    goto LABEL_89;
  }
  if ( v24
    && ((v37 & 0x1000) != 0 || (*(_DWORD *)(v24 + 36) & 0x200) == 0)
    && (*(_DWORD *)(v24 + 36) & 0x10) != 0
    && !DC::bCompute((DC *)v24)
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
  v39 = *(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 18) & 0x1000) == 0 )
      goto LABEL_117;
    if ( (_DWORD)v39 )
    {
      if ( *((_QWORD *)this + 17) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(*(DC **)a2);
      v44 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v41, v40, v42, v43) )
      {
        v45 = (__int64 *)PsGetThreadWin32Thread(v44);
        if ( v45 )
        {
          v46 = *v45;
          if ( *v45 )
          {
            *(_QWORD *)(v46 + 312) = v6;
            if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
            {
              *(_DWORD *)(v46 + 328) |= 1u;
              *(_QWORD *)(*(_QWORD *)a2 + 1960LL) = 0LL;
              GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
              *(_DWORD *)(v46 + 336) = giVisRgnUniqueness;
              EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
              GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
            }
          }
        }
      }
    }
    v47 = *(DC **)a3;
    if ( **(_QWORD **)a3 != **(_QWORD **)a2 && (*((_DWORD *)v47 + 9) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 20) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(v47);
      v52 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v49, v48, v50, v51) )
      {
        v53 = (__int64 *)PsGetThreadWin32Thread(v52);
        if ( v53 )
        {
          v54 = *v53;
          if ( v54 )
            *(_QWORD *)(v54 + 320) = a3;
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
  v55 = *((_DWORD *)this + 18);
  if ( (v55 & 0x1000) == 0 )
    goto LABEL_217;
  if ( *(_QWORD *)a3 )
    v56 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
  else
    v56 = 0LL;
  v57 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    v58 = *(_QWORD *)(v57 + 496);
  else
    v58 = 0LL;
  v59 = 0;
  if ( v56 && v58 && v56 != v58 )
  {
    if ( v56 < v58 )
    {
      *((_DWORD *)this + 18) = v55 | 0x8000;
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
      {
        XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 104), **(HDC **)a3);
        v60 = *((_QWORD *)this + 13);
        if ( v60 && *((_BYTE *)this + 121) )
        {
          v61 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
          if ( (v61 & 1) != 0 && (v61 & 0x4000) == 0 && *((_QWORD *)this + 16) && !*((_QWORD *)this + 20) )
          {
            *(_DWORD *)(v60 + 36) |= 0x4000u;
            DC::pSurface(*((DC **)this + 13), *((struct SURFACE **)this + 16));
            *((_DWORD *)this + 18) |= 0x20u;
          }
          if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, v60) )
          {
            v59 = 1;
            *(_DWORD *)(*((_QWORD *)this + 13) + 44LL) |= 1u;
          }
          goto LABEL_142;
        }
        v59 = 1;
      }
      *((_QWORD *)this + 13) = 0LL;
LABEL_142:
      _InterlockedOr(v94, 0);
      v62 = *(_QWORD *)a2;
      v63 = 1;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
      {
        v64 = *(_QWORD *)(v62 + 48);
        XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 80), *(HDC *)v62);
        v65 = *(_QWORD *)(v64 + 1408);
        if ( *v6 && *((_BYTE *)this + 97) )
        {
          v66 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
          if ( (v66 & 1) != 0 && (v66 & 0x4000) == 0 && v65 && !*((_QWORD *)this + 17) )
          {
            *((_DWORD *)*v6 + 9) |= 0x4000u;
            v67 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v65);
            DC::pSurface(*v6, v67);
            *((_DWORD *)this + 18) |= 0x10u;
          }
          if ( !(unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
          {
            v68 = *v6;
LABEL_152:
            *((_DWORD *)v68 + 11) |= 1u;
LABEL_153:
            *((_DWORD *)this + 18) &= ~1u;
            return 0LL;
          }
          goto LABEL_204;
        }
        v63 = 0;
      }
      *v6 = 0LL;
      v70 = v63 == 0;
      goto LABEL_203;
    }
    if ( (*(_DWORD *)(v57 + 36) & 0x200) != 0 )
    {
      v71 = *(_QWORD *)(v57 + 48);
      XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 80), *(HDC *)v57);
      v72 = *(_QWORD *)(v71 + 1408);
      if ( *v6 && *((_BYTE *)this + 97) )
      {
        v73 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
        if ( (v73 & 1) != 0 && (v73 & 0x4000) == 0 && v72 && !*((_QWORD *)this + 17) )
        {
          *((_DWORD *)*v6 + 9) |= 0x4000u;
          v74 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v72);
          DC::pSurface(*v6, v74);
          *((_DWORD *)this + 18) |= 0x10u;
        }
        v75 = *v6;
        if ( *v6 )
        {
          if ( *((_BYTE *)this + 97) )
          {
            if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
            {
              v76 = *((_QWORD *)v75 + 62);
              if ( v76 )
              {
                v77 = SURFACE::Map(*((_QWORD *)v75 + 62));
                v78 = v77;
                if ( v77 <= 1 )
                {
                  if ( (*(_DWORD *)(v76 + 112) & 0x800) != 0
                    && *(_QWORD *)(v76 + 248)
                    && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 80)) )
                  {
                    *((_DWORD *)this + 18) |= 0x400u;
                  }
                  if ( (*(_DWORD *)(v76 + 112) & 0x10) != 0
                    && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 80)) )
                  {
                    *((_DWORD *)this + 18) |= 0x2000u;
                  }
                  if ( v78 == 1 )
                    *((_DWORD *)this + 18) |= 0x40u;
                }
                else if ( v77 == 2 )
                {
                  v59 = 1;
                  *((_DWORD *)*v6 + 11) |= 1u;
LABEL_184:
                  _InterlockedOr(v94, 0);
                  v79 = 1;
                  if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
                  {
                    XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 104), **(HDC **)a3);
                    v80 = *((_QWORD *)this + 13);
                    if ( v80 && *((_BYTE *)this + 121) )
                    {
                      v81 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
                      if ( (v81 & 1) != 0 && (v81 & 0x4000) == 0 && *((_QWORD *)this + 16) && !*((_QWORD *)this + 20) )
                      {
                        *(_DWORD *)(v80 + 36) |= 0x4000u;
                        DC::pSurface(*((DC **)this + 13), *((struct SURFACE **)this + 16));
                        *((_DWORD *)this + 18) |= 0x20u;
                      }
                      if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, v81) )
                      {
                        v68 = (DC *)*((_QWORD *)this + 13);
                        goto LABEL_152;
                      }
                      goto LABEL_204;
                    }
                    v79 = 0;
                  }
                  *((_QWORD *)this + 13) = 0LL;
                  if ( !v79 )
                    goto LABEL_153;
                  goto LABEL_204;
                }
              }
            }
          }
        }
        v59 = 0;
        goto LABEL_184;
      }
      v59 = 1;
    }
    *v6 = 0LL;
    goto LABEL_184;
  }
  if ( v57 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 1) )
    v59 = 1;
  if ( !*(_QWORD *)a2 || **(_QWORD **)a2 != **(_QWORD **)a3 )
  {
    v70 = (unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v55, 0) == 0;
LABEL_203:
    if ( v70 )
      goto LABEL_153;
  }
LABEL_204:
  if ( v59 )
    goto LABEL_153;
  v39 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 40LL) & 0x8000) != 0
    && *(_QWORD *)(*(_QWORD *)a2 + 496LL)
    && *(_QWORD *)this )
  {
    goto LABEL_153;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) != 0
    && *(_QWORD *)(v39 + 496)
    && *((_QWORD *)this + 1) )
  {
    *((_QWORD *)this + 8) = a3;
    *((_QWORD *)this + 7) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 32LL);
    if ( !bCopySurface(
            (DEVLOCKBLTOBJ *)((char *)this + 40),
            (struct _SURFOBJ *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 24LL)) )
    {
      v82 = *((_QWORD *)this + 5);
      if ( v82 )
      {
        DEC_SHARE_REF_CNT(v82);
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
    v39 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    if ( v39 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v39);
      GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
      *((_QWORD *)this + 2) = 0LL;
    }
  }
LABEL_217:
  v83 = *((_DWORD *)this + 18);
  if ( (v83 & 0x1000) == 0 && (v83 & 0x800000) == 0 )
    return 1LL;
  v84 = *v6;
  if ( *v6 )
    goto LABEL_240;
  LOBYTE(v39) = 1;
  v85 = (DC *)HmgLockEx(**(_QWORD **)a2, v39, *((unsigned int *)this + 23));
  *v6 = v85;
  if ( v85 )
  {
    if ( *((_DWORD *)this + 23) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v85 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_225:
        _InterlockedDecrement((volatile signed __int32 *)v85 + 3);
        *v6 = 0LL;
        goto LABEL_241;
      }
      v86 = *((_DWORD *)v85 + 524);
      if ( v86 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v85 = *v6;
        goto LABEL_225;
      }
    }
    if ( (*((_DWORD *)*v6 + 11) & 2) == 0 )
    {
      if ( !(unsigned int)XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 80)) )
      {
        v87 = 0;
LABEL_231:
        v88 = *v6;
        if ( !v87 )
        {
          _InterlockedDecrement((volatile signed __int32 *)v88 + 3);
          *v6 = 0LL;
          goto LABEL_241;
        }
        if ( (*((_DWORD *)v88 + 130) & 4) != 0 )
          DC::vMarkTransformDirty(v88);
        goto LABEL_238;
      }
      *((_DWORD *)*v6 + 11) |= 2u;
      *((_DWORD *)this + 22) = 1;
    }
    v87 = 1;
    goto LABEL_231;
  }
  if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    PsGetWin32KFilterSet();
LABEL_238:
  v84 = *v6;
  if ( !*v6 )
    goto LABEL_241;
  *((_BYTE *)this + 97) = 0;
LABEL_240:
  *((_DWORD *)v84 + 10) |= 2u;
  *((_BYTE *)this + 96) = 1;
LABEL_241:
  if ( **(_QWORD **)a3 == **(_QWORD **)a2 )
    return 1LL;
  v89 = *((_QWORD *)this + 13);
  if ( v89 )
  {
LABEL_263:
    *(_DWORD *)(v89 + 40) |= 2u;
    *((_BYTE *)this + 120) = 1;
    return 1LL;
  }
  LOBYTE(v39) = 1;
  v90 = HmgLockEx(**(_QWORD **)a3, v39, *((unsigned int *)this + 29));
  *((_QWORD *)this + 13) = v90;
  if ( !v90 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_261;
  }
  if ( *((_DWORD *)this + 29) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v90 + 48) + 40LL) & 0x8000) == 0 )
    {
LABEL_248:
      _InterlockedDecrement((volatile signed __int32 *)(v90 + 12));
      result = 1LL;
      *((_QWORD *)this + 13) = 0LL;
      return result;
    }
    v91 = *(_DWORD *)(v90 + 2096);
    if ( v91 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v90 = *((_QWORD *)this + 13);
      goto LABEL_248;
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 13) + 44LL) & 2) != 0 )
    goto LABEL_253;
  if ( (unsigned int)XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 104)) )
  {
    *(_DWORD *)(*((_QWORD *)this + 13) + 44LL) |= 2u;
    *((_DWORD *)this + 28) = 1;
LABEL_253:
    v92 = 1;
    goto LABEL_254;
  }
  v92 = 0;
LABEL_254:
  v93 = *((_QWORD *)this + 13);
  if ( !v92 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v93 + 12));
    result = 1LL;
    *((_QWORD *)this + 13) = 0LL;
    return result;
  }
  if ( (*(_DWORD *)(v93 + 520) & 4) != 0 )
    DC::vMarkTransformDirty((DC *)v93);
LABEL_261:
  v89 = *((_QWORD *)this + 13);
  if ( v89 )
  {
    *((_BYTE *)this + 121) = 0;
    goto LABEL_263;
  }
  return 1LL;
}
