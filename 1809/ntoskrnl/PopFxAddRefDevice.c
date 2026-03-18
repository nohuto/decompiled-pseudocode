/*
 * XREFs of PopFxAddRefDevice @ 0x1400FE2A8
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1400FE210 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400FE9E8 (PopFxIdleWorkerTail.c)
 *     PopFxQueueWorkOrder @ 0x140100490 (PopFxQueueWorkOrder.c)
 *     PopFxActivateDevice @ 0x14015A088 (PopFxActivateDevice.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x1402D73E4 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402D74D0 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1402D876C (PopFxIssueDirectedPowerTransition.c)
 *     PopFxRegisterDeviceWorker @ 0x1407249D8 (PopFxRegisterDeviceWorker.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1408694A0 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400FE2F0 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x1402D73C0 (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(struct _IO_REMOVE_LOCK *BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx(BugCheckParameter2 + 7, 0LL, &File, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, (ULONG_PTR)BugCheckParameter2, result, 0LL);
  return result;
}
