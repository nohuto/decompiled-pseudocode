/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18004A910
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180049D3C (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801048D8 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180104908 (-WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBS.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        wil::details *a1,
        unsigned int a2,
        unsigned int a3,
        union wil_details_FeaturePropertyCache *a4,
        _DWORD *a5)
{
  unsigned int v6; // esi
  unsigned int v7; // r8d
  void *v8; // r9
  unsigned int v9; // edx
  const char *v10; // [rsp+20h] [rbp-8h]

  v6 = (unsigned int)a1;
  if ( a4 )
  {
    if ( g_wil_details_RecordSRUMFeatureUsage && (a2 - 100 <= 0x31 || !a2) )
      g_wil_details_RecordSRUMFeatureUsage((unsigned int)a1, a2, a3);
    if ( *a5 )
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(&wil::details::g_enabledStateManager, v6, a4);
    v7 = a5[1];
    if ( v7 )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)v6, a5[2], v7, (unsigned int)a4, v10);
    if ( !a5[4] && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !qword_180599418 )
      {
        qword_180599418 = 0LL;
        wil::details::WilApi_SubscribeFeatureStateChangeNotification(
          (wil::details *)&qword_180599418,
          (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_,
          (void (*)(void *))0xFFFFFFFFFFFFFFFFLL,
          v8);
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
  }
  else
  {
    v9 = a5[2] | 0x80000000;
    if ( !a5[5] )
      v9 = a5[2];
    wil::details::WilApi_RecordFeatureUsage(a1, v9, 0, 0, v10);
  }
}
