/*
 * XREFs of sub_1800D4DF4 @ 0x1800D4DF4
 * Callers:
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_18002580C @ 0x18002580C (sub_18002580C.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_1800D4DF4(SIZE_T a1, void *a2)
{
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
