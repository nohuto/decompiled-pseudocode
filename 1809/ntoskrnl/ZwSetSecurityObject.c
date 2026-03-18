/*
 * XREFs of ZwSetSecurityObject @ 0x1401BB570
 * Callers:
 *     BiZwSetSecurityObject @ 0x14016E5BC (BiZwSetSecurityObject.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x1401B2E38 (CmpApplyAdminSdOnHiveFiles.c)
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x1405818F0 (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F2CF4 (PiDevCfgCopyDeviceKey.c)
 *     MiCreatePagingFile @ 0x14074BFD8 (MiCreatePagingFile.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140807554 (CmpDoReDoSetSecurityDescriptor.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083D808 (PiDrvDbOverlayCopyKeys.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408ADAFC (SmKmStoreFileCreateForIoType.c)
 *     _RegRtlCopyTreeInternal @ 0x140900520 (_RegRtlCopyTreeInternal.c)
 *     IopApplySystemPartitionProt @ 0x1409F4F30 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&SecurityInformation, SecurityDescriptor);
}
