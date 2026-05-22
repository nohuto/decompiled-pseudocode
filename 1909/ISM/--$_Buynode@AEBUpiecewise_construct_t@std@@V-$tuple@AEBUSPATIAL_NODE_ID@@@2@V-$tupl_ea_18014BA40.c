/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUSPATIAL_NODE_ID@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@USPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@USpatialNodeIdComp@345@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUSPATIAL_NODE_ID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18014BA40
 * Callers:
 *     ??$_Try_emplace@AEBUSPATIAL_NODE_ID@@$$V@?$map@USPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@USpatialNodeIdComp@345@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBUSPATIAL_NODE_ID@@@Z @ 0x180150444 (--$_Try_emplace@AEBUSPATIAL_NODE_ID@@$$V@-$map@USPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@PEAX@2@XZ @ 0x18007F850 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAVV2PropertyRequest@Holographic@Internal@Windows.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<SPATIAL_NODE_ID,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<SPATIAL_NODE_ID const &>,std::tuple<>>(
        _QWORD *a1,
        __int64 a2,
        _OWORD **a3)
{
  _QWORD *result; // rax

  result = std::_Tree_comp_alloc<std::_Tmap_traits<Windows::Internal::Holographic::V2PropertyRequest *,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>,std::less<Windows::Internal::Holographic::V2PropertyRequest *>,std::allocator<std::pair<Windows::Internal::Holographic::V2PropertyRequest * const,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>,0>>::_Buynode0(a1);
  *((_WORD *)result + 12) = 0;
  *(_OWORD *)((char *)result + 28) = **a3;
  *((_DWORD *)result + 11) = 0;
  return result;
}
