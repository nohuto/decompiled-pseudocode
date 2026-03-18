/*
 * XREFs of FsRtlUninitializeLargeMcb @ 0x140138540
 * Callers:
 *     FsRtlUninitializeMcb @ 0x14084E180 (FsRtlUninitializeMcb.c)
 * Callees:
 *     FsRtlUninitializeBaseMcb @ 0x140084460 (FsRtlUninitializeBaseMcb.c)
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
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
