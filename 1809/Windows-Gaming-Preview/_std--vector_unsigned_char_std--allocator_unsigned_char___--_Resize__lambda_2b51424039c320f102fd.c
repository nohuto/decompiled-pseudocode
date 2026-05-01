/*
 * XREFs of _std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2____::_1_::catch$0 @ 0x18004477D
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@E@std@@QEAAXQEAE_K@Z @ 0x180017B34 (-deallocate@-$allocator@E@std@@QEAAXQEAE_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800436A0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<unsigned char>::deallocate(a1, *(void **)(a2 + 96), *(_QWORD *)(a2 + 80));
  throw;
}
