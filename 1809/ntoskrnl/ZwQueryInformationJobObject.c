/*
 * XREFs of ZwQueryInformationJobObject @ 0x1401BA9D0
 * Callers:
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle, *(_QWORD *)&JobInformationClass, JobInformation);
}
