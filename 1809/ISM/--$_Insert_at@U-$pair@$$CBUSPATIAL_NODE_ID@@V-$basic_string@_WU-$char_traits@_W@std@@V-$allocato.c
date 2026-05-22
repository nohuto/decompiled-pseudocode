/*
 * XREFs of ??$_Insert_at@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialNodeIdLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@$$QEAU?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@U_Not_a_node_tag@1@@Z @ 0x18011DD28
 * Callers:
 *     ??$_Insert_nohint@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UGuidLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@std@@_N@1@_N$$QEAU?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@U_Not_a_node_tag@1@@Z @ 0x18011D1D4 (--$_Insert_nohint@U-$pair@$$CBU_GUID@@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2.c)
 * Callees:
 *     ??$_Buynode@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@USPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialNodeIdLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@$$QEAU?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@Z @ 0x180120BAC (--$_Buynode@U-$pair@$$CBUSPATIAL_NODE_ID@@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,std::wstring,Windows::Internal::Holographic::SpatialNodeIdLess,std::allocator<std::pair<SPATIAL_NODE_ID const,std::wstring>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,std::wstring>,std::_Not_a_node_tag>(
        _QWORD *a1,
        _QWORD *a2,
        char a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v9; // rax
  _QWORD *v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // r10
  _QWORD *v14; // rcx
  _QWORD *v15; // r11
  __int64 *v16; // r8
  _QWORD *v17; // rax
  _QWORD *v18; // r8
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // r8
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *result; // rax

  if ( a1[1] >= 0x333333333333332uLL )
    std::_Xlength_error("map/set<T> too long");
  v9 = std::_Tree_comp_alloc<std::_Tmap_traits<SPATIAL_NODE_ID,std::wstring,Windows::Internal::Holographic::SpatialNodeIdLess,std::allocator<std::pair<SPATIAL_NODE_ID const,std::wstring>>,0>>::_Buynode<std::pair<SPATIAL_NODE_ID const,std::wstring>>(
         a1,
         a5);
  ++a1[1];
  v10 = (_QWORD *)v9;
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
  v11 = *(_QWORD *)(v9 + 8);
  v12 = v10;
  while ( !*(_BYTE *)(v11 + 24) )
  {
    v13 = v12 + 1;
    v14 = (_QWORD *)v12[1];
    v15 = v14 + 1;
    v16 = (__int64 *)v14[1];
    v17 = (_QWORD *)*v16;
    if ( v14 == (_QWORD *)*v16 )
    {
      v17 = (_QWORD *)v16[2];
      if ( !*((_BYTE *)v17 + 24) )
        goto LABEL_32;
      v18 = (_QWORD *)v14[2];
      if ( v12 == v18 )
      {
        v12 = (_QWORD *)v12[1];
        v14[2] = *v18;
        if ( !*(_BYTE *)(*v18 + 25LL) )
          *(_QWORD *)(*v18 + 8LL) = v14;
        v18[1] = *v15;
        if ( v14 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v18;
        }
        else
        {
          v19 = (_QWORD *)*v15;
          if ( v14 == *(_QWORD **)*v15 )
            *v19 = v18;
          else
            v19[2] = v18;
        }
        *v18 = v14;
        v13 = v14 + 1;
        *v15 = v18;
      }
      else
      {
        v18 = (_QWORD *)v12[1];
      }
      *((_BYTE *)v18 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(*v13 + 8LL) + 24LL) = 0;
      v20 = *(_QWORD **)(*v13 + 8LL);
      v21 = (_QWORD *)*v20;
      *v20 = *(_QWORD *)(*v20 + 16LL);
      v22 = v21[2];
      if ( !*(_BYTE *)(v22 + 25) )
        *(_QWORD *)(v22 + 8) = v20;
      v21[1] = v20[1];
      if ( v20 == *(_QWORD **)(*a1 + 8LL) )
      {
        *(_QWORD *)(*a1 + 8LL) = v21;
      }
      else
      {
        v23 = (_QWORD *)v20[1];
        if ( v20 == (_QWORD *)v23[2] )
          v23[2] = v21;
        else
          *v23 = v21;
      }
      v21[2] = v20;
    }
    else
    {
      if ( !*((_BYTE *)v17 + 24) )
      {
LABEL_32:
        *((_BYTE *)v14 + 24) = 1;
        *((_BYTE *)v17 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*v13 + 8LL) + 24LL) = 0;
        v12 = *(_QWORD **)(*v13 + 8LL);
        goto LABEL_51;
      }
      v24 = (_QWORD *)*v14;
      if ( v12 == (_QWORD *)*v14 )
      {
        v12 = (_QWORD *)v12[1];
        v14 = (_QWORD *)*v14;
        *v12 = v24[2];
        v25 = v24[2];
        if ( !*(_BYTE *)(v25 + 25) )
          *(_QWORD *)(v25 + 8) = v12;
        v14[1] = *v15;
        if ( v12 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v14;
        }
        else
        {
          v26 = (_QWORD *)*v15;
          if ( v12 == *(_QWORD **)(*v15 + 16LL) )
            v26[2] = v14;
          else
            *v26 = v14;
        }
        v14[2] = v12;
        v13 = v15;
        *v15 = v14;
      }
      *((_BYTE *)v14 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(*v13 + 8LL) + 24LL) = 0;
      v20 = *(_QWORD **)(*v13 + 8LL);
      v21 = (_QWORD *)v20[2];
      v20[2] = *v21;
      if ( !*(_BYTE *)(*v21 + 25LL) )
        *(_QWORD *)(*v21 + 8LL) = v20;
      v21[1] = v20[1];
      if ( v20 == *(_QWORD **)(*a1 + 8LL) )
      {
        *(_QWORD *)(*a1 + 8LL) = v21;
      }
      else
      {
        v27 = (_QWORD *)v20[1];
        if ( v20 == (_QWORD *)*v27 )
          *v27 = v21;
        else
          v27[2] = v21;
      }
      *v21 = v20;
    }
    v20[1] = v21;
LABEL_51:
    v11 = v12[1];
  }
  v28 = *(_QWORD *)(*a1 + 8LL);
  result = a2;
  *a2 = v10;
  *(_BYTE *)(v28 + 24) = 1;
  return result;
}
