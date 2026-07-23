/*
 * XREFs of sub_18009BB3C @ 0x18009BB3C
 * Callers:
 *     sub_18009BC24 @ 0x18009BC24 (sub_18009BC24.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

_QWORD *__fastcall sub_18009BB3C(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  _QWORD *Heap; // rbx

  v3 = a2;
  v4 = 1 << (a2 + 4);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v4 + 8);
  if ( Heap )
  {
    *Heap = 0LL;
    Heap[1] = 0LL;
    if ( v4 )
      memset(Heap + 1, 0, 8LL * v4);
    *(_QWORD *)(a1 + 8 * v3) = Heap;
  }
  return Heap;
}
