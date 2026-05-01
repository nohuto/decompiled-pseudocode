/*
 * XREFs of ??$make_wnf_subscription_nothrow@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1801774A4
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18017A200 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1802D2784 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ??$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@KPEAPEAU?$wnf_subscription_state@K@01@@Z @ 0x1801774E8 (--$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 */

_QWORD *__fastcall wil::make_wnf_subscription_nothrow<unsigned long>(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( (int)wil::details::make_wnf_subscription_state<unsigned long>(&WNF_SHEL_LOCKSCREEN_ACTIVE, a3, a3, &v5) < 0 )
    *a1 = 0LL;
  else
    *a1 = v5;
  return a1;
}
