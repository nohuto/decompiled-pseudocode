/*
 * XREFs of RtlpHpTagAllocateHeap @ 0x18004DD2C
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x18003A9E0 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x18003AAA0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTaggableHeap @ 0x18004DCEC (RtlpHpTaggableHeap.c)
 *     RtlpHpTagContextGetTag @ 0x18009C584 (RtlpHpTagContextGetTag.c)
 */

__int64 __fastcall RtlpHpTagAllocateHeap(unsigned __int16 *HeapHandle, unsigned __int64 a2, int a3)
{
  __int64 v6; // rcx
  unsigned __int16 Tag; // di
  __int64 result; // rax

  if ( RtlpHpTaggableHeap((__int64)HeapHandle) )
    Tag = RtlpHpTagContextGetTag(v6, a2);
  else
    Tag = 0;
  result = RtlpAllocateHeapInternal(HeapHandle, a2, a3, Tag);
  if ( !result )
  {
    if ( Tag )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(qword_180163B58 + 8LL * Tag - 8) + 32LL),
        -(__int64)a2);
  }
  return result;
}
