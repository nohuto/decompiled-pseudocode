/*
 * XREFs of ExAllocateHeapPages @ 0x140116424
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x1401160DC (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140156EA8 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x140339300 (ExGetBigPoolInfo.c)
 *     InitializePool @ 0x1409EE8D0 (InitializePool.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x14005FD40 (RtlpHpSegAlloc.c)
 *     RtlpHpAllocateHeap @ 0x140110AE4 (RtlpHpAllocateHeap.c)
 *     ExGetHeapFromType @ 0x140118264 (ExGetHeapFromType.c)
 */

_WORD *ExAllocateHeapPages()
{
  _DWORD *HeapFromType; // rax
  int v1; // r8d
  __int16 v2; // r9
  unsigned __int64 v3; // r10
  unsigned int v5; // [rsp+20h] [rbp-18h]

  HeapFromType = (_DWORD *)ExGetHeapFromType(512LL, 0x80000000LL, 0LL);
  if ( v3 >= (unsigned int)HeapFromType[116] )
    return RtlpHpAllocateHeap(HeapFromType, v3, v1, v2);
  else
    return RtlpHpSegAlloc(
             (__int64)HeapFromType + ((unsigned int)HeapFromType[68] < v3 ? 0xC0 : 0) + 256,
             v3,
             v3,
             v3,
             v1 & v5);
}
