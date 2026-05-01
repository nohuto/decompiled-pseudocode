/*
 * XREFs of ?Shutdown@ConnectedStandbyHelper@@QEAAXXZ @ 0x1802B1240
 * Callers:
 *     ?UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180290C60 (-UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802A0F20 (-UnsubscribeFromServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PDCShellPhaseUseWNF@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802B11D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_PDCShellPhaseUseWNF@@@wil@@CAX_NW4Re.c)
 */

void __fastcall ConnectedStandbyHelper::Shutdown(Concurrency::details::_RefCounter **this, __int64 a2, __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_PDCShellPhaseUseWNF>::ReportUsageToService((__int64)this, a2, a3);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    this + 6,
    0LL);
}
