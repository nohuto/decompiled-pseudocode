/*
 * XREFs of PsReturnPoolQuota @ 0x14011D060
 * Callers:
 *     ExReturnPoolQuota @ 0x14011CFDC (ExReturnPoolQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x140064D10 (PspReturnQuota.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    PspReturnQuota((char *)Process[1].ActiveProcessors.Bitmap[3], (ULONG_PTR)Process, PoolType == PagedPool, Amount);
}
