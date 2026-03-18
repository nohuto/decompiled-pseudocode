/*
 * XREFs of ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C0208B08
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01BDF0C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::CopyDriverStore(DXGADAPTER *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax
  int v5; // [rsp+20h] [rbp-18h]

  DXGGLOBAL::GetGlobal((__int64)this);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_CopyDriverStore__private_propertyCache,
    17411990LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006EFD4,
    0,
    v5);
  v3 = WdLogNewEntry5_WdEvent(v2, v1);
  *(_QWORD *)(v3 + 24) = 1013LL;
  WdLogEvent5_WdEvent(v3);
  return 0LL;
}
