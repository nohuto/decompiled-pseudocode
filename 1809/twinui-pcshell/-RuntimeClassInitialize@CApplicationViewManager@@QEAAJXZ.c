/*
 * XREFs of ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x18012D610
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18012A0E8 (--$MakeAndInitialize@VCApplicationViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A5E0 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x1800E7DD0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800E7F3C (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800F16C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificationDispatcher@@@Z @ 0x18012A2A0 (--$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificati.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x18012ACFC (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ?ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18012EEFC (-ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AE.c)
 */

__int64 __fastcall CApplicationViewManager::RuntimeClassInitialize(CApplicationViewManager *this)
{
  void **v1; // rsi
  int Instance; // ebx
  __int64 v4; // rdx
  void *v6; // rax
  Concurrency::details::_RefCounter **v7; // rax
  __int64 v8; // rdx
  Concurrency::details::_RefCounter **v9; // rdi
  Concurrency::details::_RefCounter **v10; // rbx
  __int64 v11; // rdx
  Concurrency::details::_RefCounter *v12; // [rsp+28h] [rbp-49h] BYREF
  GUID v13; // [rsp+38h] [rbp-39h] BYREF
  __int64 v14; // [rsp+48h] [rbp-29h]
  __int64 v15; // [rsp+50h] [rbp-21h]
  GUID v16; // [rsp+58h] [rbp-19h]
  __int64 v17; // [rsp+68h] [rbp-9h]
  __int64 v18; // [rsp+70h] [rbp-1h]
  GUID v19; // [rsp+78h] [rbp+7h]
  void *v20; // [rsp+88h] [rbp+17h]
  __int64 v21; // [rsp+90h] [rbp+1Fh]
  GUID v22; // [rsp+98h] [rbp+27h]
  __int64 v23; // [rsp+A8h] [rbp+37h]
  __int64 v24; // [rsp+B0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v1 = (void **)((char *)this + 712);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 89);
  Instance = ApplicationViewManagerVisibilityDebouncer_CreateInstance(
               (struct IApplicationViewCollection *)(((unsigned __int64)this + 136) & -(__int64)(this != 0LL)),
               (const struct _GUID *)((char *)this + 136),
               v1);
  if ( Instance < 0 )
  {
    v4 = 20LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  v14 = 0LL;
  v13 = GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5;
  v15 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v6 = *v1;
  v16 = GUID_e0fe7384_5482_4659_ab2c_4ff038948779;
  v20 = v6;
  v21 = 0LL;
  v23 = 0LL;
  v19 = GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3;
  v24 = 0LL;
  v22 = GUID_de6e8a03_3811_4239_9de9_96d0dfc301e6;
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (CApplicationViewManager *)((char *)this + 72),
               (const struct CImmersiveShellComponent::ISC_SERVICE *)&v13,
               4LL);
  if ( Instance < 0 )
  {
    v4 = 29LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((__int64 *)this + 98);
  Instance = Microsoft::WRL::Details::MakeAndInitialize<NotificationDispatcher,NotificationDispatcher,>((__int64 *)this + 98);
  if ( Instance < 0 )
  {
    v4 = 30LL;
    goto LABEL_3;
  }
  *(_QWORD *)v13.Data4 = this;
  *(_QWORD *)&v13.Data1 = off_1803C9748;
  *(_QWORD *)v22.Data4 = &v13;
  v7 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                                               &v12,
                                               (__int64)&WNF_EDP_ENTERPRISE_CONTEXTS_UPDATED,
                                               (__int64)&v13);
  v9 = (Concurrency::details::_RefCounter **)((char *)this + 704);
  v10 = v7;
  if ( v9 != v7 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      v9,
      *v7);
    *v10 = 0LL;
  }
  if ( v12 )
    Concurrency::details::_RefCounter::_Destroy(v12);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v13,
    v8);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v13,
    v11);
  if ( !*v9 )
  {
    Instance = -2147024882;
    v4 = 48LL;
    goto LABEL_3;
  }
  return 0LL;
}
