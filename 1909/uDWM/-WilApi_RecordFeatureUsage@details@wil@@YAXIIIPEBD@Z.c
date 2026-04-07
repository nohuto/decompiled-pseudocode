/*
 * XREFs of ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180035344
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x1800340B0 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_detail.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18003523C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?RecordSRUMFeatureUsage@details@wil@@YAXIII@Z @ 0x1800779F0 (-RecordSRUMFeatureUsage@details@wil@@YAXIII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApi_RecordFeatureUsage(wil::details *this, __int64 a2, __int64 a3)
{
  void (*v3)(unsigned int, unsigned int, unsigned int, const char *); // rax

  v3 = g_wil_details_internalRecordFeatureUsage;
  if ( g_wil_details_internalRecordFeatureUsage || (v3 = g_wil_details_apiRecordFeatureUsage) != 0LL )
    ((void (__fastcall *)(wil::details *, __int64, __int64, _QWORD))v3)(this, a2, a3, 0LL);
}
