/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@@Z @ 0x180066B88
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_CameraControlDeviceCollection::UsageList_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__CameraControlDeviceCollection::UsageList____0___::_Insert_std::pair_unsigned_long_const__CameraControlDeviceCollection::UsageList__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__CameraControlDeviceCollection::UsageList__________::_1_::catch$1 @ 0x180131539 (_std--_Hash_std--_Umap_traits_unsigned_long_CameraControlDeviceCollection--UsageList_std--_Uhash.c)
 *     _std::_Hash_std::_Umap_traits_CursorId_DWMCursor_____ptr64_std::_Uhash_compare_CursorId_CursorIdHash_std::equal_to_CursorId____std::allocator_std::pair_CursorId_const__DWMCursor_____ptr64____0___::_Insert_std::pair_CursorId_const__DWMCursor_____ptr64__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_CursorId_const__DWMCursor_____ptr64__________::_1_::catch$1 @ 0x180132EE3 (_std--_Hash_std--_Umap_traits_CursorId_DWMCursor_____ptr64_std--_Uhash_compare_CursorId_CursorId.c)
 *     _std::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0___::_Insert_std::pair_DWMPointerMapping_const__CursorId__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_DWMPointerMapping_const__CursorId__________::_1_::catch$1 @ 0x180135859 (_std--_Hash_std--_Umap_traits_DWMPointerMapping_CursorId_std--_Uhash_compare_DWMPointerMapping_D.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD **a2)
{
  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  --*(_QWORD *)(a1 + 16);
  operator delete(a2, (const struct std::nothrow_t *)0x28);
}
