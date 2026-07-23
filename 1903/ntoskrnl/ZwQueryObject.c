/*
 * XREFs of ZwQueryObject @ 0x1401C02D0
 * Callers:
 *     CmpNameFromAttributes @ 0x14063A530 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x1406EC454 (CmpAddToHiveFileList.c)
 *     _RegRtlQueryKeyPathName @ 0x140788698 (_RegRtlQueryKeyPathName.c)
 *     CmpCmdRenameHive @ 0x140834360 (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x1408FBC9C (EtwpObjectTypeRundown.c)
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
