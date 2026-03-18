/*
 * XREFs of PsChargePoolQuota @ 0x14011B090
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1406A0220 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A0E80 (FsRtlNotifyFilterReportChangeLiteEx.c)
 * Callees:
 *     PsChargeProcessPoolQuota @ 0x14011B0B0 (PsChargeProcessPoolQuota.c)
 *     RtlRaiseStatus @ 0x140128E70 (RtlRaiseStatus.c)
 */

void __stdcall PsChargePoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  int v3; // eax

  v3 = PsChargeProcessPoolQuota(Process, PoolType, Amount);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
}
