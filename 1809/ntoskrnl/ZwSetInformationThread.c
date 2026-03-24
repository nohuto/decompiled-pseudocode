/*
 * XREFs of ZwSetInformationThread @ 0x1401B8330
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140106E1C (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x1406BABCC (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406BADF4 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x1406C6564 (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x1407114A4 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407114F4 (BiAcquirePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x1408108E0 (DbgkUserReportWorkRoutine.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, *(_QWORD *)&ThreadInformationClass, ThreadInformation);
}
