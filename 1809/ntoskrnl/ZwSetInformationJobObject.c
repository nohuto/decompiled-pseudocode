/*
 * XREFs of ZwSetInformationJobObject @ 0x1401BB370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle, *(_QWORD *)&JobInformationClass, JobInformation);
}
