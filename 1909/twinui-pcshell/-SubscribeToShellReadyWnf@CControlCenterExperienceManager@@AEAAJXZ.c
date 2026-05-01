/*
 * XREFs of ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x18019A8F4
 * Callers:
 *     ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18019A47C (-RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x1800547D0 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x180128E90 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180128FFC (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18016D308 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x180173530 (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_50a12363169dbf5c5fb5088ef5c364e8__void_ @ 0x180197F9C (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_50a12363169dbf5c5fb508.c)
 *     ??$AsWeak@VCControlCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCControlCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x180198094 (--$AsWeak@VCControlCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCControlCenterExperienceManag.c)
 */

__int64 __fastcall CControlCenterExperienceManager::SubscribeToShellReadyWnf(Concurrency::details::_RefCounter **this)
{
  char *v2; // rbx
  __int64 v3; // rax
  int AgileReference; // edi
  __int64 *v5; // rax
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  Concurrency::details::_RefCounter **v9; // rbx
  Concurrency::details::_RefCounter **v10; // rax
  Concurrency::details::_RefCounter **v11; // rdi
  Concurrency::details::_RefCounter *v13; // [rsp+28h] [rbp-69h] BYREF
  __int64 v14[2]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v15; // [rsp+40h] [rbp-51h] BYREF
  __int64 v16; // [rsp+48h] [rbp-49h] BYREF
  char *v17; // [rsp+50h] [rbp-41h] BYREF
  _QWORD v18[16]; // [rsp+58h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  if ( this )
    v2 = (char *)(this + 4);
  else
    v2 = 0LL;
  v17 = v2;
  if ( v2 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = 0LL;
  AgileReference = 0;
  v14[0] = 0LL;
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
    AgileReference = RoGetAgileReference(0LL, &GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20, v2, v14);
    v3 = v14[0];
  }
  v14[0] = 0LL;
  v13 = 0LL;
  v16 = v3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  if ( AgileReference >= 0 )
  {
    v15 = 0LL;
    v13 = (Concurrency::details::_RefCounter *)&v15;
    v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v13);
    v6 = Microsoft::WRL::AsWeak<CControlCenterExperienceManager>((__int64)this, v5);
    AgileReference = v6;
    if ( v6 >= 0 )
    {
      v9 = this + 47;
      v14[0] = (__int64)this;
      v14[1] = v15;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_50a12363169dbf5c5fb5088ef5c364e8__void_(
        v18,
        v14);
      v10 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                                                    &v13,
                                                    (__int64)&WNF_SHEL_SESSION_LOGON_COMPLETE,
                                                    (__int64)v18);
      v11 = v10;
      if ( v9 != v10 )
      {
        wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
          this + 47,
          *v10);
        *v11 = 0LL;
      }
      if ( v13 )
        Concurrency::details::_RefCounter::_Destroy(v13);
      wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v18);
      if ( *v9 )
      {
        AgileReference = 0;
        goto LABEL_22;
      }
      AgileReference = -2147467259;
      v8 = 482LL;
      v7 = 2147500037LL;
    }
    else
    {
      v7 = (unsigned int)v6;
      v8 = 474LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)v7);
LABEL_22:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)AgileReference);
LABEL_23:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return (unsigned int)AgileReference;
}
