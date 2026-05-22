/*
 * XREFs of ?IsVerboseTracingEnabled@HolographicDriverClientContinuousTrace@@SA_N_K@Z @ 0x1801598B0
 * Callers:
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x180156E40 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 *     ?GetPoseAtTime_LatestPoseFromDriver_@HolographicDriverClientContinuousTrace@@QEAAXII_J0IAEBUXMFLOAT4X3@DirectX@@@Z @ 0x180157574 (-GetPoseAtTime_LatestPoseFromDriver_@HolographicDriverClientContinuousTrace@@QEAAXII_J0IAEBUXMFL.c)
 *     ?GetPoseAtTime_NotEnoughPosesToExtrapolate_@HolographicDriverClientContinuousTrace@@QEAAXXZ @ 0x180157694 (-GetPoseAtTime_NotEnoughPosesToExtrapolate_@HolographicDriverClientContinuousTrace@@QEAAXXZ.c)
 *     ?GetPoseAtTime_NotEnoughPosesToInterpolate_@HolographicDriverClientContinuousTrace@@QEAAXXZ @ 0x180157730 (-GetPoseAtTime_NotEnoughPosesToInterpolate_@HolographicDriverClientContinuousTrace@@QEAAXXZ.c)
 *     ?GetPoseAtTime_OrientationInvalid_@HolographicDriverClientContinuousTrace@@QEAAXXZ @ 0x1801577CC (-GetPoseAtTime_OrientationInvalid_@HolographicDriverClientContinuousTrace@@QEAAXXZ.c)
 *     ?GetPoseAtTime_PredictFromPoses_@HolographicDriverClientContinuousTrace@@QEAAXJ_J0IAEBUXMFLOAT4X3@DirectX@@@Z @ 0x180157868 (-GetPoseAtTime_PredictFromPoses_@HolographicDriverClientContinuousTrace@@QEAAXJ_J0IAEBUXMFLOAT4X.c)
 *     ?GetPoseAtTime_TranslationInvalid_@HolographicDriverClientContinuousTrace@@QEAAXXZ @ 0x180157974 (-GetPoseAtTime_TranslationInvalid_@HolographicDriverClientContinuousTrace@@QEAAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x18016176C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

char __fastcall HolographicDriverClientContinuousTrace::IsVerboseTracingEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // r9
  const struct _TlgProvider_t *v3; // rcx
  BOOLEAN v4; // al

  v1 = wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
         a1,
         lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
  v2 = 0;
  v3 = *(const struct _TlgProvider_t **)(v1 + 8);
  if ( *(_DWORD *)v3 > 5u )
  {
    v4 = TlgKeywordOn(v3, 0x800000uLL);
    if ( v4 != v2 )
      return 1;
  }
  return v2;
}
