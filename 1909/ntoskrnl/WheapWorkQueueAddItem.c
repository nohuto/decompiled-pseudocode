/*
 * XREFs of WheapWorkQueueAddItem @ 0x140342140
 * Callers:
 *     WheapReportBootError @ 0x14033F4F8 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x14033F5B8 (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x14033F730 (WheaReportHwError.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KiInsertQueueDpc @ 0x14009C970 (KiInsertQueueDpc.c)
 *     ExInterlockedInsertTailList @ 0x14010A390 (ExInterlockedInsertTailList.c)
 */

void __fastcall WheapWorkQueueAddItem(__int64 a1, _LIST_ENTRY *a2)
{
  ExInterlockedInsertTailList((PLIST_ENTRY)a1, a2, (PKSPIN_LOCK)(a1 + 16));
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 24)) == 1 )
  {
    if ( KeGetCurrentIrql() > 2u )
      KiInsertQueueDpc(a1 + 32, 0LL, 0LL, 0LL, 0);
    else
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 96), DelayedWorkQueue);
  }
}
