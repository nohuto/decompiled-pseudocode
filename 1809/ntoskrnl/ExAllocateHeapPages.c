/*
 * XREFs of ExAllocateHeapPages @ 0x14015C870
 * Callers:
 *     ExpAllocateBigPool @ 0x1400E69D0 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140104290 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x14015C450 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x14031A454 (ExGetBigPoolInfo.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     InitializePool @ 0x1409B6DF8 (InitializePool.c)
 * Callees:
 *     RtlpHpAllocateHeap @ 0x1400098C4 (RtlpHpAllocateHeap.c)
 *     RtlpHpSegAlloc @ 0x14000B118 (RtlpHpSegAlloc.c)
 *     ExGetHeapFromType @ 0x1400E7618 (ExGetHeapFromType.c)
 *     MiAllocatePoolPages @ 0x140162AF0 (MiAllocatePoolPages.c)
 */

void *__fastcall ExAllocateHeapPages(unsigned int a1, unsigned __int64 a2, __int64 a3, __int16 a4)
{
  unsigned __int64 v4; // r11
  _DWORD *HeapFromType; // r10

  v4 = a2;
  if ( (unsigned int)ExpHeapBackedPoolEnabledState >= 2 )
    HeapFromType = (_DWORD *)ExGetHeapFromType(a1, 0x80000000, 0);
  else
    HeapFromType = 0LL;
  if ( !HeapFromType )
    return (void *)MiAllocatePoolPages(a1, v4);
  if ( v4 >= (unsigned int)HeapFromType[116] )
    return RtlpHpAllocateHeap(HeapFromType, v4, 0, a4);
  return RtlpHpSegAlloc((__int64)HeapFromType + ((unsigned int)HeapFromType[68] < v4 ? 0xC0 : 0) + 256, v4, v4, v4, 0);
}
