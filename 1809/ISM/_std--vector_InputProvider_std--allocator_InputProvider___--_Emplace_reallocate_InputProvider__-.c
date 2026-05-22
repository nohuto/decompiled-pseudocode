/*
 * XREFs of _std::vector_InputProvider_std::allocator_InputProvider___::_Emplace_reallocate_InputProvider__::_1_::catch$8 @ 0x180130A53
 * Callers:
 *     <none>
 * Callees:
 *     ?_Destroy@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAXPEAUInputProvider@@0@Z @ 0x1800054F4 (-_Destroy@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@AEAAXPEAUInputProvid.c)
 *     ?deallocate@?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@QEAAXQEAUINPUT_SPACE_PAYLOAD@@_K@Z @ 0x180005544 (-deallocate@-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@QEAAXQEAUINPUT_SPACE_PAYLOAD@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_InputProvider_std::allocator_InputProvider___::_Emplace_reallocate_InputProvider__::_1_::catch_8(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<InputProvider>::_Destroy(a1, *(__int64 **)(a2 + 120), *(__int64 **)(a2 + 48));
  std::allocator<INPUT_SPACE_PAYLOAD>::deallocate(v3, *(_QWORD **)(a2 + 112), *(_QWORD *)(a2 + 136));
  throw;
}
