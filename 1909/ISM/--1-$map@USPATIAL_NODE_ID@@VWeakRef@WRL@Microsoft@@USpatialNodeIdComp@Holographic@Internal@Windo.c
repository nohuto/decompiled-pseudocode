/*
 * XREFs of ??1?$map@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@QEAA@XZ @ 0x180151A54
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient_::_1_::dtor$6 @ 0x180151105 (_Windows--Internal--Holographic--SpatialGraphDriverClient--SpatialGraphDriverClient_ea_180151105.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180160990 (-_Erase@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Hol.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::map<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>::~map<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>(
        void **a1)
{
  void *v2; // rbx

  v2 = *a1;
  std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Erase(
    a1,
    *((_QWORD *)*a1 + 1));
  *((_QWORD *)*a1 + 1) = v2;
  *(_QWORD *)*a1 = v2;
  *((_QWORD *)*a1 + 2) = v2;
  a1[1] = 0LL;
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x38);
}
