/*
 * XREFs of ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@AEBQEAVWindowManagerBridge@@P84@EAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIInspectable@@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVWindowManagerBridge@@$$QEAP84@EAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z@Z @ 0x1802470CC
 * Callers:
 *     _lambda_53a04da55905c8211e57e0dfa928362b_::operator() @ 0x18024912C (_lambda_53a04da55905c8211e57e0dfa928362b_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_____ptr64_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_1d10127a203071066fb64b8fcf746323___1_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher_____ptr64_IInspectable_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_____ptr64_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_1d10127a203071066fb64b8fcf746323___1_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher_____ptr64_IInspectable_____ptr64_ @ 0x1802482A0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1802482A0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *,IInspectable *>,WindowManagerBridge * const &,long (WindowManagerBridge::*)(Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *,IInspectable *)>(
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
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher_____ptr64__IInspectable_____ptr64_::___Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_____ptr64_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_1d10127a203071066fb64b8fcf746323___1_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher_____ptr64_IInspectable_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_____ptr64_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_1d10127a203071066fb64b8fcf746323___1_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher_____ptr64_IInspectable_____ptr64_(
           v5,
           &v8);
  *a1 = v4;
  if ( !v4 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, 78LL, (__int64)"internal\\sdk\\inc\\wil\\wrl.h", v6);
    __debugbreak();
  }
  return a1;
}
