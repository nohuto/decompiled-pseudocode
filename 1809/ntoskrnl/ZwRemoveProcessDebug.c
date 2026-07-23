/*
 * XREFs of ZwRemoveProcessDebug @ 0x1401BB030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRemoveProcessDebug(HANDLE Process, HANDLE DebugObject)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Process);
}
