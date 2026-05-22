/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180160594
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@1@1@Z @ 0x18014C894 (--$_Insert_at@AEAU-$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU-$_Tree_node@U-.c)
 *     _std::_Tree_std::_Tmap_traits_SPATIAL_NODE_ID_Microsoft::WRL::WeakRef_Windows::Internal::Holographic::SpatialNodeIdComp_std::allocator_std::pair_SPATIAL_NODE_ID_const__Microsoft::WRL::WeakRef____0___::_Insert_hint_std::pair_SPATIAL_NODE_ID_const__Microsoft::WRL::WeakRef__&_std::_Tree_node_std::pair_SPATIAL_NODE_ID_const__Microsoft::WRL::WeakRef__void_______::_1_::catch$41 @ 0x18014DC80 (_std--_Tree_std--_Tmap_traits_SPATIAL_NODE_ID_Microsoft--WRL--WeakRef_Windows--Internal--Hologra.c)
 *     _std::_Tree_std::_Tmap_traits_SPATIAL_NODE_ID_Microsoft::WRL::WeakRef_Windows::Internal::Holographic::SpatialNodeIdComp_std::allocator_std::pair_SPATIAL_NODE_ID_const__Microsoft::WRL::WeakRef____0___::_Insert_nohint_std::pair_SPATIAL_NODE_ID_const__Microsoft::WRL::WeakRef__&_std::_Tree_node_std::pair_SPATIAL_NODE_ID_const__Microsoft::WRL::WeakRef__void_______::_1_::catch$21 @ 0x18014F2B9 (_std--_Tree_std--_Tmap_traits_SPATIAL_NODE_ID_Microsoft--WRL--WeakRef_Windows--Inte_ea_18014F2B9.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = a2[6];
  if ( v2 )
  {
    a2[6] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x38);
}
