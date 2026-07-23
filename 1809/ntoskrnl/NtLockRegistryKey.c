/*
 * XREFs of NtLockRegistryKey @ 0x14068F430
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmObReferenceObjectByHandle @ 0x1405CE4CC (CmObReferenceObjectByHandle.c)
 *     CmLockKeyForWrite @ 0x14068F520 (CmLockKeyForWrite.c)
 */

NTSTATUS __stdcall NtLockRegistryKey(HANDLE KeyHandle)
{
  NTSTATUS v2; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r8
  PVOID v6[3]; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  CmpInitializeThreadInfo(v6);
  Object = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v2 = -1073741727;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
    {
      v2 = CmObReferenceObjectByHandle(KeyHandle, 0x20006u, v4, 0, &Object, 0LL);
      if ( v2 >= 0 )
      {
        v2 = CmLockKeyForWrite(Object);
        if ( v2 >= 0 )
          v2 = 0;
      }
      if ( Object )
        ObfDereferenceObject(Object);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    else
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v2 = -1073741431;
    }
  }
  CmCleanupThreadInfo(v6);
  return v2;
}
