/*
 * XREFs of NtFlushKey @ 0x1406C1210
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406C0BB0 (ExpWatchProductTypeWork.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     CmpDoFlushAll @ 0x140157B08 (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B2640 (CmpLockRegistryFreezeAware.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     CmObReferenceObjectByHandle @ 0x1405CE4CC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x140640AC0 (CmPostCallbackNotificationEx.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 */

NTSTATUS __stdcall NtFlushKey(HANDLE KeyHandle)
{
  __int64 v2; // r15
  char v3; // r14
  struct _KTHREAD *CurrentThread; // rcx
  BOOLEAN v5; // al
  __int64 v6; // r8
  struct _KTHREAD *v7; // rcx
  BOOLEAN v8; // r12
  PVOID v9; // rcx
  int v10; // ebx
  KPROCESSOR_MODE PreviousMode; // si
  struct _KTHREAD *v12; // rax
  _QWORD *v13; // rdi
  int v14; // eax
  __int64 v15; // rbx
  ULONG_PTR v16; // rcx
  struct _EX_RUNDOWN_REF *v17; // rbx
  struct _EX_RUNDOWN_REF *v18; // rsi
  PVOID Object; // [rsp+40h] [rbp-79h] BYREF
  __int64 v21; // [rsp+48h] [rbp-71h] BYREF
  _SLIST_ENTRY v22; // [rsp+50h] [rbp-69h] BYREF
  PVOID v23[2]; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v24[4]; // [rsp+70h] [rbp-49h] BYREF
  LARGE_INTEGER v25[4]; // [rsp+90h] [rbp-29h] BYREF
  _BYTE v26[48]; // [rsp+B0h] [rbp-9h] BYREF

  memset(v24, 0, sizeof(v24));
  v21 = 0LL;
  memset(v25, 0, sizeof(v25));
  v2 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v25, 0x20000u);
  Object = 0LL;
  *((_QWORD *)&v22.Next + 1) = &v22;
  v3 = 0;
  v22.Next = &v22;
  CmpInitializeThreadInfo(v23);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v7 = KeGetCurrentThread();
  v8 = v5;
  if ( !v5 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)v7);
    v10 = -1073741431;
    goto LABEL_30;
  }
  PreviousMode = v7->PreviousMode;
  v10 = CmObReferenceObjectByHandle(KeyHandle, 0, v6, PreviousMode, &Object, &v21);
  if ( v10 >= 0 )
  {
    if ( CmpTraceRoutine && Object )
      v2 = *((_QWORD *)Object + 1);
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v13 = Object;
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 160LL) & 2) != 0
      && PreviousMode
      && (~HIDWORD(v21) & 0x20006) != 0 )
    {
      v10 = -1073741790;
LABEL_27:
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_28;
    }
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      v24[0] = v13;
      v14 = CmpCallCallBacksEx(0x1Eu, (__int64)v24, 0LL, 1, 0x1Fu, (__int64)v13, &v22);
      v10 = v14;
      if ( v14 < 0 )
      {
        if ( v14 == -1073740541 )
          v10 = 0;
        goto LABEL_27;
      }
      v3 = 1;
    }
    CmpLockRegistryFreezeAware(0);
    v15 = v13[1];
    ExAcquirePushLockSharedEx(v15 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 48));
    v10 = CmpPerformKeyBodyDeletionCheck((__int64)Object, 0LL);
    if ( v10 >= 0 )
    {
      v16 = v13[1];
      v17 = *(struct _EX_RUNDOWN_REF **)(v16 + 24);
      if ( v17 == CmpMasterHive )
      {
        CmpUnlockKcb(v16);
        CmpUnlockRegistry();
        CmpAttachToRegistryProcess((__int64)v26);
        CmpDoFlushAll();
        KiUnstackDetachProcess((__int64)v26, 0LL);
        v10 = 0;
        goto LABEL_25;
      }
      v18 = v17 + 204;
      if ( ExAcquireRundownProtection_0(v17 + 204) )
      {
        CmpUnlockKcb(v13[1]);
        CmpUnlockRegistry();
        CmpAttachToRegistryProcess((__int64)v26);
        v10 = CmpFlushHive((ULONG_PTR)v17, 0);
        if ( v10 < 0 )
          v10 = -1073741491;
        KiUnstackDetachProcess((__int64)v26, 0LL);
        ExReleaseRundownProtection_0(v18);
        goto LABEL_25;
      }
      v10 = -1073740763;
    }
    CmpUnlockKcb(v13[1]);
    CmpUnlockRegistry();
LABEL_25:
    if ( v3 )
      v10 = CmPostCallbackNotificationEx(0x1Fu, (__int64)Object, v10, (__int64)v24, 0LL, &v22);
    goto LABEL_27;
  }
LABEL_28:
  v9 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_30:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v9) = 21;
    CmpTraceRoutine(v9, v25, (unsigned int)v10, 0LL, v2, 0LL);
  }
  if ( v8 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  CmCleanupThreadInfo(v23);
  return v10;
}
