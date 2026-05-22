/*
 * XREFs of ?AddRef@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAKXZ @ 0x18006A900
 * Callers:
 *     ?AddRef@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@W7EAAKXZ @ 0x18006FEC0 (-AddRef@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@W7EAAKXZ.c)
 *     ?AddRef@WGIController@@WCI@EAAKXZ @ 0x18006FED0 (-AddRef@WGIController@@WCI@EAAKXZ.c)
 *     ?AddRef@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@WBA@EAAKXZ @ 0x18006FFB0 (-AddRef@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@WBA@EAAKXZ.c)
 *     ?AddRef@WGIController@@WBI@EAAKXZ @ 0x180070090 (-AddRef@WGIController@@WBI@EAAKXZ.c)
 *     ?AddRef@WGIController@@WCA@EAAKXZ @ 0x180070160 (-AddRef@WGIController@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Windows::Internal::Input::MPCManager::ServerConnectionArgs::AddRef(
        Windows::Internal::Input::MPCManager::ServerConnectionArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::AddRef(this);
}
