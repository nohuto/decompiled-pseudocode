/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Gaming::Input::IGameController___Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::_)(Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController___Windows::System::UserChangedEventArgs_____lambda_b0837da6586447bbebcec24d30486161___1_Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs___::_scalar_deleting_destructor_ @ 0x1800A8B20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A79B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800A79B0.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Gaming::Input::IGameController___Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::___Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController___Windows::System::UserChangedEventArgs_____lambda_b0837da6586447bbebcec24d30486161___1_Windows::Gaming::Input::IGameController___Windows::System::IUserChangedEventArgs___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx

  v4 = a1[2];
  if ( v4 )
  {
    a1[2] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v4);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
