/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x180046684
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x1800464A0 (RtlCanonicalizeDomainName.c)
 *     RtlIdnToAscii @ 0x180046660 (RtlIdnToAscii.c)
 *     RtlIdnToNameprepUnicode @ 0x1800FAF20 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpNameprepAsciiRealWorker @ 0x180046788 (RtlpNameprepAsciiRealWorker.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned __int64 Heap; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned int v13; // esi

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 1022LL);
  v11 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 1030LL);
  v12 = v11;
  if ( Heap && v11 )
    v13 = RtlpNameprepAsciiRealWorker(a1, a2, a3, a4, a5, a6, Heap);
  else
    v13 = -1073741801;
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( v12 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
  return v13;
}
