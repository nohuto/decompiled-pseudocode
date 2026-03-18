/*
 * XREFs of RtlFreeHeap @ 0x1401108B0
 * Callers:
 *     ExAllocateHeapPool @ 0x140037CE0 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeap @ 0x1401101D4 (RtlpHpAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x1401109E4 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x140110910 (RtlpFreeHeapInternal.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x14030BC74 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpLogHeapFailure @ 0x140319BCC (RtlpLogHeapFailure.c)
 */

BOOLEAN __stdcall RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  if ( !BaseAddress )
    return 1;
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return RtlpHpFreeWithExceptionProtection(HeapHandle, BaseAddress, Flags);
  else
    return RtlpFreeHeapInternal(HeapHandle, BaseAddress, Flags);
}
