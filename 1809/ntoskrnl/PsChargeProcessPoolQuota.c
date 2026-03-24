/*
 * XREFs of PsChargeProcessPoolQuota @ 0x14011B0D0
 * Callers:
 *     PsChargePoolQuota @ 0x14011B0B0 (PsChargePoolQuota.c)
 *     FsRtlCancelNotify @ 0x14011B110 (FsRtlCancelNotify.c)
 * Callees:
 *     PspChargeQuota @ 0x14004D3A0 (PspChargeQuota.c)
 */

NTSTATUS __stdcall PsChargeProcessPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process == PsInitialSystemProcess )
    return 0;
  else
    return PspChargeQuota(Process[1].ActiveProcessors.Bitmap[4], (__int64)Process, PoolType == PagedPool, Amount);
}
