/*
 * XREFs of ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180034394
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180001710 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x1800341AC (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x1800404B8 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?Destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18004BE30 (-Destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ?Destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18004BE84 (-Destroy@-$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x18006FE34 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x180070DE8 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z @ 0x180071044 (-RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800711D8 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180071250 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::ProcessShutdownInProgress(wil *this)
{
  char v1; // bl

  v1 = 0;
  if ( wil::details::g_processShutdownInProgress )
    return 1;
  if ( wil::details::g_pfnRtlDllShutdownInProgress ? wil::details::g_pfnRtlDllShutdownInProgress() : 0 )
    return 1;
  return v1;
}
