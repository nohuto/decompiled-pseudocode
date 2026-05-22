/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1800FE0C8
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@1@1@Z @ 0x1800FE104 (--$_Insert_at@AEAU-$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU-$_Tree_node@U-.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_std::pair_DeviceInfo_____ptr64_Microsoft::WRL::ComPtr_ICursor____std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__std::pair_DeviceInfo_____ptr64_Microsoft::WRL::ComPtr_ICursor________0___::_Insert_hint_std::pair_unsigned_long_const__std::pair_DeviceInfo_____ptr64_Microsoft::WRL::ComPtr_ICursor______&___ptr64_std::_Tree_node_std::pair_unsigned_long_const__std::pair_DeviceInfo_____ptr64_Microsoft::WRL::ComPtr_ICursor______void_____ptr64______ptr64__::_1_::catch$0 @ 0x180135493 (_std--_Tree_std--_Tmap_traits_unsigned_long_std--pair_DeviceInfo_____ptr64_Microsoft--WRL--ComPt.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_std::pair_DeviceInfo_____ptr64_Microsoft::WRL::ComPtr_ICursor____std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__std::pair_DeviceInfo_____ptr64_Microsoft::WRL::ComPtr_ICursor________0___::_Insert_nohint_std::pair_unsigned_long_const__std::pair_DeviceInfo_____ptr64_Microsoft::WRL::ComPtr_ICursor______&___ptr64_std::_Tree_node_std::pair_unsigned_long_const__std::pair_DeviceInfo_____ptr64_Microsoft::WRL::ComPtr_ICursor______void_____ptr64______ptr64__::_1_::catch$2 @ 0x1801354BC (_std--_Tree_std--_Tmap_traits_unsigned_long_std--pair_DeviceInfo_____ptr64_Microsof_ea_1801354BC.c)
 *     _std::_Tree_std::_Tmap_traits_SPATIAL_NODE_ID_Microsoft::WRL::WeakRef_Windows::Internal::Holographic::SpatialNodeIdComp_std::allocator_std::pair_SPATIAL_NODE_ID_const__Microsoft::WRL::WeakRef____0___::_Insert_hint_std::pair_SPATIAL_NODE_ID_const__Microsoft::WRL::WeakRef__&___ptr64_std::_Tree_node_std::pair_SPATIAL_NODE_ID_const__Microsoft::WRL::WeakRef__void_____ptr64______ptr64__::_1_::catch$0 @ 0x1801363A3 (_std--_Tree_std--_Tmap_traits_SPATIAL_NODE_ID_Microsoft--WRL--WeakRef_Windows--Internal--Hologra.c)
 *     _std::_Tree_std::_Tmap_traits_SPATIAL_NODE_ID_Microsoft::WRL::WeakRef_Windows::Internal::Holographic::SpatialNodeIdComp_std::allocator_std::pair_SPATIAL_NODE_ID_const__Microsoft::WRL::WeakRef____0___::_Insert_nohint_std::pair_SPATIAL_NODE_ID_const__Microsoft::WRL::WeakRef__&___ptr64_std::_Tree_node_std::pair_SPATIAL_NODE_ID_const__Microsoft::WRL::WeakRef__void_____ptr64______ptr64__::_1_::catch$1 @ 0x180136533 (_std--_Tree_std--_Tmap_traits_SPATIAL_NODE_ID_Microsoft--WRL--WeakRef_Windows--Inte_ea_180136533.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
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
  operator delete(a2, (const struct std::nothrow_t *)0x38);
}
