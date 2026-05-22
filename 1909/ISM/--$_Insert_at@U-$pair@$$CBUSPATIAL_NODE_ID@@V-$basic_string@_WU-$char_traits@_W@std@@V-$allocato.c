/*
 * XREFs of ??$_Insert_at@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialNodeIdLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@$$QEAU?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@U_Not_a_node_tag@1@@Z @ 0x18014D288
 * Callers:
 *     ??$_Insert_nohint@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UGuidLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@std@@_N@1@_N$$QEAU?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@U_Not_a_node_tag@1@@Z @ 0x18014FF64 (--$_Insert_nohint@U-$pair@$$CBU_GUID@@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2.c)
 * Callees:
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@Z @ 0x18007C8E8 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@V-$vector@EV-$allocator@E@std@@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@@Z @ 0x18007FC48 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@.c)
 *     ??$_Buynode@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@USPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialNodeIdLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@$$QEAU?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@Z @ 0x18014BC78 (--$_Buynode@U-$pair@$$CBUSPATIAL_NODE_ID@@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,std::wstring,Windows::Internal::Holographic::SpatialNodeIdLess,std::allocator<std::pair<SPATIAL_NODE_ID const,std::wstring>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,std::wstring>,std::_Not_a_node_tag>(
        _QWORD *a1,
        __int64 *a2,
        char a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // r10
  char v11; // r11
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *result; // rax

  if ( a1[1] >= 0x333333333333332uLL )
    std::_Xlength_error("map/set<T> too long");
  v9 = std::_Tree_comp_alloc<std::_Tmap_traits<SPATIAL_NODE_ID,std::wstring,Windows::Internal::Holographic::SpatialNodeIdLess,std::allocator<std::pair<SPATIAL_NODE_ID const,std::wstring>>,0>>::_Buynode<std::pair<SPATIAL_NODE_ID const,std::wstring>>(
         (__int64)a1,
         a5);
  ++a1[1];
  v10 = v9;
  v11 = 0;
  *(_QWORD *)(v9 + 8) = a4;
  if ( a4 == (__int64 *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = v9;
    *(_QWORD *)*a1 = v9;
    *(_QWORD *)(*a1 + 16LL) = v9;
  }
  else if ( a3 )
  {
    *a4 = v9;
    if ( a4 == *(__int64 **)*a1 )
      *(_QWORD *)*a1 = v9;
  }
  else
  {
    a4[2] = v9;
    if ( a4 == *(__int64 **)(*a1 + 16LL) )
      *(_QWORD *)(*a1 + 16LL) = v9;
  }
  v12 = *(_QWORD *)(v9 + 8);
  v13 = v10;
  while ( *(_BYTE *)(v12 + 24) == v11 )
  {
    v14 = *(_QWORD *)(v13 + 8);
    v15 = *(__int64 **)(v14 + 8);
    v16 = *v15;
    if ( v14 == *v15 )
    {
      v16 = v15[2];
      if ( *(_BYTE *)(v16 + 24) == v11 )
        goto LABEL_17;
      if ( v13 == *(_QWORD *)(v14 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>>>::_Lrotate(
          (__int64)a1,
          *(_QWORD *)(v13 + 8));
      *(_BYTE *)(*(_QWORD *)(v13 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) + 24LL) = v11;
      std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::vector<unsigned char>>>>::_Rrotate(
        (__int64)a1,
        *(_QWORD **)(*(_QWORD *)(v13 + 8) + 8LL));
    }
    else
    {
      if ( *(_BYTE *)(v16 + 24) == v11 )
      {
LABEL_17:
        *(_BYTE *)(v14 + 24) = 1;
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) + 24LL) = v11;
        v13 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL);
        goto LABEL_21;
      }
      if ( v13 == *(_QWORD *)v14 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::vector<unsigned char>>>>::_Rrotate(
          (__int64)a1,
          *(_QWORD **)(v13 + 8));
      *(_BYTE *)(*(_QWORD *)(v13 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) + 24LL) = v11;
      std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>>>::_Lrotate(
        (__int64)a1,
        *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL));
    }
LABEL_21:
    v12 = *(_QWORD *)(v13 + 8);
  }
  v17 = *(_QWORD *)(*a1 + 8LL);
  result = a2;
  *a2 = v10;
  *(_BYTE *)(v17 + 24) = 1;
  return result;
}
