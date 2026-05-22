/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@@std@@@std@@@std@@@2@@Z @ 0x180160F34
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x18015C020 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007BE74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18007F998 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_JV-$shared_ptr@VSpatialInteractionSourc.c)
 *     ??R?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRequest@Holographic@Internal@Windows@@@Z @ 0x180152A7C (--R-$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRe.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>>,0>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *v4; // r9
  _QWORD *v5; // r10
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // rsi
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = a3;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v12);
  v6 = std::_Tree_val<std::_Tree_simple_types<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>>::_Extract(
         v5,
         v4);
  v8 = v6;
  v9 = (__int64 *)v6[6];
  if ( v9 )
  {
    v10 = (__int64 *)v6[7];
    if ( v9 != v10 )
    {
      do
      {
        if ( *v9 )
          std::default_delete<Windows::Internal::Holographic::V2PropertyRequest>::operator()(v7, *v9);
        ++v9;
      }
      while ( v9 != v10 );
      v9 = (__int64 *)v8[6];
    }
    std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)((v8[8] - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL));
    v8[6] = 0LL;
    v8[7] = 0LL;
    v8[8] = 0LL;
  }
  std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0x48);
  *a2 = v12;
  return a2;
}
