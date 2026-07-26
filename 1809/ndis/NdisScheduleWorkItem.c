/*
 * XREFs of NdisScheduleWorkItem @ 0x1C0052740
 * Callers:
 *     <none>
 * Callees:
 *     ndisRecordEvent @ 0x1C00168E8 (ndisRecordEvent.c)
 *     ndisScheduleWorkItemInternal @ 0x1C00170D0 (ndisScheduleWorkItemInternal.c)
 */

NDIS_STATUS __stdcall NdisScheduleWorkItem(PNDIS_WORK_ITEM WorkItem)
{
  ndisRecordEvent(ndisWorkItemLog, 0, WorkItem);
  ndisScheduleWorkItemInternal((__int64)WorkItem);
  return 0;
}
