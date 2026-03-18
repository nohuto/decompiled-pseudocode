/*
 * XREFs of PsChargeProcessPoolQuota @ 0x140119AF0
 * Callers:
 *     PsChargePoolQuota @ 0x140119AD0 (PsChargePoolQuota.c)
 *     FsRtlCancelNotify @ 0x140119B30 (FsRtlCancelNotify.c)
 * Callees:
 *     PspChargeQuota @ 0x14003A840 (PspChargeQuota.c)
 */

NTSTATUS __stdcall PsChargeProcessPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process == PsInitialSystemProcess )
    return 0;
  else
    return PspChargeQuota(Process[1].ActiveProcessors.Bitmap[3], (__int64)Process, PoolType == PagedPool, Amount);
}
