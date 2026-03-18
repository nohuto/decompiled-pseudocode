/*
 * XREFs of ?GetTrackedWorkloadStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORKLOADSTATISTICS@@@Z @ 0x1C0260578
 * Callers:
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C0261130 (NtDxgkGetTrackedWorkloadStatistics.c)
 * Callees:
 *     ?GetStats@RollingStats@@QEAAXPEAN000@Z @ 0x1C005D440 (-GetStats@RollingStats@@QEAAXPEAN000@Z.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::GetTrackedWorkloadStatistics(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        struct _D3DKMT_GETTRACKEDWORKLOADSTATISTICS *a3)
{
  RollingStats *v5; // rcx
  double v6; // xmm0_8
  double v7; // xmm1_8
  INT64 v8; // rax
  double v9; // xmm0_8
  __int64 v11; // rax
  double v12[3]; // [rsp+30h] [rbp-18h] BYREF
  double v13; // [rsp+50h] [rbp+8h] BYREF
  struct DXGDEVICE *v14; // [rsp+58h] [rbp+10h] BYREF
  double v15; // [rsp+68h] [rbp+20h] BYREF

  v14 = a2;
  v5 = (DXGTRACKEDWORKLOAD *)((char *)this + 152);
  if ( *((_DWORD *)this + 43) < *((_DWORD *)this + 44) )
  {
    v11 = WdLogNewEntry5_WdWarning(v5, a2, a3);
    *(_QWORD *)(v11 + 24) = 1123LL;
    WdLogEvent5_WdWarning(v11);
    return 3221225643LL;
  }
  else
  {
    RollingStats::GetStats(v5, (double *)&v14, &v13, &v15, v12);
    v6 = v13 * 10000.0;
    v7 = v15 * 10000.0;
    a3->DeadlineOffsetHundredsNS.Minimum = (unsigned int)(int)(*(double *)&v14 * 10000.0);
    v8 = (unsigned int)(int)v6;
    v9 = v12[0];
    a3->DeadlineOffsetHundredsNS.Maximum = v8;
    a3->DeadlineOffsetHundredsNS.Mean = (unsigned int)(int)v7;
    a3->DeadlineOffsetHundredsNS.Variance = (unsigned int)(int)(v9 * 10000.0);
    a3->MissedDeadlines = *((_QWORD *)this + 37);
    *((_QWORD *)this + 37) = 0LL;
    return 0LL;
  }
}
