/*
 * XREFs of NtGdiSetPUMPDOBJ @ 0x1C00B1070
 * Callers:
 *     <none>
 * Callees:
 *     UMPDOBJ_bCleanupWrap @ 0x1C0018830 (UMPDOBJ_bCleanupWrap.c)
 *     ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C001889C (-bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C00B14F0 (-vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C00B1538 (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C00BA764 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C0197464 (--1UMPDREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetPUMPDOBJ(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  int v6; // ebx
  __int64 v8; // rdi
  struct _EPROCESS *CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // r12
  __int64 v12; // r14
  __int64 *ThreadWin32Thread; // rax
  int v14; // ecx
  int v15; // ebx
  __int64 v16; // rbx
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v18; // rdx
  struct UMPDOBJ *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // [rsp+28h] [rbp-40h]
  PEPROCESS Process[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+78h] [rbp+10h]

  v6 = a2;
  if ( a1 )
  {
    LOBYTE(a2) = 17;
    v8 = HmgShareLock(a1, a2);
  }
  else
  {
    v8 = 0LL;
  }
  v23 = v8;
  if ( v6 )
  {
    if ( !a1 || !v8 )
      goto LABEL_9;
  }
  else if ( !a3 )
  {
LABEL_9:
    UMPDREF::~UMPDREF((UMPDREF *)&v23);
    return 0LL;
  }
  if ( gUMPDSecurityLevel == 1 )
  {
    if ( v8 )
    {
      PsLookupProcessByProcessId((HANDLE)*(int *)(v8 + 408), Process);
      if ( (unsigned int)bIsProcessLocalSystem(Process[0]) )
      {
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(a1, a2);
        if ( !(unsigned int)bIsProcessLocalSystem(CurrentProcess) )
          goto LABEL_9;
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  if ( !v12 )
    goto LABEL_9;
  if ( !v6 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v21 = *a3;
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj((struct _W32THREAD *)v12);
    v19 = ThreadCurrentObj;
    if ( !ThreadCurrentObj || v21 != *(_QWORD *)ThreadCurrentObj )
      goto LABEL_9;
    if ( *((_DWORD *)ThreadCurrentObj + 106) )
    {
      if ( *((_QWORD *)ThreadCurrentObj + 3) != W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) )
        goto LABEL_9;
      *((_BYTE *)v19 + 32) |= 2u;
      UMPDOBJ::vRelease(v19, 1);
      v20 = *(_QWORD *)(v12 + 72);
      if ( v20 )
      {
        Win32FreePool(v20);
        *(_QWORD *)(v12 + 72) = 0LL;
      }
    }
LABEL_49:
    if ( v8 )
    {
      DEC_SHARE_REF_CNT(v8);
      if ( (unsigned int)UMPDOBJ_bCleanupWrap((UMPDOBJ *)v8) )
        Win32FreePool(v8);
    }
    return 1LL;
  }
  v14 = *(_DWORD *)(v8 + 424);
  v24 = v14;
  if ( a4 )
  {
    if ( (unsigned __int64)(a4 + 1) > MmUserProbeAddress || a4 + 1 <= a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = v14;
  }
  if ( !v14 )
  {
    if ( (struct UMPDOBJ *)v8 != UMPDOBJ::GetThreadCurrentObj((struct _W32THREAD *)v12) )
      goto LABEL_9;
    if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = 0LL;
    goto LABEL_49;
  }
  if ( (unsigned int)bSandboxedCurrentProcess() )
    goto LABEL_9;
  v15 = *(_DWORD *)(v8 + 408);
  if ( v15 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    goto LABEL_9;
  if ( *(_QWORD *)(v12 + 40) != v12 + 40 )
    goto LABEL_9;
  v16 = PALLOCMEM2(0x10uLL);
  Process[1] = (PEPROCESS)v16;
  if ( !v16 )
    goto LABEL_9;
  if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = 0LL;
  if ( !UMPDOBJ::bTryAcquireExclussiveAccess((UMPDOBJ *)v8) )
  {
    Win32FreePool(v16);
    goto LABEL_9;
  }
  *(_QWORD *)v16 = *(_QWORD *)(v8 + 400);
  *(_DWORD *)(v16 + 8) = *(_DWORD *)(v8 + 408);
  *(_QWORD *)(v12 + 72) = v16;
  UMPDOBJ::vPushToCurrentThread((struct UMPDOBJ *)v8);
  return 1LL;
}
