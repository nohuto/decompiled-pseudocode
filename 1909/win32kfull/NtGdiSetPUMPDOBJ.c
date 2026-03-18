/*
 * XREFs of NtGdiSetPUMPDOBJ @ 0x1C00DBCC0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00DC064 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C00DC160 (-vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z.c)
 *     ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C00DC1A8 (-bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C00DC1DC (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0285014 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C02AA25C (--1UMPDREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetPUMPDOBJ(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  int v6; // ebx
  int *v8; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _EPROCESS *CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 *ThreadWin32Thread; // rax
  struct UMPDOBJ *v19; // rbx
  int v20; // ecx
  int v21; // edi
  struct _KPROCESS *v22; // rdi
  __int64 v23; // rcx
  struct UMPDOBJ *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rcx
  PEPROCESS Process[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v29; // [rsp+38h] [rbp-20h]
  struct UMPDOBJ *v30; // [rsp+60h] [rbp+8h] BYREF
  int v31; // [rsp+68h] [rbp+10h]

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
  v30 = (struct UMPDOBJ *)v8;
  if ( v6 )
  {
    if ( !a1 || !v8 )
      goto LABEL_9;
  }
  else if ( !a3 )
  {
LABEL_9:
    UMPDREF::~UMPDREF((UMPDREF *)&v30);
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
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v10, a2, v11, v12);
        if ( !(unsigned int)bIsProcessLocalSystem(CurrentProcess) )
          goto LABEL_9;
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v15 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v10, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v15 = *ThreadWin32Thread;
  }
  if ( !v15 )
    goto LABEL_9;
  if ( !v6 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v29 = *a3;
    v25 = *(_QWORD *)(v15 + 40);
    if ( v25 == v15 + 40 )
      v26 = 0LL;
    else
      v26 = v25 - 40;
    if ( !v26 || v29 != *(_QWORD *)v26 )
      goto LABEL_9;
    if ( *(_DWORD *)(v26 + 424) )
    {
      if ( *(_QWORD *)(v26 + 24) != W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17) )
        goto LABEL_9;
      *(_BYTE *)(v26 + 32) |= 2u;
      UMPDOBJ::vRelease((struct UMPDOBJ *)v26, 1);
      v27 = *(_QWORD *)(v15 + 72);
      if ( v27 )
      {
        Win32FreePool(v27);
        *(_QWORD *)(v15 + 72) = 0LL;
      }
    }
    v19 = v30;
    goto LABEL_56;
  }
  v19 = v30;
  v20 = *((_DWORD *)v30 + 106);
  v31 = v20;
  if ( a4 )
  {
    if ( (unsigned __int64)(a4 + 1) > MmUserProbeAddress || a4 + 1 <= a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = v20;
  }
  if ( !v20 )
  {
    v23 = *(_QWORD *)(v15 + 40);
    if ( v23 == v15 + 40 )
      v24 = 0LL;
    else
      v24 = (struct UMPDOBJ *)(v23 - 40);
    if ( v19 != v24 )
      goto LABEL_9;
    if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = 0LL;
LABEL_56:
    if ( v19 )
    {
      DEC_SHARE_REF_CNT(v19);
      if ( (unsigned int)UMPDOBJ::bCleanupWorker(v19) )
        Win32FreePool(v19);
    }
    return 1LL;
  }
  if ( (unsigned int)bSandboxedCurrentProcess() )
    goto LABEL_9;
  v21 = *((_DWORD *)v19 + 102);
  if ( v21 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    goto LABEL_9;
  if ( *(_QWORD *)(v15 + 40) != v15 + 40 )
    goto LABEL_9;
  v22 = (struct _KPROCESS *)PALLOCMEM2(0x10uLL, 1684631623LL, 1);
  Process[1] = v22;
  if ( !v22 )
    goto LABEL_9;
  if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = 0LL;
  if ( !UMPDOBJ::bTryAcquireExclussiveAccess(v19) )
  {
    Win32FreePool(v22);
    goto LABEL_9;
  }
  *(_QWORD *)v22 = *((_QWORD *)v19 + 50);
  *((_DWORD *)v22 + 2) = *((_DWORD *)v19 + 102);
  *(_QWORD *)(v15 + 72) = v22;
  UMPDOBJ::vPushToCurrentThread(v19);
  return 1LL;
}
