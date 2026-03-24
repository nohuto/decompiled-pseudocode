/*
 * XREFs of PopAcquireTransitionLock @ 0x14071E6A8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x140740E10 (PopNotifyPolicyDevice.c)
 *     PoInitHiberServices @ 0x140745C90 (PoInitHiberServices.c)
 *     PopDirectedDripsNotifyDrivers @ 0x140868158 (PopDirectedDripsNotifyDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PopDirectedDripsNotify @ 0x14071E748 (PopDirectedDripsNotify.c)
 */

int __fastcall PopAcquireTransitionLock(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 != 7 )
    PopDirectedDripsNotify(13LL, 0LL);
  LODWORD(CurrentThread) = KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
  PopTransitionLockAcquireReason = a1;
  if ( a1 != 1 )
  {
    CurrentThread = KeGetCurrentThread();
    PopTransitionLockOwnerThread = (__int64)CurrentThread;
  }
  return (int)CurrentThread;
}
