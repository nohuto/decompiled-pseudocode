/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18001B434
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180089164 (-ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details.c)
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x18001B34C (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180088C90 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAU1@@Z$1?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@XZ @ 0x1800DE4E4 (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800E2178 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800E21A8 (-WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBS.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        union wil_details_FeaturePropertyCache *a4,
        PSRWLOCK SRWLock)
{
  PSRWLOCK v7; // rbx
  unsigned int Ptr_high; // r8d
  wil::details *v9; // rax
  void *v10; // r9
  const char *v11; // [rsp+20h] [rbp-8h]

  if ( g_wil_details_RecordSRUMFeatureUsage && (!a2 || a2 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a1, a2, 1u);
  v7 = SRWLock;
  if ( LODWORD(SRWLock->Ptr) )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(&wil::details::g_enabledStateManager, a1, a4);
  Ptr_high = HIDWORD(v7->Ptr);
  if ( Ptr_high )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a1, (unsigned int)v7[1].Ptr, Ptr_high, 0, v11);
  if ( !LODWORD(v7[2].Ptr) && wil::details::g_enabledStateManager )
  {
    wil::srwlock::lock_exclusive(&qword_18050F2F8, &SRWLock);
    if ( !qword_18050F318 )
    {
      v9 = (wil::details *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,void (*)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),&void wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),wistd::integral_constant<unsigned __int64,0>,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,0,std::nullptr_t>>>::operator&(&qword_18050F318);
      wil::details::WilApi_SubscribeFeatureStateChangeNotification(
        v9,
        (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_,
        (void (*)(void *))0xFFFFFFFFFFFFFFFFLL,
        v10);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
}
