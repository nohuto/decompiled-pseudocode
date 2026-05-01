/*
 * XREFs of ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803189F8
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803129F0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x18000F750 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x180109D80 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180109EEC (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18011F55C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x18015F9F4 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     ??$make_wnf_subscription@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x18030C828 (--$make_wnf_subscription@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 *     ?IsAnyOOBE@@YA_NXZ @ 0x18031039C (-IsAnyOOBE@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall TouchKeyboardExperienceManager::SubscribeTouchKeyboardWnfNotifications(
        Concurrency::details::_RefCounter **this)
{
  Concurrency::details::_RefCounter **v2; // rax
  Concurrency::details::_RefCounter **v3; // rdi
  Concurrency::details::_RefCounter **v4; // rax
  Concurrency::details::_RefCounter **v5; // rdi
  Concurrency::details::_RefCounter **v6; // rax
  Concurrency::details::_RefCounter **v7; // rdi
  Concurrency::details::_RefCounter **v8; // rax
  Concurrency::details::_RefCounter **v9; // rdi
  Concurrency::details::_RefCounter **v10; // rax
  Concurrency::details::_RefCounter **v11; // rdi
  Concurrency::details::_RefCounter **v12; // rax
  Concurrency::details::_RefCounter **v13; // rdi
  Concurrency::details::_RefCounter **v14; // rax
  Concurrency::details::_RefCounter **v15; // rdi
  Concurrency::details::_RefCounter **v16; // rax
  Concurrency::details::_RefCounter **v17; // rdi
  __int64 v18; // rdx
  Concurrency::details::_RefCounter **wnf; // rax
  Concurrency::details::_RefCounter **v20; // rdi
  const char *v21; // r9
  Concurrency::details::_RefCounter *v22[2]; // [rsp+28h] [rbp-49h] BYREF
  _BYTE v23[8]; // [rsp+38h] [rbp-39h] BYREF
  __int64 (__fastcall **v24)(); // [rsp+40h] [rbp-31h] BYREF
  Concurrency::details::_RefCounter **v25; // [rsp+48h] [rbp-29h]
  __int64 (__fastcall ***v26)(); // [rsp+A8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v22[1] = (Concurrency::details::_RefCounter *)-2LL;
  v24 = off_18042EC68;
  v25 = this;
  v26 = &v24;
  v2 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                               v22,
                                               &WNF_ENTR_FULLLAYOUT_AVAILABILITY_POLICY_VALUE_CHANGED,
                                               (__int64)v23);
  v3 = v2;
  if ( this + 104 != v2 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 104,
      *v2);
    *v3 = 0LL;
  }
  if ( v22[0] )
    Concurrency::details::_RefCounter::_Destroy(v22[0]);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v23);
  v24 = off_18042EC90;
  v25 = this;
  v26 = &v24;
  v4 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                               v22,
                                               &WNF_ENTR_WIDELAYOUT_AVAILABILITY_POLICY_VALUE_CHANGED,
                                               (__int64)v23);
  v5 = v4;
  if ( this + 106 != v4 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 106,
      *v4);
    *v5 = 0LL;
  }
  if ( v22[0] )
    Concurrency::details::_RefCounter::_Destroy(v22[0]);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v23);
  v24 = off_18042ECB8;
  v25 = this;
  v26 = &v24;
  v6 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                               v22,
                                               &WNF_ENTR_NARROWLAYOUT_AVAILABILITY_POLICY_VALUE_CHANGED,
                                               (__int64)v23);
  v7 = v6;
  if ( this + 105 != v6 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 105,
      *v6);
    *v7 = 0LL;
  }
  if ( v22[0] )
    Concurrency::details::_RefCounter::_Destroy(v22[0]);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v23);
  v24 = off_18042ECE0;
  v25 = this;
  v26 = &v24;
  v8 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                               v22,
                                               &WNF_ENTR_HANDWRITING_AVAILABILITY_POLICY_VALUE_CHANGED,
                                               (__int64)v23);
  v9 = v8;
  if ( this + 107 != v8 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 107,
      *v8);
    *v9 = 0LL;
  }
  if ( v22[0] )
    Concurrency::details::_RefCounter::_Destroy(v22[0]);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v23);
  v24 = off_18042EBC8;
  v25 = this;
  v26 = &v24;
  v10 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                                v22,
                                                &WNF_ENTR_SPLITLAYOUT_AVAILABILITY_POLICY_VALUE_CHANGED,
                                                (__int64)v23);
  v11 = v10;
  if ( this + 108 != v10 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 108,
      *v10);
    *v11 = 0LL;
  }
  if ( v22[0] )
    Concurrency::details::_RefCounter::_Destroy(v22[0]);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v23);
  v24 = off_18042EBF0;
  v25 = this;
  v26 = &v24;
  v12 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                                v22,
                                                &WNF_ENTR_EMOJI_AVAILABILITY_POLICY_VALUE_CHANGED,
                                                (__int64)v23);
  v13 = v12;
  if ( this + 109 != v12 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 109,
      *v12);
    *v13 = 0LL;
  }
  if ( v22[0] )
    Concurrency::details::_RefCounter::_Destroy(v22[0]);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v23);
  v24 = off_18042EC18;
  v25 = this;
  v26 = &v24;
  v14 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                                v22,
                                                &WNF_ENTR_FORCEDOCKED_TOUCHKEYBOARD_POLICY_VALUE_CHANGED,
                                                (__int64)v23);
  v15 = v14;
  if ( this + 110 != v14 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 110,
      *v14);
    *v15 = 0LL;
  }
  if ( v22[0] )
    Concurrency::details::_RefCounter::_Destroy(v22[0]);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v23);
  v24 = off_18042EC40;
  v25 = this;
  v26 = &v24;
  v16 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                                v22,
                                                &WNF_ENTR_TOUCHKEYBOARDDICTATION_POLICY_VALUE_CHANGED,
                                                (__int64)v23);
  v17 = v16;
  if ( this + 111 != v16 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 111,
      *v16);
    *v17 = 0LL;
  }
  if ( v22[0] )
    Concurrency::details::_RefCounter::_Destroy(v22[0]);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v23);
  v24 = off_18042EB50;
  v25 = this;
  v26 = &v24;
  wnf = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<unsigned long>(v22, v18, (__int64)v23);
  v20 = wnf;
  if ( this + 112 != wnf )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 112,
      *wnf);
    *v20 = 0LL;
  }
  if ( v22[0] )
    Concurrency::details::_RefCounter::_Destroy(v22[0]);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v23);
  if ( IsAnyOOBE() )
  {
    if ( !(unsigned int)RegisterWaitUntilOOBECompleted(
                          TouchKeyboardExperienceManager::OobeCompletedCallback,
                          this,
                          this + 114) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x462,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        v21);
  }
}
