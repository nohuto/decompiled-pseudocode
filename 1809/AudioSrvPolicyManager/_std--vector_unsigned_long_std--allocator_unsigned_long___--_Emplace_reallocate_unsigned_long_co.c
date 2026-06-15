/*
 * XREFs of _std::vector_unsigned_long_std::allocator_unsigned_long___::_Emplace_reallocate_unsigned_long_const_&___ptr64__::_1_::catch$0 @ 0x1800391B3
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@K@std@@QEAAXQEAK_K@Z @ 0x18001AE48 (-deallocate@-$allocator@K@std@@QEAAXQEAK_K@Z.c)
 *     _CxxThrowException_0 @ 0x180038057 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_long_std::allocator_unsigned_long___::_Emplace_reallocate_unsigned_long_const_____ptr64__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<unsigned long>::deallocate(a1, *(_QWORD **)(a2 + 104), *(_QWORD *)(a2 + 96));
  throw;
}
