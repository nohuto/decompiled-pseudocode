/*
 * XREFs of ExIsSpecialPoolAddress @ 0x14000E140
 * Callers:
 *     ExProtectPoolEx @ 0x14000DED8 (ExProtectPoolEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     ExReturnPoolQuota @ 0x14011F398 (ExReturnPoolQuota.c)
 *     ExQueryPoolBlockSize @ 0x140193AF0 (ExQueryPoolBlockSize.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x140925F50 (VeAllocatePoolWithTagPriority.c)
 *     ExFreePoolSanityChecks @ 0x14094BD7C (ExFreePoolSanityChecks.c)
 * Callees:
 *     ExpHpIsSpecialPoolHeap @ 0x14000E5C4 (ExpHpIsSpecialPoolHeap.c)
 *     ExGetHeapFromVA @ 0x14000E644 (ExGetHeapFromVA.c)
 *     MmIsSpecialPoolAddress @ 0x1401671B0 (MmIsSpecialPoolAddress.c)
 */

__int64 __fastcall ExIsSpecialPoolAddress(ULONG_PTR a1)
{
  __int64 HeapFromVA; // rax

  if ( ExpHeapBackedPoolEnabledState != 3 )
    return MmIsSpecialPoolAddress();
  HeapFromVA = ExGetHeapFromVA(a1);
  return ExpHpIsSpecialPoolHeap(HeapFromVA);
}
