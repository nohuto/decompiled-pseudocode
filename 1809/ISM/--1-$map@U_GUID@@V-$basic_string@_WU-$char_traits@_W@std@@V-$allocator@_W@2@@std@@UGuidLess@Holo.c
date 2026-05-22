/*
 * XREFs of ??1?$map@U_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UGuidLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@@std@@QEAA@XZ @ 0x1800A48E0
 * Callers:
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance_::_1_::dtor$3 @ 0x180133132 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Instance_--_1_--dtor$3.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance_::_1_::dtor$4 @ 0x180133148 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Instance_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::map<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>>::~map<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>>(
        void **a1)
{
  std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,std::wstring,Windows::Internal::Holographic::SpatialNodeIdLess,std::allocator<std::pair<SPATIAL_NODE_ID const,std::wstring>>,0>>::~_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,std::wstring,Windows::Internal::Holographic::SpatialNodeIdLess,std::allocator<std::pair<SPATIAL_NODE_ID const,std::wstring>>,0>>(a1);
}
