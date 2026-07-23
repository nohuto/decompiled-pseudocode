/*
 * XREFs of ZwSetInformationThread @ 0x1401C0270
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1400831A4 (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x1406DC974 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406DCB9C (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x1406E707C (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x14073F36C (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14073F3BC (BiAcquirePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x14084A1A0 (DbgkUserReportWorkRoutine.c)
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
