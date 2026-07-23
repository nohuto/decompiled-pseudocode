/*
 * XREFs of ZwGetContextThread @ 0x1401BA070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT Context)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
