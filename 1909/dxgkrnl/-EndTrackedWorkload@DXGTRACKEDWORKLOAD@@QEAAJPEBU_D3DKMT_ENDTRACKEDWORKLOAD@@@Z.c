/*
 * XREFs of ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEBU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z @ 0x1C02975BC
 * Callers:
 *     NtDxgkEndTrackedWorkload @ 0x1C02982B0 (NtDxgkEndTrackedWorkload.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C0064730 (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 *     ?Scale@RollingStats@@QEAAXN@Z @ 0x1C00648F0 (-Scale@RollingStats@@QEAAXN@Z.c)
 *     ?SetEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAXI_N@Z @ 0x1C0064934 (-SetEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAXI_N@Z.c)
 *     ?DdiSetTrackedWorkloadPowerLevel@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL@@@Z @ 0x1C01FE73C (-DdiSetTrackedWorkloadPowerLevel@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SETTRACKEDWORKLOADPOWERLE.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::EndTrackedWorkload(
        DXGTRACKEDWORKLOAD *this,
        const struct _D3DKMT_ENDTRACKEDWORKLOAD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  int v11; // [rsp+20h] [rbp-48h]
  unsigned int v12; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-34h] BYREF
  GUID v14; // [rsp+38h] [rbp-30h] BYREF

  LODWORD(v3) = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_TrackedWorkloadDirectDeadline__private_propertyCache,
    15862628LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0078EC4,
    0,
    v11);
  if ( TrackedWorkloadMonitor::GetTargetPowerLevel(
         (DXGTRACKEDWORKLOAD *)((char *)this + 344),
         (DXGTRACKEDWORKLOAD *)((char *)this + 248),
         &v13,
         &v12) )
  {
    *(_QWORD *)&v14.Data2 = 0LL;
    v6 = 0LL;
    v14.Data1 = v12;
    if ( *((_DWORD *)this + 272) )
    {
      while ( 1 )
      {
        v7 = ADAPTER_RENDER::DdiSetTrackedWorkloadPowerLevel(
               *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + v6 + 72) + 16LL) + 16LL),
               *(void **)(*((_QWORD *)this + v6 + 72) + 184LL),
               &v14);
        v3 = v7;
        if ( v7 < 0 )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *((_DWORD *)this + 272) )
          goto LABEL_5;
      }
      v9 = WdLogNewEntry5_WdWarning(v4, v8, v5);
      *(_QWORD *)(v9 + 32) = 1246LL;
    }
    else
    {
LABEL_5:
      if ( *(_DWORD *)&v14.Data2 )
      {
        TrackedWorkloadMonitor::SetEffectivePowerLevel(
          (DXGTRACKEDWORKLOAD *)((char *)this + 344),
          *(int *)&v14.Data2,
          v14.Data4[0] & 1);
        RollingStats::Scale((DXGTRACKEDWORKLOAD *)((char *)this + 248), (double)(int)v13 / (double)*(int *)&v14.Data2);
        return (unsigned int)v3;
      }
      v3 = -1073741823LL;
      v9 = WdLogNewEntry5_WdWarning(v4, 0LL, v5);
      *(_QWORD *)(v9 + 32) = 1255LL;
    }
    *(_QWORD *)(v9 + 24) = v3;
    WdLogEvent5_WdWarning(v9);
  }
  return (unsigned int)v3;
}
