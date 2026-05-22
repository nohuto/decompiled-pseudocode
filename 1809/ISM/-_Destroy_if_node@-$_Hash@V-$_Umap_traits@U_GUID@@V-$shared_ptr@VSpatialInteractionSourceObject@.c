/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@U_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@V?$_Uhash_compare@U_GUID@@UGuidHash@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@U?$equal_to@U_GUID@@@std@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800C02BC
 * Callers:
 *     _std::_Hash_std::_Umap_traits__GUID_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject__std::_Uhash_compare__GUID_Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash_std::equal_to__GUID____std::allocator_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject______0___::_Insert_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject____&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject____________::_1_::catch$1 @ 0x180133BFC (_std--_Hash_std--_Umap_traits__GUID_std--shared_ptr_Windows--Internal--SpatialInteractions--Spat.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800BFE70 (-erase@-$list@U-$pair@$$CBU_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@SpatialInteracti.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<_GUID,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>,std::_Uhash_compare<_GUID,Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>,0>>::_Destroy_if_node(
        __int64 a1,
        void *a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  return std::list<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>::erase(
           a1 + 8,
           &v3,
           a2);
}
