/*
 * XREFs of ZwResumeThread @ 0x1401C1690
 * Callers:
 *     DbgkUserReportWorkRoutine @ 0x1408498A0 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x1409FD234 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwResumeThread(HANDLE ThreadHandle, PULONG SuspendCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
