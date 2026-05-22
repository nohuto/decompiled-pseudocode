/*
 * XREFs of ??$_Buynode@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@1@@Z @ 0x18004AB78
 * Callers:
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x18004A088 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x1800F3A54 (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@2@XZ @ 0x18004ABD4 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004B594 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Buynode<std::pair<std::wstring const,std::variant<unsigned long,bool,float>> const &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  void *v7; // [rsp+40h] [rbp+8h]

  v3 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Buynode0(a1);
  v4 = v3;
  v7 = (void *)v3;
  *(_WORD *)(v3 + 24) = 0;
  try
  {
    std::wstring::wstring(v3 + 32);
    v5 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(v4 + 64) = v5;
    result = v4;
  }
  catch ( ... )
  {
    std::_Tree_comp_alloc<std::_Tmap_traits<SPATIAL_NODE_ID,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>>,0>>::_Freenode0(
      v5,
      v7);
    throw;
  }
  return result;
}
