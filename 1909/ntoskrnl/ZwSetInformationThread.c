/*
 * XREFs of ZwSetInformationThread @ 0x1401C0DF0
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1400835A4 (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x1406DD5F4 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406DD81C (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x1406E817C (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x14074126C (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407412BC (BiAcquirePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x1408498A0 (DbgkUserReportWorkRoutine.c)
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
