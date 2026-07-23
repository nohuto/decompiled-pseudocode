/*
 * XREFs of NtCommitRegistryTransaction @ 0x1406E1C50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpReleaseShutdownRundown @ 0x1405FDF00 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FE010 (CmpAcquireShutdownRundown.c)
 *     CmpCommitLightWeightTransaction @ 0x1406E1D34 (CmpCommitLightWeightTransaction.c)
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
