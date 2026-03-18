/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180086570
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800EE138 (-ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180086664 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x18008668C (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        union wil_details_FeaturePropertyCache *a4,
        _DWORD *a5)
{
  unsigned int v7; // r8d
  void (*v8)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  const char *v9; // [rsp+20h] [rbp-8h]

  if ( g_wil_details_RecordSRUMFeatureUsage && (!a2 || a2 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a1, a2, 1u);
  if ( *a5 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(&wil::details::g_enabledStateManager, a1, a4);
  v7 = a5[1];
  if ( v7 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a1, a5[2], v7, 0, v9);
  if ( !a5[4] && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_1803084F8);
    if ( !qword_180308518 )
    {
      v8 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
      qword_180308518 = 0LL;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v8 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        ((void (__fastcall *)(__int64 *, __int64 (__fastcall *)(), __int64))v8)(
          &qword_180308518,
          lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_,
          -1LL);
      }
    }
    ReleaseSRWLockExclusive(&stru_1803084F8);
  }
}
