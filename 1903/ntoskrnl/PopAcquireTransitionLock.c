/*
 * XREFs of PopAcquireTransitionLock @ 0x1407472E0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 *     PoInitHiberServices @ 0x14074B26C (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x14074D530 (PopNotifyPolicyDevice.c)
 *     PopDirectedDripsSuspendDevices @ 0x1408A4C58 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     PopDirectedDripsNotify @ 0x140747380 (PopDirectedDripsNotify.c)
 */

int __fastcall PopAcquireTransitionLock(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 != 7 )
    PopDirectedDripsNotify(8LL, 0LL);
  LODWORD(CurrentThread) = KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
  PopTransitionLockAcquireReason = a1;
  if ( a1 != 1 )
  {
    CurrentThread = KeGetCurrentThread();
    PopTransitionLockOwnerThread = (__int64)CurrentThread;
  }
  return (int)CurrentThread;
}
