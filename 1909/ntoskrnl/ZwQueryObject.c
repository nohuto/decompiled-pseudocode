/*
 * XREFs of ZwQueryObject @ 0x1401C0E50
 * Callers:
 *     CmpNameFromAttributes @ 0x14063D5C0 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x14068C204 (CmpAddToHiveFileList.c)
 *     _RegRtlQueryKeyPathName @ 0x14078AAF8 (_RegRtlQueryKeyPathName.c)
 *     CmpCmdRenameHive @ 0x1408339C0 (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x1408FB67C (EtwpObjectTypeRundown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
