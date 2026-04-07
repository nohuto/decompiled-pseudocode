/*
 * XREFs of ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180034184
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180034110 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApi_RecordFeatureUsage(wil::details *this)
{
  void (*v1)(unsigned int, unsigned int, unsigned int, const char *); // rax

  v1 = g_wil_details_internalRecordFeatureUsage;
  if ( g_wil_details_internalRecordFeatureUsage || (v1 = g_wil_details_apiRecordFeatureUsage) != 0LL )
    ((void (__fastcall *)(wil::details *))v1)(this);
}
