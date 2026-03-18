/*
 * XREFs of NtFlushKey @ 0x1406E4CD0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406E4930 (ExpWatchProductTypeWork.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F5C0 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010A0C0 (EtwGetKernelTraceTimestamp.c)
 *     CmpDoFlushAll @ 0x140168D30 (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpCallCallBacksEx @ 0x1405F7B50 (CmpCallCallBacksEx.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmObReferenceObjectByHandle @ 0x1405FE0E0 (CmObReferenceObjectByHandle.c)
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140650290 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistryFreezeAware @ 0x140662030 (CmpLockRegistryFreezeAware.c)
 *     CmPostCallbackNotificationEx @ 0x140687860 (CmPostCallbackNotificationEx.c)
 */

NTSTATUS __stdcall NtFlushKey(HANDLE KeyHandle)
{
  __int64 v2; // r12
  char v3; // r14
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // al
  __int64 v6; // r8
  struct _KTHREAD *v7; // rcx
  BOOLEAN v8; // r15
  int v9; // ebx
  struct _KTHREAD *v10; // rax
  _QWORD *v11; // rdi
  int v12; // eax
  __int64 v13; // rbx
  ULONG_PTR v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rbx
  struct _EX_RUNDOWN_REF *v16; // rsi
  PVOID v17; // rcx
  PVOID Object; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v20[2]; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v21[4]; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v22[48]; // [rsp+78h] [rbp-21h] BYREF
  LARGE_INTEGER v23[4]; // [rsp+A8h] [rbp+Fh] BYREF

  memset(v21, 0, sizeof(v21));
  memset(v22, 0, sizeof(v22));
  memset(v23, 0, sizeof(v23));
  v2 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v23, 0x20000u);
  Object = 0LL;
  v20[1] = v20;
  v3 = 0;
  v20[0] = v20;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v7 = KeGetCurrentThread();
  v8 = v5;
  if ( !v5 )
  {
    KeLeaveCriticalRegionThread((__int64)v7);
    v9 = -1073741431;
    goto LABEL_21;
  }
  v9 = CmObReferenceObjectByHandle(KeyHandle, 0, v6, v7->PreviousMode, &Object, 0LL);
  if ( v9 >= 0 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && Object )
      v2 = *((_QWORD *)Object + 1);
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    v11 = Object;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v21[0] = v11;
      v12 = CmpCallCallBacksEx(0x1Eu, (__int64)v21, 0LL, 1, 0x1Fu, (__int64)v11, (__int64)v20);
      v9 = v12;
      if ( v12 < 0 )
      {
        if ( v12 == -1073740541 )
          v9 = 0;
        goto LABEL_18;
      }
      v3 = 1;
    }
    CmpLockRegistryFreezeAware(0);
    v13 = v11[1];
    ExAcquirePushLockSharedEx(v13 + 48, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 56));
    v9 = CmpPerformKeyBodyDeletionCheck((__int64)Object, 0LL);
    if ( v9 >= 0 )
    {
      v14 = v11[1];
      v15 = *(struct _EX_RUNDOWN_REF **)(v14 + 32);
      if ( v15 == CmpMasterHive )
      {
        CmpUnlockKcb(v14);
        CmpUnlockRegistry();
        CmpAttachToRegistryProcess((__int64)v22);
        CmpDoFlushAll();
        KiUnstackDetachProcess((struct _KTHREAD *)v22, 0);
        v9 = 0;
        goto LABEL_16;
      }
      v16 = v15 + 204;
      if ( ExAcquireRundownProtection_0(v15 + 204) )
      {
        CmpUnlockKcb(v11[1]);
        CmpUnlockRegistry();
        CmpAttachToRegistryProcess((__int64)v22);
        v9 = CmpFlushHive((ULONG_PTR)v15, 0);
        if ( v9 < 0 )
          v9 = -1073741491;
        KiUnstackDetachProcess((struct _KTHREAD *)v22, 0);
        ExReleaseRundownProtection_0(v16);
        goto LABEL_16;
      }
      v9 = -1073740763;
    }
    CmpUnlockKcb(v11[1]);
    CmpUnlockRegistry();
LABEL_16:
    if ( v3 )
      v9 = CmPostCallbackNotificationEx(0x1Fu, (__int64)Object, v9, (__int64)v21, 0LL, v20);
LABEL_18:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v17 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_21:
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v17) = 21;
    (*(void (__fastcall **)(PVOID, LARGE_INTEGER *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v17,
      v23,
      (unsigned int)v9,
      0LL,
      v2,
      0LL);
  }
  if ( v8 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v9;
}
