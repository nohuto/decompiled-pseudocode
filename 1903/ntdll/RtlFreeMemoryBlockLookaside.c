/*
 * XREFs of RtlFreeMemoryBlockLookaside @ 0x180117190
 * Callers:
 *     <none>
 * Callees:
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A01F0 (RtlInterlockedPushEntrySList_0.c)
 */

__int64 __fastcall RtlFreeMemoryBlockLookaside(__int64 a1, __int64 a2)
{
  RtlInterlockedPushEntrySList_0(*(PSLIST_HEADER *)(a2 - 48 + 32), (PSLIST_ENTRY)(a2 - 48));
  return 0LL;
}
