/*
 * XREFs of ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C0042A80
 * Callers:
 *     NtDxgkDestroyTrackedWorkload @ 0x1C0260B80 (NtDxgkDestroyTrackedWorkload.c)
 *     NtDxgkEndTrackedWorkload @ 0x1C0260DD0 (NtDxgkEndTrackedWorkload.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C0260E80 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C0261130 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkload @ 0x1C0261400 (NtDxgkResetTrackedWorkload.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C02615D0 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ??_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z @ 0x1C003DAA4 (--_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::Release(DXGTRACKEDWORKLOAD *this)
{
  signed __int64 v1; // rbx

  v1 = _InterlockedDecrement64((volatile signed __int64 *)this + 4);
  if ( !v1 && this )
    DXGTRACKEDWORKLOAD::`scalar deleting destructor'(this);
  return v1;
}
