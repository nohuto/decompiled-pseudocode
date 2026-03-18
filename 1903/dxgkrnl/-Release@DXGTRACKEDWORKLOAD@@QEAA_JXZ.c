/*
 * XREFs of ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C0049DE8
 * Callers:
 *     NtDxgkDestroyTrackedWorkload @ 0x1C0297CD0 (NtDxgkDestroyTrackedWorkload.c)
 *     NtDxgkEndTrackedWorkload @ 0x1C0297EA0 (NtDxgkEndTrackedWorkload.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C0297F50 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C02982D0 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkload @ 0x1C02985F0 (NtDxgkResetTrackedWorkload.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C0298810 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C0296D40 (--1DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::Release(volatile signed __int64 *P)
{
  signed __int64 v2; // rdi

  v2 = _InterlockedDecrement64(P + 7);
  if ( !v2 && P )
  {
    DXGTRACKEDWORKLOAD::~DXGTRACKEDWORKLOAD((DXGTRACKEDWORKLOAD *)P);
    ExFreePoolWithTag((PVOID)P, 0);
  }
  return v2;
}
