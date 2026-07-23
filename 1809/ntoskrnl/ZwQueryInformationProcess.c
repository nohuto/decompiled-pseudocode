/*
 * XREFs of ZwQueryInformationProcess @ 0x1401B8610
 * Callers:
 *     BiLogFileOwnerProcess @ 0x1403275E0 (BiLogFileOwnerProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
