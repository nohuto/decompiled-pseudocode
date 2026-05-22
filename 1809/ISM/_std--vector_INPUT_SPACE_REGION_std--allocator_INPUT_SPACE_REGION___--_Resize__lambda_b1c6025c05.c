/*
 * XREFs of _std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Resize__lambda_b1c6025c05e84eb9990eaa1e3a85a290____::_1_::catch$0 @ 0x18013582F
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@UINPUT_SPACE_REGION@@@std@@QEAAXQEAUINPUT_SPACE_REGION@@_K@Z @ 0x180107528 (-deallocate@-$allocator@UINPUT_SPACE_REGION@@@std@@QEAAXQEAUINPUT_SPACE_REGION@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Resize__lambda_b1c6025c05e84eb9990eaa1e3a85a290____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<INPUT_SPACE_REGION>::deallocate(a1, *(_QWORD **)(a2 + 112), *(_QWORD *)(a2 + 96));
  throw;
}
