/*
 * XREFs of ?count@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18008B8B8
 * Callers:
 *     ?CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z @ 0x180089494 (-CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z.c)
 *     ?CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z @ 0x180089594 (-CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007C0B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??$_Eqrange@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@std@@V12@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180087FA0 (--$_Eqrange@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_Tmap_trai.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::count(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Eqrange<std::wstring>(
    a1,
    v5,
    a2);
  v2 = v5[0];
  v3 = 0LL;
  v6 = v5[0];
  while ( v2 != v5[1] )
  {
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v6);
    v2 = v6;
  }
  return v3;
}
