/*
 * XREFs of NtOpenKeyTransactedEx @ 0x140694CD0
 * Callers:
 *     NtOpenKeyTransacted @ 0x1407EA630 (NtOpenKeyTransacted.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmOpenKey @ 0x1405E1EA0 (CmOpenKey.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     CmpTransDereferenceTransaction @ 0x140695254 (CmpTransDereferenceTransaction.c)
 */

NTSTATUS __cdecl NtOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  struct _KTHREAD *CurrentThread; // r10
  BOOLEAN v10; // al
  struct _KTHREAD *v11; // rcx
  NTSTATUS v12; // edi
  NTSTATUS v13; // eax
  __int64 v14; // rbx
  NTSTATUS v15; // eax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  PVOID v18; // [rsp+38h] [rbp-30h] BYREF
  PVOID v19[2]; // [rsp+40h] [rbp-28h] BYREF

  CmpInitializeThreadInfo(v19);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v11 = KeGetCurrentThread();
  if ( !v10 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)v11);
    v12 = -1073741431;
    goto LABEL_12;
  }
  v13 = ObReferenceObjectByHandle(TransactionHandle, 4u, CmRegistryTransactionType, v11->PreviousMode, &Object, 0LL);
  v14 = (__int64)Object;
  v12 = v13;
  if ( v13 == -1073741788 )
  {
    v15 = ObReferenceObjectByHandle(
            TransactionHandle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v18,
            0LL);
    v14 = (__int64)v18;
    v12 = v15;
    goto LABEL_7;
  }
  if ( v13 >= 0 )
  {
    v14 = (unsigned __int64)Object | 1;
LABEL_7:
    if ( v12 >= 0 )
      v12 = CmOpenKey(KeyHandle, DesiredAccess, (__int64)ObjectAttributes, OpenOptions, v14);
  }
  if ( v14 )
    CmpTransDereferenceTransaction(v14);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_12:
  CmCleanupThreadInfo(v19);
  return v12;
}
