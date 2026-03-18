/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x1800B1010
 * Callers:
 *     <none>
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800AFF3C (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x1800B10B4 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        wil::details *a1,
        unsigned int a2,
        unsigned int a3,
        union wil_details_FeaturePropertyCache *a4,
        _DWORD *a5)
{
  unsigned int v6; // esi
  __int64 v7; // r8
  __int64 v8; // rdx

  v6 = (unsigned int)a1;
  if ( a4 )
  {
    if ( g_wil_details_RecordSRUMFeatureUsage && (a2 - 100 <= 0x31 || !a2) )
      g_wil_details_RecordSRUMFeatureUsage((unsigned int)a1, a2, a3);
    if ( *a5 )
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(&wil::details::g_enabledStateManager, v6, a4);
    v7 = (unsigned int)a5[1];
    if ( (_DWORD)v7 )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)v6, (unsigned int)a5[2], v7);
    if ( !a5[4] )
      wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
        (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
        lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_);
  }
  else
  {
    v8 = (unsigned int)a5[2];
    LODWORD(v8) = v8 | 0x80000000;
    if ( !a5[5] )
      v8 = (unsigned int)a5[2];
    wil::details::WilApi_RecordFeatureUsage(a1, v8, 0LL);
  }
}
