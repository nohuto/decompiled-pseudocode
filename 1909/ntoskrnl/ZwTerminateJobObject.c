/*
 * XREFs of ZwTerminateJobObject @ 0x1401C4370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateJobObject(HANDLE JobHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
