/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1800D7028
 * Callers:
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x180026594 (LdrpAllocateFileNameBufferIfNeeded.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpReallocateStringRoutine(SIZE_T a1, void *a2)
{
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
