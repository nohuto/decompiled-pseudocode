/*
 * XREFs of MiReplenishSlabAllocator @ 0x1402C2CB4
 * Callers:
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiGetSlabPage @ 0x1402C29DC (MiGetSlabPage.c)
 *     MmAllocateSecureKernelPages @ 0x1402C2E4C (MmAllocateSecureKernelPages.c)
 * Callees:
 *     MiAllocateSlabEntry @ 0x1402C1C9C (MiAllocateSlabEntry.c)
 *     MiInsertSlabEntry @ 0x1402C2AA4 (MiInsertSlabEntry.c)
 */

__int64 __fastcall MiReplenishSlabAllocator(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 32) < a3 )
  {
    result = (__int64)MiAllocateSlabEntry(a1, a2, a4);
    if ( !result )
      return result;
    MiInsertSlabEntry(a2, a1, result);
  }
  return 1LL;
}
