/*
 * XREFs of ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00225E0
 * Callers:
 *     GreGetClipBox @ 0x1C00197D0 (GreGetClipBox.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0025DB0 (-bCompute@DC@@QEAAHXZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

__int64 __fastcall DEVLOCKOBJ::bLock(DEVLOCKOBJ *this, DC **a2, int a3)
{
  int v6; // eax
  int v7; // r8d
  int v8; // ebp
  int v9; // ecx
  __int64 ThreadWin32Thread; // rax
  struct _ERESOURCE *v11; // rsi
  int v12; // r8d
  int v13; // ecx
  DC *v14; // r9
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // ecx
  int v23; // edx
  DC *v24; // rcx
  DC *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rsi
  int v30; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // ecx
  struct _ERESOURCE *v35; // r8
  HSEMAPHORE v36; // rcx
  __int64 v37; // r8
  int v38; // edx
  bool v39; // zf
  struct _ERESOURCE *v40; // rcx

  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = *(_QWORD *)*a2;
  if ( !a3 )
  {
    if ( (int)IsTrapAppContainerRenderingSupported() < 0
      || (v6 = TrapAppContainerRenderingWrap(a2, (char *)this + 56, (char *)this + 48, (char *)this + 28), v6 != 1) )
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
    v9 = (int)ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared();
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz(
        v9,
        (unsigned int)&LockAcquireShared,
        v7,
        (_DWORD)ghsemDynamicModeChange,
        (__int64)L"ghsemDynamicModeChange");
    *((_DWORD *)this + 6) |= 8u;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 104) )
    {
      v11 = ghsemGreLock;
      if ( !ExIsResourceAcquiredExclusiveLite(ghsemGreLock) && !ExIsResourceAcquiredSharedLite(v11) )
      {
        v13 = (int)ghsemGreLock;
        if ( ghsemGreLock )
          ExEnterPriorityRegionAndAcquireResourceShared();
        if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz(v13, (unsigned int)&LockAcquireShared, v12, (_DWORD)ghsemGreLock, (__int64)L"ghsemGreLock");
        v8 = 1;
      }
    }
    v14 = *a2;
    v15 = *((_QWORD *)*a2 + 6);
    if ( (*(_DWORD *)(*((_QWORD *)*a2 + 10) + 12LL) & 1) == 0 && (*((_DWORD *)v14 + 9) & 0x8000) == 0
      || (v16 = *(_DWORD *)(v15 + 40), (v16 & 1) == 0)
      || (v16 & 0x1000000) != 0
      || *(_DWORD *)(v15 + 2604) != 5
      && (v16 & 0x20000) == 0
      && ((v17 = *(_QWORD *)(v15 + 2568), ((v17 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0)
       || (*(_DWORD *)(v17 + 160) & 0x800000) == 0)
      || (*(_DWORD *)(v15 + 2120) & 0x400) != 0
      || (v16 & 0x48000000) != 0
      || (*(_DWORD *)(v15 + 1816) & 0x8000000) != 0
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
      v22 = (int)ghsemDCVisRgn;
      if ( ghsemDCVisRgn )
        ExEnterPriorityRegionAndAcquireResourceShared();
      if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz(v22, (unsigned int)&LockAcquireShared, v19, (_DWORD)ghsemDCVisRgn, (__int64)L"ghsemDCVisRgn");
    }
    v23 = *((_DWORD *)*a2 + 9);
    if ( (v23 & 0x1000) != 0 && (v23 & 0x4000) == 0 )
    {
      v39 = (*((_DWORD *)this + 6) & 0x1000) == 0;
LABEL_109:
      if ( v39 )
        goto LABEL_115;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      v40 = ghsemDCVisRgn;
      if ( !ghsemDCVisRgn )
        goto LABEL_115;
LABEL_114:
      ExReleaseResourceAndLeaveCriticalRegion(v40);
      PsLeavePriorityRegion();
LABEL_115:
      *((_DWORD *)this + 6) &= ~1u;
      if ( v8 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        if ( ghsemGreLock )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
          PsLeavePriorityRegion();
        }
      }
      return 0LL;
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
      v39 = *((_QWORD *)this + 1) == 0LL;
      goto LABEL_109;
    }
  }
  else if ( *((_QWORD *)this + 1) )
  {
    goto LABEL_45;
  }
  if ( (*((_DWORD *)*a2 + 9) & 0x10) != 0 && !(unsigned int)DC::bCompute(*a2) )
  {
    if ( !*((_QWORD *)this + 1) )
      goto LABEL_115;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    v40 = ghsemDCVisRgn;
    if ( !ghsemDCVisRgn )
      goto LABEL_115;
    goto LABEL_114;
  }
LABEL_45:
  LODWORD(v24) = *((_DWORD *)this + 6);
  if ( ((unsigned int)v24 & 0x20000) == 0 )
  {
    v25 = *a2;
    if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 && ((unsigned __int16)v24 & 0x1000) != 0 )
    {
      if ( !*((_QWORD *)this + 6) )
      {
        v26 = 1424LL;
        if ( (*((_DWORD *)v25 + 10) & 1) != 0 )
          v26 = 1432LL;
        *((_DWORD *)v25 + 358) = *(_DWORD *)((char *)v25 + v26);
        *((_DWORD *)v25 + 359) = *(_DWORD *)((char *)v25 + v26 + 4);
        *((_DWORD *)v25 + 364) = *((_DWORD *)v25 + 360);
        *((_DWORD *)v25 + 365) = *((_DWORD *)v25 + 361);
        *((_DWORD *)v25 + 366) = *((_DWORD *)v25 + 362);
        *((_DWORD *)v25 + 367) = *((_DWORD *)v25 + 363);
        *((_DWORD *)v25 + 10) |= 3u;
        if ( (*((_DWORD *)v25 + 9) & 0x4000) != 0 )
        {
          v27 = *((_QWORD *)v25 + 63);
          if ( *(_QWORD *)(v27 + 248) || (*(_DWORD *)(v27 + 116) & 1) != 0 )
          {
            KeWaitForSingleObject((PVOID)(*(_QWORD *)(v27 + 312) + 64LL), UserRequest, 0, 0, 0LL);
            ++*(_DWORD *)(*((_QWORD *)v25 + 63) + 324LL);
            KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)v25 + 63) + 312LL) + 64LL), 0);
          }
        }
      }
      v28 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v29 = v28;
      if ( v28 )
      {
        *(_QWORD *)(v28 + 312) = (char *)this + 32;
        v24 = *a2;
        if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
        {
          *(_BYTE *)(v28 + 328) = 1;
          *((_QWORD *)*a2 + 296) = 0LL;
          v34 = (int)ghsemVisRgnUniqueness;
          if ( ghsemVisRgnUniqueness )
            ExEnterPriorityRegionAndAcquireResourceShared();
          if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
            McTemplateK0pz(
              v34,
              (unsigned int)&LockAcquireShared,
              v19,
              (_DWORD)ghsemVisRgnUniqueness,
              (__int64)L"ghsemVisRgnUniqueness");
          *(_DWORD *)(v29 + 336) = giVisRgnUniqueness;
          if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
            McTemplateK0pz(
              v34,
              (unsigned int)&LockRelease,
              v19,
              (_DWORD)ghsemVisRgnUniqueness,
              (__int64)L"ghsemVisRgnUniqueness");
          LODWORD(v24) = (_DWORD)ghsemVisRgnUniqueness;
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
      McTemplateK0pz((_DWORD)v24, (unsigned int)&LockRelease, v19, (_DWORD)ghsemDCVisRgn, (__int64)L"ghsemDCVisRgn");
    LODWORD(v24) = (_DWORD)ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
      PsLeavePriorityRegion();
    }
  }
  if ( v8 )
  {
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz((_DWORD)v24, (unsigned int)&LockRelease, v19, (_DWORD)ghsemGreLock, (__int64)L"ghsemGreLock");
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
