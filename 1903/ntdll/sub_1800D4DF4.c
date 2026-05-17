/*
 * XREFs of sub_1800D4DF4 @ 0x1800D4DF4
 * Callers:
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_18002580C @ 0x18002580C (sub_18002580C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D4DF4(__int64 a1, __int64 a2)
{
  return RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
