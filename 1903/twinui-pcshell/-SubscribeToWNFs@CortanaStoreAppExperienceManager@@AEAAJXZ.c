/*
 * XREFs of ?SubscribeToWNFs@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BFA38
 * Callers:
 *     ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801BF568 (-SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x18000F750 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x180109D80 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180109EEC (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??$make_wnf_subscription@H@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@K@Z @ 0x1801BAE94 (--$make_wnf_subscription@H@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaStoreAppExperienceManager::SubscribeToWNFs(Concurrency::details::_RefCounter **this)
{
  Concurrency::details::_RefCounter **wnf; // rax
  Concurrency::details::_RefCounter **v3; // rbx
  Concurrency::details::_RefCounter **v4; // rax
  Concurrency::details::_RefCounter **v5; // rbx
  Concurrency::details::_RefCounter **v6; // rax
  Concurrency::details::_RefCounter **v7; // rbx
  Concurrency::details::_RefCounter *v9[2]; // [rsp+28h] [rbp-49h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-39h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+40h] [rbp-31h] BYREF
  Concurrency::details::_RefCounter **v12; // [rsp+48h] [rbp-29h]
  __int64 (__fastcall ***v13)(); // [rsp+A8h] [rbp+37h]

  v9[1] = (Concurrency::details::_RefCounter *)-2LL;
  v11 = off_18042D6A0;
  v12 = this;
  v13 = &v11;
  wnf = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<int>(
                                                v9,
                                                (__int64)&WNF_SHEL_LOCKSCREEN_ACTIVE,
                                                (__int64)v10);
  v3 = wnf;
  if ( this + 45 != wnf )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 45,
      *wnf);
    *v3 = 0LL;
  }
  if ( v9[0] )
    Concurrency::details::_RefCounter::_Destroy(v9[0]);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v10);
  v11 = off_18042D628;
  v12 = this;
  v13 = &v11;
  v4 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<int>(
                                               v9,
                                               (__int64)&WNF_SHEL_ABOVE_LOCK_APP_ACTIVE,
                                               (__int64)v10);
  v5 = v4;
  if ( this + 46 != v4 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 46,
      *v4);
    *v5 = 0LL;
  }
  if ( v9[0] )
    Concurrency::details::_RefCounter::_Destroy(v9[0]);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v10);
  v11 = off_18042D650;
  v12 = this;
  v13 = &v11;
  v6 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<int>(
                                               v9,
                                               (__int64)&WNF_SHEL_ABOVE_LOCK_BIO_ACTIVE,
                                               (__int64)v10);
  v7 = v6;
  if ( this + 47 != v6 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 47,
      *v6);
    *v7 = 0LL;
  }
  if ( v9[0] )
    Concurrency::details::_RefCounter::_Destroy(v9[0]);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v10);
  return 0LL;
}
