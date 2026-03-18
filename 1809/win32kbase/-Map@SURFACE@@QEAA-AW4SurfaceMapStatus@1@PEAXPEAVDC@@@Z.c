/*
 * XREFs of ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C005DB30
 * Callers:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C005DAE0 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029BC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C005DE2C (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C005E010 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     McTemplateK0pz @ 0x1C0108360 (McTemplateK0pz.c)
 */

__int64 __fastcall SURFACE::Map(__int64 a1)
{
  unsigned int *v2; // r14
  unsigned int v3; // ebx
  unsigned int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  struct _ERESOURCE *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edi
  int v13; // eax
  _QWORD *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  bool v18; // zf
  char *v19; // rdx
  unsigned int v20; // ebx
  void *v21; // rsi
  struct _EPROCESS *CurrentProcess; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  HSEMAPHORE v27; // [rsp+60h] [rbp+8h] BYREF
  void *v28; // [rsp+78h] [rbp+20h] BYREF

  v28 = 0LL;
  if ( !*(_QWORD *)(a1 + 248) && (*(_DWORD *)(a1 + 116) & 1) == 0 || (*(_WORD *)(a1 + 102) & 0x800) == 0 )
    return 0LL;
  v2 = (unsigned int *)(a1 + 272);
  v3 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 312) + 64LL), UserRequest, 0, 0, 0LL);
  v4 = *(_DWORD *)(a1 + 272);
  if ( v4 )
  {
    do
    {
      if ( v4 == v3 )
        break;
      v26 = *(_QWORD *)(a1 + 312);
      ++*(_DWORD *)(a1 + 276);
      KeReleaseMutex((PRKMUTEX)(v26 + 64), 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 312), UserRequest, 0, 0, 0LL);
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 312) + 64LL), UserRequest, 0, 0, 0LL);
      v4 = *v2;
    }
    while ( *v2 );
  }
  v5 = ++*(_DWORD *)(a1 + 280);
  *v2 = v3;
  if ( v5 > *(_DWORD *)(a1 + 284) )
    *(_DWORD *)(a1 + 284) = v5;
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(a1 + 312) + 64LL), 0);
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 312) + 64LL), UserRequest, 0, 0, 0LL);
  v7 = (struct _ERESOURCE *)ghsemMapRot;
  v27 = ghsemMapRot;
  if ( ghsemMapRot )
  {
    PsEnterPriorityRegion(v6);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  v8 = *(_QWORD *)(a1 + 264);
  if ( v8 == PsGetCurrentProcessWin32Process(v6) )
  {
    if ( v7 )
    {
      if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz(v9, &LockRelease, v10, v7, L"hsem");
      ExReleaseResourceAndLeaveCriticalRegion(v7);
      PsLeavePriorityRegion();
      v7 = 0LL;
    }
    v11 = 1;
    goto LABEL_14;
  }
  if ( *(_QWORD *)(a1 + 264) )
  {
    v23 = (_QWORD *)(a1 + 528);
    v9 = *(_QWORD *)(a1 + 528);
    if ( *(_QWORD *)(v9 + 8) != a1 + 528 )
      goto LABEL_35;
    v24 = *(_QWORD **)(a1 + 536);
    if ( (_QWORD *)*v24 != v23 )
      goto LABEL_35;
    *v24 = v9;
    *(_QWORD *)(v9 + 8) = v24;
    *(_QWORD *)(a1 + 536) = a1 + 528;
    *v23 = v23;
    v25 = *(_QWORD *)(a1 + 72);
    if ( v25 )
      MmUnmapViewOfSection(**(_QWORD **)(a1 + 264), v25);
  }
  v13 = *(_DWORD *)(a1 + 116) & 1;
  if ( !v13 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  if ( v13
    || (v20 = *(_DWORD *)(a1 + 64),
        v21 = *(void **)(a1 + 248),
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v9),
        MapKernelSectionForUserMapping(v21, CurrentProcess, v20, &v28),
        v28) )
  {
    v14 = (_QWORD *)(a1 + 528);
    v15 = PsGetCurrentProcessWin32Process(v9) + 224;
    v16 = *(_QWORD *)v15;
    if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) == v15 )
    {
      *v14 = v16;
      *(_QWORD *)(a1 + 536) = v15;
      *(_QWORD *)(v16 + 8) = v14;
      *(_QWORD *)v15 = v14;
      *(_QWORD *)(a1 + 256) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(a1 + 264) = PsGetCurrentProcessWin32Process(v17);
      if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
      {
        v18 = (*(_BYTE *)(a1 + 102) & 1) == 0;
        v19 = (char *)v28;
        *(_QWORD *)(a1 + 72) = v28;
        if ( v18 )
          *(_QWORD *)(a1 + 80) = &v19[*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88)];
        else
          *(_QWORD *)(a1 + 80) = v19;
      }
      SEMOBJ::vUnlock((PERESOURCE *)&v27);
      SEMOBJ::vUnlock((PERESOURCE *)&v27);
      return 0LL;
    }
LABEL_35:
    __fastfail(3u);
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v27);
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(a1 + 312) + 64LL), 0);
  W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)(a1 + 272));
  v7 = (struct _ERESOURCE *)v27;
  v11 = 2;
LABEL_14:
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v7);
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    PsLeavePriorityRegion();
  }
  return v11;
}
