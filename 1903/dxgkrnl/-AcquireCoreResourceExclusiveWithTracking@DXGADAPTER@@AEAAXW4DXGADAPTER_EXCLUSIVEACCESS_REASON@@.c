/*
 * XREFs of ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01243EC
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0124280 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01EE8A0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1C0145A2C (-Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 *     ??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0145DEC (--0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(__int64 a1, int a2, int a3)
{
  int v6; // [rsp+20h] [rbp-158h]
  _BYTE DeferredContext[320]; // [rsp+30h] [rbp-148h] BYREF

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_DeadlockTracking__private_propertyCache,
    18756255LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E258,
    1,
    v6);
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 0) )
  {
    DXGDEADLOCK_TRACKER::DXGDEADLOCK_TRACKER(DeferredContext, (struct DXGADAPTER *)a1);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 1u);
    DXGDEADLOCK_TRACKER::Cancel((DXGDEADLOCK_TRACKER *)DeferredContext);
  }
  *(_DWORD *)(a1 + 4364) = a2;
  *(_DWORD *)(a1 + 4368) = a3;
}
