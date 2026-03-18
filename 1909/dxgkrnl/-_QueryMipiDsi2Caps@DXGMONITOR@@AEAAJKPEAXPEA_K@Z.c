/*
 * XREFs of ?_QueryMipiDsi2Caps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z @ 0x1C02D0B94
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C00D0720 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 __fastcall DXGMONITOR::_QueryMipiDsi2Caps(DXGMONITOR *this, __int64 a2, void *a3, unsigned __int64 *a4)
{
  __int64 v5; // rax
  int v7; // [rsp+20h] [rbp-18h]

  if ( !a4 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v5);
  }
  *a4 = 0LL;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_MipiDsi2__private_propertyCache,
    18673552LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E7B4,
    0,
    v7);
  return 3221225659LL;
}
