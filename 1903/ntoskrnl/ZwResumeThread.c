/*
 * XREFs of ZwResumeThread @ 0x1401C0B10
 * Callers:
 *     DbgkUserReportWorkRoutine @ 0x14084A1A0 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x1409FCD18 (StartFirstUserProcess.c)
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
