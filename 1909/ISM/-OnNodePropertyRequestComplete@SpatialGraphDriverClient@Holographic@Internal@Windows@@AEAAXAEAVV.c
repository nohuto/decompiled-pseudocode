/*
 * XREFs of ?OnNodePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV2NodePropertyRequest@234@J@Z @ 0x18015ADA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEBUSPATIAL_NODE_ID@@$$V@?$map@USPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@USpatialNodeIdComp@345@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBUSPATIAL_NODE_ID@@@Z @ 0x180150444 (--$_Try_emplace@AEBUSPATIAL_NODE_ID@@$$V@-$map@USPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags.c)
 *     ?GetValue@V2PropertyRequest@Holographic@Internal@Windows@@QEBAXPEAPEBEPEA_K@Z @ 0x180158818 (-GetValue@V2PropertyRequest@Holographic@Internal@Windows@@QEBAXPEAPEBEPEA_K@Z.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18015989C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?NodePropertyRequestFailed_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0J@Z @ 0x18015A25C (-NodePropertyRequestFailed_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0.c)
 *     ?SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEBX_K@Z @ 0x18015D44C (-SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::OnNodePropertyRequestComplete(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        struct _GUID *a2,
        int a3,
        const char *a4)
{
  char v4; // si
  struct _GUID *v7; // rsi
  int v8; // ebx
  __int64 v9; // rcx
  HolographicDriverClientTrace *v10; // rcx
  void *Source[3]; // [rsp+30h] [rbp-18h] BYREF
  size_t Size; // [rsp+68h] [rbp+20h] BYREF

  v4 = a3;
  if ( a3 < 0 )
  {
    if ( HolographicDriverClientTrace::IsEnabled((__int64)this) )
    {
      wil::details::static_lazy<HolographicDriverClientTrace>::get(
        v9,
        lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
      HolographicDriverClientTrace::NodePropertyRequestFailed_(
        v10,
        (const struct _GUID *)this + 5,
        (const struct SPATIAL_NODE_ID *)&a2[9],
        a2 + 8,
        v4);
    }
  }
  else
  {
    Windows::Internal::Holographic::V2PropertyRequest::GetValue(
      (Windows::Internal::Holographic::V2PropertyRequest *)a2,
      (const unsigned __int8 **)Source,
      &Size,
      a4);
    v7 = a2 + 9;
    if ( Windows::Internal::Holographic::NodePropertyCache::SetValue(
           (struct _GUID *)((char *)this + 264),
           (const struct SPATIAL_NODE_ID *)&a2[9],
           a2 + 8,
           Source[0],
           Size) )
    {
      v8 = *(_DWORD *)&a2[3].Data2;
      std::map<SPATIAL_NODE_ID,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>::_Try_emplace<SPATIAL_NODE_ID const &,>(
        (__int64 **)this + 46,
        (__int64)Source,
        v7);
      *((_DWORD *)Source[0] + 11) |= v8;
    }
  }
}
