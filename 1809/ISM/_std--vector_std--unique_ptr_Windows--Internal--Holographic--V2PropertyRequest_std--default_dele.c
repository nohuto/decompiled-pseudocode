/*
 * XREFs of _std::vector_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest____std::allocator_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest_______::_Emplace_reallocate_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest______::_1_::catch$0 @ 0x180135F86
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@QEAAXQEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x180008B78 (-deallocate@-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@W4_.c)
 *     ?_Destroy@?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@AEAAXPEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@2@0@Z @ 0x18011A774 (-_Destroy@-$vector@V-$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U-$default_del.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest____std::allocator_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest_______::_Emplace_reallocate_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest______::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>::_Destroy(
    a1,
    *(_QWORD **)(a2 + 152),
    *(_QWORD **)(a2 + 48));
  std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<enum _Button>>,std::_Iterator_base0>>::deallocate(
    v3,
    *(_QWORD **)(a2 + 128),
    *(_QWORD *)(a2 + 32));
  throw;
}
