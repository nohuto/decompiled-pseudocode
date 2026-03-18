/*
 * XREFs of ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0025390
 * Callers:
 *     GreGetClipBox @ 0x1C003AC40 (GreGetClipBox.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001D5B0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001EBB0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C001ED54 (--1HANDLELOCK@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0028890 (-bCompute@DC@@QEAAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     IsThreadCrossSessionAttached @ 0x1C00BCE08 (IsThreadCrossSessionAttached.c)
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C00BDAB4 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0122994 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     McTemplateK0pz @ 0x1C0132610 (McTemplateK0pz.c)
 */

__int64 __fastcall DEVLOCKOBJ::bLock(DEVLOCKOBJ *this, DC **a2, int a3)
{
  __int64 v7; // r8
  int v8; // esi
  PERESOURCE v9; // rcx
  __int64 ThreadWin32Thread; // rax
  struct _ERESOURCE *v11; // rbx
  __int64 v12; // r8
  HSEMAPHORE v13; // rcx
  DC *v14; // r8
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r9
  HSEMAPHORE v18; // r8
  HSEMAPHORE v19; // rcx
  __int64 v20; // r8
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  PERESOURCE v26; // rcx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // edx
  PERESOURCE v32; // rcx
  DC *v33; // rbx
  char *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rbx
  PERESOURCE v38; // rcx
  int v39; // ecx
  int v40; // eax
  __int64 v41; // rbp
  __int64 v42; // rax
  int v43; // r12d
  struct OBJECT *v44; // rsi
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v46; // r15
  GdiHandleManager *v47; // rbx
  unsigned int v48; // eax
  struct _ENTRY *v49; // rax
  struct _ENTRY *v50; // rcx
  int v51; // edx
  unsigned int v52; // edx
  struct OBJECT *EntryObject; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int16 v55; // ax
  int v56; // ebx
  int v57; // eax
  __int64 v58; // rcx
  struct _ENTRY *v59; // [rsp+30h] [rbp-48h] BYREF
  int v60; // [rsp+38h] [rbp-40h]
  int v61; // [rsp+3Ch] [rbp-3Ch]
  int v62; // [rsp+80h] [rbp+8h] BYREF

  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = *(_QWORD *)*a2;
  if ( !a3
    && ((int)IsTrapAppContainerRenderingSupported() < 0
     || (unsigned int)TrapAppContainerRenderingWrap(a2, (char *)this + 64, (char *)this + 56, (char *)this + 28) != 1) )
  {
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
      v11 = (struct _ERESOURCE *)ghsemGreLock;
      if ( !ExIsResourceAcquiredExclusiveLite((PERESOURCE)ghsemGreLock) && !ExIsResourceAcquiredSharedLite(v11) )
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
      || (*(_DWORD *)(v15 + 1824) & 0x8000000) != 0
      || (v16 & 0x48000000) != 0
      || (*(_DWORD *)(*(_QWORD *)(v15 + 24) + 40LL) & 0x1000000) != 0 )
    {
      v18 = (HSEMAPHORE)*((_QWORD *)v14 + 8);
      *(_QWORD *)this = v18;
      *((_QWORD *)this + 2) = *((_QWORD *)*a2 + 6);
      v19 = v18;
      if ( v8 == 1 && v18 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        if ( ghsemGreLock )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
          PsLeavePriorityRegion();
        }
        v19 = *(HSEMAPHORE *)this;
        v8 = 0;
      }
      EngAcquireSemaphore(v19);
      v20 = 11LL;
      if ( *(HSEMAPHORE *)this == ghsemGreLock )
        v20 = 2LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v20);
      v21 = *((_DWORD *)this + 6);
      if ( (v21 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
        *((_DWORD *)this + 6) = v21 | 0x200;
    }
    v22 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( !v22 || !*(_DWORD *)(v22 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x1000u;
      v24 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( v24 )
      {
        *(_QWORD *)(v24 + 320) = 0LL;
        *(_QWORD *)(v24 + 312) = 0LL;
      }
      v25 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( v25 )
        ++*(_DWORD *)(v25 + 104);
      v26 = ghsemDCVisRgn;
      if ( ghsemDCVisRgn )
        ExEnterPriorityRegionAndAcquireResourceShared();
      if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz(v26, &LockAcquireShared, v23, ghsemDCVisRgn, L"ghsemDCVisRgn");
    }
    if ( (*((_DWORD *)*a2 + 9) & 0x5000) == 0x1000 )
    {
      v27 = *((_DWORD *)this + 6);
      if ( (v27 & 0x1000) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        if ( ghsemDCVisRgn )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
          PsLeavePriorityRegion();
        }
        v27 = *((_DWORD *)this + 6);
      }
      *((_DWORD *)this + 6) = v27 & 0xFFFFFFFE;
LABEL_83:
      if ( v8 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        if ( ghsemGreLock )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
          PsLeavePriorityRegion();
        }
      }
      return 0LL;
    }
  }
  else
  {
    v28 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( !v28 || !*(_DWORD *)(v28 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x800000u;
      v29 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( v29 )
        ++*(_DWORD *)(v29 + 104);
    }
  }
  v30 = *((_DWORD *)this + 6);
  if ( (v30 & 0x1000) != 0 )
  {
    if ( (*((_DWORD *)*a2 + 9) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 1) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        if ( ghsemDCVisRgn )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
          PsLeavePriorityRegion();
        }
        v30 = *((_DWORD *)this + 6);
      }
      *((_DWORD *)this + 6) = v30 & 0xFFFFFFFE;
      goto LABEL_83;
    }
    goto LABEL_77;
  }
  if ( !*((_QWORD *)this + 1) )
  {
LABEL_77:
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
      goto LABEL_83;
    }
  }
  v32 = (PERESOURCE)*((unsigned int *)this + 6);
  if ( ((unsigned int)v32 & 0x20000) == 0 )
  {
    v33 = *a2;
    if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 && ((unsigned __int16)v32 & 0x1000) != 0 )
    {
      if ( !*((_QWORD *)this + 7) )
      {
        v34 = (char *)v33 + 8 * (*((_DWORD *)v33 + 10) & 1);
        *((_DWORD *)v33 + 256) = *((_DWORD *)v34 + 254);
        *((_DWORD *)v33 + 257) = *((_DWORD *)v34 + 255);
        *((_DWORD *)v33 + 262) = *((_DWORD *)v33 + 258);
        *((_DWORD *)v33 + 263) = *((_DWORD *)v33 + 259);
        *((_DWORD *)v33 + 264) = *((_DWORD *)v33 + 260);
        *((_DWORD *)v33 + 265) = *((_DWORD *)v33 + 261);
        *((_DWORD *)v33 + 10) |= 1u;
        if ( (*((_DWORD *)v33 + 9) & 0x4000) != 0 )
        {
          v35 = *((_QWORD *)v33 + 62);
          if ( *(_QWORD *)(v35 + 248) || (*(_DWORD *)(v35 + 116) & 1) != 0 )
          {
            KeWaitForSingleObject((PVOID)(*(_QWORD *)(v35 + 312) + 64LL), UserRequest, 0, 0, 0LL);
            ++*(_DWORD *)(*((_QWORD *)v33 + 62) + 324LL);
            KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)v33 + 62) + 312LL) + 64LL), 0);
          }
        }
      }
      v36 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v37 = v36;
      if ( v36 )
      {
        *(_QWORD *)(v36 + 312) = (char *)this + 32;
        v32 = (PERESOURCE)*a2;
        if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
        {
          *(_DWORD *)(v36 + 328) |= 1u;
          *((_QWORD *)*a2 + 245) = 0LL;
          v38 = ghsemVisRgnUniqueness;
          if ( ghsemVisRgnUniqueness )
            ExEnterPriorityRegionAndAcquireResourceShared();
          if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
            McTemplateK0pz(v38, &LockAcquireShared, v23, ghsemVisRgnUniqueness, L"ghsemVisRgnUniqueness");
          *(_DWORD *)(v37 + 336) = giVisRgnUniqueness;
          if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
            McTemplateK0pz(v38, &LockRelease, v23, ghsemVisRgnUniqueness, L"ghsemVisRgnUniqueness");
          v32 = ghsemVisRgnUniqueness;
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
      McTemplateK0pz(v32, &LockRelease, v23, ghsemDCVisRgn, L"ghsemDCVisRgn");
    v32 = ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
      PsLeavePriorityRegion();
    }
  }
  if ( v8 )
  {
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz(v32, &LockRelease, v23, ghsemGreLock, L"ghsemGreLock");
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
      PsLeavePriorityRegion();
    }
  }
  if ( (*((_DWORD *)this + 6) & 0x20000) == 0 )
  {
    if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported() < 0 )
      v39 = 0;
    else
      v39 = DEVLOCKOBJ_bPrepareTrgDcoWrap(this, a2);
    v40 = *((_DWORD *)this + 6);
    if ( !v39 )
    {
      *((_DWORD *)this + 6) = v40 & 0xFFFFFFFE;
      return 0LL;
    }
    if ( (v40 & 0x1000) != 0 || (v40 & 0x800000) != 0 )
    {
      v41 = *(_QWORD *)*a2;
      v42 = *((_QWORD *)this + 4);
      if ( v42 )
        goto LABEL_171;
      v43 = *((_DWORD *)this + 11);
      v44 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached()
        && (CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v62)) != 0
        && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
      {
        v46 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
      }
      else
      {
        v46 = 0LL;
      }
      v47 = gpHandleManager;
      v60 = 1;
      v48 = GdiHandleManager::DecodeIndex(
              (GdiHandleEntryDirectory **)gpHandleManager,
              (unsigned __int16)v41 | ((unsigned int)v41 >> 8) & 0xFF0000);
      v49 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v47 + 2), v48, 0);
      v59 = v49;
      v50 = v49;
      if ( !v49 )
      {
        v60 = 0;
        KeLeaveCriticalRegion();
LABEL_156:
        HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v59);
        *((_QWORD *)this + 4) = v44;
        if ( v44 )
        {
          if ( *((_DWORD *)this + 11) )
          {
            if ( (*(_DWORD *)(*((_QWORD *)v44 + 6) + 40LL) & 0x8000) == 0 )
            {
LABEL_161:
              _InterlockedDecrement((volatile signed __int32 *)v44 + 3);
              *((_QWORD *)this + 4) = 0LL;
              return 1LL;
            }
            v56 = *((_DWORD *)v44 + 524);
            if ( v56 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
            {
              v44 = (struct OBJECT *)*((_QWORD *)this + 4);
              goto LABEL_161;
            }
          }
          v57 = XDCOBJ::SaveAttributes((DEVLOCKOBJ *)((char *)this + 32));
          v58 = *((_QWORD *)this + 4);
          if ( !v57 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v58 + 12));
            *((_QWORD *)this + 4) = 0LL;
            return 1LL;
          }
          if ( (*(_DWORD *)(v58 + 520) & 4) != 0 )
            DC::vMarkTransformDirty((DC *)v58);
        }
        else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
        {
          PsGetWin32KFilterSet();
        }
        v42 = *((_QWORD *)this + 4);
        if ( !v42 )
          return 1LL;
        *((_BYTE *)this + 49) = 0;
LABEL_171:
        *(_DWORD *)(v42 + 40) |= 2u;
        *((_BYTE *)this + 48) = 1;
        return 1LL;
      }
      _m_prefetchw((char *)v49 + 8);
      v51 = *((_DWORD *)v49 + 2);
      v61 = v51;
      if ( !v43 )
      {
        v52 = v51 & 0xFFFFFFFE;
        if ( v52 != (v62 & 0xFFFFFFFC) && v52 && (!v46 || v52 != *(_DWORD *)(v46 + 8)) )
          goto LABEL_145;
        if ( (*((_BYTE *)v49 + 15) & 0x20) != 0 )
          goto LABEL_145;
      }
      if ( (*((_BYTE *)v49 + 15) & 0x40) == 0 )
        goto LABEL_147;
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v49 & 0xFFFFFF);
      if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
      {
LABEL_145:
        HANDLELOCK::vUnlock((HANDLELOCK *)&v59);
        if ( !v60 )
          goto LABEL_156;
      }
      v50 = v59;
LABEL_147:
      if ( *((_BYTE *)v50 + 14) == 1
        && *((_WORD *)v50 + 6) == WORD1(v41)
        && (!v43 || (*((_BYTE *)v50 + 15) & 0x20) != 0) )
      {
        CurrentThread = KeGetCurrentThread();
        v44 = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v59 & 0xFFFFFF);
        v55 = *((_WORD *)v44 + 6);
        if ( !v55 || *((struct _KTHREAD **)v44 + 2) == CurrentThread )
        {
          *((_QWORD *)v44 + 2) = CurrentThread;
          *((_WORD *)v44 + 6) = v55 + 1;
        }
        else
        {
          v44 = 0LL;
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v59);
      goto LABEL_156;
    }
  }
  return 1LL;
}
