/*
 * XREFs of MiReplenishSlabAllocator @ 0x1402DCEC4
 * Callers:
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiGetSlabPage @ 0x1402DC4E4 (MiGetSlabPage.c)
 *     MmAllocateSecureKernelPages @ 0x1402DD0C0 (MmAllocateSecureKernelPages.c)
 * Callees:
 *     MiAllocateSlabEntry @ 0x1402DB498 (MiAllocateSlabEntry.c)
 *     MiInsertSlabEntry @ 0x1402DC8F4 (MiInsertSlabEntry.c)
 */

__int64 __fastcall MiReplenishSlabAllocator(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 64) < a3 )
  {
    result = (__int64)MiAllocateSlabEntry(a1, a2, a4);
    if ( !result )
      return result;
    MiInsertSlabEntry(a2, a1, result);
  }
  return 1LL;
}
