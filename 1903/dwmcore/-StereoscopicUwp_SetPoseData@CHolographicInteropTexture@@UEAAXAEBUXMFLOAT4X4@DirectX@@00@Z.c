/*
 * XREFs of ?StereoscopicUwp_SetPoseData@CHolographicInteropTexture@@UEAAXAEBUXMFLOAT4X4@DirectX@@00@Z @ 0x180247C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHolographicInteropTexture::StereoscopicUwp_SetPoseData(
        __int64 this,
        __int64 a2,
        __int64 a3,
        const struct DirectX::XMFLOAT4X4 *a4)
{
  wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsageToService(this, a2, a3);
}
