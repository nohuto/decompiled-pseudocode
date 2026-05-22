/*
 * XREFs of ??$_Try_emplace@AEBUSPATIAL_NODE_ID@@$$V@?$map@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBUSPATIAL_NODE_ID@@@Z @ 0x180150380
 * Callers:
 *     ?RegisterNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x18015C8A0 (-RegisterNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UE.c)
 * Callees:
 *     memcmp_0 @ 0x180037D63 (memcmp_0.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUSPATIAL_NODE_ID@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUSPATIAL_NODE_ID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18014B9E8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBUSPATIAL_NODE_ID@@@2@V-$tuple@$$V@2@@-$_T.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x18014D9E4 (--$_Insert_hint@AEAU-$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU-$_Tree_node@.c)
 */

__int64 __fastcall std::map<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>::_Try_emplace<SPATIAL_NODE_ID const &,>(
        __int64 **a1,
        __int64 a2,
        const void *a3)
{
  __int64 *v3; // rdi
  __int64 *v7; // r15
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _OWORD *v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = *a1;
  v8 = (*a1)[1];
  while ( !*(_BYTE *)(v8 + 25) )
  {
    if ( memcmp_0((const void *)(v8 + 32), a3, 0x10uLL) >= 0 )
    {
      v3 = (__int64 *)v8;
      v8 = *(_QWORD *)v8;
    }
    else
    {
      v8 = *(_QWORD *)(v8 + 16);
    }
  }
  if ( v3 == v7 || memcmp_0(a3, v3 + 4, 0x10uLL) < 0 )
  {
    v11 = a3;
    v9 = std::_Tree_comp_alloc<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<SPATIAL_NODE_ID const &>,std::tuple<>>(
           a1,
           a2,
           &v11);
    std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Insert_hint<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>,void *> *>(
      (__int64 *)a1,
      (__int64 *)&v11,
      v3,
      v9 + 4,
      (__int64)v9);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
