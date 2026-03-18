/*
 * XREFs of PopReleaseTransitionLock @ 0x14074923C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14059D8E0 (PopUnlockAfterSleepWorker.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 *     PopNotifyPolicyDevice @ 0x14074DFC0 (PopNotifyPolicyDevice.c)
 *     PoInitHiberServices @ 0x140759AFC (PoInitHiberServices.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x1408A4384 (PopDirectedDripsReleaseTransitionLock.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x140749280 (PopDirectedDripsNotify.c)
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
