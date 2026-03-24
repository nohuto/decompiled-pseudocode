/*
 * XREFs of ZwTerminateJobObject @ 0x1401BB890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTerminateJobObject(HANDLE JobHandle, NTSTATUS ExitStatus)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle, *(_QWORD *)&ExitStatus, v2);
}
