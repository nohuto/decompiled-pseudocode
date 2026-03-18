/*
 * XREFs of ?_SubmitDsi2Transmission@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z @ 0x1C02D0C04
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C0127980 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 __fastcall DXGMONITOR::_SubmitDsi2Transmission(
        DXGMONITOR *this,
        __int64 a2,
        void *a3,
        __int64 a4,
        void *a5,
        unsigned __int64 *a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-18h]

  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a5 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a6 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  *a6 = 0LL;
  v10 = *((_QWORD *)this + 4);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v11);
    v10 = *((_QWORD *)this + 4);
  }
  if ( !*(_QWORD *)(v10 + 8) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_MipiDsi2__private_propertyCache,
    18673552LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E7A4,
    0,
    v18);
  v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
  *(_QWORD *)(v16 + 24) = -1073741637LL;
  WdLogEvent5_WdWarning(v16);
  return *a6 == 0 ? 0xC00000BB : 0;
}
