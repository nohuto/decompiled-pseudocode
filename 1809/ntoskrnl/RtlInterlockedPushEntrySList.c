/*
 * XREFs of RtlInterlockedPushEntrySList @ 0x1401B62D0
 * Callers:
 *     RtlpHpVsContextFree @ 0x1400079BC (RtlpHpVsContextFree.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C53F0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __stdcall RtlInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  return RtlpInterlockedPushEntrySList(ListHead, ListEntry);
}
