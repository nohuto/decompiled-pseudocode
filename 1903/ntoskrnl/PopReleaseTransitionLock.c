/*
 * XREFs of PopReleaseTransitionLock @ 0x14074733C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14059BC20 (PopUnlockAfterSleepWorker.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 *     PoInitHiberServices @ 0x14074B26C (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x14074D530 (PopNotifyPolicyDevice.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x1408A4B44 (PopDirectedDripsReleaseTransitionLock.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x140747380 (PopDirectedDripsNotify.c)
 */

LONG __fastcall PopReleaseTransitionLock(int a1)
{
  LONG result; // eax

  PopTransitionLockOwnerThread = 0LL;
  PopTransitionLockAcquireReason = 0;
  result = KeSetEvent(&PopTransitionLock, 0, 0);
  if ( a1 != 7 )
    return PopDirectedDripsNotify(9LL, 0LL);
  return result;
}
