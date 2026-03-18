/*
 * XREFs of ExIsSpecialPoolAddress @ 0x14033F254
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140971F50 (VeAllocatePoolWithTagPriority.c)
 *     ExFreePoolSanityChecks @ 0x14098A778 (ExFreePoolSanityChecks.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x14000331C (ExGetHeapFromVA.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14019CEDC (ExpHpIsSpecialPoolHeap.c)
 */

__int64 __fastcall ExIsSpecialPoolAddress(ULONG_PTR a1)
{
  unsigned __int64 HeapFromVA; // rax

  HeapFromVA = ExGetHeapFromVA(a1);
  return ExpHpIsSpecialPoolHeap(HeapFromVA);
}
