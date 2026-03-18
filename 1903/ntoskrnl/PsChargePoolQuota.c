/*
 * XREFs of PsChargePoolQuota @ 0x14011B6A0
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1406C1620 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406C22E0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     PsChargeProcessPoolQuota @ 0x14011B6C0 (PsChargeProcessPoolQuota.c)
 */

void __stdcall PsChargePoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  int v3; // eax

  v3 = PsChargeProcessPoolQuota(Process, PoolType, Amount);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
}
