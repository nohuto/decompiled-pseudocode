/*
 * XREFs of ?IsSaturated@TrackedWorkloadMonitor@@QEAA_NXZ @ 0x1C0064898
 * Callers:
 *     ?GetTrackedWorkloadStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORKLOADSTATISTICS@@@Z @ 0x1C02973E4 (-GetTrackedWorkloadStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORK.c)
 * Callees:
 *     <none>
 */

bool __fastcall TrackedWorkloadMonitor::IsSaturated(TrackedWorkloadMonitor *this)
{
  return *((_BYTE *)this + 40 * *((unsigned int *)this + 54) + 49);
}
