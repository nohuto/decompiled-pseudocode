/*
 * XREFs of NtOpenRegistryTransaction @ 0x1407EA650
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     ObOpenObjectByName @ 0x1405BA290 (ObOpenObjectByName.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 */

NTSTATUS __cdecl NtOpenRegistryTransaction(
        HANDLE *RegistryTransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjAttributes)
{
  struct _KTHREAD *CurrentThread; // r9
  BOOLEAN v7; // di
  NTSTATUS v8; // ebx
  char PreviousMode; // r14
  __int64 v10; // rax
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  PVOID v13[3]; // [rsp+48h] [rbp-30h] BYREF

  Handle = 0LL;
  CmpInitializeThreadInfo(v13);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v7 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v10 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)RegistryTransactionHandle < 0x7FFFFFFF0000LL )
        v10 = (__int64)RegistryTransactionHandle;
      *(_QWORD *)v10 = 0LL;
    }
    else
    {
      *RegistryTransactionHandle = 0LL;
    }
    v8 = ObOpenObjectByName(
           (__int64)ObjAttributes,
           (__int64)CmRegistryTransactionType,
           PreviousMode,
           0LL,
           DesiredAccess,
           0LL,
           (__int64)&Handle);
    if ( v8 >= 0 )
    {
      *RegistryTransactionHandle = Handle;
      Handle = 0LL;
      v8 = 0;
    }
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v8 = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  if ( v7 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  CmCleanupThreadInfo(v13);
  return v8;
}
