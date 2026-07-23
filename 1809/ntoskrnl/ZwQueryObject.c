/*
 * XREFs of ZwQueryObject @ 0x1401B84F0
 * Callers:
 *     CmpNameFromAttributes @ 0x1405B8860 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x1406CE220 (CmpAddToHiveFileList.c)
 *     _RegRtlQueryKeyPathName @ 0x140762A2C (_RegRtlQueryKeyPathName.c)
 *     CmpCmdRenameHive @ 0x1407FC1A0 (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x1408C019C (EtwpObjectTypeRundown.c)
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
