/*
 * XREFs of ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0024770
 * Callers:
 *     GreGetClipBox @ 0x1C001C680 (GreGetClipBox.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0025890 (-bCompute@DC@@QEAAHXZ.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     McTemplateK0pz @ 0x1C0108360 (McTemplateK0pz.c)
 */

__int64 __fastcall DEVLOCKOBJ::bLock(DEVLOCKOBJ *this, DC **a2, int a3)
{
  int v6; // eax
  __int64 v7; // r8
  int v8; // ebp
  PERESOURCE v9; // rcx
  __int64 ThreadWin32Thread; // rax
  struct _ERESOURCE *v11; // rsi
  __int64 v12; // r8
  PERESOURCE v13; // rcx
  DC *v14; // r9
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  PERESOURCE v22; // rcx
  int v23; // edx
  PERESOURCE v24; // rcx
  DC *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rsi
  int v30; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  PERESOURCE v34; // rcx
  struct _ERESOURCE *v35; // r8
  HSEMAPHORE v36; // rcx
  __int64 v37; // r8
  int v38; // edx
  struct _ERESOURCE *v39; // rcx
  struct _ERESOURCE *v40; // rcx

  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = *(_QWORD *)*a2;
  if ( !a3 )
  {
    if ( (int)IsTrapAppContainerRenderingSupported() < 0
      || (v6 = TrapAppContainerRenderingWrap(a2, (char *)this + 88, (char *)this + 80, (char *)this + 28), v6 != 1) )
    {
      LOBYTE(v6) = 0;
    }
    if ( !(_BYTE)v6 )
      return 0LL;
  }
  if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported() >= 0 )
    DEVLOCKOBJ_bPrepareTrgDcoWrap(this, 0LL);
  if ( a3 == 1 )
    *((_DWORD *)this + 6) |= 0x20000u;
  v8 = 0;
  if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
  {
    *((_QWORD *)this + 1) = ghsemDynamicModeChange;
    v9 = ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared();
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz(v9, &LockAcquireShared, v7, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
    *((_DWORD *)this + 6) |= 8u;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 104) )
    {
      v11 = ghsemGreLock;
      if ( !ExIsResourceAcquiredExclusiveLite(ghsemGreLock) && !ExIsResourceAcquiredSharedLite(v11) )
      {
        v13 = ghsemGreLock;
        if ( ghsemGreLock )
          ExEnterPriorityRegionAndAcquireResourceShared();
        if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz(v13, &LockAcquireShared, v12, ghsemGreLock, L"ghsemGreLock");
        v8 = 1;
      }
    }
    v14 = *a2;
    v15 = *((_QWORD *)*a2 + 6);
    if ( (**((_DWORD **)*a2 + 122) & 1) == 0 && (*((_DWORD *)v14 + 9) & 0x8000) == 0
      || (v16 = *(_DWORD *)(v15 + 40), (v16 & 1) == 0)
      || (v16 & 0x1000000) != 0
      || *(_DWORD *)(v15 + 2612) != 5
      && (v16 & 0x20000) == 0
      && ((v17 = *(_QWORD *)(v15 + 2576), ((v17 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0)
       || (*(_DWORD *)(v17 + 160) & 0x800000) == 0)
      || (*(_DWORD *)(v15 + 2128) & 0x400) != 0
      || (v16 & 0x48000000) != 0
      || (*(_DWORD *)(v15 + 1824) & 0x8000000) != 0
      || (*(_DWORD *)(*(_QWORD *)(v15 + 24) + 40LL) & 0x1000000) != 0 )
    {
      v35 = (struct _ERESOURCE *)*((_QWORD *)v14 + 8);
      *(_QWORD *)this = v35;
      *((_QWORD *)this + 2) = *((_QWORD *)*a2 + 6);
      v36 = (HSEMAPHORE)v35;
      if ( v8 == 1 && v35 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        if ( ghsemGreLock )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
          PsLeavePriorityRegion();
        }
        v36 = *(HSEMAPHORE *)this;
        v8 = 0;
      }
      EngAcquireSemaphore(v36);
      v37 = 11LL;
      if ( *(PERESOURCE *)this == ghsemGreLock )
        v37 = 2LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v37);
      v38 = *((_DWORD *)this + 6);
      if ( (v38 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
        *((_DWORD *)this + 6) = v38 | 0x200;
    }
    v18 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( !v18 || !*(_DWORD *)(v18 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x1000u;
      v20 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( v20 )
      {
        *(_QWORD *)(v20 + 320) = 0LL;
        *(_QWORD *)(v20 + 312) = 0LL;
      }
      v21 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( v21 )
        ++*(_DWORD *)(v21 + 104);
      v22 = ghsemDCVisRgn;
      if ( ghsemDCVisRgn )
        ExEnterPriorityRegionAndAcquireResourceShared();
      if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz(v22, &LockAcquireShared, v19, ghsemDCVisRgn, L"ghsemDCVisRgn");
    }
    v23 = *((_DWORD *)*a2 + 9);
    if ( (v23 & 0x1000) != 0 && (v23 & 0x4000) == 0 )
    {
      if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        v39 = ghsemDCVisRgn;
        if ( ghsemDCVisRgn )
          goto LABEL_109;
      }
      goto LABEL_110;
    }
  }
  else
  {
    v32 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( !v32 || !*(_DWORD *)(v32 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x800000u;
      v33 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( v33 )
        ++*(_DWORD *)(v33 + 104);
    }
  }
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    if ( (*((_DWORD *)*a2 + 9) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 1) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        v39 = ghsemDCVisRgn;
        if ( ghsemDCVisRgn )
        {
LABEL_109:
          ExReleaseResourceAndLeaveCriticalRegion(v39);
          PsLeavePriorityRegion();
        }
      }
LABEL_110:
      *((_DWORD *)this + 6) &= ~1u;
      if ( !v8 )
        return 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      v40 = ghsemGreLock;
      if ( !ghsemGreLock )
        return 0LL;
      goto LABEL_121;
    }
  }
  else if ( *((_QWORD *)this + 1) )
  {
    goto LABEL_45;
  }
  if ( (*((_DWORD *)*a2 + 9) & 0x10) != 0 && !(unsigned int)DC::bCompute(*a2) )
  {
    if ( *((_QWORD *)this + 1) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      if ( ghsemDCVisRgn )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
        PsLeavePriorityRegion();
      }
    }
    *((_DWORD *)this + 6) &= ~1u;
    if ( !v8 )
      return 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    v40 = ghsemGreLock;
    if ( !ghsemGreLock )
      return 0LL;
LABEL_121:
    ExReleaseResourceAndLeaveCriticalRegion(v40);
    PsLeavePriorityRegion();
    return 0LL;
  }
LABEL_45:
  v24 = (PERESOURCE)*((unsigned int *)this + 6);
  if ( ((unsigned int)v24 & 0x20000) == 0 )
  {
    v25 = *a2;
    if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 && ((unsigned __int16)v24 & 0x1000) != 0 )
    {
      if ( !*((_QWORD *)this + 10) )
      {
        v26 = 1016LL;
        if ( (*((_DWORD *)v25 + 10) & 1) != 0 )
          v26 = 1024LL;
        *((_DWORD *)v25 + 256) = *(_DWORD *)((char *)v25 + v26);
        *((_DWORD *)v25 + 257) = *(_DWORD *)((char *)v25 + v26 + 4);
        *((_DWORD *)v25 + 262) = *((_DWORD *)v25 + 258);
        *((_DWORD *)v25 + 263) = *((_DWORD *)v25 + 259);
        *((_DWORD *)v25 + 264) = *((_DWORD *)v25 + 260);
        *((_DWORD *)v25 + 265) = *((_DWORD *)v25 + 261);
        *((_DWORD *)v25 + 10) |= 3u;
        if ( (*((_DWORD *)v25 + 9) & 0x4000) != 0 )
        {
          v27 = *((_QWORD *)v25 + 62);
          if ( *(_QWORD *)(v27 + 248) || (*(_DWORD *)(v27 + 116) & 1) != 0 )
          {
            KeWaitForSingleObject((PVOID)(*(_QWORD *)(v27 + 312) + 64LL), UserRequest, 0, 0, 0LL);
            ++*(_DWORD *)(*((_QWORD *)v25 + 62) + 324LL);
            KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)v25 + 62) + 312LL) + 64LL), 0);
          }
        }
      }
      v28 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v29 = v28;
      if ( v28 )
      {
        *(_QWORD *)(v28 + 312) = (char *)this + 32;
        v24 = (PERESOURCE)*a2;
        if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
        {
          *(_BYTE *)(v28 + 328) = 1;
          *((_QWORD *)*a2 + 248) = 0LL;
          v34 = ghsemVisRgnUniqueness;
          if ( ghsemVisRgnUniqueness )
            ExEnterPriorityRegionAndAcquireResourceShared();
          if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
            McTemplateK0pz(v34, &LockAcquireShared, v19, ghsemVisRgnUniqueness, L"ghsemVisRgnUniqueness");
          *(_DWORD *)(v29 + 336) = giVisRgnUniqueness;
          if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
            McTemplateK0pz(v34, &LockRelease, v19, ghsemVisRgnUniqueness, L"ghsemVisRgnUniqueness");
          v24 = ghsemVisRgnUniqueness;
          if ( ghsemVisRgnUniqueness )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemVisRgnUniqueness);
            PsLeavePriorityRegion();
          }
        }
      }
    }
  }
  if ( *((_QWORD *)this + 1) && (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz(v24, &LockRelease, v19, ghsemDCVisRgn, L"ghsemDCVisRgn");
    v24 = ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
      PsLeavePriorityRegion();
    }
  }
  if ( v8 )
  {
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz(v24, &LockRelease, v19, ghsemGreLock, L"ghsemGreLock");
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
      PsLeavePriorityRegion();
    }
  }
  v30 = *((_DWORD *)this + 6);
  if ( (v30 & 0x20000) != 0 )
    return 1LL;
  if ( (v30 & 0x1000) != 0 || (v30 & 0x800000) != 0 )
    *((_DWORD *)*a2 + 10) |= 2u;
  if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported() >= 0 && (unsigned int)DEVLOCKOBJ_bPrepareTrgDcoWrap(this, a2) )
    return 1LL;
  *((_DWORD *)this + 6) &= ~1u;
  return 0LL;
}
