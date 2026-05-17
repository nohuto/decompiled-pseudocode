/*
 * XREFs of RtlpInitializeLeakDetection @ 0x1800F4574
 * Callers:
 *     RtlDetectHeapLeaks @ 0x18006B830 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlpInitializeMap @ 0x1800F461C (RtlpInitializeMap.c)
 */

bool RtlpInitializeLeakDetection()
{
  __int64 Heap; // rax
  _QWORD *v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx

  Heap = RtlAllocateHeap(RtlpLeakHeap, 0, 2112LL);
  RtlpProcessMemoryMap = Heap;
  v1 = (_QWORD *)Heap;
  if ( !Heap )
    return 0;
  RtlpInitializeMap(Heap, 0LL);
  qword_180163BB8 = (__int64)&RtlpBusyList;
  RtlpBusyList = (__int64)&RtlpBusyList;
  qword_180163BC8 = (__int64)&RtlpLeakList;
  RtlpLeakList = (__int64)&RtlpLeakList;
  v2 = 0x100000LL;
  do
  {
    v3 = v2;
    v2 <<= 8;
  }
  while ( v2 >= v3 );
  v1[2] = -1LL;
  *v1 = v3;
  RtlpTempBlocks = (void *)RtlAllocateHeap(RtlpLeakHeap, 0, 163840LL);
  return RtlpTempBlocks != 0;
}
