/*
 * XREFs of FsRtlTruncateLargeMcb @ 0x14010B530
 * Callers:
 *     FsRtlTruncateMcb @ 0x140282700 (FsRtlTruncateMcb.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     FsRtlTruncateBaseMcb @ 0x14010B570 (FsRtlTruncateBaseMcb.c)
 */

void __stdcall FsRtlTruncateLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlTruncateBaseMcb(&Mcb->BaseMcb, Vbn);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
}
