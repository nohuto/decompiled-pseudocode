/*
 * XREFs of ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180222320
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x180053BE0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x1800547D0 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180082370 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CA.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x180128E90 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180128FFC (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??$make_wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4ShellState@Holographic@Shell@Internal@Windows@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@01@@Z @ 0x18021CD40 (--$make_wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@YA.c)
 */

__int64 __fastcall HolographicPositioner::SubscribeToServices(
        HolographicPositioner *this,
        struct IServiceProvider *a2,
        __int64 a3)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v6)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v10; // ebx
  __int64 v11; // rdx
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // eax
  Concurrency::details::_RefCounter *v18; // rcx
  Concurrency::details::_RefCounter **v19; // rbp
  _QWORD v20[2]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v21[8]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v22[15]; // [rsp+48h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::ReportUsageToService((__int64)this, 3u, a3);
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
    a2,
    &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261,
    &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261,
    (char *)this + 184);
  v6 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 47);
  ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v6)(
    a2,
    &GUID_dd621a70_9d93_4d88_8e1c_8b8412f81664,
    &GUID_dd621a70_9d93_4d88_8e1c_8b8412f81664,
    (char *)this + 376);
  v7 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v7)(
    a2,
    &CLSID_HolographicForegroundAssistant,
    &GUID_0249c870_f630_4a75_8d01_b316c814157a,
    (char *)this + 192);
  if ( IsHolographicWin32SlatesFeatureEnabled() )
  {
    v8 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
    ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v8)(
      a2,
      &GUID_d1d6b481_41b7_4e01_ad15_f8948c7d1df3,
      &GUID_d1d6b481_41b7_4e01_ad15_f8948c7d1df3,
      (char *)this + 200);
  }
  v9 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
          a2,
          &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
          &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
          (char *)this + 176);
  if ( v10 < 0 )
  {
    v11 = 369LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 22) + 96LL))(
          *((_QWORD *)this + 22),
          ((unsigned __int64)this + 136) & -(__int64)(this != (HolographicPositioner *)48),
          (char *)this + 208);
  if ( v10 < 0 )
  {
    v11 = 370LL;
    goto LABEL_5;
  }
  v13 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v13)(
          a2,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          (char *)this + 216);
  if ( v10 < 0 )
  {
    v11 = 372LL;
    goto LABEL_5;
  }
  v14 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 29);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v14)(
          a2,
          &CLSID_HolographicViewHostItemLedger,
          &GUID_6263b38f_a858_4070_9a3b_d938762099cc,
          (char *)this + 232);
  if ( v10 < 0 )
  {
    v11 = 373LL;
    goto LABEL_5;
  }
  v22[1] = (char *)this - 48;
  v22[0] = off_18044DC50;
  v22[13] = v22;
  v17 = wil::details::make_wnf_subscription_state<enum Windows::Internal::Shell::Holographic::ShellState>(
          v15,
          (__int64)v21,
          v16,
          v20);
  v18 = 0LL;
  if ( v17 >= 0 )
    v18 = (Concurrency::details::_RefCounter *)v20[0];
  v19 = (Concurrency::details::_RefCounter **)((char *)this + 384);
  if ( v19 != v20 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      v19,
      v18);
    v18 = 0LL;
  }
  if ( v18 )
    Concurrency::details::_RefCounter::_Destroy(v18);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v21);
  return 0LL;
}
