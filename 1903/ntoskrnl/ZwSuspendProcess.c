/*
 * XREFs of ZwSuspendProcess @ 0x1401C3770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSuspendProcess(HANDLE ProcessHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, v1, v2);
}
