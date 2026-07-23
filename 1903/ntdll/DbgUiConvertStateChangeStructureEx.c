/*
 * XREFs of DbgUiConvertStateChangeStructureEx @ 0x1800CCED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiConvertStateChangeStructureEx(PDBGUI_WAIT_STATE_CHANGE StateChange, LPDEBUG_EVENT DebugEvent)
{
  char v2; // r8

  v2 = 1;
  return sub_1800CCEE0(StateChange, DebugEvent, v2);
}
