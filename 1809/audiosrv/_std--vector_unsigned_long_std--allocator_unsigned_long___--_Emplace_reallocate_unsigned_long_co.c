/*
 * XREFs of _std::vector_unsigned_long_std::allocator_unsigned_long___::_Emplace_reallocate_unsigned_long_const_&___ptr64__::_1_::catch$32 @ 0x180067942
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@K@std@@QEAAXQEAK_K@Z @ 0x180068684 (-deallocate@-$allocator@K@std@@QEAAXQEAK_K@Z.c)
 *     _CxxThrowException_0 @ 0x18006888B (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_long_std::allocator_unsigned_long___::_Emplace_reallocate_unsigned_long_const_____ptr64__::_1_::catch_32(
        __int64 a1,
        __int64 a2)
{
  std::allocator<unsigned long>::deallocate(a1, *(_QWORD *)(a2 + 104), *(_QWORD *)(a2 + 96));
  throw;
}
