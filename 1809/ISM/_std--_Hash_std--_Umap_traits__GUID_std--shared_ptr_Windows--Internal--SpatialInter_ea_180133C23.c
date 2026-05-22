/*
 * XREFs of _std::_Hash_std::_Umap_traits__GUID_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject__std::_Uhash_compare__GUID_Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash_std::equal_to__GUID____std::allocator_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject______0___::_Insert_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject____&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject____________::_1_::catch$0 @ 0x180133C23
 * Callers:
 *     <none>
 * Callees:
 *     ?_Make_iter@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEBA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180008C80 (-_Make_iter@-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@U_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@V?$_Uhash_compare@U_GUID@@UGuidHash@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@U?$equal_to@U_GUID@@@std@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800BFB58 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBU_GUID@@V-$shared_ptr@.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits__GUID_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject__std::_Uhash_compare__GUID_Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash_std::equal_to__GUID____std::allocator_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject______0___::_Insert_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject________ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject____________::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 *iter; // rax

  iter = std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>,0>>::_Make_iter(
           a1,
           (_QWORD *)(a2 + 128),
           *(_QWORD *)(a2 + 128));
  std::_Hash<std::_Umap_traits<_GUID,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>,std::_Uhash_compare<_GUID,Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>>>,void>(
    *(_QWORD **)(a2 + 112),
    a2 + 40,
    *iter);
  throw;
}
