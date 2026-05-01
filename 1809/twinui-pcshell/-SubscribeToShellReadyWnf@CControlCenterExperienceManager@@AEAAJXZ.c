/*
 * XREFs of ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x18014ECD4
 * Callers:
 *     ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18014E87C (-RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x1800E7DD0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800E7F3C (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180124984 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x18012ACFC (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ??$AsWeak@VCControlCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCControlCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x18014C48C (--$AsWeak@VCControlCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCControlCenterExperienceManag.c)
 */

__int64 __fastcall CControlCenterExperienceManager::SubscribeToShellReadyWnf(CControlCenterExperienceManager *this)
{
  char *v2; // rbx
  int AgileReference; // ebx
  Concurrency::details::_RefCounter *v4; // rcx
  __int64 *v5; // rax
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rbx
  Concurrency::details::_RefCounter **v10; // rax
  __int64 v11; // rdx
  Concurrency::details::_RefCounter **v12; // rdi
  Concurrency::details::_RefCounter **v13; // rbx
  __int64 v14; // rdx
  Concurrency::details::_RefCounter *v16; // [rsp+20h] [rbp-59h] BYREF
  Concurrency::details::_RefCounter *v17; // [rsp+28h] [rbp-51h] BYREF
  __int64 v18; // [rsp+30h] [rbp-49h] BYREF
  __int64 v19[2]; // [rsp+38h] [rbp-41h] BYREF
  __int64 v20; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v21[14]; // [rsp+50h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  if ( this )
    v2 = (char *)this + 32;
  else
    v2 = 0LL;
  v19[0] = (__int64)v2;
  if ( v2 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  if ( !v2 )
    goto LABEL_11;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  AgileReference = RoGetAgileReference(0LL, &GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20, v2, &v16);
  if ( AgileReference >= 0 )
  {
    v4 = v17;
    v17 = v16;
    v16 = v4;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  if ( AgileReference >= 0 )
  {
LABEL_11:
    v18 = 0LL;
    v16 = (Concurrency::details::_RefCounter *)&v18;
    v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v16);
    v6 = Microsoft::WRL::AsWeak<CControlCenterExperienceManager>((__int64)this, v5);
    AgileReference = v6;
    if ( v6 >= 0 )
    {
      v9 = v18;
      v19[1] = (__int64)this;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      v20 = 0LL;
      v21[0] = off_1803CA020;
      v21[1] = this;
      v21[13] = v21;
      v21[2] = v9;
      v10 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                                                    &v16,
                                                    (__int64)&WNF_SHEL_SESSION_LOGON_COMPLETE,
                                                    (__int64)v21);
      v12 = (Concurrency::details::_RefCounter **)((char *)this + 376);
      v13 = v10;
      if ( v12 != v10 )
      {
        wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
          v12,
          *v10);
        *v13 = 0LL;
      }
      if ( v16 )
        Concurrency::details::_RefCounter::_Destroy(v16);
      wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
        (__int64)v21,
        v11);
      wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
        (__int64)v21,
        v14);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
      if ( *v12 )
      {
        AgileReference = 0;
        goto LABEL_23;
      }
      AgileReference = -2147467259;
      v8 = 471LL;
      v7 = 2147500037LL;
    }
    else
    {
      v7 = (unsigned int)v6;
      v8 = 463LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)v7);
LABEL_23:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1CC,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)AgileReference);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
  return (unsigned int)AgileReference;
}
