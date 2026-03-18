/*
 * XREFs of WmiAcquireSmbiosLockExclusive @ 0x1407270F4
 * Callers:
 *     PoBroadcastSystemState @ 0x140597FCC (PoBroadcastSystemState.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN WmiAcquireSmbiosLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&WmipSMBiosLock, 1u);
}
