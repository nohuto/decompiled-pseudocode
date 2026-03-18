/*
 * XREFs of PsChargeProcessPoolQuota @ 0x14011B6C0
 * Callers:
 *     PsChargePoolQuota @ 0x14011B6A0 (PsChargePoolQuota.c)
 *     FsRtlCancelNotify @ 0x14011B700 (FsRtlCancelNotify.c)
 * Callees:
 *     PspChargeQuota @ 0x14003AB00 (PspChargeQuota.c)
 */

NTSTATUS __stdcall PsChargeProcessPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process == PsInitialSystemProcess )
    return 0;
  else
    return PspChargeQuota(Process[1].ActiveProcessors.Bitmap[3], (__int64)Process, PoolType == PagedPool, Amount);
}
