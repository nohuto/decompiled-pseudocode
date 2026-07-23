/*
 * XREFs of PopFxAddRefDevice @ 0x1400FE348
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1400FE2B0 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400FEA88 (PopFxIdleWorkerTail.c)
 *     PopFxQueueWorkOrder @ 0x140100530 (PopFxQueueWorkOrder.c)
 *     PopFxActivateDevice @ 0x14015A1A8 (PopFxActivateDevice.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x1402D76D4 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402D77C0 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1402D8A5C (PopFxIssueDirectedPowerTransition.c)
 *     PopFxRegisterDeviceWorker @ 0x140725C58 (PopFxRegisterDeviceWorker.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x14086A6E0 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400FE390 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(struct _IO_REMOVE_LOCK *BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx(BugCheckParameter2 + 7, 0LL, &File, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, (ULONG_PTR)BugCheckParameter2, result, 0LL);
  return result;
}
