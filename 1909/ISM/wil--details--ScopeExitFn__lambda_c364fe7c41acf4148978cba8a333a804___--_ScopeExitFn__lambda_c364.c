/*
 * XREFs of wil::details::ScopeExitFn__lambda_c364fe7c41acf4148978cba8a333a804___::_ScopeExitFn__lambda_c364fe7c41acf4148978cba8a333a804___ @ 0x180151888
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking_::_1_::dtor$1 @ 0x18015FBEE (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StopTracking_--_1_--dtor$1.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x180160EC4 (-erase@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDr_ea_180160EC4.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_c364fe7c41acf4148978cba8a333a804___::_ScopeExitFn__lambda_c364fe7c41acf4148978cba8a333a804___(
        __int64 a1)
{
  __int64 result; // rax
  char v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = (unsigned int)(*(_DWORD *)(**(_QWORD **)a1 + 44LL) + *(_DWORD *)(**(_QWORD **)a1 + 48LL));
    if ( !(_DWORD)result )
      return std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::erase(
               *(_QWORD *)(a1 + 8) + 216LL,
               &v2);
  }
  return result;
}
