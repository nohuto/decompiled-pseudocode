/*
 * XREFs of MiReplenishSlabAllocator @ 0x1402DCC24
 * Callers:
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiGetSlabPage @ 0x1402DC244 (MiGetSlabPage.c)
 *     MmAllocateSecureKernelPages @ 0x1402DCE20 (MmAllocateSecureKernelPages.c)
 * Callees:
 *     MiAllocateSlabEntry @ 0x1402DB1F8 (MiAllocateSlabEntry.c)
 *     MiInsertSlabEntry @ 0x1402DC654 (MiInsertSlabEntry.c)
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
