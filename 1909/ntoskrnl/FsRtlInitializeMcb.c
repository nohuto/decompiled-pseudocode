/*
 * XREFs of FsRtlInitializeMcb @ 0x14084E160
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlInitializeLargeMcb @ 0x1400EE670 (FsRtlInitializeLargeMcb.c)
 */

void __stdcall FsRtlInitializeMcb(PMCB Mcb, POOL_TYPE PoolType)
{
  FsRtlInitializeLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly, PoolType);
}
