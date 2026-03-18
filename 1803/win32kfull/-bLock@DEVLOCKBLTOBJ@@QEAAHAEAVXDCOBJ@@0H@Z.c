/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0099850
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0095810 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00AD8D4 (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C0118C30 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C025E594 (GrePlgBlt.c)
 * Callees:
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C008BC3C (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C008FBB0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C009AD68 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C009AE88 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C009B400 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00E4D40 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C023BC78 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C023FD80 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C026B01C (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, struct XDCOBJ *a3)
{
  __int64 v6; // rdx
  DC *v7; // rcx
  XDCOBJ *v8; // rdi
  char *v9; // r14
  int v10; // ebx
  int v11; // ebp
  __int64 v12; // r10
  __int64 v13; // r9
  int v14; // r8d
  int v15; // edx
  bool v16; // zf
  unsigned int v17; // r15d
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  DC *v28; // r8
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  struct _KTHREAD *v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rax
  int v35; // eax
  int v36; // edx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct _KTHREAD *v40; // rbx
  __int64 *v41; // rax
  __int64 v42; // rbx
  DC *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct _KTHREAD *v46; // rbx
  __int64 *v47; // rax
  __int64 v48; // rax
  int v49; // r8d
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  int v53; // ebp
  DC *v54; // rdx
  int v55; // r8d
  DC *v56; // rcx
  __int64 v57; // rcx
  int v58; // eax
  __int64 *v59; // rdx
  int v60; // ecx
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // edi
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69; // r9d
  __int64 v70; // rax
  DC *v71; // rcx
  __int64 v72; // rbx
  unsigned int v73; // eax
  unsigned int v74; // edi
  __int64 v75; // rax
  bool v77; // zf
  __int64 v78; // rbx
  __int64 v79; // rax
  int v80; // edi
  int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // r8
  int v85; // r9d
  __int64 v86; // rax
  DC *v87; // rcx
  __int64 v88; // rbx
  unsigned int v89; // eax
  unsigned int v90; // edi
  int v91; // ecx
  char *v92; // rbx
  __int64 v93; // rdx
  int v94; // r8d
  DC *v95; // rcx
  __int64 v96; // rcx
  int v97; // eax
  int v98; // eax
  _QWORD *v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rdx
  int v102; // eax
  signed __int32 v103[22]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v104; // [rsp+60h] [rbp+8h] BYREF
  __int64 v105; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = **(_QWORD **)a2;
  *((_QWORD *)this + 20) = **(_QWORD **)a3;
  if ( !TrapAppContainerRenderingWorker(a2, (HSURF *)this + 16, (HSURF *)this + 15, (unsigned int *)this + 19)
    || !TrapAppContainerRenderingWorker(a3, (HSURF *)this + 19, (HSURF *)this + 18, 0LL) )
  {
    return 0LL;
  }
  v8 = (DEVLOCKBLTOBJ *)((char *)this + 96);
  v9 = (char *)this + 80;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v10 = 1;
  v11 = 0;
  if ( *(_QWORD *)a3 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0
    || *(_QWORD *)a2 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
  {
    *((_QWORD *)this + 2) = ghsemDynamicModeChange;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    *((_DWORD *)this + 18) |= 8u;
    if ( !(unsigned int)((__int64 (*)(void))GreGetLockCount)()
      && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
    {
      GreAcquireSemaphoreSharedInternal(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
      v11 = 1;
    }
    v12 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
      goto LABEL_25;
    v13 = *(_QWORD *)a2;
    if ( !*(_QWORD *)a2 )
    {
LABEL_24:
      v104 = *(_QWORD *)(v12 + 48);
      v10 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v104);
LABEL_25:
      if ( *(_QWORD *)a2 )
      {
        v105 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
        v10 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v105);
      }
      goto LABEL_27;
    }
    v14 = *(_DWORD *)(v12 + 36);
    v15 = *(_DWORD *)(v13 + 36);
    if ( ((v15 ^ v14) & 0x200) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v12 + 80) + 12LL) & 1) != 0 && (v15 & 0x8000) != 0 )
        goto LABEL_22;
      if ( (*(_DWORD *)(*(_QWORD *)(v13 + 80) + 12LL) & 1) == 0 )
      {
LABEL_23:
        v10 = 0;
        goto LABEL_24;
      }
      v16 = (v14 & 0x8000) == 0;
    }
    else
    {
      if ( (v14 & 0x200) == 0 || (v15 & 0x200) == 0 || (v14 & 0x8000) == 0 )
        goto LABEL_23;
      v16 = (*(_DWORD *)(v13 + 36) & 0x8000) == 0;
    }
    if ( !v16 )
    {
LABEL_22:
      v10 = 1;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
LABEL_27:
  v17 = 2;
  v18 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
  if ( (v18 & 0x200) != 0 )
  {
    if ( (v18 & 0x8000) == 0 || !v10 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
      *((_QWORD *)this + 1) = v19;
      *((_QWORD *)this + 4) = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
      v20 = v19;
      if ( v11 && v19 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v20 = *((_QWORD *)this + 1);
        v11 = 0;
      }
      GreAcquireSemaphore(v20);
      v21 = *((_QWORD *)this + 1);
      v22 = 2LL;
      if ( v21 != ghsemGreLock )
        v22 = 11LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemSrc", v21, v22);
    }
    if ( (!*(_QWORD *)a2 || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0)
      && !(unsigned int)((__int64 (*)(void))GreGetLockCount)() )
    {
      *((_DWORD *)this + 18) |= 0x1000u;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v23) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v26 = *ThreadWin32Thread;
          if ( v26 )
          {
            *(_QWORD *)(v26 + 320) = 0LL;
            *(_QWORD *)(v26 + 312) = 0LL;
          }
        }
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
      v8 = (DEVLOCKBLTOBJ *)((char *)this + 96);
    }
    v6 = *(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x5000;
    if ( (_DWORD)v6 == 4096 )
      goto LABEL_64;
  }
  v27 = *(_QWORD *)a2;
  v28 = *(DC **)a2;
  if ( *(_QWORD *)a2 )
  {
    v7 = (DC *)*(unsigned int *)(v27 + 36);
    if ( ((unsigned __int16)v7 & 0x200) != 0 )
    {
      if ( ((unsigned __int16)v7 & 0x8000) == 0 || !v10 )
      {
        v29 = *(_QWORD *)(v27 + 64);
        *(_QWORD *)this = v29;
        *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
        v30 = v29;
        if ( v11 && v29 == ghsemGreLock )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
          v30 = *(_QWORD *)this;
          v11 = 0;
        }
        GreAcquireSemaphore(v30);
        if ( *(_QWORD *)this != ghsemGreLock )
          v17 = 11;
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v17);
        v6 = *((unsigned int *)this + 18);
        if ( (v6 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
        {
          LODWORD(v6) = v6 | 0x200;
          *((_DWORD *)this + 18) = v6;
        }
      }
      if ( !(unsigned int)GreGetLockCount(v7, v6, v28) )
      {
        *((_DWORD *)this + 18) |= 0x1000u;
        v32 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v31) )
        {
          v33 = (__int64 *)PsGetThreadWin32Thread(v32);
          if ( v33 )
          {
            v34 = *v33;
            if ( v34 )
            {
              *(_QWORD *)(v34 + 320) = 0LL;
              *(_QWORD *)(v34 + 312) = 0LL;
            }
          }
        }
        GreIncLockCount();
        GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
      }
      v28 = *(DC **)a2;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x5000) == 0x1000 )
      {
LABEL_64:
        v35 = *((_DWORD *)this + 18);
        if ( (v35 & 0x1000) != 0 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
          GreReleaseSemaphoreInternal(ghsemDCVisRgn);
          v35 = *((_DWORD *)this + 18);
        }
        *((_DWORD *)this + 18) = v35 & 0xFFFFFFFE;
LABEL_90:
        if ( v11 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
        }
        return 0LL;
      }
    }
  }
  if ( v28 )
  {
    v7 = (DC *)*((unsigned int *)this + 18);
    if ( ((unsigned __int16)v7 & 0x1000) != 0 && (*((_DWORD *)v28 + 9) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        LODWORD(v7) = *((_DWORD *)this + 18);
      }
      *((_DWORD *)this + 18) = (unsigned int)v7 & 0xFFFFFFFE;
      goto LABEL_90;
    }
  }
  v36 = *((_DWORD *)this + 18);
  if ( (v36 & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      v36 = *((_DWORD *)this + 18);
    }
    *((_DWORD *)this + 18) = v36 & 0xFFFFFFFE;
    goto LABEL_90;
  }
  if ( v28
    && ((*((_DWORD *)this + 18) & 0x1000) != 0 || (*((_DWORD *)v28 + 9) & 0x200) == 0)
    && (*((_DWORD *)v28 + 9) & 0x10) != 0
    && !DC::bCompute(v28)
    || ((*((_DWORD *)this + 18) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
    && (v7 = *(DC **)a3, (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x10) != 0)
    && !DC::bCompute(v7) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    }
    *((_DWORD *)this + 18) &= ~1u;
    goto LABEL_90;
  }
  v37 = *(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 18) & 0x1000) == 0 )
      goto LABEL_118;
    if ( (_DWORD)v37 )
    {
      if ( *((_QWORD *)this + 15) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(*(DC **)a2);
      v40 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v39, v38) )
      {
        v41 = (__int64 *)PsGetThreadWin32Thread(v40);
        if ( v41 )
        {
          v42 = *v41;
          if ( *v41 )
          {
            *(_QWORD *)(v42 + 312) = v9;
            if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
            {
              *(_BYTE *)(v42 + 328) = 1;
              *(_QWORD *)(*(_QWORD *)a2 + 2368LL) = 0LL;
              GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
              *(_DWORD *)(v42 + 336) = giVisRgnUniqueness;
              EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
              GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
            }
          }
        }
      }
    }
    v43 = *(DC **)a3;
    if ( **(_QWORD **)a3 != **(_QWORD **)a2 && (*((_DWORD *)v43 + 9) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 18) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(v43);
      v46 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v45, v44) )
      {
        v47 = (__int64 *)PsGetThreadWin32Thread(v46);
        if ( v47 )
        {
          v48 = *v47;
          if ( v48 )
            *(_QWORD *)(v48 + 320) = a3;
        }
      }
    }
  }
  else if ( !(unsigned int)GreGetLockCount(v7, v37, *(_QWORD *)a2) )
  {
    *((_DWORD *)this + 18) |= 0x800000u;
    GreIncLockCount();
  }
  if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  }
LABEL_118:
  if ( v11 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  v49 = *((_DWORD *)this + 18);
  if ( (v49 & 0x1000) != 0 )
  {
    if ( *(_QWORD *)a3 )
      v50 = *(_QWORD *)(*(_QWORD *)a3 + 504LL);
    else
      v50 = 0LL;
    v51 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
      v52 = *(_QWORD *)(v51 + 504);
    else
      v52 = 0LL;
    v53 = 0;
    if ( !v50 || !v52 || v50 == v52 )
    {
      if ( !v51 )
        goto LABEL_248;
      v98 = DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 1);
      v99 = *(_QWORD **)a2;
      if ( !v98 )
        v53 = 1;
      if ( !v99 || *v99 != **(_QWORD **)a3 )
      {
LABEL_248:
        v77 = (unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v49, 0) == 0;
LABEL_249:
        if ( v77 )
          goto LABEL_175;
      }
LABEL_250:
      if ( v53
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 40LL) & 0x8000) != 0
        && *(_QWORD *)(*(_QWORD *)a2 + 504LL)
        && *(_QWORD *)this )
      {
        goto LABEL_175;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) != 0
        && *(_QWORD *)(*(_QWORD *)a3 + 504LL)
        && *((_QWORD *)this + 1) )
      {
        *((_QWORD *)this + 8) = a3;
        *((_QWORD *)this + 7) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 504LL) + 32LL);
        if ( !bCopySurface(
                (DEVLOCKBLTOBJ *)((char *)this + 40),
                (struct _SURFOBJ *)(*(_QWORD *)(*(_QWORD *)a3 + 504LL) + 24LL)) )
        {
          v100 = *((_QWORD *)this + 5);
          if ( v100 )
          {
            DEC_SHARE_REF_CNT(v100);
            bDeleteSurface(*(_QWORD *)(*((_QWORD *)this + 5) + 32LL));
            *((_QWORD *)this + 5) = 0LL;
          }
          *((_QWORD *)this + 7) = 0LL;
          *((_QWORD *)this + 8) = 0LL;
          goto LABEL_175;
        }
        hbmSelectBitmap(**(_QWORD **)a3, *(_QWORD *)(*((_QWORD *)this + 5) + 32LL), 1LL, 0LL);
        EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)this + 1));
        GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
        v101 = *((_QWORD *)this + 2);
        *((_QWORD *)this + 1) = 0LL;
        *((_QWORD *)this + 4) = 0LL;
        if ( v101 )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v101);
          GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
          *((_QWORD *)this + 2) = 0LL;
        }
      }
      goto LABEL_263;
    }
    if ( v50 < v52 )
    {
      *((_DWORD *)this + 18) = v49 | 0x8000;
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
      {
        XDCOBJ::vLock(v8, **(HDC **)a3);
        if ( *(_QWORD *)v8 )
        {
          v54 = *(DC **)v8;
          v55 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
          if ( (v55 & 1) != 0 && (v55 & 0x4000) == 0 && *((_QWORD *)this + 14) && !*((_QWORD *)this + 18) )
          {
            *(_DWORD *)(*(_QWORD *)v8 + 36LL) |= 0x4000u;
            v56 = *(DC **)v8;
            *((_QWORD *)v56 + 63) = *((_QWORD *)this + 14);
            DC::vInheritSurfaceDpiScale(v56);
            *((_DWORD *)this + 18) |= 0x20u;
            v54 = *(DC **)v8;
          }
          if ( v54 )
          {
            if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
            {
              v57 = *((_QWORD *)v54 + 63);
              if ( v57 )
              {
                v58 = SURFACE::Map(v57, this);
                if ( v58 == 2 )
                {
                  v53 = 1;
                  *(_DWORD *)(*(_QWORD *)v8 + 44LL) |= 1u;
                }
                else if ( v58 == 1 )
                {
                  *((_DWORD *)this + 18) |= 0x80u;
                }
              }
            }
          }
LABEL_148:
          _InterlockedOr(v103, 0);
          v59 = *(__int64 **)a2;
          v60 = 1;
          if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0 )
          {
LABEL_187:
            *(_QWORD *)v9 = 0LL;
            v77 = v60 == 0;
            goto LABEL_249;
          }
          v61 = v59[6];
          v62 = *v59;
          LOBYTE(v59) = 1;
          v63 = HmgLockEx(v62, v59);
          *(_QWORD *)v9 = v63;
          if ( !v63 )
          {
            if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
              PsGetWin32KFilterSet();
            goto LABEL_162;
          }
          if ( *((_DWORD *)this + 23) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v63 + 48) + 40LL) & 0x8000) == 0 )
            {
LABEL_154:
              _InterlockedDecrement((volatile signed __int32 *)(v63 + 12));
              *(_QWORD *)v9 = 0LL;
LABEL_162:
              v67 = *(_QWORD *)(v61 + 1400);
              if ( *(_QWORD *)v9 )
              {
                v68 = *(_QWORD *)v9;
                v69 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
                if ( (v69 & 1) != 0 && (v69 & 0x4000) == 0 && v67 && !*((_QWORD *)this + 15) )
                {
                  *(_DWORD *)(*(_QWORD *)v9 + 36LL) |= 0x4000u;
                  v70 = SURFOBJ_TO_SURFACE_NOT_NULL(v67);
                  v71 = *(DC **)v9;
                  *((_QWORD *)v71 + 63) = v70;
                  DC::vInheritSurfaceDpiScale(v71);
                  *((_DWORD *)this + 18) |= 0x10u;
                  v68 = *(_QWORD *)v9;
                }
                if ( v68 )
                {
                  if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
                  {
                    v72 = *(_QWORD *)(v68 + 504);
                    if ( v72 )
                    {
                      v73 = SURFACE::Map(*(_QWORD *)(v68 + 504), this);
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
                        v75 = *(_QWORD *)v9;
LABEL_174:
                        *(_DWORD *)(v75 + 44) |= 1u;
LABEL_175:
                        *((_DWORD *)this + 18) &= ~1u;
                        return 0LL;
                      }
                    }
                  }
                }
                goto LABEL_250;
              }
              v60 = 0;
              goto LABEL_187;
            }
            v64 = *(_DWORD *)(v63 + 2504);
            if ( v64 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
            {
              v63 = *(_QWORD *)v9;
              goto LABEL_154;
            }
          }
          v65 = XDCOBJ::bSaveAttributes((DEVLOCKBLTOBJ *)((char *)this + 80));
          v66 = *(_QWORD *)v9;
          if ( v65 )
          {
            if ( (*(_DWORD *)(v66 + 528) & 4) != 0 )
              DC::vMarkTransformDirty((DC *)v66);
          }
          else
          {
            _InterlockedDecrement((volatile signed __int32 *)(v66 + 12));
            *(_QWORD *)v9 = 0LL;
          }
          goto LABEL_162;
        }
        v53 = 1;
      }
      *(_QWORD *)v8 = 0LL;
      goto LABEL_148;
    }
    if ( (*(_DWORD *)(v51 + 36) & 0x200) == 0 )
      goto LABEL_225;
    v78 = *(_QWORD *)(v51 + 48);
    LOBYTE(v50) = 1;
    v79 = HmgLockEx(*(_QWORD *)v51, v50);
    *(_QWORD *)v9 = v79;
    if ( !v79 )
    {
      if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
        PsGetWin32KFilterSet();
      goto LABEL_202;
    }
    if ( *((_DWORD *)this + 23) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v79 + 48) + 40LL) & 0x8000) == 0 )
      {
LABEL_194:
        _InterlockedDecrement((volatile signed __int32 *)(v79 + 12));
        *(_QWORD *)v9 = 0LL;
LABEL_202:
        v83 = *(_QWORD *)(v78 + 1400);
        if ( *(_QWORD *)v9 )
        {
          v84 = *(_QWORD *)v9;
          v85 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
          if ( (v85 & 1) != 0 && (v85 & 0x4000) == 0 && v83 && !*((_QWORD *)this + 15) )
          {
            *(_DWORD *)(*(_QWORD *)v9 + 36LL) |= 0x4000u;
            v86 = SURFOBJ_TO_SURFACE_NOT_NULL(v83);
            v87 = *(DC **)v9;
            *((_QWORD *)v87 + 63) = v86;
            DC::vInheritSurfaceDpiScale(v87);
            *((_DWORD *)this + 18) |= 0x10u;
            v84 = *(_QWORD *)v9;
          }
          if ( v84 )
          {
            if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
            {
              v88 = *(_QWORD *)(v84 + 504);
              if ( v88 )
              {
                v89 = SURFACE::Map(*(_QWORD *)(v84 + 504), this);
                v90 = v89;
                if ( v89 <= 1 )
                {
                  if ( (*(_DWORD *)(v88 + 112) & 0x800) != 0
                    && *(_QWORD *)(v88 + 248)
                    && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 80)) )
                  {
                    *((_DWORD *)this + 18) |= 0x400u;
                  }
                  if ( (*(_DWORD *)(v88 + 112) & 0x10) != 0
                    && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 80)) )
                  {
                    *((_DWORD *)this + 18) |= 0x2000u;
                  }
                  if ( v90 == 1 )
                    *((_DWORD *)this + 18) |= 0x40u;
                }
                else if ( v89 == 2 )
                {
                  v53 = 1;
                  *(_DWORD *)(*(_QWORD *)v9 + 44LL) |= 1u;
                }
              }
            }
          }
          goto LABEL_226;
        }
        v53 = 1;
LABEL_225:
        *(_QWORD *)v9 = 0LL;
LABEL_226:
        _InterlockedOr(v103, 0);
        v91 = 1;
        v92 = (char *)this + 96;
        if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
        {
          XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 96), **(HDC **)a3);
          if ( *(_QWORD *)v92 )
          {
            v93 = *(_QWORD *)v92;
            v94 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
            if ( (v94 & 1) != 0 && (v94 & 0x4000) == 0 && *((_QWORD *)this + 14) && !*((_QWORD *)this + 18) )
            {
              *(_DWORD *)(*(_QWORD *)v92 + 36LL) |= 0x4000u;
              v95 = *(DC **)v92;
              *((_QWORD *)v95 + 63) = *((_QWORD *)this + 14);
              DC::vInheritSurfaceDpiScale(v95);
              *((_DWORD *)this + 18) |= 0x20u;
              v93 = *(_QWORD *)v92;
            }
            if ( v93 )
            {
              if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
              {
                v96 = *(_QWORD *)(v93 + 504);
                if ( v96 )
                {
                  v97 = SURFACE::Map(v96, this);
                  if ( v97 == 2 )
                  {
                    v75 = *(_QWORD *)v92;
                    goto LABEL_174;
                  }
                  if ( v97 == 1 )
                    *((_DWORD *)this + 18) |= 0x80u;
                }
              }
            }
            goto LABEL_250;
          }
          v91 = 0;
        }
        *(_QWORD *)v92 = 0LL;
        if ( !v91 )
          goto LABEL_175;
        goto LABEL_250;
      }
      v80 = *(_DWORD *)(v79 + 2504);
      if ( v80 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v79 = *(_QWORD *)v9;
        goto LABEL_194;
      }
    }
    v81 = XDCOBJ::bSaveAttributes((DEVLOCKBLTOBJ *)((char *)this + 80));
    v82 = *(_QWORD *)v9;
    if ( v81 )
    {
      if ( (*(_DWORD *)(v82 + 528) & 4) != 0 )
        DC::vMarkTransformDirty((DC *)v82);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(v82 + 12));
      *(_QWORD *)v9 = 0LL;
    }
    goto LABEL_202;
  }
LABEL_263:
  v102 = *((_DWORD *)this + 18);
  if ( (v102 & 0x1000) != 0 || (v102 & 0x800000) != 0 )
  {
    if ( *(_QWORD *)a2 )
      *(_DWORD *)(*(_QWORD *)a2 + 40LL) |= 2u;
    if ( *(_QWORD *)a3 )
      *(_DWORD *)(*(_QWORD *)a3 + 40LL) |= 2u;
  }
  return 1LL;
}
