/*
 * XREFs of ??$make_wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBU_SEB_EVENT_HEADER@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@U_SEB_EVENT_HEADER@@@01@@Z @ 0x1800E501C
 * Callers:
 *     ??$make_wnf_subscription@U_SEB_EVENT_HEADER@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBU_SEB_EVENT_HEADER@@@Z@wistd@@K@Z @ 0x1800E4FCC (--$make_wnf_subscription@U_SEB_EVENT_HEADER@@@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$reso.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$wnf_subscription_state@K@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@@Z @ 0x1800E538C (--0-$wnf_subscription_state@K@details@wil@@QEAA@$$QEAV-$function@$$A6AXAEBK@Z@wistd@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800E7154 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1800E7EAC (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<_SEB_EVENT_HEADER>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4)
{
  void *v6; // rax
  __int64 v7; // rsi
  void (__fastcall ***v8)(_QWORD, __int64); // rbx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // edi
  unsigned int v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h]
  __int64 v16; // [rsp+50h] [rbp-10h] BYREF
  char v17; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v19; // [rsp+90h] [rbp+30h] BYREF

  v19 = a3;
  v14 = 0;
  *a4 = 0LL;
  v6 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = wil::details::wnf_subscription_state<unsigned long>::wnf_subscription_state<unsigned long>(v6, a2);
  else
    v7 = 0LL;
  v8 = (void (__fastcall ***)(_QWORD, __int64))v7;
  if ( !v7 )
  {
    v9 = -2147024882;
    v10 = 6115LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v9);
    goto LABEL_17;
  }
  v11 = v14;
  if ( v14 == -1 )
  {
    v19 = 0;
    v9 = NtQueryWnfStateData(&WNF_PO_ENERGY_SAVER_STATE, 0LL, 0LL, &v14, 0LL, &v19) | 0x10000000;
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -805306333 )
    {
      v10 = 6122LL;
      goto LABEL_10;
    }
    v11 = v14;
  }
  v16 = 0LL;
  v15 = v7 + 8;
  v17 = 1;
  v12 = RtlSubscribeWnfStateChangeNotification(
          &v16,
          WNF_PO_ENERGY_SAVER_STATE,
          v11,
          lambda_4a9300f8cdd0e9eeb035dbb632ca5aaa_::_lambda_invoker_cdecl_);
  if ( v17 )
    wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
      v15,
      v16);
  if ( v12 >= 0 )
  {
    v8 = 0LL;
    *a4 = v7;
    v9 = 0;
  }
  else
  {
    v9 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x17F9,
           (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
           (const char *)(unsigned int)v12,
           v7);
  }
LABEL_17:
  if ( v8 )
    (**v8)(v8, 1LL);
  return v9;
}
