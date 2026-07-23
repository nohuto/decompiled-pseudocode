/*
 * XREFs of NtCommitRegistryTransaction @ 0x1406945D0
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
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     CmpCommitLightWeightTransaction @ 0x140694704 (CmpCommitLightWeightTransaction.c)
 */

NTSTATUS __cdecl NtCommitRegistryTransaction(HANDLE RegistryTransactionHandle, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rcx
  NTSTATUS v5; // ebx
  NTSTATUS v6; // eax
  PVOID v7; // rdi
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  PVOID v10[2]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v11[48]; // [rsp+48h] [rbp-40h] BYREF

  CmpInitializeThreadInfo(v10);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    if ( Flags )
    {
      v5 = -1073741811;
    }
    else
    {
      v6 = ObReferenceObjectByHandle(
             RegistryTransactionHandle,
             8u,
             CmRegistryTransactionType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
      v7 = Object;
      v5 = v6;
      if ( v6 >= 0 )
      {
        CmpAttachToRegistryProcess((__int64)v11);
        v5 = CmpCommitLightWeightTransaction(v7);
        KiUnstackDetachProcess((__int64)v11, 0LL);
        if ( v5 >= 0 )
          v5 = 0;
      }
      if ( v7 )
        ObfDereferenceObject(v7);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v5 = -1073741431;
  }
  CmCleanupThreadInfo(v10);
  return v5;
}
