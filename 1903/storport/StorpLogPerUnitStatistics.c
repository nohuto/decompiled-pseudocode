/*
 * XREFs of StorpLogPerUnitStatistics @ 0x1C000C660
 * Callers:
 *     StorpLogStatistics @ 0x1C000C494 (StorpLogStatistics.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C00079E0 (RaUnitAcquireRemoveLock.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C000C0F4 (StorpTelemetrySendUnitErrorData.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C000C744 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     RaidUnitDeviceHealthTelemetrySupported @ 0x1C000C928 (RaidUnitDeviceHealthTelemetrySupported.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C000C98C (StorpTelemetrySendUnitPerfData.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C000E5DC (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetrySendUnitQos @ 0x1C004FD78 (StorpTelemetrySendUnitQos.c)
 */

void __fastcall StorpLogPerUnitStatistics(__int64 a1, char a2)
{
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v5; // rsi

  if ( (a2 & 4) != 0 )
    StorpTelemetrySendUnitPerfData();
  if ( (a2 & 0x10) != 0 )
    StorpTelemetrySendUnitErrorData(a1);
  if ( (a2 & 0x20) != 0 && *(_BYTE *)(a1 + 2720) == 1 )
    StorpTelemetrySendUnitQos(a1);
  if ( (a2 & 8) != 0 )
    StorpTelemetrySendAdaptiveIdleCounters(a1);
  if ( a2 < 0 )
  {
    if ( (unsigned __int8)RaidUnitDeviceHealthTelemetrySupported(a1) )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      v5 = WorkItem;
      if ( WorkItem )
      {
        if ( (int)RaUnitAcquireRemoveLock(a1, (__int64)WorkItem, 0LL) < 0 )
          IoFreeWorkItem(v5);
        else
          IoQueueWorkItem(v5, (PIO_WORKITEM_ROUTINE)StorpDeviceHealthWorkItemRoutine, NormalWorkQueue, v5);
      }
    }
  }
  if ( (a2 & 0x40) != 0 )
    StorpTelemetrySendUnitPauseRequestCounters(a1);
  if ( (a2 & 0x30) != 0 )
    *(_DWORD *)(a1 + 1856) = 0;
}
