/*
 * XREFs of ZwSetInformationThread @ 0x1401B8490
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140106E9C (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x1406BBE6C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406BC094 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x1406C7804 (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x140712744 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140712794 (BiAcquirePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x140811AE0 (DbgkUserReportWorkRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
