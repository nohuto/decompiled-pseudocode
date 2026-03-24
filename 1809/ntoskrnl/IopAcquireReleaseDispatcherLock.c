/*
 * XREFs of IopAcquireReleaseDispatcherLock @ 0x14082741C
 * Callers:
 *     IopPassiveInterruptWorker @ 0x1402887D0 (IopPassiveInterruptWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
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
    return (unsigned int)KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
