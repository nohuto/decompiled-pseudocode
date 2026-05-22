/*
 * XREFs of ??1?$map@U_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UGuidLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@@std@@QEAA@XZ @ 0x1800D790C
 * Callers:
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::HolographicDeviceSnapshot_::_1_::dtor$1 @ 0x1800D78E3 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--HolographicDeviceSnapsh_ea_1800D78E3.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::HolographicDeviceSnapshot_::_1_::dtor$2 @ 0x1800D78F3 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--HolographicDeviceSnapsh_ea_1800D78F3.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UGuidLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800D97B0 (-erase@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@.c)
 */

void __fastcall std::map<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>>::~map<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>>(
        void **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>,0>>::erase(
    a1,
    &v2,
    *(_QWORD *)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x50);
}
