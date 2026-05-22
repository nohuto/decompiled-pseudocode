/*
 * XREFs of _std::vector_INPUT_SPACE_PAYLOAD_std::allocator_INPUT_SPACE_PAYLOAD___::_Emplace_reallocate_INPUT_SPACE_PAYLOAD_const_&___ptr64__::_1_::catch$0 @ 0x180132E09
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@QEAAXQEAUINPUT_SPACE_PAYLOAD@@_K@Z @ 0x180005544 (-deallocate@-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@QEAAXQEAUINPUT_SPACE_PAYLOAD@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_INPUT_SPACE_PAYLOAD_std::allocator_INPUT_SPACE_PAYLOAD___::_Emplace_reallocate_INPUT_SPACE_PAYLOAD_const_____ptr64__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<INPUT_SPACE_PAYLOAD>::deallocate(a1, *(_QWORD **)(a2 + 96), *(_QWORD *)(a2 + 104));
  throw;
}
