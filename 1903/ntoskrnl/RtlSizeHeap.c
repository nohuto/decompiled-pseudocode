/*
 * XREFs of RtlSizeHeap @ 0x14030C110
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSizeHeapInternal @ 0x1403118E0 (RtlpSizeHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x14031A17C (RtlpLogHeapFailure.c)
 */

// local variable allocation has failed, the output may be wrong!
SIZE_T __stdcall RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID MemoryPointer)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, (_DWORD)MemoryPointer, 0, 0LL, 0LL);
  return RtlpSizeHeapInternal(HeapHandle, *(_QWORD *)&Flags, MemoryPointer);
}
