/*
 * XREFs of ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1801542C0
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x180156CA0 (-RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ.c)
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x18017882C (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x18017B7C4 (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803181D0 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x180154300 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 */

_QWORD *__fastcall wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (int)wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(a2, a3, a3, v5) < 0 )
    *a1 = 0LL;
  else
    *a1 = v5[0];
  return a1;
}
