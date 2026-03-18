/*
 * XREFs of PiDmObjectAcquireExclusiveLock @ 0x14071EC58
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDF50 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406FBDA0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PiDmObjectAcquireExclusiveLock(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
