/*
 * XREFs of ?AddRef@CScreenClippingExperienceManager@@WDA@EAAKXZ @ 0x1800D80D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CScreenClippingExperienceManager::AddRef(__int64 a1)
{
  return Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::AddRef((Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *)(a1 - 48));
}
