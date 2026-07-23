/*
 * XREFs of ZwSetInformationJobObject @ 0x1401C3E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
