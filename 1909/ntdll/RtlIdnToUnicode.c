/*
 * XREFs of RtlIdnToUnicode @ 0x18002BF10
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18002AE90 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlpIdnToUnicodeWorker @ 0x18002BFC0 (RtlpIdnToUnicodeWorker.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlIdnToUnicode(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 Heap; // rax
  __int64 v10; // rdi
  unsigned int v11; // ebx

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 1022LL);
  v10 = Heap;
  if ( !Heap )
    return 3221225495LL;
  v11 = RtlpIdnToUnicodeWorker(a1, a2, a3, a4, a5, Heap);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v10);
  return v11;
}
