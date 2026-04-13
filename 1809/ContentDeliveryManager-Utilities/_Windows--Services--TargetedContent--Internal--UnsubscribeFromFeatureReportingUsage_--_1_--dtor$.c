/*
 * XREFs of _Windows::Services::TargetedContent::Internal::UnsubscribeFromFeatureReportingUsage_::_1_::dtor$1 @ 0x1800CC6B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Services::TargetedContent::Internal::UnsubscribeFromFeatureReportingUsage_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil_StagingConfig *,void (*)(wil_StagingConfig *),&void wil_FreeStagingConfig(wil_StagingConfig *),wistd::integral_constant<unsigned __int64,0>,wil_StagingConfig *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil_StagingConfig *,void (*)(wil_StagingConfig *),&void wil_FreeStagingConfig(wil_StagingConfig *),wistd::integral_constant<unsigned __int64,0>,wil_StagingConfig *,0,std::nullptr_t>>>((__int64 *)(a2 + 40));
}
