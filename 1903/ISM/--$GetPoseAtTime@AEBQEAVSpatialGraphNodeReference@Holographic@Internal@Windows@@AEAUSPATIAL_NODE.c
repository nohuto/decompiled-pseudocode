/*
 * XREFs of ??$GetPoseAtTime@AEBQEAVSpatialGraphNodeReference@Holographic@Internal@Windows@@AEAUSPATIAL_NODE_ID@@AEA_JAEB_JAEB_JAEA_JAEA_JAEAW4TracePredictionType@@AEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@AEB_NAEBI@HolographicDriverClientContinuousTrace@@SAXAEBQEAVSpatialGraphNodeReference@Holographic@Internal@Windows@@AEAUSPATIAL_NODE_ID@@AEA_JAEB_J322AEAW4TracePredictionType@@AEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@AEB_NAEBI@Z @ 0x18014A314
 * Callers:
 *     _lambda_f2d9a31b738d46358cc103eee0272db8_::operator() @ 0x1801525D0 (_lambda_f2d9a31b738d46358cc103eee0272db8_--operator().c)
 * Callees:
 *     ?GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4TracePredictionType@@AEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_NI@Z @ 0x180157220 (-GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4Tr.c)
 *     ?IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z @ 0x180159868 (-IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x18016176C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

char __fastcall HolographicDriverClientContinuousTrace::GetPoseAtTime<Windows::Internal::Holographic::SpatialGraphNodeReference * const &,SPATIAL_NODE_ID &,__int64 &,__int64 const &,__int64 const &,__int64 &,__int64 &,enum TracePredictionType &,SPATIAL_GRAPH_DYNAMIC_NODE_POSE &,bool const &,unsigned int const &>(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _DWORD *a8,
        __int64 a9,
        char *a10,
        _DWORD *a11)
{
  char result; // al
  __int64 v16; // rcx
  char v17; // [rsp+50h] [rbp-18h]

  result = HolographicDriverClientContinuousTrace::IsEnabled((unsigned __int8)a1, a2);
  if ( result )
  {
    wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
      v16,
      lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
    v17 = *a10;
    return HolographicDriverClientContinuousTrace::GetPoseAtTime_(
             *a5,
             *a1,
             a2,
             *a3,
             *a4,
             *a5,
             *a6,
             *a7,
             *a8,
             a9,
             v17,
             *a11);
  }
  return result;
}
