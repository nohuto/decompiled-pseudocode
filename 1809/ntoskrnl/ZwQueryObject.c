/*
 * XREFs of ZwQueryObject @ 0x1401B8370
 * Callers:
 *     CmpNameFromAttributes @ 0x1405B7860 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x1406CCFA0 (CmpAddToHiveFileList.c)
 *     _RegRtlQueryKeyPathName @ 0x14076185C (_RegRtlQueryKeyPathName.c)
 *     CmpCmdRenameHive @ 0x1407FAFC0 (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x1408BEEFC (EtwpObjectTypeRundown.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&ObjectInformationClass, ObjectInformation);
}
