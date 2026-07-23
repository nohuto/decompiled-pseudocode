/*
 * XREFs of ZwDebugContinue @ 0x1401C2590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDebugContinue(HANDLE DebugObject, PCLIENT_ID AppClientId, NTSTATUS ContinueStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DebugObject);
}
