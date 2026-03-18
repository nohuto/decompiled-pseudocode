/*
 * XREFs of PopPowerAggregatorDisengageDirectedDrips @ 0x1408B28B4
 * Callers:
 *     PopPowerAggregatorExecuteActiveCallback @ 0x1408B29E0 (PopPowerAggregatorExecuteActiveCallback.c)
 *     PopPowerAggregatorExecuteModernStandbyCallback @ 0x1408B2A60 (PopPowerAggregatorExecuteModernStandbyCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     PopDirectedDripsClearDisengageReason @ 0x140159350 (PopDirectedDripsClearDisengageReason.c)
 *     PopDisengageDirectedDrips @ 0x1408A4E84 (PopDisengageDirectedDrips.c)
 */

_QWORD *__fastcall PopPowerAggregatorDisengageDirectedDrips(__int64 a1, __int64 a2)
{
  unsigned __int32 v2; // eax
  __int64 v3; // rcx
  unsigned __int32 v4; // ett
  struct _KTHREAD *CurrentThread; // rax

  _m_prefetchw(PopDirectedDripsState);
  v2 = PopDirectedDripsState[0];
  do
  {
    v3 = v2;
    v4 = v2;
    v2 = _InterlockedCompareExchange(PopDirectedDripsState, v2, v2);
  }
  while ( v4 != v2 );
  if ( (v2 & 1) != 0 )
    PopDisengageDirectedDrips(v3, a2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  dword_14044269C = 0;
  dword_140442690 = 0;
  dword_140442698 = 0;
  dword_140442694 = PopDripsWatchdogDebounceTickInterval;
  PopDirectedDripsClearDisengageReason(0);
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
