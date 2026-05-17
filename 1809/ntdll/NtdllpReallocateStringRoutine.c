/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1800D7028
 * Callers:
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x180026594 (LdrpAllocateFileNameBufferIfNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtdllpReallocateStringRoutine(__int64 a1, int a2)
{
  return RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
