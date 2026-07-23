/*
 * XREFs of NtQueryOpenSubKeys @ 0x1407EA7C0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpCleanupParseContext @ 0x1405B6FC4 (CmpCleanupParseContext.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     ObReferenceObjectByNameEx @ 0x14061245C (ObReferenceObjectByNameEx.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpSearchForOpenSubKeys @ 0x140692F60 (CmpSearchForOpenSubKeys.c)
 */

NTSTATUS __stdcall NtQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  char v4; // si
  struct _KTHREAD *CurrentThread; // rcx
  BOOLEAN v6; // r14
  NTSTATUS v7; // ebx
  char PreviousMode; // dl
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  ULONG v11; // ebx
  PVOID Object; // [rsp+48h] [rbp-1A0h] BYREF
  PVOID v14[2]; // [rsp+50h] [rbp-198h] BYREF
  _BYTE v15[48]; // [rsp+60h] [rbp-188h] BYREF
  _QWORD v16[38]; // [rsp+90h] [rbp-158h] BYREF

  Object = 0LL;
  memset(v16, 0, 0x128uLL);
  v16[19] = &v16[18];
  v16[18] = &v16[18];
  memset(&v16[27], 0, 0x50uLL);
  v4 = 0;
  CmpInitializeThreadInfo(v14);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v6 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v9 = (__int64)HandleCount;
      if ( (unsigned __int64)HandleCount >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
    v7 = ObReferenceObjectByNameEx(
           (__int64)TargetKey,
           0LL,
           0x20019u,
           (__int64)CmKeyObjectType,
           PreviousMode,
           (__int64)v16,
           &Object);
    if ( v7 >= 0 )
    {
      CmpLockRegistryExclusive();
      v4 = 1;
      v10 = Object;
      v7 = CmpPerformKeyBodyDeletionCheck((__int64)Object, 0LL);
      if ( v7 >= 0 )
      {
        if ( (*(_DWORD *)(v10[1] + 176LL) & 0x40000) != 0 )
        {
          CmpAttachToRegistryProcess((__int64)v15);
          v11 = CmpSearchForOpenSubKeys(v10[1], 0, 0LL);
          KiUnstackDetachProcess((__int64)v15, 0LL);
          CmpUnlockRegistry();
          v4 = 0;
          *HandleCount = v11;
          v7 = 0;
        }
        else
        {
          v7 = -1073741811;
        }
      }
    }
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v7 = -1073741431;
  }
  if ( v4 )
    CmpUnlockRegistry();
  CmpCleanupParseContext((__int64)v16, 0);
  if ( v6 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( Object )
    ObfDereferenceObject(Object);
  CmCleanupThreadInfo(v14);
  return v7;
}
