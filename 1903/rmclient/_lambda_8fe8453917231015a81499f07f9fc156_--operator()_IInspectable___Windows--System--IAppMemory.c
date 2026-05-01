/*
 * XREFs of _lambda_8fe8453917231015a81499f07f9fc156_::operator()_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___ @ 0x10007ADF
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__stdcall_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs___Windows::System::IAppMemoryUsageLimitChangingEventArgs_____::_)(IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs____Microsoft::WRL::FtmBase___lambda_8fe8453917231015a81499f07f9fc156___1_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___::Invoke @ 0x10007AB0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__stdcall_Windows--Foundation--IEve_ea_10007AB0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMarshal@@@WRL@Microsoft@@IAEKXZ @ 0x100074B4 (-InternalRelease@-$ComPtr@UIMarshal@@@WRL@Microsoft@@IAEKXZ.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IBEJABU_GUID@@PAPAX@Z @ 0x100074D1 (-InternalResolve@AgileRef@WRL@Microsoft@@IBEJABU_GUID@@PAPAX@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __thiscall lambda_8fe8453917231015a81499f07f9fc156_::operator()_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___(
        Microsoft::WRL::AgileRef *this,
        _DWORD *a2,
        _DWORD *a3)
{
  int v3; // esi
  void *v5; // [esp+4h] [ebp-4h] BYREF

  v5 = 0;
  v3 = Microsoft::WRL::AgileRef::InternalResolve(this, &_GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0, &v5);
  if ( v3 >= 0 )
    v3 = (*(int (__thiscall **)(_DWORD, void *, _DWORD, _DWORD))(*(_DWORD *)v5 + 12))(
           *(_DWORD *)(*(_DWORD *)v5 + 12),
           v5,
           *a2,
           *a3);
  Microsoft::WRL::ComPtr<IMarshal>::InternalRelease((int *)&v5);
  return v3;
}
