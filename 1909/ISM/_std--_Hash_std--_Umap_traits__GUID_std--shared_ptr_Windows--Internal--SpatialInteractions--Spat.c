/*
 * XREFs of _std::_Hash_std::_Umap_traits__GUID_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject__std::_Uhash_compare__GUID_Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash_std::equal_to__GUID____std::allocator_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject______0___::_Insert_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject____&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject____________::_1_::catch$57 @ 0x1800F2C46
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?erase@?$list@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800F7694 (-erase@-$list@U-$pair@$$CBU_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@SpatialInteracti.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits__GUID_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject__std::_Uhash_compare__GUID_Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash_std::equal_to__GUID____std::allocator_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject______0___::_Insert_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject______std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject____________::_1_::catch_57(
        __int64 a1,
        __int64 a2)
{
  std::list<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>::erase(
    *(_QWORD *)(a2 + 80) + 8LL,
    a2 + 80,
    *(_QWORD *)(a2 + 104));
  throw;
}
