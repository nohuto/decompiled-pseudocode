/*
 * XREFs of ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0061100
 * Callers:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C00610B0 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0018218 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C0061440 (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C0061660 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     McTemplateK0pz @ 0x1C0132610 (McTemplateK0pz.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // edi
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  int v16; // eax
  unsigned int v17; // ebx
  void *v18; // rsi
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  char *v26; // rdx
  __int64 v27; // r8
  bool v28; // zf
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  struct _ERESOURCE *v32; // [rsp+60h] [rbp+8h] BYREF
  void *v33; // [rsp+78h] [rbp+20h] BYREF

  v33 = 0LL;
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
      v31 = *(_QWORD *)(a1 + 312);
      ++*(_DWORD *)(a1 + 276);
      KeReleaseMutex((PRKMUTEX)(v31 + 64), 0);
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
  v32 = (struct _ERESOURCE *)ghsemMapRot;
  if ( ghsemMapRot )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  v8 = *(_QWORD *)(a1 + 264);
  if ( v8 == PsGetCurrentProcessWin32Process(v6) )
  {
    if ( v7 )
    {
      if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz(v10, &LockRelease, v11, v7, L"hsem");
      ExReleaseResourceAndLeaveCriticalRegion(v7);
      PsLeavePriorityRegion();
      v7 = 0LL;
    }
    v12 = 1;
    goto LABEL_14;
  }
  if ( *(_QWORD *)(a1 + 264) )
  {
    v14 = (_QWORD *)(a1 + 528);
    v10 = *(_QWORD *)(a1 + 528);
    if ( *(_QWORD *)(v10 + 8) != a1 + 528 )
      goto LABEL_39;
    v15 = *(_QWORD **)(a1 + 536);
    if ( (_QWORD *)*v15 != v14 )
      goto LABEL_39;
    *v15 = v10;
    *(_QWORD *)(v10 + 8) = v15;
    *(_QWORD *)(a1 + 536) = a1 + 528;
    *v14 = v14;
    v9 = *(_QWORD *)(a1 + 72);
    if ( v9 )
      MmUnmapViewOfSection(**(_QWORD **)(a1 + 264));
  }
  v16 = *(_DWORD *)(a1 + 116) & 1;
  if ( !v16 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  if ( v16
    || (v17 = *(_DWORD *)(a1 + 64),
        v18 = *(void **)(a1 + 248),
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v10, v9),
        MapKernelSectionForUserMapping(v18, CurrentProcess, v17, &v33),
        v33) )
  {
    v22 = (_QWORD *)(a1 + 528);
    v23 = PsGetCurrentProcessWin32Process(v10) + 224;
    v24 = *(_QWORD *)v23;
    if ( *(_QWORD *)(*(_QWORD *)v23 + 8LL) == v23 )
    {
      *v22 = v24;
      *(_QWORD *)(a1 + 536) = v23;
      *(_QWORD *)(v24 + 8) = v22;
      *(_QWORD *)v23 = v22;
      *(_QWORD *)(a1 + 256) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(a1 + 264) = PsGetCurrentProcessWin32Process(v25);
      if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
      {
        v28 = (*(_BYTE *)(a1 + 102) & 1) == 0;
        v26 = (char *)v33;
        *(_QWORD *)(a1 + 72) = v33;
        if ( v28 )
          *(_QWORD *)(a1 + 80) = &v26[*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88)];
        else
          *(_QWORD *)(a1 + 80) = v26;
      }
      SEMOBJ::vUnlock(&v32, (__int64)v26, v27);
      SEMOBJ::vUnlock(&v32, v29, v30);
      return 0LL;
    }
LABEL_39:
    __fastfail(3u);
  }
  SEMOBJ::vUnlock(&v32, v20, v21);
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(a1 + 312) + 64LL), 0);
  W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)(a1 + 272));
  v7 = v32;
  v12 = 2;
LABEL_14:
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v7);
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    PsLeavePriorityRegion();
  }
  return v12;
}
