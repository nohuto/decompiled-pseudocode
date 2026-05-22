/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@2@@Z @ 0x18000914C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_IMPCTarget_____ptr64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__IMPCTarget_____ptr64____0___::_Insert_std::pair_unsigned___int64_const__IMPCTarget_____ptr64__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__IMPCTarget_____ptr64__________::_1_::catch$1 @ 0x18012E134 (_std--_Hash_std--_Umap_traits_unsigned___int64_IMPCTarget_____ptr64_std--_Uhash_compare_unsigned.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_DeviceInfo_____ptr64_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DeviceInfo_____ptr64____0___::_Insert_std::pair_unsigned_long_const__DeviceInfo_____ptr64__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__DeviceInfo_____ptr64__________::_1_::catch$1 @ 0x18012EDAA (_std--_Hash_std--_Umap_traits_unsigned_long_DeviceInfo_____ptr64_std--_Uhash_compare_unsigned_lo.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_InputInfoValidator_____ptr64_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputInfoValidator_____ptr64____0___::_Insert_std::pair_unsigned_long_const__InputInfoValidator_____ptr64__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__InputInfoValidator_____ptr64__________::_1_::catch$1 @ 0x180131DF9 (_std--_Hash_std--_Umap_traits_unsigned_long_InputInfoValidator_____ptr64_std--_Uhash_compare_uns.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_InputInfoValidator::PointerState_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputInfoValidator::PointerState____0___::_Insert_std::pair_unsigned_long_const__InputInfoValidator::PointerState__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__InputInfoValidator::PointerState__________::_1_::catch$1 @ 0x180135753 (_std--_Hash_std--_Umap_traits_unsigned_long_InputInfoValidator--PointerState_std--_Uhash_compare.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD **a2)
{
  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  --*(_QWORD *)(a1 + 16);
  operator delete(a2, (const struct std::nothrow_t *)0x20);
}
