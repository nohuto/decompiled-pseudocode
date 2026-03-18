/*
 * XREFs of ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C0064910
 * Callers:
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C00646F0 (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 * Callees:
 *     ?GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z @ 0x1C0064644 (-GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z.c)
 *     ?Update@RollingStats@@IEAAXXZ @ 0x1C0064AD0 (-Update@RollingStats@@IEAAXXZ.c)
 */

char __fastcall TrackedWorkloadMonitor::ShouldDecreasePower(
        TrackedWorkloadMonitor *this,
        struct RollingStats *a2,
        unsigned int *a3)
{
  char *v5; // rax
  unsigned int v7; // r9d
  __int64 v8; // rbp
  double SafeStdDev; // xmm7_8
  RollingStats *v10; // rcx
  int v11; // r8d
  unsigned int v12; // edx
  unsigned int v13; // ecx

  v5 = (char *)this + 16;
  v7 = 0;
  while ( !v5[32] || *(_DWORD *)v5 != 4 )
  {
    ++v7;
    v5 += 40;
    if ( v7 >= 5 )
    {
      v8 = 5LL * *((unsigned int *)this + 54);
      SafeStdDev = TrackedWorkloadMonitor::GetSafeStdDev(this, a2);
      RollingStats::Update(a2);
      if ( SafeStdDev + *((double *)a2 + 4) < 90.0 )
      {
        RollingStats::Update(v10);
        v11 = *((_DWORD *)this + 2 * v8 + 10);
        v12 = *((_DWORD *)this + 2);
        if ( (int)(*((double *)a2 + 4) / (90.0 - SafeStdDev) * (double)v11 + 0.5) <= v12 )
          v12 = (int)(*((double *)a2 + 4) / (90.0 - SafeStdDev) * (double)v11 + 0.5);
        v13 = *((_DWORD *)this + 1);
        if ( v12 >= v13 )
          v13 = v12;
        if ( v13 < v11 )
        {
          *a3 = v13;
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}
