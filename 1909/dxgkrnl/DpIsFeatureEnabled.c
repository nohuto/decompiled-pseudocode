/*
 * XREFs of DpIsFeatureEnabled @ 0x1C029C6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 __fastcall DpIsFeatureEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rax
  int v8; // [rsp+20h] [rbp-18h]

  v4 = -1073741811;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  if ( v5 && *(_DWORD *)(v5 + 16) == 1953656900 && *(_DWORD *)(v5 + 20) == 2 )
  {
    if ( !*(_DWORD *)(a1 + 8) )
    {
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_GpuHardwareScheduling__private_propertyCache,
        19683476LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0081B70,
        0,
        v8);
      v4 = 0;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(a1, v5, a3);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
  }
  *(_BYTE *)(a1 + 12) = 0;
  return v4;
}
