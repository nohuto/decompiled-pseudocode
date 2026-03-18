/*
 * XREFs of NtGdiSetPUMPDOBJ @ 0x1C0078F10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00792B4 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C0079364 (-vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z.c)
 *     ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C00793AC (-bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C00793E0 (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C02856D4 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C02AA70C (--1UMPDREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetPUMPDOBJ(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  int v6; // ebx
  int *v8; // rax
  __int64 v10; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *ThreadWin32Thread; // rax
  UMPDOBJ *v18; // rbx
  int v19; // ecx
  int v20; // edi
  struct _KPROCESS *v21; // rdi
  __int64 v22; // rcx
  UMPDOBJ *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rcx
  PEPROCESS Process[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v28; // [rsp+38h] [rbp-20h]
  UMPDOBJ *v29; // [rsp+60h] [rbp+8h] BYREF
  int v30; // [rsp+68h] [rbp+10h]

  v6 = a2;
  if ( a1 )
  {
    LOBYTE(a2) = 17;
    v8 = (int *)HmgShareLock(a1, a2);
  }
  else
  {
    v8 = 0LL;
  }
  v29 = (UMPDOBJ *)v8;
  if ( v6 )
  {
    if ( !a1 || !v8 )
      goto LABEL_9;
  }
  else if ( !a3 )
  {
LABEL_9:
    UMPDREF::~UMPDREF((UMPDREF *)&v29);
    return 0LL;
  }
  v10 = gUMPDSecurityLevel;
  if ( gUMPDSecurityLevel == 1 )
  {
    if ( v8 )
    {
      PsLookupProcessByProcessId((HANDLE)v8[102], Process);
      if ( (unsigned int)bIsProcessLocalSystem(Process[0]) )
      {
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v10, a2, a3, a4);
        if ( !(unsigned int)bIsProcessLocalSystem(CurrentProcess) )
          goto LABEL_9;
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v10, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( !v13 )
    goto LABEL_9;
  if ( !v6 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v28 = *a3;
    v24 = *(_QWORD *)(v13 + 40);
    if ( v24 == v13 + 40 )
      v25 = 0LL;
    else
      v25 = v24 - 40;
    if ( !v25 || v28 != *(_QWORD *)v25 )
      goto LABEL_9;
    if ( *(_DWORD *)(v25 + 424) )
    {
      if ( *(_QWORD *)(v25 + 24) != W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16) )
        goto LABEL_9;
      *(_BYTE *)(v25 + 32) |= 2u;
      UMPDOBJ::vRelease((struct UMPDOBJ *)v25, 1);
      v26 = *(_QWORD *)(v13 + 72);
      if ( v26 )
      {
        Win32FreePool(v26);
        *(_QWORD *)(v13 + 72) = 0LL;
      }
    }
    v18 = v29;
    goto LABEL_56;
  }
  v18 = v29;
  v19 = *((_DWORD *)v29 + 106);
  v30 = v19;
  if ( a4 )
  {
    if ( (unsigned __int64)(a4 + 1) > MmUserProbeAddress || a4 + 1 <= a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = v19;
  }
  if ( !v19 )
  {
    v22 = *(_QWORD *)(v13 + 40);
    if ( v22 == v13 + 40 )
      v23 = 0LL;
    else
      v23 = (UMPDOBJ *)(v22 - 40);
    if ( v18 != v23 )
      goto LABEL_9;
    if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = 0LL;
LABEL_56:
    if ( v18 )
    {
      DEC_SHARE_REF_CNT(v18);
      if ( (unsigned int)UMPDOBJ::bCleanupWorker(v18) )
        Win32FreePool(v18);
    }
    return 1LL;
  }
  if ( (unsigned int)bSandboxedCurrentProcess() )
    goto LABEL_9;
  v20 = *((_DWORD *)v18 + 102);
  if ( v20 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    goto LABEL_9;
  if ( *(_QWORD *)(v13 + 40) != v13 + 40 )
    goto LABEL_9;
  v21 = (struct _KPROCESS *)PALLOCMEM2(0x10uLL, 1684631623LL, 1);
  Process[1] = v21;
  if ( !v21 )
    goto LABEL_9;
  if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = 0LL;
  if ( !UMPDOBJ::bTryAcquireExclussiveAccess(v18) )
  {
    Win32FreePool(v21);
    goto LABEL_9;
  }
  *(_QWORD *)v21 = *((_QWORD *)v18 + 50);
  *((_DWORD *)v21 + 2) = *((_DWORD *)v18 + 102);
  *(_QWORD *)(v13 + 72) = v21;
  UMPDOBJ::vPushToCurrentThread(v18);
  return 1LL;
}
