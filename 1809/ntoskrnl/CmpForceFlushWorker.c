/*
 * XREFs of CmpForceFlushWorker @ 0x1407FC360
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpDoFlushAll @ 0x140157B08 (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 */

PVOID CmpForceFlushWorker()
{
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v2[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v3[48]; // [rsp+30h] [rbp-48h] BYREF

  CmpInitializeThreadInfo(v2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    CmpAttachToRegistryProcess((__int64)v3);
    CmpDoFlushAll();
    KiUnstackDetachProcess((__int64)v3, 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  _InterlockedExchange(&CmpForceFlushPending, 0);
  return CmCleanupThreadInfo(v2);
}
