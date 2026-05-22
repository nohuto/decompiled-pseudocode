/*
 * XREFs of ?Release@WGIController@@UEAAKXZ @ 0x1800A7BB0
 * Callers:
 *     ?Release@WGIController@@W7EAAKXZ @ 0x180038B70 (-Release@WGIController@@W7EAAKXZ.c)
 *     ?Release@WGIController@@WBA@EAAKXZ @ 0x180038B80 (-Release@WGIController@@WBA@EAAKXZ.c)
 *     ?Release@WGIController@@WBI@EAAKXZ @ 0x180038B90 (-Release@WGIController@@WBI@EAAKXZ.c)
 *     ?Release@WGIController@@WCA@EAAKXZ @ 0x180038BA0 (-Release@WGIController@@WCA@EAAKXZ.c)
 *     ?Release@WGIController@@WCI@EAAKXZ @ 0x180038BB0 (-Release@WGIController@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall WGIController::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(this);
}
