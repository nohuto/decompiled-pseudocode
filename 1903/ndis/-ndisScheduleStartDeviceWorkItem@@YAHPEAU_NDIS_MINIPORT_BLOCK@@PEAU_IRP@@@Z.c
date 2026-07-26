/*
 * XREFs of ?ndisScheduleStartDeviceWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00319D0
 * Callers:
 *     ndisPnPIrpStartDevice @ 0x1C002F538 (ndisPnPIrpStartDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisScheduleStartDeviceWorkItem(_LIST_ENTRY *a1, _LIST_ENTRY *a2)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x2020444Eu);
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->List.Blink = 0LL;
  PoolWithTag->List.Flink = 0LL;
  PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ndisStartDeviceWorkItem;
  PoolWithTag->Parameter = PoolWithTag;
  PoolWithTag[1].List.Flink = a1;
  PoolWithTag[1].List.Blink = a2;
  ExQueueWorkItem(PoolWithTag, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  return 0LL;
}
