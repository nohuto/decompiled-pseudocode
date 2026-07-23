/*
 * XREFs of ZwQueueApcThread @ 0x1401B8B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueueApcThread(
        HANDLE ThreadHandle,
        PKNORMAL_ROUTINE ApcRoutine,
        PVOID NormalContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
