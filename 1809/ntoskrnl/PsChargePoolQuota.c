/*
 * XREFs of PsChargePoolQuota @ 0x14011B0B0
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1406A0200 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A0E60 (FsRtlNotifyFilterReportChangeLiteEx.c)
 * Callees:
 *     PsChargeProcessPoolQuota @ 0x14011B0D0 (PsChargeProcessPoolQuota.c)
 *     RtlRaiseStatus @ 0x140128E90 (RtlRaiseStatus.c)
 */

void __stdcall PsChargePoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  int v3; // eax

  v3 = PsChargeProcessPoolQuota(Process, PoolType, Amount);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
}
