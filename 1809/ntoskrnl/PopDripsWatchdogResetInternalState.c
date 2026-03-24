/*
 * XREFs of PopDripsWatchdogResetInternalState @ 0x14086E748
 * Callers:
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x140875B04 (PopPowerAggregatorDisengageDirectedDrips.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     PopDirectedDripsClearDisengageReason @ 0x140867AC8 (PopDirectedDripsClearDisengageReason.c)
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
    dword_140416D7C = 0;
    dword_140416D70 = 0;
    dword_140416D78 = 0;
    dword_140416D74 = PopDripsWatchdogDebounceTickInterval;
    PopDirectedDripsClearDisengageReason(0);
    ExReleaseResourceLite(&PopDripsWatchdogContext);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
