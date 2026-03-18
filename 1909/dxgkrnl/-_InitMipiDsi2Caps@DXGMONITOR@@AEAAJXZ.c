/*
 * XREFs of ?_InitMipiDsi2Caps@DXGMONITOR@@AEAAJXZ @ 0x1C0178890
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178698 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall DXGMONITOR::_InitMipiDsi2Caps(DXGMONITOR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // [rsp+20h] [rbp-48h]
  _BYTE v10[48]; // [rsp+30h] [rbp-38h] BYREF

  memset(v10, 0, sizeof(v10));
  v4 = *((_QWORD *)this + 4);
  if ( !v4 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2);
    WdLogEvent5_WdAssertion(v6);
    v4 = *((_QWORD *)this + 4);
  }
  if ( !*(_QWORD *)(v4 + 8) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3, v2);
    WdLogEvent5_WdAssertion(v7);
    v4 = *((_QWORD *)this + 4);
  }
  if ( !*(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v3, v2);
    WdLogEvent5_WdAssertion(v8);
  }
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_MipiDsi2__private_propertyCache,
    18673552LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E7B4,
    0,
    v9);
  return 3221225659LL;
}
