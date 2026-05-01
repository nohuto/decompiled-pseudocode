/*
 * XREFs of ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewSwitchRequestedEventArgs@2345@@Foundation@Windows@@AEBQEAVWindowManagerBridge@@P84@EAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIAppViewSwitchRequestedEventArgs@6783@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewSwitchRequestedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVWindowManagerBridge@@$$QEAP84@EAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewSwitchRequestedEventArgs@6789@@Z@Z @ 0x18029D98C
 * Callers:
 *     _lambda_3f1c4c43acd743819b127ca15ba3e0b1_::operator() @ 0x18029F120 (_lambda_3f1c4c43acd743819b127ca15ba3e0b1_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801200A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::AppViewSwitchRequestedEventArgs___Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs_____::_)(Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::AppViewSwitchRequestedEventArgs____Microsoft::WRL::FtmBase___lambda_cce7c2b402c2c0bebd2b07d00f097e8f___1_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::AppViewSwitchRequestedEventArgs____Microsoft::WRL::FtmBase___lambda_cce7c2b402c2c0bebd2b07d00f097e8f___1_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs___ @ 0x18029EC90 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18029EC90.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *,Windows::Internal::ApplicationModel::WindowManagement::AppViewSwitchRequestedEventArgs *>,WindowManagerBridge * const &,long (WindowManagerBridge::*)(Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *)>(
        __int64 *a1,
        __int64 *a2,
        __int128 *a3)
{
  __int64 v4; // rbx
  void *v5; // rax
  const char *v6; // r9
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = *a2;
  v9 = *a3;
  v4 = 0LL;
  v5 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::AppViewSwitchRequestedEventArgs___Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs_____::___Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::AppViewSwitchRequestedEventArgs____Microsoft::WRL::FtmBase___lambda_cce7c2b402c2c0bebd2b07d00f097e8f___1_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::AppViewSwitchRequestedEventArgs____Microsoft::WRL::FtmBase___lambda_cce7c2b402c2c0bebd2b07d00f097e8f___1_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs___(
           v5,
           &v8);
  *a1 = v4;
  if ( !v4 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      69LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v6);
    __debugbreak();
  }
  return a1;
}
