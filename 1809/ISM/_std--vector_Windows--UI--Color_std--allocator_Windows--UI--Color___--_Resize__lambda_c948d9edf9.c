/*
 * XREFs of _std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Resize__lambda_c948d9edf99f5fb7aad0043553e8ab01____::_1_::catch$0 @ 0x180131A49
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@QEAAXQEAW4GamepadButtons@Input@Gaming@Windows@@_K@Z @ 0x180008C90 (-deallocate@-$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@QEAAXQEAW4GamepadButtons@In.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Resize__lambda_c948d9edf99f5fb7aad0043553e8ab01____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<enum Windows::Gaming::Input::GamepadButtons>::deallocate(
    a1,
    *(_QWORD **)(a2 + 96),
    *(_QWORD *)(a2 + 80));
  throw;
}
