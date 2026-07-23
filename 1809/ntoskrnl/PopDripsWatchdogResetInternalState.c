/*
 * XREFs of PopDripsWatchdogResetInternalState @ 0x14086F9A8
 * Callers:
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x140876D64 (PopPowerAggregatorDisengageDirectedDrips.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PopDirectedDripsClearDisengageReason @ 0x140868D28 (PopDirectedDripsClearDisengageReason.c)
 */

_QWORD *PopDripsWatchdogResetInternalState()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *result; // rax

  if ( PopDirectedDripsEnableV2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
    dword_140417DFC = 0;
    dword_140417DF0 = 0;
    dword_140417DF8 = 0;
    dword_140417DF4 = PopDripsWatchdogDebounceTickInterval;
    PopDirectedDripsClearDisengageReason(0);
    ExReleaseResourceLite(&PopDripsWatchdogContext);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
