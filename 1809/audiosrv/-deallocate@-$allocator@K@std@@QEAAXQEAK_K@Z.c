/*
 * XREFs of ?deallocate@?$allocator@K@std@@QEAAXQEAK_K@Z @ 0x180068684
 * Callers:
 *     _std::vector_unsigned_long_std::allocator_unsigned_long___::_Emplace_reallocate_unsigned_long_const_&___ptr64__::_1_::catch$32 @ 0x180067942 (_std--vector_unsigned_long_std--allocator_unsigned_long___--_Emplace_reallocate_unsigned_long_co.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<unsigned long>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(4 * a3));
}
