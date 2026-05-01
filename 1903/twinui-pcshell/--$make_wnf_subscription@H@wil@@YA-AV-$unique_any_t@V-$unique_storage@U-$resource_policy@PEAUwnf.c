/*
 * XREFs of ??$make_wnf_subscription@H@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@K@Z @ 0x1801BAE94
 * Callers:
 *     ?SubscribeToWNFs@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BFA38 (-SubscribeToWNFs@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@KPEAPEAU?$wnf_subscription_state@H@01@@Z @ 0x1801BAEE8 (--$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 */

_QWORD *__fastcall wil::make_wnf_subscription<int>(_QWORD *a1, __int64 a2, __int64 a3)
{
  int wnf_subscription; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wnf_subscription = wil::details::make_wnf_subscription_state<int>(a2, a3, a3, v6);
  if ( wnf_subscription < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1048LL,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      (const char *)(unsigned int)wnf_subscription);
    __debugbreak();
  }
  *a1 = v6[0];
  return a1;
}
