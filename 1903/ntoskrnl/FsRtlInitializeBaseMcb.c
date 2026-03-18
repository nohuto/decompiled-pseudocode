/*
 * XREFs of FsRtlInitializeBaseMcb @ 0x14008D4F0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlInitializeBaseMcbEx @ 0x14008D510 (FsRtlInitializeBaseMcbEx.c)
 */

void __stdcall FsRtlInitializeBaseMcb(PBASE_MCB Mcb, POOL_TYPE PoolType)
{
  FsRtlInitializeBaseMcbEx(Mcb, PoolType, 1u);
}
