/*
 * XREFs of PopFxAddRefDevice @ 0x1400FE2C8
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1400FE230 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400FEA08 (PopFxIdleWorkerTail.c)
 *     PopFxQueueWorkOrder @ 0x1401004B0 (PopFxQueueWorkOrder.c)
 *     PopFxActivateDevice @ 0x14015A0A8 (PopFxActivateDevice.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x1402D74E4 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402D75D0 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1402D886C (PopFxIssueDirectedPowerTransition.c)
 *     PopFxRegisterDeviceWorker @ 0x1407249B8 (PopFxRegisterDeviceWorker.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140869480 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400FE310 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x1402D74C0 (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(struct _IO_REMOVE_LOCK *BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx(BugCheckParameter2 + 7, 0LL, &File, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, (ULONG_PTR)BugCheckParameter2, result, 0LL);
  return result;
}
