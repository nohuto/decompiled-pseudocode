/*
 * XREFs of FsRtlUninitializeBaseMcb @ 0x140111190
 * Callers:
 *     FsRtlUninitializeLargeMcb @ 0x140111150 (FsRtlUninitializeLargeMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400922D8 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeBaseMcb(PBASE_MCB Mcb)
{
  if ( Mcb->PoolType == 1 && Mcb->MaximumPairCount == 15 )
    ExFreeToNPagedLookasideList(&FsRtlFirstMappingLookasideList, Mcb->Mapping);
  else
    ExFreePoolWithTag(Mcb->Mapping, 0);
}
