/*
 * XREFs of PopCancelDripsWatchdog @ 0x1408793A4
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x14086F268 (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeCancelTimer2 @ 0x1400FAF70 (KeCancelTimer2.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     PopDripsWatchdogStopWatchdog @ 0x14086EA4C (PopDripsWatchdogStopWatchdog.c)
 */

_QWORD *PopCancelDripsWatchdog()
{
  _QWORD *result; // rax
  struct _KTHREAD *CurrentThread; // rax

  if ( PopDirectedDripsEnableV2 )
    return PopDripsWatchdogStopWatchdog();
  if ( PopDripsWatchdog )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&stru_1404C67C8, 1u);
    KeCancelTimer2((__int64)&unk_1404C6830);
    qword_1404C6758 = 0LL;
    dword_1404C68E4 = 0;
    qword_1404C6768 = 0LL;
    qword_1404C6770 = 0LL;
    qword_1404C6778 = 0LL;
    qword_1404C6780 = 0LL;
    dword_1404C6760 = 0;
    qword_1404C6788 = 0LL;
    qword_1404C68E8 = 0LL;
    qword_1404C6790 = 0LL;
    qword_1404C6798 = 0LL;
    memset(&qword_1404C67A0, 0, 0x28uLL);
    ExReleaseResourceLite(&stru_1404C67C8);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
