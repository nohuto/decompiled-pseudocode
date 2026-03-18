/*
 * XREFs of WmiAcquireSmbiosLockExclusive @ 0x1406DDD14
 * Callers:
 *     PoBroadcastSystemState @ 0x1405681E0 (PoBroadcastSystemState.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN WmiAcquireSmbiosLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&WmipSMBiosLock, 1u);
}
