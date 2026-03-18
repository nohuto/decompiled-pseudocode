/*
 * XREFs of FsRtlInitializeMcb @ 0x140814FE0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlInitializeLargeMcb @ 0x1401333B0 (FsRtlInitializeLargeMcb.c)
 */

void __stdcall FsRtlInitializeMcb(PMCB Mcb, POOL_TYPE PoolType)
{
  FsRtlInitializeLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly, PoolType);
}
