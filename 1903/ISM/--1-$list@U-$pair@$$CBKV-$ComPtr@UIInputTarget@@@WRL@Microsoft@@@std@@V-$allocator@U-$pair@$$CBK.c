/*
 * XREFs of ??1?$list@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x1800BAAC0
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_IInputTarget__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget______0___::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_IInputTarget__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget______0____::_1_::dtor$0 @ 0x18003BACB (_std--_Hash_std--_Umap_traits_unsigned_long_Microsoft--WRL--ComPtr_IInputTarget__std--_Uhash_com.c)
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$56 @ 0x1800FA917 (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$56.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXXZ @ 0x1800BF534 (-clear@-$list@U-$pair@$$CBKV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V-$allocator@U-$pair@$.c)
 */

void __fastcall std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>::~list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>(
        void **a1)
{
  std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>::clear();
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
