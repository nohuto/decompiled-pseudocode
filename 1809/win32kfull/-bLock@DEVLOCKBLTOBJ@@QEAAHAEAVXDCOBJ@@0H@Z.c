/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0064590
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C014E240 (NtGdiTransparentBlt.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z @ 0x1C026FAD0 (--0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0065580 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00A0468 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00E340C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00E4324 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C01272C4 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0251544 (-pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C02573E4 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C0257550 (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C0257584 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C027EFFC (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, struct XDCOBJ *a3)
{
  __int64 v6; // rdx
  DC *v7; // rcx
  DC **v8; // r15
  int v9; // esi
  DC **v10; // r13
  int v11; // ebx
  __int64 v12; // r10
  __int64 v13; // r9
  int v14; // r8d
  int v15; // edx
  bool v16; // zf
  unsigned int v17; // ebp
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rax
  DC *v25; // r8
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  int v30; // edx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rbx
  DC *v35; // rcx
  __int64 v36; // rax
  int v37; // r8d
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  int v41; // esi
  DC *v42; // rdx
  int v43; // r8d
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rdx
  int v47; // ecx
  __int64 v48; // rbx
  __int64 v49; // rcx
  DC *v50; // r8
  int v51; // r9d
  struct SURFACE *v52; // rax
  __int64 v53; // rbx
  unsigned int v54; // eax
  unsigned int v55; // ebp
  bool v56; // zf
  __int64 v57; // rbx
  __int64 v58; // rcx
  DC *v59; // r8
  int v60; // r9d
  struct SURFACE *v61; // rax
  __int64 v62; // rbx
  unsigned int v63; // eax
  unsigned int v64; // esi
  int v65; // ecx
  DC *v66; // rdx
  int v67; // r8d
  __int64 v68; // rcx
  int v69; // eax
  int v70; // eax
  _QWORD *v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rax
  struct _SURFOBJ *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rdx
  int v78; // eax
  signed __int32 v79[8]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v80[32]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v81; // [rsp+40h] [rbp-48h]
  __int64 v82; // [rsp+90h] [rbp+8h] BYREF
  __int64 v83; // [rsp+98h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 1;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = **(_QWORD **)a2;
  *((_QWORD *)this + 33) = **(_QWORD **)a3;
  if ( !TrapAppContainerRenderingWorker(a2, (HSURF *)this + 29, (HSURF *)this + 28, (unsigned int *)this + 29)
    || !TrapAppContainerRenderingWorker(a3, (HSURF *)this + 32, (HSURF *)this + 31, 0LL) )
  {
    return 0LL;
  }
  v8 = (DC **)((char *)this + 120);
  v9 = 0;
  v10 = (DC **)((char *)this + 168);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  v11 = 1;
  if ( *(_QWORD *)a3 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0
    || *(_QWORD *)a2 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
  {
    *((_QWORD *)this + 2) = ghsemDynamicModeChange;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    *((_DWORD *)this + 28) |= 8u;
    if ( !(unsigned int)((__int64 (*)(void))GreGetLockCount)()
      && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
    {
      GreAcquireSemaphoreSharedInternal(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
      v9 = 1;
    }
    v12 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
      goto LABEL_25;
    v13 = *(_QWORD *)a2;
    if ( !*(_QWORD *)a2 )
    {
LABEL_24:
      v82 = *(_QWORD *)(v12 + 48);
      v11 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v82);
LABEL_25:
      if ( *(_QWORD *)a2 )
      {
        v83 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
        v11 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v83);
      }
      goto LABEL_27;
    }
    v14 = *(_DWORD *)(v12 + 36);
    v15 = *(_DWORD *)(v13 + 36);
    if ( ((v15 ^ v14) & 0x200) != 0 )
    {
      if ( (**(_DWORD **)(v12 + 976) & 1) != 0 && (v15 & 0x8000) != 0 )
        goto LABEL_22;
      if ( (**(_DWORD **)(v13 + 976) & 1) == 0 )
      {
LABEL_23:
        v11 = 0;
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
      v11 = 1;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
LABEL_27:
  v17 = 2;
  v18 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
  if ( (v18 & 0x200) != 0 )
  {
    if ( (v18 & 0x8000) == 0 || !v11 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
      *((_QWORD *)this + 1) = v19;
      *((_QWORD *)this + 4) = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
      v20 = v19;
      if ( v9 && v19 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v20 = *((_QWORD *)this + 1);
        v9 = 0;
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
      *((_DWORD *)this + 28) |= 0x1000u;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
      {
        *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
        *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    }
    v6 = *(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x5000;
    if ( (_DWORD)v6 == 4096 )
      goto LABEL_60;
  }
  v24 = *(_QWORD *)a2;
  v25 = *(DC **)a2;
  if ( *(_QWORD *)a2 )
  {
    v7 = (DC *)*(unsigned int *)(v24 + 36);
    if ( ((unsigned __int16)v7 & 0x200) != 0 )
    {
      if ( ((unsigned __int16)v7 & 0x8000) == 0 || !v11 )
      {
        v26 = *(_QWORD *)(v24 + 64);
        *(_QWORD *)this = v26;
        *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
        v27 = v26;
        if ( v9 && v26 == ghsemGreLock )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
          v27 = *(_QWORD *)this;
          v9 = 0;
        }
        GreAcquireSemaphore(v27);
        if ( *(_QWORD *)this != ghsemGreLock )
          v17 = 11;
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v17);
        v6 = *((unsigned int *)this + 28);
        if ( (v6 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
        {
          LODWORD(v6) = v6 | 0x200;
          *((_DWORD *)this + 28) = v6;
        }
      }
      if ( !(unsigned int)GreGetLockCount(v7, v6, v25) )
      {
        *((_DWORD *)this + 28) |= 0x1000u;
        v28 = W32GetThreadWin32Thread(KeGetCurrentThread());
        if ( v28 )
        {
          *(_QWORD *)(v28 + 320) = 0LL;
          *(_QWORD *)(v28 + 312) = 0LL;
        }
        GreIncLockCount();
        GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
      }
      v25 = *(DC **)a2;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x5000) == 0x1000 )
      {
LABEL_60:
        v29 = *((_DWORD *)this + 28);
        if ( (v29 & 0x1000) != 0 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
          GreReleaseSemaphoreInternal(ghsemDCVisRgn);
          v29 = *((_DWORD *)this + 28);
        }
        *((_DWORD *)this + 28) = v29 & 0xFFFFFFFE;
LABEL_86:
        if ( v9 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
        }
        return 0LL;
      }
    }
  }
  if ( v25 )
  {
    v7 = (DC *)*((unsigned int *)this + 28);
    if ( ((unsigned __int16)v7 & 0x1000) != 0 && (*((_DWORD *)v25 + 9) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        LODWORD(v7) = *((_DWORD *)this + 28);
      }
      *((_DWORD *)this + 28) = (unsigned int)v7 & 0xFFFFFFFE;
      goto LABEL_86;
    }
  }
  v30 = *((_DWORD *)this + 28);
  if ( (v30 & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      v30 = *((_DWORD *)this + 28);
    }
    *((_DWORD *)this + 28) = v30 & 0xFFFFFFFE;
    goto LABEL_86;
  }
  if ( v25
    && ((*((_DWORD *)this + 28) & 0x1000) != 0 || (*((_DWORD *)v25 + 9) & 0x200) == 0)
    && (*((_DWORD *)v25 + 9) & 0x10) != 0
    && !DC::bCompute(v25)
    || ((*((_DWORD *)this + 28) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
    && (v7 = *(DC **)a3, (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x10) != 0)
    && !DC::bCompute(v7) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    }
    *((_DWORD *)this + 28) &= ~1u;
    goto LABEL_86;
  }
  v32 = *(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
      goto LABEL_111;
    if ( (_DWORD)v32 )
    {
      if ( *((_QWORD *)this + 28) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(*(DC **)a2);
      v33 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v34 = v33;
      if ( v33 )
      {
        *(_QWORD *)(v33 + 312) = v8;
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
        {
          *(_BYTE *)(v33 + 328) = 1;
          *(_QWORD *)(*(_QWORD *)a2 + 1984LL) = 0LL;
          GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
          *(_DWORD *)(v34 + 336) = giVisRgnUniqueness;
          EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
          GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
        }
      }
    }
    v35 = *(DC **)a3;
    if ( **(_QWORD **)a3 != **(_QWORD **)a2 && (*((_DWORD *)v35 + 9) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 31) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(v35);
      v36 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( v36 )
        *(_QWORD *)(v36 + 320) = a3;
    }
  }
  else if ( !(unsigned int)GreGetLockCount(v7, v32, *(_QWORD *)a2) )
  {
    *((_DWORD *)this + 28) |= 0x800000u;
    GreIncLockCount();
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  }
LABEL_111:
  if ( v9 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  v37 = *((_DWORD *)this + 28);
  if ( (v37 & 0x1000) == 0 )
    goto LABEL_232;
  if ( *(_QWORD *)a3 )
    v38 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
  else
    v38 = 0LL;
  v39 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    v40 = *(_QWORD *)(v39 + 496);
  else
    v40 = 0LL;
  v41 = 0;
  if ( v38 && v40 && v38 != v40 )
  {
    if ( v38 < v40 )
    {
      *((_DWORD *)this + 28) = v37 | 0x8000;
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
      {
        XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 168), **(HDC **)a3);
        if ( *v10 )
        {
          v42 = *v10;
          v43 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
          if ( (v43 & 1) != 0 && (v43 & 0x4000) == 0 && *((_QWORD *)this + 27) && !*((_QWORD *)this + 31) )
          {
            *((_DWORD *)*v10 + 9) |= 0x4000u;
            DC::pSurface(*v10, *((struct SURFACE **)this + 27));
            *((_DWORD *)this + 28) |= 0x20u;
            v42 = *v10;
          }
          if ( v42 )
          {
            if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
            {
              v44 = *((_QWORD *)v42 + 62);
              if ( v44 )
              {
                v45 = SURFACE::Map(v44, this, 0LL);
                if ( v45 == 2 )
                {
                  v41 = 1;
                  *((_DWORD *)*v10 + 11) |= 1u;
                }
                else if ( v45 == 1 )
                {
                  *((_DWORD *)this + 28) |= 0x80u;
                }
              }
            }
          }
          goto LABEL_140;
        }
        v41 = 1;
      }
      *v10 = 0LL;
LABEL_140:
      _InterlockedOr(v79, 0);
      v46 = *(_QWORD *)a2;
      v47 = 1;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
      {
        v48 = *(_QWORD *)(v46 + 48);
        XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)v46);
        v49 = *(_QWORD *)(v48 + 1408);
        if ( *v8 )
        {
          v50 = *v8;
          v51 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
          if ( (v51 & 1) != 0 && (v51 & 0x4000) == 0 && v49 && !*((_QWORD *)this + 28) )
          {
            *((_DWORD *)*v8 + 9) |= 0x4000u;
            v52 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v49);
            DC::pSurface(*v8, v52);
            *((_DWORD *)this + 28) |= 0x10u;
            v50 = *v8;
          }
          if ( v50 )
          {
            if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
            {
              v53 = *((_QWORD *)v50 + 62);
              if ( v53 )
              {
                v54 = SURFACE::Map(*((_QWORD *)v50 + 62), this, v50);
                v55 = v54;
                if ( v54 <= 1 )
                {
                  if ( (*(_DWORD *)(v53 + 112) & 0x800) != 0
                    && *(_QWORD *)(v53 + 248)
                    && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120)) )
                  {
                    *((_DWORD *)this + 28) |= 0x400u;
                  }
                  if ( (*(_DWORD *)(v53 + 112) & 0x10) != 0
                    && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 120)) )
                  {
                    *((_DWORD *)this + 28) |= 0x2000u;
                  }
                  if ( v55 == 1 )
                    *((_DWORD *)this + 28) |= 0x40u;
                }
                else if ( v54 == 2 )
                {
                  *((_DWORD *)*v8 + 11) |= 1u;
LABEL_153:
                  *((_DWORD *)this + 28) &= ~1u;
                  return 0LL;
                }
              }
            }
          }
          goto LABEL_215;
        }
        v47 = 0;
      }
      *v8 = 0LL;
      v56 = v47 == 0;
      goto LABEL_214;
    }
    if ( (*(_DWORD *)(v39 + 36) & 0x200) != 0 )
    {
      v57 = *(_QWORD *)(v39 + 48);
      XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)v39);
      v58 = *(_QWORD *)(v57 + 1408);
      if ( *v8 )
      {
        v59 = *v8;
        v60 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
        if ( (v60 & 1) != 0 && (v60 & 0x4000) == 0 && v58 && !*((_QWORD *)this + 28) )
        {
          *((_DWORD *)*v8 + 9) |= 0x4000u;
          v61 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v58);
          DC::pSurface(*v8, v61);
          *((_DWORD *)this + 28) |= 0x10u;
          v59 = *v8;
        }
        if ( v59 )
        {
          if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
          {
            v62 = *((_QWORD *)v59 + 62);
            if ( v62 )
            {
              v63 = SURFACE::Map(*((_QWORD *)v59 + 62), this, v59);
              v64 = v63;
              if ( v63 <= 1 )
              {
                if ( (*(_DWORD *)(v62 + 112) & 0x800) != 0
                  && *(_QWORD *)(v62 + 248)
                  && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120)) )
                {
                  *((_DWORD *)this + 28) |= 0x400u;
                }
                if ( (*(_DWORD *)(v62 + 112) & 0x10) != 0
                  && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 120)) )
                {
                  *((_DWORD *)this + 28) |= 0x2000u;
                }
                if ( v64 == 1 )
                  *((_DWORD *)this + 28) |= 0x40u;
              }
              else if ( v63 == 2 )
              {
                v41 = 1;
                *((_DWORD *)*v8 + 11) |= 1u;
                goto LABEL_191;
              }
            }
          }
        }
        v41 = 0;
LABEL_191:
        _InterlockedOr(v79, 0);
        v65 = 1;
        if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
        {
          XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 168), **(HDC **)a3);
          if ( *v10 )
          {
            v66 = *v10;
            v67 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
            if ( (v67 & 1) != 0 && (v67 & 0x4000) == 0 && *((_QWORD *)this + 27) && !*((_QWORD *)this + 31) )
            {
              *((_DWORD *)*v10 + 9) |= 0x4000u;
              DC::pSurface(*v10, *((struct SURFACE **)this + 27));
              *((_DWORD *)this + 28) |= 0x20u;
              v66 = *v10;
            }
            if ( v66 )
            {
              if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
              {
                v68 = *((_QWORD *)v66 + 62);
                if ( v68 )
                {
                  v69 = SURFACE::Map(v68, this, 0LL);
                  if ( v69 == 2 )
                  {
                    *((_DWORD *)*v10 + 11) |= 1u;
                    *((_DWORD *)this + 28) &= ~1u;
                    return 0LL;
                  }
                  if ( v69 == 1 )
                    *((_DWORD *)this + 28) |= 0x80u;
                }
              }
            }
            goto LABEL_215;
          }
          v65 = 0;
        }
        *v10 = 0LL;
        if ( !v65 )
        {
          *((_DWORD *)this + 28) &= ~1u;
          return 0LL;
        }
        goto LABEL_215;
      }
      v41 = 1;
    }
    *v8 = 0LL;
    goto LABEL_191;
  }
  if ( !v39 )
    goto LABEL_213;
  v70 = DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 1);
  v71 = *(_QWORD **)a2;
  if ( !v70 )
    v41 = 1;
  if ( !v71 || *v71 != **(_QWORD **)a3 )
  {
LABEL_213:
    v56 = (unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v37, 0) == 0;
LABEL_214:
    if ( v56 )
      goto LABEL_153;
  }
LABEL_215:
  if ( v41
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 40LL) & 0x8000) != 0
    && *(_QWORD *)(*(_QWORD *)a2 + 496LL)
    && *(_QWORD *)this )
  {
    goto LABEL_153;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) != 0 )
  {
    v72 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
    if ( v72 )
    {
      if ( *((_QWORD *)this + 1) )
      {
        if ( !bCopySurface((DEVLOCKBLTOBJ *)((char *)this + 40), (struct _SURFOBJ *)(v72 + 24)) )
          goto LABEL_153;
        SURFREF::SURFREF((SURFREF *)v80, *(HSURF *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 32LL));
        if ( hbmSelectBitmap(**(_QWORD **)a3, *(_QWORD *)(*((_QWORD *)this + 5) + 32LL), 1LL, 0LL) )
        {
          v76 = v81;
          *((_QWORD *)this + 13) = a3;
          *((_QWORD *)this + 12) = *(_QWORD *)(v76 + 32);
          SURFREF::vKeepIt((SURFREF *)v80);
        }
        else
        {
          v73 = W32GetThreadWin32Thread(KeGetCurrentThread());
          if ( !v73 || *(_QWORD *)(v73 + 384) )
          {
            *((_DWORD *)this + 28) &= ~1u;
            SURFREF::~SURFREF((SURFREF *)v80);
            return 0LL;
          }
          v74 = SURFMEM::pSurfobj((DEVLOCKBLTOBJ *)((char *)this + 40));
          *(_QWORD *)(v75 + 384) = v74;
        }
        CAutoTGO::vGuard(
          (DEVLOCKBLTOBJ *)((char *)this + 56),
          this,
          (void (*)(void *))DEVLOCKBLTOBJ::TmpSrcThreadCleanup);
        EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)this + 1));
        GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
        v77 = *((_QWORD *)this + 2);
        *((_QWORD *)this + 1) = 0LL;
        *((_QWORD *)this + 4) = 0LL;
        if ( v77 )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v77);
          GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
          *((_QWORD *)this + 2) = 0LL;
        }
        SURFREF::~SURFREF((SURFREF *)v80);
      }
    }
  }
LABEL_232:
  v78 = *((_DWORD *)this + 28);
  if ( (v78 & 0x1000) != 0 || (v78 & 0x800000) != 0 )
  {
    if ( *(_QWORD *)a2 )
      *(_DWORD *)(*(_QWORD *)a2 + 40LL) |= 2u;
    if ( *(_QWORD *)a3 )
      *(_DWORD *)(*(_QWORD *)a3 + 40LL) |= 2u;
  }
  return 1LL;
}
