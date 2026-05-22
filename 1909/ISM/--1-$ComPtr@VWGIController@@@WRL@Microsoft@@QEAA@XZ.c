/*
 * XREFs of ??1?$ComPtr@VWGIController@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A7154
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_WGIController_WGIController_Windows::Gaming::Input::IRawGameController___&_IRawInputClient___IMessageSession___IGameInputServer___WGIRawInputProvider____::_1_::dtor$2 @ 0x1800A6D8D (_Microsoft--WRL--Details--MakeAndInitialize_WGIController_WGIController_Windows--Ga_ea_1800A6D8D.c)
 *     _WGIRawInputProvider::OnRawGameControllerAdded_::_1_::dtor$1 @ 0x1800A76C4 (_WGIRawInputProvider--OnRawGameControllerAdded_--_1_--dtor$1.c)
 *     _WGIController::NotifyAttachedAndStart_::_1_::dtor$6 @ 0x1800AA281 (_WGIController--NotifyAttachedAndStart_--_1_--dtor$6.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A79B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800A79B0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<WGIController>::~ComPtr<WGIController>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(result);
  }
  return result;
}
