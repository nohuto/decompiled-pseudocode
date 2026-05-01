/*
 * XREFs of ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x180127BDC
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180128480 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x1800547D0 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     wistd::function_void___cdecl(_SEB_EVENT_HEADER_const_&)_::function_void___cdecl(_SEB_EVENT_HEADER_const_&)___lambda_0488a05ff636eeaf8fe541b85f6d8674__void_ @ 0x180125DC8 (wistd--function_void___cdecl(_SEB_EVENT_HEADER_const_-)_--function_void___cdecl(_SEB_EVENT_HEADE.c)
 *     ??$make_wnf_subscription@U_SEB_EVENT_HEADER@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBU_SEB_EVENT_HEADER@@@Z@wistd@@K@Z @ 0x1801262B0 (--$make_wnf_subscription@U_SEB_EVENT_HEADER@@@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$reso.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x180128E90 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180128FFC (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AcrylicPolicyManager::RegisterForEnergySaverStateChange(AcrylicPolicyManager *this)
{
  char *v2; // rbx
  char *v3; // r14
  __int64 v4; // rdi
  int AgileReference; // esi
  char *v6; // r15
  __int64 v7; // rdx
  char *wnf; // rax
  char *v9; // rbx
  __int64 v11; // [rsp+28h] [rbp-79h] BYREF
  Concurrency::details::_RefCounter *v12; // [rsp+30h] [rbp-71h] BYREF
  char *v13; // [rsp+38h] [rbp-69h] BYREF
  __int64 v14[3]; // [rsp+40h] [rbp-61h] BYREF
  _BYTE v15[128]; // [rsp+58h] [rbp-49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v14[1] = -2LL;
  if ( this )
  {
    v2 = (char *)this + 136;
    v3 = (char *)this + 136;
  }
  else
  {
    v2 = 0LL;
    v3 = 0LL;
  }
  v13 = v2;
  if ( v3 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
  v4 = 0LL;
  v11 = 0LL;
  AgileReference = 0;
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    AgileReference = RoGetAgileReference(0LL, &GUID_18661d31_3944_41b1_bd96_da3defc2c268, v2, &v11);
    v4 = v11;
  }
  v11 = 0LL;
  v12 = 0LL;
  v14[0] = v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  if ( AgileReference >= 0 )
  {
    v6 = (char *)this + 456;
    v11 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    wistd::function_void___cdecl__SEB_EVENT_HEADER_const____::function_void___cdecl__SEB_EVENT_HEADER_const______lambda_0488a05ff636eeaf8fe541b85f6d8674__void_(
      (__int64)v15,
      &v11);
    wnf = (char *)wil::make_wnf_subscription<_SEB_EVENT_HEADER>(&v12, v7, (__int64)v15);
    v9 = wnf;
    if ( v6 != wnf )
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
        v6,
        *(_QWORD *)wnf);
      *(_QWORD *)v9 = 0LL;
    }
    if ( v12 )
      Concurrency::details::_RefCounter::_Destroy(v12);
    wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v15);
    AgileReference = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x93,
      (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)AgileReference);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return (unsigned int)AgileReference;
}
