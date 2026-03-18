/*
 * XREFs of ?GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z @ 0x1C0064644
 * Callers:
 *     ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C0064910 (-ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C0064A08 (-ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 * Callees:
 *     sqrt_0 @ 0x1C0024F66 (sqrt_0.c)
 *     ?Update@RollingStats@@IEAAXXZ @ 0x1C0064AD0 (-Update@RollingStats@@IEAAXXZ.c)
 */

double __fastcall TrackedWorkloadMonitor::GetSafeStdDev(TrackedWorkloadMonitor *this, struct RollingStats *a2)
{
  double v2; // xmm6_8
  double *v3; // rcx
  __int64 v4; // rcx

  v2 = 0.0;
  RollingStats::Update(a2);
  if ( v3[5] > 0.01 )
  {
    RollingStats::Update((RollingStats *)v3);
    return sqrt_0(*(double *)(v4 + 40)) * 1.1;
  }
  return v2;
}
