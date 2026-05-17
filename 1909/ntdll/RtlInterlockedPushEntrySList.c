/*
 * XREFs of RtlInterlockedPushEntrySList @ 0x180067F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PSLIST_ENTRY __stdcall RtlInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  return (PSLIST_ENTRY)RtlpInterlockedPushEntrySList(ListHead, ListEntry);
}
