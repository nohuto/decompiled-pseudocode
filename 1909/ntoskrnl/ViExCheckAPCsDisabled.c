/*
 * XREFs of ViExCheckAPCsDisabled @ 0x140981FDC
 * Callers:
 *     VerifierExAcquireFastMutexUnsafeNoReboot @ 0x140981A30 (VerifierExAcquireFastMutexUnsafeNoReboot.c)
 *     VerifierExReleaseFastMutexUnsafe @ 0x140981B40 (VerifierExReleaseFastMutexUnsafe.c)
 *     VerifierExReleaseFastMutexUnsafeNoReboot @ 0x140981BA0 (VerifierExReleaseFastMutexUnsafeNoReboot.c)
 *     VerifierExfAcquirePushLockExclusive @ 0x140981C60 (VerifierExfAcquirePushLockExclusive.c)
 *     VerifierExfAcquirePushLockShared @ 0x140981CA0 (VerifierExfAcquirePushLockShared.c)
 *     VerifierExfReleasePushLock @ 0x140981CE0 (VerifierExfReleasePushLock.c)
 *     VerifierExfReleasePushLockShared @ 0x140981D20 (VerifierExfReleasePushLockShared.c)
 *     VerifierExfTryAcquirePushLockShared @ 0x140981D60 (VerifierExfTryAcquirePushLockShared.c)
 *     VerifierExfTryToWakePushLock @ 0x140981DA0 (VerifierExfTryToWakePushLock.c)
 *     ViExReleaseFastMutexCommon @ 0x140982048 (ViExReleaseFastMutexCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int8 __fastcall ViExCheckAPCsDisabled(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1
    && (KeGetCurrentThread()->MiscFlags & 0x400) == 0
    && !KeGetCurrentThread()->WaitBlock[3].SpareLong )
  {
    VerifierBugCheckIfAppropriate(
      0xC4u,
      (unsigned int)BugCheckParameter1,
      CurrentIrql,
      KeGetCurrentThread()->CombinedApcDisable,
      a2);
  }
  return CurrentIrql;
}
