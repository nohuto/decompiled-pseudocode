/*
 * XREFs of ?Release@WGIController@@UEAAKXZ @ 0x1800A7A40
 * Callers:
 *     ?Release@WGIController@@W7EAAKXZ @ 0x180038680 (-Release@WGIController@@W7EAAKXZ.c)
 *     ?Release@WGIController@@WBA@EAAKXZ @ 0x180038690 (-Release@WGIController@@WBA@EAAKXZ.c)
 *     ?Release@WGIController@@WBI@EAAKXZ @ 0x1800386A0 (-Release@WGIController@@WBI@EAAKXZ.c)
 *     ?Release@WGIController@@WCA@EAAKXZ @ 0x1800386B0 (-Release@WGIController@@WCA@EAAKXZ.c)
 *     ?Release@WGIController@@WCI@EAAKXZ @ 0x1800386C0 (-Release@WGIController@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall WGIController::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(this);
}
