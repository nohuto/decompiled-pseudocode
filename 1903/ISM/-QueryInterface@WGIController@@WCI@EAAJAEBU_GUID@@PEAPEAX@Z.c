/*
 * XREFs of ?QueryInterface@WGIController@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WGIController::QueryInterface(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::QueryInterface(a1 - 40);
}
