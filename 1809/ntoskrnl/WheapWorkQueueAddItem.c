/*
 * XREFs of WheapWorkQueueAddItem @ 0x140321184
 * Callers:
 *     WheapReportBootError @ 0x14031FAEC (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x14031FBAC (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x14031FD20 (WheaReportHwError.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
 *     ExInterlockedInsertTailList @ 0x14010BF50 (ExInterlockedInsertTailList.c)
 */

void __fastcall WheapWorkQueueAddItem(__int64 a1, struct _LIST_ENTRY *a2)
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
