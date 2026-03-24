/*
 * XREFs of ZwResumeThread @ 0x1401B8BD0
 * Callers:
 *     DbgkUserReportWorkRoutine @ 0x1408108E0 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x1409C5CC0 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwResumeThread(HANDLE ThreadHandle, PULONG SuspendCount)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, SuspendCount, v2);
}
