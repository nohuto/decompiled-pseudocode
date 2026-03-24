/*
 * XREFs of PsReturnPoolQuota @ 0x14011F3C0
 * Callers:
 *     ExReturnPoolQuota @ 0x14011F328 (ExReturnPoolQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x1400BE9D0 (PspReturnQuota.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    PspReturnQuota((char *)Process[1].ActiveProcessors.Bitmap[4], (ULONG_PTR)Process, PoolType == PagedPool, Amount);
}
