/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180107A38
 * Callers:
 *     _ConnectedStandbyHelper::Initialize_::_1_::dtor$3 @ 0x180291BF7 (_ConnectedStandbyHelper--Initialize_--_1_--dtor$3.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$5 @ 0x18030CF5C (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$5.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$6 @ 0x18030CF6F (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$6.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$28 @ 0x18030D111 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$28.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$29 @ 0x18030D124 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$29.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$30 @ 0x18030D137 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$30.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$31 @ 0x18030D14A (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$31.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$32 @ 0x18030D15D (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$32.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$33 @ 0x18030D170 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$33.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$34 @ 0x18030D183 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$34.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$35 @ 0x18030D196 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$35.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$36 @ 0x18030D1A9 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$36.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$37 @ 0x18030D1BC (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$37.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18030D5B4 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803181D0 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x180109D80 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>(
        Concurrency::details::_RefCounter **a1)
{
  Concurrency::details::_RefCounter *v1; // rcx

  v1 = *a1;
  if ( v1 )
    Concurrency::details::_RefCounter::_Destroy(v1);
}
