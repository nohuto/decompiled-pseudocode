/*
 * XREFs of ?AddRef@ScreenClippingBrokerImpl@@WCI@EAAKXZ @ 0x18009F270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ScreenClippingBrokerImpl::AddRef(__int64 a1)
{
  return Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::AddRef((Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *)(a1 - 40));
}
