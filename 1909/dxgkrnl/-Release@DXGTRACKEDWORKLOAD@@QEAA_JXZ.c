/*
 * XREFs of ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C0049E98
 * Callers:
 *     NtDxgkDestroyTrackedWorkload @ 0x1C02980E0 (NtDxgkDestroyTrackedWorkload.c)
 *     NtDxgkEndTrackedWorkload @ 0x1C02982B0 (NtDxgkEndTrackedWorkload.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C0298360 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C02986E0 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkload @ 0x1C0298A00 (NtDxgkResetTrackedWorkload.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C0298C20 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C0297150 (--1DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
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
