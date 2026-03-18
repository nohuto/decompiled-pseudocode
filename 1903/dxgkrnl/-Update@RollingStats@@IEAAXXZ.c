/*
 * XREFs of ?Update@RollingStats@@IEAAXXZ @ 0x1C0064AD0
 * Callers:
 *     ?ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@I@Z @ 0x1C0064588 (-ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@I@Z.c)
 *     ?GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z @ 0x1C0064644 (-GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z.c)
 *     ?GetStats@RollingStats@@QEAAXPEAN000@Z @ 0x1C006469C (-GetStats@RollingStats@@QEAAXPEAN000@Z.c)
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C00646F0 (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 *     ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C0064910 (-ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C0064A08 (-ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RollingStats::Update(RollingStats *this)
{
  double v1; // xmm2_8
  __int64 v2; // r8
  unsigned int v3; // r9d
  unsigned int v4; // edx
  __int64 v5; // r10
  double v6; // xmm4_8
  __int64 v7; // rbx
  __int64 v8; // r11
  double v9; // xmm3_8
  double v10; // xmm0_8
  double v11; // xmm1_8
  double v12; // xmm1_8
  double v13; // xmm1_8
  __int64 v14; // r11
  __int64 v15; // r10
  __int64 v16; // rbx

  if ( *((_BYTE *)this + 64) )
  {
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    v1 = 0.0;
    v2 = *((unsigned int *)this + 6);
    v3 = *((_DWORD *)this + 4);
    v4 = v3;
    *((_QWORD *)this + 6) = 0x7FEFFFFFFFFFFFFFLL;
    *((_QWORD *)this + 7) = 0xFFEFFFFFFFFFFFFFuLL;
    if ( (_DWORD)v2 )
    {
      v5 = *(_QWORD *)this;
      v6 = 0.0;
      v7 = *((_QWORD *)this + 1);
      v8 = (unsigned int)v2;
      v9 = DOUBLE_1_797693134862316e308;
      v10 = DOUBLE_N1_797693134862316e308;
      do
      {
        v11 = *(double *)(v5 + 8LL * v4);
        if ( v9 > v11 )
        {
          *((double *)this + 6) = v11;
          v9 = v11;
          v11 = *(double *)(v5 + 8LL * v4);
        }
        if ( v11 > v10 )
        {
          *((double *)this + 7) = v11;
          v10 = v11;
          v11 = *(double *)(v5 + 8LL * v4);
        }
        v12 = v11 * *(double *)(v7 + 8LL * v4);
        v4 = (v4 + 1) % (unsigned int)v2;
        v13 = v12 + v6;
        *((double *)this + 4) = v13;
        v6 = v13;
        --v8;
      }
      while ( v8 );
      v14 = *(_QWORD *)this;
      v15 = v2;
      v16 = *((_QWORD *)this + 1);
      do
      {
        v1 = v1
           + (*(double *)(v14 + 8LL * v3) - v13) * (*(double *)(v14 + 8LL * v3) - v13) * *(double *)(v16 + 8LL * v3);
        v3 = (v3 + 1) % (unsigned int)v2;
        *((double *)this + 5) = v1;
        --v15;
      }
      while ( v15 );
    }
    *((_BYTE *)this + 64) = 0;
  }
}
