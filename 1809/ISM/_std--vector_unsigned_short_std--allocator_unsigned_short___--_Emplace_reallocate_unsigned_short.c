/*
 * XREFs of _std::vector_unsigned_short_std::allocator_unsigned_short___::_Emplace_reallocate_unsigned_short_const_&___ptr64__::_1_::catch$0 @ 0x180131460
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@G@std@@QEAAXQEAG_K@Z @ 0x18002790C (-deallocate@-$allocator@G@std@@QEAAXQEAG_K@Z.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_short_std::allocator_unsigned_short___::_Emplace_reallocate_unsigned_short_const_____ptr64__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<unsigned short>::deallocate(a1, *(_QWORD **)(a2 + 104), *(_QWORD *)(a2 + 96));
  throw;
}
