/*
 * XREFs of ??$make_wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@01@@Z @ 0x18009C7E4
 * Callers:
 *     ??$make_wnf_subscription_nothrow@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z@wistd@@K@Z @ 0x18009C7A8 (--$make_wnf_subscription_nothrow@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@wil@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z@wistd@@@Z @ 0x18009C960 (--0-$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180107964 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18010916C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  void *v6; // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rbx
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // edi
  unsigned int v12; // [rsp+40h] [rbp-28h] BYREF
  void (__fastcall ***v13)(_QWORD, _QWORD); // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  char v15; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v17; // [rsp+80h] [rbp+18h] BYREF

  v17 = a3;
  *a4 = 0LL;
  v12 = -1;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = (void (__fastcall ***)(_QWORD, __int64))wil::details::wnf_subscription_state<enum Windows::Internal::Shell::Holographic::UserDisplayContext>::wnf_subscription_state<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
                                                   v6,
                                                   a2);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v8 = -2147024882;
    v9 = 909LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v8);
    goto LABEL_13;
  }
  v17 = 0;
  v8 = NtQueryWnfStateData(&WNF_HOLO_USER_DISPLAY_CONTEXT, 0LL, 0LL, &v12, 0LL, &v17) | 0x10000000;
  if ( (int)(v8 + 0x80000000) >= 0 && v8 != -805306333 )
  {
    v9 = 916LL;
    goto LABEL_9;
  }
  v14 = 0LL;
  v13 = v7 + 1;
  v15 = 1;
  v10 = RtlSubscribeWnfStateChangeNotification(
          &v14,
          WNF_HOLO_USER_DISPLAY_CONTEXT,
          v12,
          lambda_10c2d457696a47a750b06b77de2a577d_::_lambda_invoker_cdecl_);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>(&v13);
  if ( v10 >= 0 )
  {
    v8 = 0;
    *a4 = v7;
    v7 = 0LL;
  }
  else
  {
    v8 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x3A3,
           (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
           (const char *)(unsigned int)v10,
           (int)v7);
  }
LABEL_13:
  if ( v7 )
    (**v7)(v7, 1LL);
  return v8;
}
