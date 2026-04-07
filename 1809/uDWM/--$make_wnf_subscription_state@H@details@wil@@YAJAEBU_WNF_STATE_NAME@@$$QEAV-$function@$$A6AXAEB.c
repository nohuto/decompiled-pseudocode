/*
 * XREFs of ??$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@KPEAPEAU?$wnf_subscription_state@H@01@@Z @ 0x18003D87C
 * Callers:
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18003D7A0 (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ??0?$wnf_subscription_state@H@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@@Z @ 0x18003D978 (--0-$wnf_subscription_state@H@details@wil@@QEAA@$$QEAV-$function@$$A6AXAEBH@Z@wistd@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x18004BAFC (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008C55C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<int>(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  void (__fastcall ***v8)(_QWORD, __int64); // rbx
  __int64 v9; // r8
  int v10; // edi
  unsigned int v11; // edi
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-40h]
  int v15; // [rsp+20h] [rbp-40h]
  unsigned int v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  char v19; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v16 = 0;
  *a4 = 0LL;
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         128LL);
  if ( v6 )
    v7 = wil::details::wnf_subscription_state<int>::wnf_subscription_state<int>(v6, a2);
  else
    v7 = 0LL;
  v8 = (void (__fastcall ***)(_QWORD, __int64))v7;
  if ( !v7 )
  {
    v11 = -2147024882;
    v13 = 6115LL;
    goto LABEL_17;
  }
  v9 = v16;
  if ( v16 == -1 )
  {
    v14 = 0;
    v11 = NtQueryWnfStateData(&WNF_IMSN_TRANSPARENCYPOLICY, 0LL, 0LL, &v16) | 0x10000000;
    if ( (int)(v11 + 0x80000000) < 0 || v11 == -805306333 )
    {
      v9 = v16;
      goto LABEL_5;
    }
    v13 = 6122LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"internal\\sdk\\inc\\wil\\resource.h",
      (const char *)v11,
      v14);
    goto LABEL_9;
  }
LABEL_5:
  v18 = 0LL;
  v17 = v7 + 8;
  v19 = 1;
  v10 = RtlSubscribeWnfStateChangeNotification(
          &v18,
          WNF_IMSN_TRANSPARENCYPOLICY,
          v9,
          lambda_99572f710870d967242ce0a5cb8d8509_::_lambda_invoker_cdecl_,
          v7,
          0LL,
          0,
          0);
  if ( v19 )
    wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
      v17,
      v18);
  if ( v10 < 0 )
  {
    v11 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x17F9,
            (unsigned int)"internal\\sdk\\inc\\wil\\resource.h",
            (const char *)(unsigned int)v10,
            v15);
  }
  else
  {
    v8 = 0LL;
    *a4 = v7;
    v11 = 0;
  }
LABEL_9:
  if ( v8 )
    (**v8)(v8, 1LL);
  return v11;
}
