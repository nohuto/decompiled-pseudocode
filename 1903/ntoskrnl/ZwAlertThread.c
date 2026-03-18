/*
 * XREFs of ZwAlertThread @ 0x1401C0E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAlertThread(HANDLE ThreadHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, v1, v2);
}
