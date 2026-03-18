/*
 * XREFs of ZwSetContextThread @ 0x1401BB1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetContextThread(HANDLE ThreadHandle, PCONTEXT Context)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, Context, v2);
}
