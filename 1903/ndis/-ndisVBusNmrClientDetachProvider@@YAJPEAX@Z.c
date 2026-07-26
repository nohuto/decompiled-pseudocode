/*
 * XREFs of ?ndisVBusNmrClientDetachProvider@@YAJPEAX@Z @ 0x1C00BE980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisVBusNmrClientDetachProvider(void *a1)
{
  ExQueueWorkItem(&WorkItem, (WORK_QUEUE_TYPE)40);
  return 259LL;
}
