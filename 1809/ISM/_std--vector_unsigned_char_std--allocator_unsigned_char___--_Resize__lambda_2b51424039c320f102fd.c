/*
 * XREFs of _std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2____::_1_::catch$0 @ 0x180135FC3
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@E@std@@QEAAXQEAE_K@Z @ 0x18007C590 (-deallocate@-$allocator@E@std@@QEAAXQEAE_K@Z.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<unsigned char>::deallocate(a1, *(void **)(a2 + 96), *(const struct std::nothrow_t **)(a2 + 80));
  throw;
}
