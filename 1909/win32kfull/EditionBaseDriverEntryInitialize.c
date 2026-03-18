/*
 * XREFs of EditionBaseDriverEntryInitialize @ 0x1C011C5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EditionBaseDriverEntryInitialize()
{
  struct _KEVENT *KernelEvent; // rax
  unsigned int v1; // ecx

  KernelEvent = (struct _KEVENT *)CreateKernelEvent(1LL, 0LL);
  v1 = 0;
  CRitTimerScanWakeSystem::ritTimerScanWakeEvent = KernelEvent;
  if ( KernelEvent )
    CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock = 0LL;
  else
    return (unsigned int)-1073741801;
  return v1;
}
