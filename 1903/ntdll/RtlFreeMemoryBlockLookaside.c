/*
 * XREFs of RtlFreeMemoryBlockLookaside @ 0x180117190
 * Callers:
 *     <none>
 * Callees:
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A01F0 (RtlInterlockedPushEntrySList_0.c)
 */

NTSTATUS __cdecl RtlFreeMemoryBlockLookaside(PVOID MemoryBlockLookaside, PVOID Block)
{
  RtlInterlockedPushEntrySList_0(*((PSLIST_HEADER *)Block - 2), (PSLIST_ENTRY)Block - 3);
  return 0;
}
