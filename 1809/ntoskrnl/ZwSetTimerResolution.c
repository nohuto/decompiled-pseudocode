/*
 * XREFs of ZwSetTimerResolution @ 0x1401BB6B0
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14013F858 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetTimerResolution(ULONG RequestedResolution, BOOLEAN SetOrUnset, PULONG ActualResolution)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&RequestedResolution, SetOrUnset, ActualResolution);
}
