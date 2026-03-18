/*
 * XREFs of ?ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C0064A08
 * Callers:
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C00646F0 (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 * Callees:
 *     ?GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z @ 0x1C0064644 (-GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z.c)
 *     ?Update@RollingStats@@IEAAXXZ @ 0x1C0064AD0 (-Update@RollingStats@@IEAAXXZ.c)
 */

char __fastcall TrackedWorkloadMonitor::ShouldIncreasePower(
        TrackedWorkloadMonitor *this,
        struct RollingStats *a2,
        unsigned int *a3)
{
  __int64 v6; // rbp
  double SafeStdDev; // xmm7_8
  RollingStats *v8; // rcx
  int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // eax

  v6 = 5LL * *((unsigned int *)this + 54);
  SafeStdDev = TrackedWorkloadMonitor::GetSafeStdDev(this, a2);
  RollingStats::Update(a2);
  if ( SafeStdDev + *((double *)a2 + 4) <= 90.0 )
    return 0;
  RollingStats::Update(v8);
  v9 = *((_DWORD *)this + 2 * v6 + 10);
  v10 = *((_DWORD *)this + 2);
  if ( (int)(*((double *)a2 + 4) / (90.0 - SafeStdDev) * (double)v9 + 0.5) <= v10 )
    v10 = (int)(*((double *)a2 + 4) / (90.0 - SafeStdDev) * (double)v9 + 0.5);
  v11 = *((_DWORD *)this + 1);
  if ( v10 >= v11 )
    v11 = v10;
  if ( v11 <= v9 )
    return 0;
  *a3 = v11;
  return 1;
}
