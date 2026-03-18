/*
 * XREFs of FsRtlUninitializeBaseMcb @ 0x140084060
 * Callers:
 *     FsRtlUninitializeLargeMcb @ 0x140137EF0 (FsRtlUninitializeLargeMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeBaseMcb(PBASE_MCB Mcb)
{
  if ( Mcb->PoolType == 1 && Mcb->MaximumPairCount == 15 )
    ExFreeToNPagedLookasideList(&FsRtlFirstMappingLookasideList, Mcb->Mapping);
  else
    ExFreePoolWithTag(Mcb->Mapping, 0);
}
