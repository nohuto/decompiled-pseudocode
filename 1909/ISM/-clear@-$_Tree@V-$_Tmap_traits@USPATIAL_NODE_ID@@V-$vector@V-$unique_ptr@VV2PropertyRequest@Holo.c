/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180160BB4
 * Callers:
 *     ??1?$map@USPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@@std@@@3@@std@@QEAA@XZ @ 0x180151A2C (--1-$map@USPATIAL_NODE_ID@@V-$vector@V-$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windo.c)
 *     ??1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ @ 0x180151D10 (--1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x18015C020 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@@std@@PEAX@2@@Z @ 0x1801608D4 (-_Erase@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@V-$vector@V-$unique_ptr@VV2PropertyRequest@Hol.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>>,0>>::clear(
        _QWORD *a1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *a1;
  std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>>,0>>::_Erase(
    (__int64)a1,
    *(_QWORD **)(*a1 + 8LL));
  *(_QWORD *)(*a1 + 8LL) = v2;
  *(_QWORD *)*a1 = v2;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = v2;
  a1[1] = 0LL;
  return result;
}
