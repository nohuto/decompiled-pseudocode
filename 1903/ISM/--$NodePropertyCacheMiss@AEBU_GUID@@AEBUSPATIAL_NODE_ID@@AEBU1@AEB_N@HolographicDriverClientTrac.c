/*
 * XREFs of ??$NodePropertyCacheMiss@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBU1@AEB_N@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0AEB_N@Z @ 0x18014B1B0
 * Callers:
 *     ?GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180156B5C (-GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPAT.c)
 *     ?GetNodePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180156CCC (-GetNodePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUS.c)
 * Callees:
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18015988C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?NodePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0_N@Z @ 0x180159C6C (-NodePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0_N@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::NodePropertyCacheMiss<_GUID const &,SPATIAL_NODE_ID const &,_GUID const &,bool const &>(
        struct _GUID *a1,
        struct SPATIAL_NODE_ID *a2,
        struct _GUID *a3,
        bool *a4)
{
  __int64 v8; // rcx
  HolographicDriverClientTrace *v9; // rcx

  if ( HolographicDriverClientTrace::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v8,
      lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    HolographicDriverClientTrace::NodePropertyCacheMiss_(v9, a1, a2, a3, *a4);
  }
}
