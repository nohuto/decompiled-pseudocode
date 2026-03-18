/*
 * XREFs of ExAllocateHeapPages @ 0x1400F4544
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x1400F41FC (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140157548 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x140338D60 (ExGetBigPoolInfo.c)
 *     InitializePool @ 0x1409EE7E8 (InitializePool.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x14005FDE0 (RtlpHpSegAlloc.c)
 *     ExGetHeapFromType @ 0x1400F6384 (ExGetHeapFromType.c)
 *     RtlpHpAllocateHeap @ 0x1401101D4 (RtlpHpAllocateHeap.c)
 */

_WORD *ExAllocateHeapPages()
{
  unsigned int *HeapFromType; // rax
  int v1; // r8d
  unsigned __int64 v2; // r10
  unsigned int v4; // [rsp+20h] [rbp-18h]

  HeapFromType = (unsigned int *)ExGetHeapFromType(512LL, 0x80000000LL, 0LL);
  if ( v2 >= HeapFromType[116] )
    return (_WORD *)RtlpHpAllocateHeap(HeapFromType);
  else
    return RtlpHpSegAlloc((__int64)HeapFromType + (HeapFromType[68] < v2 ? 0xC0 : 0) + 256, v2, v2, v2, v1 & v4);
}
