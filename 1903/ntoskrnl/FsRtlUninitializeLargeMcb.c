/*
 * XREFs of FsRtlUninitializeLargeMcb @ 0x140137EF0
 * Callers:
 *     FsRtlUninitializeMcb @ 0x14084EA80 (FsRtlUninitializeMcb.c)
 * Callees:
 *     FsRtlUninitializeBaseMcb @ 0x140084060 (FsRtlUninitializeBaseMcb.c)
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 */

void __stdcall FsRtlUninitializeLargeMcb(PLARGE_MCB Mcb)
{
  if ( Mcb->GuardedMutex )
  {
    ExFreeToNPagedLookasideList(&FsRtlFastMutexLookasideList, Mcb->GuardedMutex);
    Mcb->GuardedMutex = 0LL;
    FsRtlUninitializeBaseMcb(&Mcb->BaseMcb);
  }
}
