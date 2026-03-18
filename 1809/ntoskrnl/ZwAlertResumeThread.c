/*
 * XREFs of ZwAlertResumeThread @ 0x1401B8F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAlertResumeThread(HANDLE ThreadHandle, PULONG SuspendCount)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, SuspendCount, v2);
}
