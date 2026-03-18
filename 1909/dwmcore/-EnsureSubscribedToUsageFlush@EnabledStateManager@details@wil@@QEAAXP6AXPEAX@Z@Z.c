/*
 * XREFs of ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x1800B1178
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x1800B1010 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_detail.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(RTL_SRWLOCK *this, void (*a2)(void *))
{
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  void (*v6)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax

  if ( LOBYTE(this->Ptr) )
  {
    v4 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    v5 = this + 5;
    if ( !this[5].Ptr )
    {
      v5->Ptr = 0LL;
      v6 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v6 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        ((void (__fastcall *)(RTL_SRWLOCK *, void (*)(void *), __int64))v6)(v5, a2, -1LL);
      }
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
