/*
 * XREFs of PsReturnPoolQuota @ 0x14011CB40
 * Callers:
 *     ExReturnPoolQuota @ 0x14011CABC (ExReturnPoolQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x140064C70 (PspReturnQuota.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    PspReturnQuota((char *)Process[1].ActiveProcessors.Bitmap[3], (ULONG_PTR)Process, PoolType == PagedPool, Amount);
}
