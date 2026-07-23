/*
 * XREFs of DbgUiConvertStateChangeStructure @ 0x1800CCF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiConvertStateChangeStructure(PDBGUI_WAIT_STATE_CHANGE StateChange, LPDEBUG_EVENT DebugEvent)
{
  return DbgUiConvertStateChangeStructureWorker(StateChange, DebugEvent, 0LL);
}
