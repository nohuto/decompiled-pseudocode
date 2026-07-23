/*
 * XREFs of PopCancelDripsWatchdog @ 0x14087A604
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408704C8 (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeCancelTimer2 @ 0x1400FAFF0 (KeCancelTimer2.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopDripsWatchdogStopWatchdog @ 0x14086FCAC (PopDripsWatchdogStopWatchdog.c)
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
    ExAcquireResourceExclusiveLite(&stru_1404C7888, 1u);
    KeCancelTimer2((__int64)&unk_1404C78F0);
    qword_1404C7818 = 0LL;
    dword_1404C79A4 = 0;
    qword_1404C7828 = 0LL;
    qword_1404C7830 = 0LL;
    qword_1404C7838 = 0LL;
    qword_1404C7840 = 0LL;
    dword_1404C7820 = 0;
    qword_1404C7848 = 0LL;
    qword_1404C79A8 = 0LL;
    qword_1404C7850 = 0LL;
    qword_1404C7858 = 0LL;
    memset(&qword_1404C7860, 0, 0x28uLL);
    ExReleaseResourceLite(&stru_1404C7888);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
