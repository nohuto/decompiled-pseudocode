/*
 * XREFs of _lambda_046e550ea9397cce661af54b6af0d395_::operator()_IInspectable___IInspectable___ @ 0x100079EF
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__stdcall_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::FtmBase___lambda_046e550ea9397cce661af54b6af0d395___1_IInspectable___IInspectable___::Invoke @ 0x100079C0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__stdcall_Windows--Foundation--IEventHandler_im.c)
 * Callees:
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IBEJABU_GUID@@PAPAX@Z @ 0x100074D1 (-InternalResolve@AgileRef@WRL@Microsoft@@IBEJABU_GUID@@PAPAX@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IAEKXZ @ 0x1000B9E1 (-InternalRelease@-$ComPtr@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __thiscall lambda_046e550ea9397cce661af54b6af0d395_::operator()_IInspectable___IInspectable___(
        Microsoft::WRL::AgileRef *this,
        _DWORD *a2,
        _DWORD *a3)
{
  int v3; // esi
  void *v5; // [esp+4h] [ebp-4h] BYREF

  v5 = 0;
  v3 = Microsoft::WRL::AgileRef::InternalResolve(this, &_GUID_c50898f6_c536_5f47_8583_8b2c2438a13b, &v5);
  if ( v3 >= 0 )
    v3 = (*(int (__thiscall **)(_DWORD, void *, _DWORD, _DWORD))(*(_DWORD *)v5 + 12))(
           *(_DWORD *)(*(_DWORD *)v5 + 12),
           v5,
           *a2,
           *a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(&v5);
  return v3;
}
