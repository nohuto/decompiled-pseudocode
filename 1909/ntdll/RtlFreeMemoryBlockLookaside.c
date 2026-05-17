/*
 * XREFs of RtlFreeMemoryBlockLookaside @ 0x180117190
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A09A0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall RtlFreeMemoryBlockLookaside(__int64 a1, __int64 a2)
{
  RtlpInterlockedPushEntrySList(*(__int128 **)(a2 - 48 + 32), (_QWORD *)(a2 - 48));
  return 0LL;
}
