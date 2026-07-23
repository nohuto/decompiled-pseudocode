/*
 * XREFs of NtCreateRegistryTransaction @ 0x1406C8F80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateRegistryTransaction(
        HANDLE *RegistryTransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjAttributes,
        ULONG CreateOptions)
{
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // r10
  BOOLEAN v9; // si
  NTSTATUS inserted; // ebx
  char PreviousMode; // r15
  __int64 v12; // rax
  _QWORD *v13; // rbx
  __int64 v15; // [rsp+20h] [rbp-78h]
  HANDLE Handle; // [rsp+58h] [rbp-40h] BYREF
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF
  PVOID v18[3]; // [rsp+68h] [rbp-30h] BYREF

  v5 = (int)ObjAttributes;
  Object = 0LL;
  Handle = 0LL;
  CmpInitializeThreadInfo(v18);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v9 )
  {
    if ( CreateOptions )
    {
      inserted = -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode == 1 )
      {
        v12 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)RegistryTransactionHandle < 0x7FFFFFFF0000LL )
          v12 = (__int64)RegistryTransactionHandle;
        *(_QWORD *)v12 = 0LL;
      }
      else
      {
        *RegistryTransactionHandle = 0LL;
      }
      inserted = ObCreateObjectEx(
                   PreviousMode,
                   CmRegistryTransactionType,
                   v5,
                   PreviousMode,
                   v15,
                   32,
                   0,
                   0,
                   &Object,
                   0LL);
      if ( inserted >= 0 )
      {
        v13 = Object;
        memset(Object, 0, 0x20uLL);
        v13[1] = 0LL;
        inserted = ObInsertObjectEx(v13, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&Handle);
        Object = 0LL;
        if ( inserted >= 0 )
        {
          *RegistryTransactionHandle = Handle;
          Handle = 0LL;
          inserted = 0;
        }
      }
    }
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    inserted = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v9 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  CmCleanupThreadInfo(v18);
  return inserted;
}
