/*
 * XREFs of IopAcquireReleaseDispatcherLock @ 0x14086189C
 * Callers:
 *     IopPassiveInterruptWorker @ 0x14029E8C0 (IopPassiveInterruptWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

NTSTATUS __fastcall IopAcquireReleaseDispatcherLock(struct _KEVENT *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  struct _KTHREAD *CurrentThread; // rax

  v2 = a1 + 7;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    return KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  }
  else
  {
    KeSetEvent(v2, 0, 0);
    return (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
