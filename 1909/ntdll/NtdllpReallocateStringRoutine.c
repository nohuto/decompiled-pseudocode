/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1800D4EB4
 * Callers:
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18002580C (LdrpAllocateFileNameBufferIfNeeded.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpReallocateStringRoutine(SIZE_T a1, void *a2)
{
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
