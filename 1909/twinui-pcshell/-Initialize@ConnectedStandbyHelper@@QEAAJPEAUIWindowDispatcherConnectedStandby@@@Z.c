/*
 * XREFs of ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x1802B0F2C
 * Callers:
 *     ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18028F970 (-SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18029FC90 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x1800547D0 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x1800A82E0 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x180128E90 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180128FFC (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     wistd::function_void___cdecl(unsigned_char_const_&)_::function_void___cdecl(unsigned_char_const_&)___lambda_025d670431b0b6098eb2d1c47c9e9598__void_ @ 0x1802B0748 (wistd--function_void___cdecl(unsigned_char_const_-)_--function_void___cdecl(unsigned_char_const_.c)
 *     ??$make_wnf_subscription@E@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBE@Z@wistd@@K@Z @ 0x1802B080C (--$make_wnf_subscription@E@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PDCShellPhaseUseWNF@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802B11D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_PDCShellPhaseUseWNF@@@wil@@CAX_NW4Re.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ConnectedStandbyHelper::Initialize(
        ConnectedStandbyHelper *this,
        struct IWindowDispatcherConnectedStandby *a2)
{
  Concurrency::details::_RefCounter **v3; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  Concurrency::details::_RefCounter **wnf; // rax
  Concurrency::details::_RefCounter **v7; // rbx
  const char *v8; // r9
  __int64 result; // rax
  Concurrency::details::_RefCounter *v10; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v11; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C0h]
  __int128 *v13; // [rsp+40h] [rbp-B8h]
  __int64 v14; // [rsp+48h] [rbp-B0h] BYREF
  std::_Ref_count_base *v15; // [rsp+50h] [rbp-A8h]
  _QWORD v16[16]; // [rsp+60h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v12 = -2LL;
  try
  {
    *((_QWORD *)this + 3) = a2;
    wil::Feature<__WilFeatureTraits_Feature_PDCShellPhaseUseWNF>::ReportUsageToService();
    v3 = (Concurrency::details::_RefCounter **)((char *)this + 48);
    v13 = &v11;
    v4 = std::enable_shared_from_this<ConnectedStandbyHelper>::shared_from_this((__int64)this, &v14);
    v11 = 0LL;
    v11 = *(_OWORD *)v4;
    *v4 = 0LL;
    v4[1] = 0LL;
    wistd::function_void___cdecl_unsigned_char_const____::function_void___cdecl_unsigned_char_const______lambda_025d670431b0b6098eb2d1c47c9e9598__void_(
      v16,
      &v11);
    wnf = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<unsigned char>(&v10, v5, (__int64)v16);
    v7 = wnf;
    if ( v3 != wnf )
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
        v3,
        *wnf);
      *v7 = 0LL;
    }
    if ( v10 )
      Concurrency::details::_RefCounter::_Destroy(v10);
    wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v16);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x30,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
                           v8);
  }
  return result;
}
