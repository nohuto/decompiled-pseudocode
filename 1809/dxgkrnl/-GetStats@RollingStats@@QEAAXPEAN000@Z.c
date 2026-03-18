/*
 * XREFs of ?GetStats@RollingStats@@QEAAXPEAN000@Z @ 0x1C005D440
 * Callers:
 *     ?GetTrackedWorkloadStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORKLOADSTATISTICS@@@Z @ 0x1C0260578 (-GetTrackedWorkloadStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORK.c)
 * Callees:
 *     ?Update@RollingStats@@IEAAXXZ @ 0x1C005D854 (-Update@RollingStats@@IEAAXXZ.c)
 */

void __fastcall RollingStats::GetStats(RollingStats *this, double *a2, double *a3, double *a4, double *a5)
{
  double *v8; // rcx

  RollingStats::Update(this);
  *a5 = v8[5];
  *a4 = v8[4];
  *a2 = v8[6];
  *a3 = v8[7];
}
