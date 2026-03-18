/*
 * XREFs of PspAcquirePushLockExclusive @ 0x14019853C
 * Callers:
 *     PsStartSiloMonitor @ 0x14077E230 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1408C9830 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void PspAcquirePushLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
}
