/*
 * XREFs of ?_SetActiveColorProfileName@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C02D0BF0
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C00D0720 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 __fastcall DXGMONITOR::_SetActiveColorProfileName(DXGMONITOR *this, __int64 a2, void *a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  int v10; // [rsp+20h] [rbp-18h]

  v3 = *((_QWORD *)this + 4);
  if ( !v3 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v5);
    v3 = *((_QWORD *)this + 4);
  }
  v6 = *(_QWORD *)(v3 + 8);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*(_QWORD *)(v6 + 16) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_EnableDisplayColorManagementApi__private_propertyCache,
    19574848LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E098,
    1,
    v10);
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL)
                                                       + 192LL)
                                           + 64LL)
                               + 40LL)
                   + 28LL) < 0xB003u
       ? 0xC00000BB
       : 0;
}
