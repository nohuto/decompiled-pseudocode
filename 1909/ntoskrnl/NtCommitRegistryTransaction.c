/*
 * XREFs of NtCommitRegistryTransaction @ 0x1406E32D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpReleaseShutdownRundown @ 0x1405FF930 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FFA40 (CmpAcquireShutdownRundown.c)
 *     CmpCommitLightWeightTransaction @ 0x1406E33B4 (CmpCommitLightWeightTransaction.c)
 */

NTSTATUS __cdecl NtCommitRegistryTransaction(HANDLE RegistryTransactionHandle, ULONG Flags)
{
  NTSTATUS v4; // eax
  PVOID v5; // rdi
  NTSTATUS v6; // ebx
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v9[48]; // [rsp+38h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
    return -1073741431;
  if ( Flags )
  {
    v6 = -1073741811;
  }
  else
  {
    v4 = ObReferenceObjectByHandle(
           RegistryTransactionHandle,
           8u,
           CmRegistryTransactionType,
           KeGetCurrentThread()->PreviousMode,
           &Object,
           0LL);
    v5 = Object;
    v6 = v4;
    if ( v4 >= 0 )
    {
      CmpAttachToRegistryProcess((__int64)v9);
      v6 = CmpCommitLightWeightTransaction(v5);
      CmpDetachFromRegistryProcess((struct _KTHREAD *)v9);
      if ( v6 >= 0 )
        v6 = 0;
    }
    if ( v5 )
      ObfDereferenceObject(v5);
  }
  CmpReleaseShutdownRundown();
  return v6;
}
