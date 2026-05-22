/*
 * XREFs of _std::vector_enum__Button_std::allocator_enum__Button___::_Emplace_reallocate_enum__Button_&___ptr64__::_1_::catch$0 @ 0x18012E5C7
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@QEAAXQEAW4GamepadButtons@Input@Gaming@Windows@@_K@Z @ 0x180008C90 (-deallocate@-$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@QEAAXQEAW4GamepadButtons@In.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_enum__Button_std::allocator_enum__Button___::_Emplace_reallocate_enum__Button_____ptr64__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<enum Windows::Gaming::Input::GamepadButtons>::deallocate(
    a1,
    *(_QWORD **)(a2 + 96),
    *(_QWORD *)(a2 + 104));
  throw;
}
