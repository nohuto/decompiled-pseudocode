/*
 * XREFs of PopDripsWatchdogStopWatchdog @ 0x14086FCAC
 * Callers:
 *     PopCancelDripsWatchdog @ 0x14087A604 (PopCancelDripsWatchdog.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 */

_QWORD *PopDripsWatchdogStopWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  if ( (dword_140417D28 & 4) != 0 )
    dword_140417D28 &= ~4u;
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
