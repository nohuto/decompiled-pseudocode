/*
 * XREFs of ?Shutdown@ConnectedStandbyHelper@@QEAAXXZ @ 0x180291DE0
 * Callers:
 *     ?UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180271790 (-UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180281AE0 (-UnsubscribeFromServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PDCShellPhaseUseWNF@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180291D70 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_PDCShellPhaseUseWNF@@@wil@@CAX_NW4Re.c)
 */

void __fastcall ConnectedStandbyHelper::Shutdown(Concurrency::details::_RefCounter **this, __int64 a2, __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_PDCShellPhaseUseWNF>::ReportUsageToService((__int64)this, a2, a3);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    this + 6,
    0LL);
}
