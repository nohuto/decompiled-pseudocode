/*
 * XREFs of ??$GetStaticNodeForPose@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@AEAU6@@HolographicDriverClientContinuousTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@AEAU6@@Z @ 0x18014AA68
 * Callers:
 *     ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x180157DA0 (-GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NO.c)
 * Callees:
 *     ?GetStaticNodeForPose_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@2@Z @ 0x180157EA0 (-GetStaticNodeForPose_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_N.c)
 *     ?IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z @ 0x180159878 (-IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x18016179C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::GetStaticNodeForPose<Windows::Internal::Holographic::SpatialGraphDriverClient *,_GUID const &,SPATIAL_NODE_ID const &,DirectX::XMFLOAT4X3 const &,SPATIAL_NODE_ID &>(
        const void **a1,
        const struct _GUID *a2,
        const struct SPATIAL_NODE_ID *a3,
        const struct DirectX::XMFLOAT4X3 *a4,
        struct SPATIAL_NODE_ID *a5)
{
  __int64 v9; // rcx
  HolographicDriverClientContinuousTrace *v10; // rcx

  if ( HolographicDriverClientContinuousTrace::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
      v9,
      lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
    HolographicDriverClientContinuousTrace::GetStaticNodeForPose_(v10, *a1, a2, a3, a4, a5);
  }
}
