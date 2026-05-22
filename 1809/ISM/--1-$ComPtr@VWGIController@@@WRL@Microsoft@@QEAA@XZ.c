/*
 * XREFs of ??1?$ComPtr@VWGIController@@@WRL@Microsoft@@QEAA@XZ @ 0x18006C2A0
 * Callers:
 *     _WGIRawInputProvider::OnRawGameControllerAdded_::_1_::dtor$1 @ 0x180131745 (_WGIRawInputProvider--OnRawGameControllerAdded_--_1_--dtor$1.c)
 *     _WGIRawInputProvider::OnRawGameControllerAdded_::_1_::dtor$10 @ 0x180131769 (_WGIRawInputProvider--OnRawGameControllerAdded_--_1_--dtor$10.c)
 *     _WGIController::NotifyAttachedAndStart_::_1_::dtor$2 @ 0x180131856 (_WGIController--NotifyAttachedAndStart_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006C0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerIn.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<WGIController>::~ComPtr<WGIController>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(result);
  }
  return result;
}
