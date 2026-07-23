/*
 * XREFs of ExFreeHeapPages @ 0x14015B374
 * Callers:
 *     ExpAllocateBigPool @ 0x1400E6A70 (ExpAllocateBigPool.c)
 *     ExPoolCleanupExpansionTable @ 0x140142060 (ExPoolCleanupExpansionTable.c)
 *     ExpResizeBigPageTable @ 0x14015C570 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x14031A744 (ExGetBigPoolInfo.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExDeferredFreePool @ 0x14034E7A0 (ExDeferredFreePool.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x140007BC0 (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x14000E644 (ExGetHeapFromVA.c)
 *     MiFreePoolPages @ 0x140161200 (MiFreePoolPages.c)
 */

__int64 __fastcall ExFreeHeapPages(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  __int128 *HeapFromVA; // rax

  if ( (unsigned int)ExpHeapBackedPoolEnabledState >= 2 )
    HeapFromVA = (__int128 *)ExGetHeapFromVA(a1);
  else
    HeapFromVA = 0LL;
  if ( HeapFromVA )
    return RtlpHpFreeHeap(HeapFromVA, a1, 0);
  else
    return MiFreePoolPages(a1, a2, a3);
}
