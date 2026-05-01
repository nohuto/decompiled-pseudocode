/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180109EEC
 * Callers:
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180107CB8 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x180107CF0 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_180107CF0.c)
 *     ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x180108B9C (-RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?UnsubscribeFromServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180109640 (-UnsubscribeFromServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x180156CA0 (-RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ.c)
 *     ?UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180157950 (-UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ @ 0x180160B5C (-SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ.c)
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x18017882C (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x18017B7C4 (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?Close@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x1801A7B60 (-Close@CVirtualTouchpadExperienceManager@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801A9900 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToWNFs@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BFA38 (-SubscribeToWNFs@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180203240 (-SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180203580 (-UnsubscribeFromServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x180291ACC (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 *     ?Shutdown@ConnectedStandbyHelper@@QEAAXXZ @ 0x180291DE0 (-Shutdown@ConnectedStandbyHelper@@QEAAXXZ.c)
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803189F8 (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UnsubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180319698 (-UnsubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1803333C8 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x180109D80 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
        Concurrency::details::_RefCounter **a1,
        Concurrency::details::_RefCounter *a2)
{
  Concurrency::details::_RefCounter *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    Concurrency::details::_RefCounter::_Destroy(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
