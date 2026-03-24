/*
 * XREFs of RtlpHpVsDelayFreeContextFlush @ 0x1401B6D24
 * Callers:
 *     RtlpHpVsContextFree @ 0x1400079BC (RtlpHpVsContextFree.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1401C5450 (RtlpInterlockedFlushSList.c)
 */

PSLIST_ENTRY __fastcall RtlpHpVsDelayFreeContextFlush(union _SLIST_HEADER *a1)
{
  return RtlpInterlockedFlushSList(a1);
}
