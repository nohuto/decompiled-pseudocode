/*
 * XREFs of DbgUiWaitStateChange @ 0x1800CD320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiWaitStateChange(PDBGUI_WAIT_STATE_CHANGE StateChange, PLARGE_INTEGER Timeout)
{
  return ZwWaitForDebugEvent(NtCurrentTeb()->DbgSsReserved[1], 1u, Timeout, StateChange);
}
