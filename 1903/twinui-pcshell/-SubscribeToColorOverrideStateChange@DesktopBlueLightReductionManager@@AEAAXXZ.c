/*
 * XREFs of ?SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ @ 0x180160B5C
 * Callers:
 *     ?RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ @ 0x180160944 (-RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x18000F750 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x180109D80 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180109EEC (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x18015F9F4 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 */

void __fastcall DesktopBlueLightReductionManager::SubscribeToColorOverrideStateChange(
        Concurrency::details::_RefCounter **this)
{
  Concurrency::details::_RefCounter **v2; // rax
  Concurrency::details::_RefCounter **v3; // rdi
  Concurrency::details::_RefCounter *v4[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v5[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v6[15]; // [rsp+38h] [rbp-90h] BYREF

  v4[1] = (Concurrency::details::_RefCounter *)-2LL;
  v6[0] = off_18042CF50;
  v6[1] = this;
  v6[13] = v6;
  v2 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                               v4,
                                               &WNF_DX_COLOR_OVERRIDE_STATE_CHANGE,
                                               (__int64)v5);
  v3 = v2;
  if ( this + 23 != v2 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 23,
      *v2);
    *v3 = 0LL;
  }
  if ( v4[0] )
    Concurrency::details::_RefCounter::_Destroy(v4[0]);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v5);
}
