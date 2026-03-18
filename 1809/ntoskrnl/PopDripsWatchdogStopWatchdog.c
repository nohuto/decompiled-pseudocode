/*
 * XREFs of PopDripsWatchdogStopWatchdog @ 0x14086EA6C
 * Callers:
 *     PopCancelDripsWatchdog @ 0x1408793C4 (PopCancelDripsWatchdog.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 */

_QWORD *PopDripsWatchdogStopWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  if ( (dword_140416C28 & 4) != 0 )
    dword_140416C28 &= ~4u;
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
