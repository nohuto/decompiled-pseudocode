/*
 * XREFs of ?Release@WGIController@@UEAAKXZ @ 0x18006A8F0
 * Callers:
 *     ?Release@WGIController@@WBI@EAAKXZ @ 0x18006FF30 (-Release@WGIController@@WBI@EAAKXZ.c)
 *     ?Release@WGIController@@WCA@EAAKXZ @ 0x180070020 (-Release@WGIController@@WCA@EAAKXZ.c)
 *     ?Release@WGIController@@W7EAAKXZ @ 0x1800700F0 (-Release@WGIController@@W7EAAKXZ.c)
 *     ?Release@WGIController@@WCI@EAAKXZ @ 0x180070100 (-Release@WGIController@@WCI@EAAKXZ.c)
 *     ?Release@WGIController@@WBA@EAAKXZ @ 0x1800701C0 (-Release@WGIController@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall WGIController::Release(WGIController *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(this);
}
