/*
 * XREFs of NtOpenKeyTransactedEx @ 0x1406E8A50
 * Callers:
 *     NtOpenKeyTransacted @ 0x1408237B0 (NtOpenKeyTransacted.c)
 * Callees:
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     CmOpenKey @ 0x1405FF600 (CmOpenKey.c)
 *     CmpReleaseShutdownRundown @ 0x1405FF930 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FFA40 (CmpAcquireShutdownRundown.c)
 *     CmpTransDereferenceTransaction @ 0x140636BA0 (CmpTransDereferenceTransaction.c)
 */

NTSTATUS __cdecl NtOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  NTSTATUS v9; // eax
  __int64 v10; // rbx
  NTSTATUS v11; // edi
  NTSTATUS v12; // eax
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v15; // [rsp+38h] [rbp-20h] BYREF

  if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
    return -1073741431;
  v9 = ObReferenceObjectByHandle(
         TransactionHandle,
         4u,
         CmRegistryTransactionType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  v10 = (__int64)Object;
  v11 = v9;
  if ( v9 == -1073741788 )
  {
    v12 = ObReferenceObjectByHandle(
            TransactionHandle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v15,
            0LL);
    v10 = (__int64)v15;
    v11 = v12;
    goto LABEL_4;
  }
  if ( v9 >= 0 )
  {
    v10 = (unsigned __int64)Object | 1;
LABEL_4:
    if ( v11 >= 0 )
      v11 = CmOpenKey(KeyHandle, DesiredAccess, (__int64)ObjectAttributes, OpenOptions, v10);
  }
  if ( v10 )
    CmpTransDereferenceTransaction(v10);
  CmpReleaseShutdownRundown();
  return v11;
}
