/*
 * XREFs of NtCreateKeyTransacted @ 0x140694E30
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmCreateKey @ 0x1405B6A60 (CmCreateKey.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     CmpTransDereferenceTransaction @ 0x140695254 (CmpTransDereferenceTransaction.c)
 */

NTSTATUS __cdecl NtCreateKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        HANDLE TransactionHandle,
        PULONG Disposition)
{
  struct _KTHREAD *CurrentThread; // r9
  NTSTATUS Key; // edi
  NTSTATUS v13; // eax
  __int64 v14; // r9
  __int64 v15; // rbx
  NTSTATUS v16; // eax
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  PVOID v19; // [rsp+48h] [rbp-20h] BYREF
  PVOID v20[2]; // [rsp+50h] [rbp-18h] BYREF

  CmpInitializeThreadInfo(v20);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    Key = -1073741431;
    goto LABEL_12;
  }
  v13 = ObReferenceObjectByHandle(
          TransactionHandle,
          4u,
          CmRegistryTransactionType,
          KeGetCurrentThread()->PreviousMode,
          &Object,
          0LL);
  v15 = (__int64)Object;
  Key = v13;
  if ( v13 == -1073741788 )
  {
    v16 = ObReferenceObjectByHandle(
            TransactionHandle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v19,
            0LL);
    v15 = (__int64)v19;
    Key = v16;
    goto LABEL_7;
  }
  if ( v13 >= 0 )
  {
    v15 = (unsigned __int64)Object | 1;
LABEL_7:
    if ( Key >= 0 )
      Key = CmCreateKey(
              KeyHandle,
              DesiredAccess,
              (ULONG_PTR)ObjectAttributes,
              v14,
              (__int128 *)Class,
              CreateOptions,
              Disposition,
              v15);
  }
  if ( v15 )
    CmpTransDereferenceTransaction(v15);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_12:
  CmCleanupThreadInfo(v20);
  return Key;
}
