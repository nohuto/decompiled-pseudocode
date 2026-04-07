/*
 * XREFs of ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x180078840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureError(
        wil::details *this,
        struct FEATURE_ERROR *a2,
        const struct FEATURE_ERROR *a3)
{
  wil::details::FeatureStateManager::RecordFeatureError(
    (wil::details::FeatureStateManager *)&wil::details::g_featureStateManager,
    (unsigned int)this,
    a2);
}
