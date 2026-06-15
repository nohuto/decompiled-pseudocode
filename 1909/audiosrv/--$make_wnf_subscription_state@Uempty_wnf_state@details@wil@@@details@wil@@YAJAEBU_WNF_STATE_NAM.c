/*
 * XREFs of ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x18013D250
 * Callers:
 *     ?RegisterForShellWnfNotifications@AtmosCheck@@AEAAJXZ @ 0x18013FB88 (-RegisterForShellWnfNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180103178 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??0?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@QEAA@$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18013D43C (--0-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@QEAA@$$QEAV-$function@$$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x180140DF4 (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(
        __int64 *a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  LPVOID v7; // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rbx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // edi
  unsigned int v14; // [rsp+40h] [rbp-20h] BYREF
  void (__fastcall ***v15)(_QWORD, _QWORD); // [rsp+48h] [rbp-18h]
  __int64 v16; // [rsp+50h] [rbp-10h] BYREF
  char v17; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v19; // [rsp+90h] [rbp+30h] BYREF

  v19 = a3;
  *a4 = 0LL;
  v14 = -1;
  v7 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v8 = (void (__fastcall ***)(_QWORD, __int64))wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::wnf_subscription_state<wil::details::empty_wnf_state>(
                                                   v7,
                                                   a2);
  else
    v8 = 0LL;
  if ( !v8 )
  {
    v9 = -2147024882;
    v10 = 909LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      (const char *)v9);
    goto LABEL_15;
  }
  v19 = 0;
  v9 = NtQueryWnfStateData(a1, 0LL, 0LL, &v14, 0LL, &v19) | 0x10000000;
  if ( (int)(v9 + 0x80000000) >= 0 && v9 != -805306333 )
  {
    v10 = 916LL;
    goto LABEL_9;
  }
  v11 = *a1;
  v16 = 0LL;
  v15 = v8 + 1;
  v17 = 1;
  v12 = RtlSubscribeWnfStateChangeNotification(
          &v16,
          v11,
          v14,
          lambda_d93655bd33d44513d4ad201382c30aa7_::_lambda_invoker_cdecl_,
          v8,
          0LL,
          0,
          0);
  if ( v17 )
    wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
      v15,
      v16);
  if ( v12 >= 0 )
  {
    v9 = 0;
    *a4 = v8;
    v8 = 0LL;
  }
  else
  {
    v9 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x3A3,
           (__int64)"internal\\sdk\\inc\\wil\\resource.h",
           (const char *)(unsigned int)v12);
  }
LABEL_15:
  if ( v8 )
    (**v8)(v8, 1LL);
  return v9;
}
