/*
 * XREFs of NtQueryOpenSubKeys @ 0x140823920
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpCleanupParseContext @ 0x1405FF960 (CmpCleanupParseContext.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140663450 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpSearchForOpenSubKeys @ 0x1406B8C30 (CmpSearchForOpenSubKeys.c)
 *     ObReferenceObjectByNameEx @ 0x1406BA0F8 (ObReferenceObjectByNameEx.c)
 */

NTSTATUS __stdcall NtQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  char v4; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  BOOLEAN v7; // r14
  NTSTATUS v8; // ebx
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  ULONG v11; // ebx
  PVOID Object; // [rsp+48h] [rbp-190h] BYREF
  _BYTE v14[48]; // [rsp+50h] [rbp-188h] BYREF
  _QWORD v15[38]; // [rsp+80h] [rbp-158h] BYREF

  memset(v14, 0, sizeof(v14));
  Object = 0LL;
  memset(v15, 0, 0x128uLL);
  v15[19] = &v15[18];
  v15[18] = &v15[18];
  memset(&v15[27], 0, 0x50uLL);
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v7 )
  {
    LOBYTE(v6) = KeGetCurrentThread()->PreviousMode;
    if ( (_BYTE)v6 == 1 )
    {
      v9 = (__int64)HandleCount;
      if ( (unsigned __int64)HandleCount >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
    v8 = ObReferenceObjectByNameEx(
           (__int64)TargetKey,
           v6,
           0x20019u,
           (__int64)CmKeyObjectType,
           v6,
           (__int64)v15,
           &Object);
    if ( v8 >= 0 )
    {
      CmpLockRegistryExclusive();
      v4 = 1;
      v10 = Object;
      v8 = CmpPerformKeyBodyDeletionCheck((__int64)Object, 0LL);
      if ( v8 >= 0 )
      {
        if ( (*(_DWORD *)(v10[1] + 184LL) & 0x40000) != 0 )
        {
          CmpAttachToRegistryProcess((__int64)v14);
          v11 = CmpSearchForOpenSubKeys(v10[1], 0, 0LL);
          KiUnstackDetachProcess((struct _KTHREAD *)v14, 0);
          CmpUnlockRegistry();
          v4 = 0;
          *HandleCount = v11;
          v8 = 0;
        }
        else
        {
          v8 = -1073741811;
        }
      }
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v8 = -1073741431;
  }
  if ( v4 )
    CmpUnlockRegistry();
  CmpCleanupParseContext((__int64)v15, 0);
  if ( v7 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v8;
}
