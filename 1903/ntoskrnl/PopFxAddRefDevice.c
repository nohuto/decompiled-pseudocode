/*
 * XREFs of PopFxAddRefDevice @ 0x1400B0B54
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1400B0ABC (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400B1298 (PopFxIdleWorkerTail.c)
 *     PopFxQueueWorkOrder @ 0x1400B2F60 (PopFxQueueWorkOrder.c)
 *     PopFxActivateDevice @ 0x140145954 (PopFxActivateDevice.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x1402F2074 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402F22EC (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1402F3D28 (PopFxIssueDirectedPowerTransition.c)
 *     PopFxRegisterDeviceWorker @ 0x14076F460 (PopFxRegisterDeviceWorker.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1408A5950 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400B0BA0 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x1402F2050 (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 232), 0LL, &Src, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
