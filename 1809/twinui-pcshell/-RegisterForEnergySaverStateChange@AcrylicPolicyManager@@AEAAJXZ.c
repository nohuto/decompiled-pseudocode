/*
 * XREFs of ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x1800E6A6C
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E7380 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ??$make_wnf_subscription@U_SEB_EVENT_HEADER@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBU_SEB_EVENT_HEADER@@@Z@wistd@@K@Z @ 0x1800E4FCC (--$make_wnf_subscription@U_SEB_EVENT_HEADER@@@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$reso.c)
 *     ??4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800E5AB0 (--4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x1800E7DD0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800E7F3C (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AcrylicPolicyManager::RegisterForEnergySaverStateChange(AcrylicPolicyManager *this)
{
  char *v2; // rbx
  char *v3; // rax
  char *v4; // r14
  char *v5; // rdi
  int AgileReference; // edi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  AcrylicPolicyManager *wnf; // rax
  __int64 v11; // rdx
  AcrylicPolicyManager *v12; // rbx
  __int64 v13; // rdx
  __int64 v15; // [rsp+28h] [rbp-69h] BYREF
  __int64 v16; // [rsp+30h] [rbp-61h] BYREF
  char *v17; // [rsp+38h] [rbp-59h] BYREF
  Concurrency::details::_RefCounter *v18[3]; // [rsp+40h] [rbp-51h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+58h] [rbp-39h] BYREF
  __int64 v20[12]; // [rsp+60h] [rbp-31h] BYREF
  __int64 (__fastcall ***v21)(); // [rsp+C0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v18[1] = (Concurrency::details::_RefCounter *)-2LL;
  if ( this )
  {
    v2 = (char *)this + 136;
    v3 = (char *)this + 136;
    v4 = (char *)this + 136;
    v5 = (char *)this + 136;
  }
  else
  {
    v2 = 0LL;
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
  }
  v17 = v2;
  if ( v3 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
    v5 = v4;
  }
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( v5 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    AgileReference = RoGetAgileReference(0LL, &GUID_18661d31_3944_41b1_bd96_da3defc2c268, v2, &v15);
    if ( AgileReference < 0 )
    {
      v8 = v16;
    }
    else
    {
      v7 = v16;
      v8 = v15;
      v16 = v15;
      v15 = v7;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    if ( AgileReference < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x95,
        (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
        (const char *)(unsigned int)AgileReference);
      goto LABEL_20;
    }
  }
  else
  {
    v8 = v16;
  }
  v15 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v21 = 0LL;
  v19 = off_1803C8FC0;
  v20[0] = 0LL;
  AgileGitPtr::operator=(v20, &v15);
  v21 = &v19;
  wnf = (AcrylicPolicyManager *)wil::make_wnf_subscription<_SEB_EVENT_HEADER>(v18, v9, (__int64)&v19);
  v12 = wnf;
  if ( (AcrylicPolicyManager *)((char *)this + 440) != wnf )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 440,
      *(_QWORD *)wnf);
    *(_QWORD *)v12 = 0LL;
  }
  if ( v18[0] )
    Concurrency::details::_RefCounter::_Destroy(v18[0]);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v19,
    v11);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v19,
    v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  AgileReference = 0;
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return (unsigned int)AgileReference;
}
