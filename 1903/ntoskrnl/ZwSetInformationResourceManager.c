/*
 * XREFs of ZwSetInformationResourceManager @ 0x1401C3330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationResourceManager(
        HANDLE ResourceManagerHandle,
        RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
        PVOID ResourceManagerInformation,
        ULONG ResourceManagerInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(
           ResourceManagerHandle,
           *(_QWORD *)&ResourceManagerInformationClass,
           ResourceManagerInformation);
}
