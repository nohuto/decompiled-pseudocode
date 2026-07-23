/*
 * XREFs of ZwSetThreadExecutionState @ 0x1401BB7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetThreadExecutionState(EXECUTION_STATE esFlags, EXECUTION_STATE *PreviousFlags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&esFlags);
}
