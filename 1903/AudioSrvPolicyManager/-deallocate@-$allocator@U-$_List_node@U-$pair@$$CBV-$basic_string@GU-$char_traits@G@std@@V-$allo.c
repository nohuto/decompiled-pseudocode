/*
 * XREFs of ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@2@_K@Z @ 0x18002CC38
 * Callers:
 *     _std::_List_alloc_std::_List_base_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState___________::_Buynode0_::_1_::catch$0 @ 0x180037755 (_std--_List_alloc_std--_List_base_types_std--pair_std--basic_string_unsigned_short_std--char_tra.c)
 *     _std::_List_buy_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState_________::_Buynode_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState________::_1_::catch$2 @ 0x18003777B (_std--_List_buy_std--pair_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std-.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_node<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2, (const struct std::nothrow_t *)0x38);
}
