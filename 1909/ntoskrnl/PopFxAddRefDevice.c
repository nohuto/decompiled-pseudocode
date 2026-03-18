/*
 * XREFs of PopFxAddRefDevice @ 0x1400E0C44
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1400E0BAC (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400E1388 (PopFxIdleWorkerTail.c)
 *     PopFxQueueWorkOrder @ 0x1400E3AA8 (PopFxQueueWorkOrder.c)
 *     PopFxActivateDevice @ 0x140145FF4 (PopFxActivateDevice.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x1402F1DD4 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402F204C (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1402F3A80 (PopFxIssueDirectedPowerTransition.c)
 *     PopFxRegisterDeviceWorker @ 0x1407722C0 (PopFxRegisterDeviceWorker.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1408A51B0 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400E0C90 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 232), 0LL, &Src, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
