/*
 * XREFs of ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x18012AD3C
 * Callers:
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x18012ACFC (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x180136024 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800E7154 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1800E7EAC (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 *     ??0?$function@$$A6AXXZ@wistd@@QEAA@$$QEAV01@@Z @ 0x18012B1D4 (--0-$function@$$A6AXXZ@wistd@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(
        __int64 *a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  void (__fastcall ***v9)(_QWORD, __int64); // rbx
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // esi
  unsigned int v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  char v19; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v21; // [rsp+90h] [rbp+30h] BYREF

  v21 = a3;
  v16 = 0;
  *a4 = 0LL;
  v7 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v7[1] = 0LL;
    *v7 = &wil::details::wnf_subscription_state<unsigned long>::`vftable';
    wistd::function<void (void)>::function<void (void)>(v7 + 2, a2);
  }
  else
  {
    v8 = 0LL;
  }
  v9 = (void (__fastcall ***)(_QWORD, __int64))v8;
  if ( !v8 )
  {
    v10 = -2147024882;
    v11 = 6115LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v10);
    goto LABEL_17;
  }
  v12 = v16;
  if ( v16 == -1 )
  {
    v21 = 0;
    v10 = NtQueryWnfStateData(a1, 0LL, 0LL, &v16, 0LL, &v21) | 0x10000000;
    if ( (int)(v10 + 0x80000000) >= 0 && v10 != -805306333 )
    {
      v11 = 6122LL;
      goto LABEL_10;
    }
    v12 = v16;
  }
  v13 = *a1;
  v18 = 0LL;
  v17 = v8 + 1;
  v19 = 1;
  v14 = RtlSubscribeWnfStateChangeNotification(
          &v18,
          v13,
          v12,
          lambda_9bbec43bd3c841ff596242732b4f01fa_::_lambda_invoker_cdecl_);
  if ( v19 )
    wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
      v17,
      v18);
  if ( v14 >= 0 )
  {
    v9 = 0LL;
    *a4 = v8;
    v10 = 0;
  }
  else
  {
    v10 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x17F9,
            (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
            (const char *)(unsigned int)v14);
  }
LABEL_17:
  if ( v9 )
    (**v9)(v9, 1LL);
  return v10;
}
