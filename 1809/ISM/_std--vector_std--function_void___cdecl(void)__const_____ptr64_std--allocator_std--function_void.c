/*
 * XREFs of _std::vector_std::function_void___cdecl(void)__const_____ptr64_std::allocator_std::function_void___cdecl(void)__const_____ptr64___::_Emplace_reallocate_std::function_void___cdecl(void)__const_____ptr64_const_&___ptr64__::_1_::catch$0 @ 0x18012EA8C
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@QEAAXQEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x180008B78 (-deallocate@-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@W4_.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::function_void___cdecl_void___const_____ptr64_std::allocator_std::function_void___cdecl_void___const_____ptr64___::_Emplace_reallocate_std::function_void___cdecl_void___const_____ptr64_const_____ptr64__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<enum _Button>>,std::_Iterator_base0>>::deallocate(
    a1,
    *(_QWORD **)(a2 + 96),
    *(_QWORD *)(a2 + 104));
  throw;
}
