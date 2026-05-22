/*
 * XREFs of ??$TelemetrySetStaticNodeDurability@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_STATIC_NODE_DURABILITY@@@HolographicDriverClientTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x18014B26C
 * Callers:
 *     ?SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x18015D390 (-SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL.c)
 * Callees:
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18015989C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?TelemetrySetStaticNodeDurability_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x18015FC6C (-TelemetrySetStaticNodeDurability_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::TelemetrySetStaticNodeDurability<Windows::Internal::Holographic::SpatialGraphDriverClient *,_GUID const &,SPATIAL_NODE_ID const &,enum SPATIAL_STATIC_NODE_DURABILITY &>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  char result; // al
  __int64 v9; // rcx
  __int64 v10; // rcx

  result = HolographicDriverClientTrace::IsEnabled((unsigned __int8)a1, a2);
  if ( result )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v9,
      lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    return HolographicDriverClientTrace::TelemetrySetStaticNodeDurability_(v10, *a1, a2, a3, *a4);
  }
  return result;
}
