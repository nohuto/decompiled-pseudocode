/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_ICursor__std::allocator_Microsoft::WRL::ComPtr_ICursor_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ICursor____::_1_::catch$0 @ 0x18012FD79
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@QEAAXQEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x180008B78 (-deallocate@-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@W4_.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@0@Z @ 0x18000F120 (-_Destroy@-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_ICursor__std::allocator_Microsoft::WRL::ComPtr_ICursor_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ICursor____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Destroy(a1, *(__int64 **)(a2 + 120), *(__int64 **)(a2 + 40));
  std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<enum _Button>>,std::_Iterator_base0>>::deallocate(
    v3,
    *(_QWORD **)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  throw;
}
