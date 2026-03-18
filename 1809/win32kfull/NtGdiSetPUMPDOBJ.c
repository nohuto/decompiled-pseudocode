/*
 * XREFs of NtGdiSetPUMPDOBJ @ 0x1C008F620
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C008E800 (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     UMPDOBJ_bCleanupWrap @ 0x1C008F9C0 (UMPDOBJ_bCleanupWrap.c)
 *     ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C008FEA8 (-bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ.c)
 *     ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C008FFFC (-vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0094930 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C02952F4 (--1UMPDREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetPUMPDOBJ(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  int v6; // ebx
  __int64 v8; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  struct _EPROCESS *CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // r12
  __int64 v14; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rcx
  int v17; // ebx
  struct _KPROCESS *v18; // rbx
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v20; // rdx
  struct UMPDOBJ *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // [rsp+28h] [rbp-40h]
  PEPROCESS Process[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  int v26; // [rsp+78h] [rbp+10h]

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
  v25 = v8;
  if ( v6 )
  {
    if ( !a1 || !v8 )
      goto LABEL_9;
  }
  else if ( !a3 )
  {
LABEL_9:
    UMPDREF::~UMPDREF((UMPDREF *)&v25);
    return 0LL;
  }
  if ( gUMPDSecurityLevel == 1 )
  {
    if ( v8 )
    {
      PsLookupProcessByProcessId((HANDLE)*(int *)(v8 + 408), Process);
      if ( (unsigned int)bIsProcessLocalSystem(Process[0]) )
      {
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(a1, a2, v10, v11);
        if ( !(unsigned int)bIsProcessLocalSystem(CurrentProcess) )
          goto LABEL_9;
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v14 = *ThreadWin32Thread;
  }
  if ( !v14 )
    goto LABEL_9;
  if ( !v6 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v23 = *a3;
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj((struct _W32THREAD *)v14);
    v21 = ThreadCurrentObj;
    if ( !ThreadCurrentObj || v23 != *(_QWORD *)ThreadCurrentObj )
      goto LABEL_9;
    if ( *((_DWORD *)ThreadCurrentObj + 106) )
    {
      if ( *((_QWORD *)ThreadCurrentObj + 3) != W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20) )
        goto LABEL_9;
      *((_BYTE *)v21 + 32) |= 2u;
      UMPDOBJ::vRelease(v21, 1);
      v22 = *(_QWORD *)(v14 + 72);
      if ( v22 )
      {
        Win32FreePool(v22);
        *(_QWORD *)(v14 + 72) = 0LL;
      }
    }
LABEL_49:
    if ( v8 )
    {
      DEC_SHARE_REF_CNT(v8);
      if ( (unsigned int)UMPDOBJ_bCleanupWrap(v8) )
        Win32FreePool(v8);
    }
    return 1LL;
  }
  v16 = *(unsigned int *)(v8 + 424);
  v26 = *(_DWORD *)(v8 + 424);
  if ( a4 )
  {
    if ( (unsigned __int64)(a4 + 1) > MmUserProbeAddress || a4 + 1 <= a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = v16;
  }
  if ( !(_DWORD)v16 )
  {
    if ( (struct UMPDOBJ *)v8 != UMPDOBJ::GetThreadCurrentObj((struct _W32THREAD *)v14) )
      goto LABEL_9;
    if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = 0LL;
    goto LABEL_49;
  }
  if ( (unsigned int)bSandboxedCurrentProcess(v16) )
    goto LABEL_9;
  v17 = *(_DWORD *)(v8 + 408);
  if ( v17 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    goto LABEL_9;
  if ( *(_QWORD *)(v14 + 40) != v14 + 40 )
    goto LABEL_9;
  v18 = (struct _KPROCESS *)PALLOCMEM2(0x10uLL, 1684631623LL, 1);
  Process[1] = v18;
  if ( !v18 )
    goto LABEL_9;
  if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = 0LL;
  if ( !UMPDOBJ::bTryAcquireExclussiveAccess((UMPDOBJ *)v8) )
  {
    Win32FreePool(v18);
    goto LABEL_9;
  }
  *(_QWORD *)v18 = *(_QWORD *)(v8 + 400);
  *((_DWORD *)v18 + 2) = *(_DWORD *)(v8 + 408);
  *(_QWORD *)(v14 + 72) = v18;
  UMPDOBJ::vPushToCurrentThread((struct UMPDOBJ *)v8);
  return 1LL;
}
