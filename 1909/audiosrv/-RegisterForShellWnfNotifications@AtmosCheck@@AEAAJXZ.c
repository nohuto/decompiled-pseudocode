/*
 * XREFs of ?RegisterForShellWnfNotifications@AtmosCheck@@AEAAJXZ @ 0x18013FB88
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c0a465a537957875493a7f1285b2ffbd___::Run @ 0x18005A9F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c0a465a537957875493a7f1285b2ffbd___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003890 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180048988 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_286f8a29dcaaae6c32055cc3f87b7092__void_ @ 0x18006A830 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_286f8a29dcaaae6c32055c.c)
 *     _lambda_286f8a29dcaaae6c32055cc3f87b7092_::_lambda_286f8a29dcaaae6c32055cc3f87b7092_ @ 0x18006AE60 (_lambda_286f8a29dcaaae6c32055cc3f87b7092_--_lambda_286f8a29dcaaae6c32055cc3f87b7092_.c)
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x18006BD2C (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 *     memcpy_s_0 @ 0x18006C770 (memcpy_s_0.c)
 *     ??1?$function@$$A6AXXZ@wistd@@QEAA@XZ @ 0x1800BDD74 (--1-$function@$$A6AXXZ@wistd@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800D5B3C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z @ 0x18013CCF0 (--$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x18013D250 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1801409EC (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180140E50 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 */

__int64 __fastcall AtmosCheck::RegisterForShellWnfNotifications(AtmosCheck *this)
{
  __int64 **v1; // rsi
  __int64 *v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  char IsRunningOnXbox; // al
  rsize_t v9; // rdx
  rsize_t v10; // r9
  const void *v11; // r8
  int v13; // r8d
  int v14; // eax
  struct wil::details::wnf_subscription_state_base *v15; // rdx
  wil::details *v16; // rcx
  __int64 v17; // [rsp+28h] [rbp-69h] BYREF
  wil::details *v18; // [rsp+30h] [rbp-61h] BYREF
  AtmosCheck *v19; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v20[16]; // [rsp+40h] [rbp-51h] BYREF
  __int64 Destination; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v22[128]; // [rsp+58h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v1 = (__int64 **)((char *)this + 248);
  if ( !*((_QWORD *)this + 31) )
  {
    v19 = this;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v19);
    v17 = 0LL;
    v18 = (wil::details *)&v17;
    v3 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v18);
    v4 = Microsoft::WRL::AsWeak<IInspectable>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this, v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = (unsigned int)v4;
      v7 = 2727LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)v6);
      Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v17);
      Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v19);
      return v5;
    }
    Destination = 0LL;
    IsRunningOnXbox = AtmosCheck::IsRunningOnXbox(this);
    v11 = &WNF_XBOX_SHELL_INITIALIZED;
    if ( !IsRunningOnXbox )
      v11 = &WNF_SHEL_LOGON_COMPLETE;
    if ( memcpy_s_0(&Destination, v9, v11, v10) )
    {
      v5 = -2147418113;
      v7 = 2743LL;
      v6 = 2147549183LL;
      goto LABEL_8;
    }
    lambda_286f8a29dcaaae6c32055cc3f87b7092_::_lambda_286f8a29dcaaae6c32055cc3f87b7092_(
      (Microsoft::WRL::WeakRef *)v20,
      (const struct Microsoft::WRL::WeakRef *)&v17,
      (__int64)this);
    wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_286f8a29dcaaae6c32055cc3f87b7092__void_((__int64)v22);
    v14 = wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(
            &Destination,
            (__int64)v22,
            v13,
            &v18);
    v16 = 0LL;
    if ( v14 >= 0 )
      v16 = v18;
    if ( v1 != (__int64 **)&v18 )
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
        v1,
        v16);
      v16 = 0LL;
    }
    if ( v16 )
      wil::details::delete_wnf_subscription_state(v16, v15);
    wistd::function<void (void)>::~function<void (void)>((__int64)v22);
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v17);
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v19);
  }
  return 0LL;
}
