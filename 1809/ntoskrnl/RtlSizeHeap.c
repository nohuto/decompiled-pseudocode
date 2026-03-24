/*
 * XREFs of RtlSizeHeap @ 0x1402ED990
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSizeHeapInternal @ 0x1402F2DA4 (RtlpSizeHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x1402FB838 (RtlpLogHeapFailure.c)
 */

// local variable allocation has failed, the output may be wrong!
SIZE_T __stdcall RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID MemoryPointer)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, (_DWORD)MemoryPointer, 0, 0LL, 0LL);
  return RtlpSizeHeapInternal(HeapHandle, *(_QWORD *)&Flags, MemoryPointer);
}
