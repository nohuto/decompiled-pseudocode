/*
 * XREFs of RtlpHpVsDelayFreeContextFlush @ 0x1401B6E8C
 * Callers:
 *     RtlpHpVsContextFree @ 0x1400079BC (RtlpHpVsContextFree.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1401C55B0 (RtlpInterlockedFlushSList.c)
 */

PSLIST_ENTRY __fastcall RtlpHpVsDelayFreeContextFlush(_SLIST_HEADER *a1)
{
  return RtlpInterlockedFlushSList(a1);
}
