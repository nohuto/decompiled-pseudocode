/*
 * XREFs of NdisScheduleWorkItem @ 0x1C0081A30
 * Callers:
 *     <none>
 * Callees:
 *     ndisRecordEvent @ 0x1C001A168 (ndisRecordEvent.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001B218 (ndisScheduleWorkItemInternal.c)
 */

NDIS_STATUS __stdcall NdisScheduleWorkItem(PNDIS_WORK_ITEM WorkItem)
{
  ndisRecordEvent(ndisWorkItemLog, 0, WorkItem);
  ndisScheduleWorkItemInternal((__int64)WorkItem);
  return 0;
}
