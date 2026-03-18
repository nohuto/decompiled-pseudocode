/*
 * XREFs of PspAcquirePushLockExclusive @ 0x140197EDC
 * Callers:
 *     PsStartSiloMonitor @ 0x14077B960 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1408C9F50 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void PspAcquirePushLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
}
