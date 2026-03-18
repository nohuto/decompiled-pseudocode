/*
 * XREFs of ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C0297E10
 * Callers:
 *     NtDxgkUpdateTrackedWorkload @ 0x1C0298C20 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z @ 0x1C0297CEC (-Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::UpdateTrackedWorkload(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        const struct _D3DKMT_UPDATETRACKEDWORKLOAD *a3,
        __int64 a4)
{
  __int64 VBlankOffsetHundredsNS_low; // rdx
  __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned int AbsoluteQPC_high; // eax
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  _QWORD *v16; // rax
  int v17; // eax
  _QWORD *v18; // rax
  __int64 v19; // rax
  int v21; // [rsp+20h] [rbp-48h]
  _BYTE v22[32]; // [rsp+30h] [rbp-38h] BYREF

  VBlankOffsetHundredsNS_low = LODWORD(a3->FinishDeadline.VBlankOffsetHundredsNS);
  v6 = *((unsigned int *)this + 23);
  v7 = 0;
  if ( (unsigned int)VBlankOffsetHundredsNS_low >= (unsigned int)v6
    || (AbsoluteQPC_high = HIDWORD(a3->FinishDeadline.AbsoluteQPC), AbsoluteQPC_high >= (unsigned int)v6)
    || (_DWORD)VBlankOffsetHundredsNS_low == AbsoluteQPC_high )
  {
    v7 = -1073741811;
    v19 = WdLogNewEntry5_WdError(v6, VBlankOffsetHundredsNS_low, a3);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    *(_QWORD *)(v19 + 32) = 1104LL;
    WdLogEvent5_WdError(v19);
    return v7;
  }
  v11 = 0;
  *((_QWORD *)this + 41) = a3->FenceCompletedValue;
  if ( !*((_DWORD *)this + 22) )
  {
LABEL_7:
    v7 = -2147483622;
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, VBlankOffsetHundredsNS_low, a3);
    v16[3] = this;
    v16[4] = -2147483622LL;
    v16[5] = 1154LL;
    WdLogEvent5_WdWarning(v16);
    return v7;
  }
  while ( 1 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v22, (struct _KTHREAD **)this + 4);
    v15 = *((_QWORD *)this + 3) + 112LL * v11;
    if ( !*(_BYTE *)(v15 + 24) )
      break;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
    if ( ++v11 >= *((_DWORD *)this + 22) )
      goto LABEL_7;
  }
  *(_BYTE *)(v15 + 24) = 1;
  *(_DWORD *)v15 = a3->FinishDeadline.VBlankOffsetHundredsNS;
  *(_DWORD *)(v15 + 4) = HIDWORD(a3->FinishDeadline.AbsoluteQPC);
  *(_QWORD *)(v15 + 8) = *(_QWORD *)&a3->BeginTrackedWorkloadIndex;
  *(_QWORD *)(v15 + 32) = a3->GPUCalibrationTimestamp;
  *(_QWORD *)(v15 + 40) = a3->GPUTimestampFrequency;
  v17 = *((_DWORD *)this + 288);
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      *(_QWORD *)(v15 + 16) = 0LL;
      *(_BYTE *)(v15 + 96) = 1;
      v7 = MonitoredFenceHelper::Update(
             (MonitoredFenceHelper *)(v15 + 48),
             *((struct ADAPTER_RENDER ***)this + 2),
             *(_QWORD *)&a3->FinishDeadline.Type,
             a4);
      if ( (v7 & 0x80000000) == 0 )
        goto LABEL_10;
    }
    else
    {
      v7 = -1073741811;
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
      v18[3] = *((int *)this + 288);
      v18[4] = -1073741811LL;
      v18[5] = 1140LL;
      WdLogEvent5_WdWarning(v18);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
    return v7;
  }
  *(_QWORD *)(v15 + 16) = *(_QWORD *)&a3->FinishDeadline.Type;
LABEL_10:
  if ( bTracingEnabled )
    *(LARGE_INTEGER *)(v15 + 104) = KeQueryPerformanceCounter(0LL);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_TrackedWorkloadDirectDeadline__private_propertyCache,
    15862628LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0078EC4,
    0,
    v21);
  return v7;
}
