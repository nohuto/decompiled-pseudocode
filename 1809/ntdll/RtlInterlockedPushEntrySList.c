/*
 * XREFs of RtlInterlockedPushEntrySList @ 0x180071AC0
 * Callers:
 *     RtlpHpVsContextFree @ 0x18001E0C0 (RtlpHpVsContextFree.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PSLIST_ENTRY __stdcall RtlInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  return (PSLIST_ENTRY)RtlpInterlockedPushEntrySList(ListHead);
}
