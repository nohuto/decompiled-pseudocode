/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800563CC
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_std::unique_ptr_PointerInfoAdapter::LastDeviceFrame_std::default_delete_PointerInfoAdapter::LastDeviceFrame____std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::unique_ptr_PointerInfoAdapter::LastDeviceFrame_std::default_delete_PointerInfoAdapter::LastDeviceFrame________0___::_Insert_std::pair_unsigned_long_const__std::unique_ptr_PointerInfoAdapter::LastDeviceFrame_std::default_delete_PointerInfoAdapter::LastDeviceFrame______&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__std::unique_ptr_PointerInfoAdapter::LastDeviceFrame_std::default_delete_PointerInfoAdapter::LastDeviceFrame______________::_1_::catch$4 @ 0x1801308B5 (_std--_Hash_std--_Umap_traits_unsigned_long_std--unique_ptr_PointerInfoAdapter--LastDeviceFrame_.c)
 * Callees:
 *     ??1?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x180032CE8 (--1-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rdi

  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  --*(_QWORD *)(a1 + 16);
  v3 = a2[3];
  if ( v3 )
  {
    std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::~_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>(v3 + 1);
    operator delete(v3, (const struct std::nothrow_t *)0x48);
  }
  operator delete(a2, (const struct std::nothrow_t *)0x20);
}
