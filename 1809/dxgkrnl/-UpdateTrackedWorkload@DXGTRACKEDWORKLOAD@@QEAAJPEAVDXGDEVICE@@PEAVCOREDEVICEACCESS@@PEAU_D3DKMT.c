/*
 * XREFs of ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAU_D3DKMT_UPDATETRACKEDWORKLOAD@@@Z @ 0x1C026097C
 * Callers:
 *     NtDxgkUpdateTrackedWorkload @ 0x1C02615D0 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?ProcessActiveInstances@DXGTRACKEDWORKLOAD@@IEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_K@Z @ 0x1C0260664 (-ProcessActiveInstances@DXGTRACKEDWORKLOAD@@IEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_K@Z.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::UpdateTrackedWorkload(
        DXGTRACKEDWORKLOAD *this,
        PERESOURCE *a2,
        struct COREDEVICEACCESS *a3,
        struct _D3DKMT_UPDATETRACKEDWORKLOAD *a4)
{
  UINT BeginTrackedWorkloadIndex; // r9d
  __int64 v7; // rcx
  UINT EndTrackedWorkloadIndex; // eax
  __int64 v9; // rcx
  unsigned int active; // edi
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rax
  int v15; // [rsp+20h] [rbp-18h]

  BeginTrackedWorkloadIndex = a4->BeginTrackedWorkloadIndex;
  v7 = *((unsigned int *)this + 17);
  if ( BeginTrackedWorkloadIndex >= (unsigned int)v7
    || (EndTrackedWorkloadIndex = a4->EndTrackedWorkloadIndex, EndTrackedWorkloadIndex >= (unsigned int)v7)
    || BeginTrackedWorkloadIndex == EndTrackedWorkloadIndex )
  {
    active = -1073741811;
    v13 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    goto LABEL_13;
  }
  *((_QWORD *)this + 38) = a4->GPUTimestampFrequency;
  active = DXGTRACKEDWORKLOAD::ProcessActiveInstances(this, a2, a3, a4->FenceCompletedValue);
  if ( (active & 0x80000000) != 0 )
    return active;
  v11 = *((_DWORD *)this + 16);
  v12 = 0LL;
  if ( !v11 )
  {
LABEL_8:
    active = -2147483622;
    v13 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = -2147483622LL;
LABEL_13:
    WdLogEvent5_WdError(v13);
    return active;
  }
  while ( 1 )
  {
    v9 = *((_QWORD *)this + 3) + 48 * v12;
    if ( !*(_BYTE *)(v9 + 24) )
      break;
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= v11 )
      goto LABEL_8;
  }
  *(_BYTE *)(v9 + 24) = 1;
  *(_DWORD *)v9 = a4->BeginTrackedWorkloadIndex;
  *(_DWORD *)(v9 + 4) = a4->EndTrackedWorkloadIndex;
  if ( a4->FinishDeadline.Type )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    *(_QWORD *)(v9 + 16) = a4->FinishDeadline.VBlankOffsetHundredsNS;
    *(_QWORD *)(v9 + 8) = a4->FenceSubmissionValue;
    *(_QWORD *)(v9 + 32) = a4->CPUCalibrationTimestamp;
    *(_QWORD *)(v9 + 40) = a4->GPUCalibrationTimestamp;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_TrackedWorkloadDirectDeadline__private_propertyCache,
      15862628LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0070100,
      0,
      v15);
  }
  return active;
}
