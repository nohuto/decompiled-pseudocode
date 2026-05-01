/*
 * XREFs of ??$make_wnf_subscription@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x18030C828
 * Callers:
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803189F8 (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@KPEAPEAU?$wnf_subscription_state@K@01@@Z @ 0x1801A6BD4 (--$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 */

_QWORD *__fastcall wil::make_wnf_subscription<unsigned long>(_QWORD *a1, __int64 a2, __int64 a3)
{
  int wnf_subscription; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  wnf_subscription = wil::details::make_wnf_subscription_state<unsigned long>(&WNF_ACC_EC_ENABLED, a3, a3, &v7);
  if ( wnf_subscription < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1048LL,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)wnf_subscription);
    __debugbreak();
  }
  *a1 = v7;
  return a1;
}
