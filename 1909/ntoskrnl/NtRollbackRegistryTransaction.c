/*
 * XREFs of NtRollbackRegistryTransaction @ 0x1406E31C0
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
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406E34C0 (CmpRollbackLightWeightTransaction.c)
 */

__int64 __fastcall NtRollbackRegistryTransaction(HANDLE Handle, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // eax
  PVOID v6; // rdi
  int v7; // ebx
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v10[48]; // [rsp+38h] [rbp-40h] BYREF

  memset(v10, 0, sizeof(v10));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    if ( a2 )
    {
      v7 = -1073741811;
    }
    else
    {
      v5 = ObReferenceObjectByHandle(
             Handle,
             0x10u,
             CmRegistryTransactionType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
      v6 = Object;
      v7 = v5;
      if ( v5 >= 0 )
      {
        CmpAttachToRegistryProcess((__int64)v10);
        v7 = CmpRollbackLightWeightTransaction(v6);
        KiUnstackDetachProcess((struct _KTHREAD *)v10, 0);
        if ( v7 >= 0 )
          v7 = 0;
      }
      if ( v6 )
        ObfDereferenceObject(v6);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v7;
}
