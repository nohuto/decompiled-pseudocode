/*
 * XREFs of ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z @ 0x1C0260354
 * Callers:
 *     NtDxgkEndTrackedWorkload @ 0x1C0260DD0 (NtDxgkEndTrackedWorkload.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C005D494 (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 *     ?Scale@RollingStats@@QEAAXN@Z @ 0x1C005D638 (-Scale@RollingStats@@QEAAXN@Z.c)
 *     ?SetEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAXII@Z @ 0x1C005D67C (-SetEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAXII@Z.c)
 *     ?DdiSetTrackedWorkloadPowerLevel@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL@@@Z @ 0x1C01CFED4 (-DdiSetTrackedWorkloadPowerLevel@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SETTRACKEDWORKLOADPOWERLE.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::EndTrackedWorkload(
        DXGTRACKEDWORKLOAD *this,
        struct _D3DKMT_ENDTRACKEDWORKLOAD *a2)
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
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0070100,
    0,
    v11);
  if ( TrackedWorkloadMonitor::GetTargetPowerLevel(
         (DXGTRACKEDWORKLOAD *)((char *)this + 320),
         (DXGTRACKEDWORKLOAD *)((char *)this + 224),
         &v13,
         &v12) )
  {
    v6 = 0LL;
    *(_DWORD *)&v14.Data2 = 0;
    *(_DWORD *)v14.Data4 = 0;
    v14.Data1 = v12;
    if ( *((_DWORD *)this + 268) )
    {
      while ( 1 )
      {
        v7 = ADAPTER_RENDER::DdiSetTrackedWorkloadPowerLevel(
               *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + v6 + 70) + 16LL) + 16LL),
               *(void **)(*((_QWORD *)this + v6 + 70) + 184LL),
               &v14);
        v3 = v7;
        if ( v7 < 0 )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *((_DWORD *)this + 268) )
          goto LABEL_5;
      }
      v9 = WdLogNewEntry5_WdWarning(v4, v8, v5);
      *(_QWORD *)(v9 + 32) = 1071LL;
    }
    else
    {
LABEL_5:
      if ( *(_DWORD *)&v14.Data2 )
      {
        TrackedWorkloadMonitor::SetEffectivePowerLevel((DXGTRACKEDWORKLOAD *)((char *)this + 320), *(int *)&v14.Data2);
        RollingStats::Scale((DXGTRACKEDWORKLOAD *)((char *)this + 224), (double)(int)v13 / (double)*(int *)&v14.Data2);
        return (unsigned int)v3;
      }
      v3 = -1073741823LL;
      v9 = WdLogNewEntry5_WdWarning(v4, 0LL, v5);
      *(_QWORD *)(v9 + 32) = 1080LL;
    }
    *(_QWORD *)(v9 + 24) = v3;
    WdLogEvent5_WdWarning(v9);
  }
  return (unsigned int)v3;
}
