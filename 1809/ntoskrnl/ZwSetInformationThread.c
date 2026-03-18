/*
 * XREFs of ZwSetInformationThread @ 0x1401B8310
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140106DFC (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x1406BABEC (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406BAE14 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x1406C6584 (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x1407114C4 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140711514 (BiAcquirePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x140810900 (DbgkUserReportWorkRoutine.c)
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
