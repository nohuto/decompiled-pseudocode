/*
 * XREFs of ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x180109D80
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180107A38 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     ??1AcrylicPolicyManager@@UEAA@XZ @ 0x180107AAC (--1AcrylicPolicyManager@@UEAA@XZ.c)
 *     ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x180108B9C (-RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180109EEC (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x180154BDC (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x180156CA0 (-RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ.c)
 *     ??_GDesktopBlueLightReductionManager@@UEAAPEAXI@Z @ 0x18015FEE8 (--_GDesktopBlueLightReductionManager@@UEAAPEAXI@Z.c)
 *     ?SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ @ 0x180160B5C (-SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x180174C68 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x18017882C (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x1801797A8 (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x18017B7C4 (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x1801A721C (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801A9900 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x1801BB514 (--1CortanaStoreAppExperienceManager@@EEAA@XZ.c)
 *     ?SubscribeToWNFs@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BFA38 (-SubscribeToWNFs@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ??1HolographicPositioner@@UEAA@XZ @ 0x1801FE920 (--1HolographicPositioner@@UEAA@XZ.c)
 *     ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180203240 (-SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ @ 0x1802737F0 (-_Destroy@-$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x180291ACC (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803189F8 (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ??1AccessibilityExperienceManager@@EEAA@XZ @ 0x180331DF8 (--1AccessibilityExperienceManager@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1803333C8 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Concurrency::details::_RefCounter::_Destroy(Concurrency::details::_RefCounter *this)
{
  if ( this )
    (**(void (__fastcall ***)(Concurrency::details::_RefCounter *, __int64))this)(this, 1LL);
}
