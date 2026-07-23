/*
 * XREFs of RtlInitializeSListHead_0 @ 0x18006F07C
 * Callers:
 *     sub_18004C8EC @ 0x18004C8EC (sub_18004C8EC.c)
 *     RtlCreateMemoryBlockLookaside @ 0x18006EEB0 (RtlCreateMemoryBlockLookaside.c)
 *     RtlInitializeSListHead @ 0x180073E70 (RtlInitializeSListHead.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800E8930 (RtlResetMemoryBlockLookaside.c)
 *     sub_1800FAB90 @ 0x1800FAB90 (sub_1800FAB90.c)
 *     sub_180102AD8 @ 0x180102AD8 (sub_180102AD8.c)
 *     sub_180107868 @ 0x180107868 (sub_180107868.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180117010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

void __cdecl RtlInitializeSListHead_0(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *ListHead = 0uLL;
}
